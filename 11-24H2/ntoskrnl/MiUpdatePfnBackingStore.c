/*
 * XREFs of MiUpdatePfnBackingStore @ 0x1402FD13C
 * Callers:
 *     MiGatherPagefilePages @ 0x1402F9BC8 (MiGatherPagefilePages.c)
 *     MiStoreWriteModifiedPages @ 0x1402FB3F4 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     MiMakePageFilePte @ 0x140215C78 (MiMakePageFilePte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiSwizzleInvalidPte @ 0x1402FD620 (MiSwizzleInvalidPte.c)
 */

bool __fastcall MiUpdatePfnBackingStore(__int64 a1, __int64 a2, unsigned int a3)
{
  __int16 v3; // bx
  __int64 v5; // rsi
  __int64 v6; // rax
  char v8; // r14
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  bool result; // al
  __int64 PageFilePte; // rax
  __int64 v13; // r9
  __int64 v14; // r8
  unsigned __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  v5 = a3;
  v6 = *(_QWORD *)(a1 + 16) >> 1;
  v15 = *(_QWORD *)(a1 + 16);
  v3 = v15;
  v8 = 2 * (v6 & 1) + 1;
  v9 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v15);
  v15 = v9 & ((-(__int64)((v9 & 0x400) != 0) & 0xFFFFFFFFFFFFF808uLL) - 9);
  v10 = v15;
  result = (v3 & 0x400) == 0LL;
  if ( (v8 & 4) == 0 && result )
  {
    v10 = v15 & 0xFFFFFFFFFFFFFFF9uLL;
    v15 &= 0xFFFFFFFFFFFFFFF9uLL;
  }
  if ( a2 )
  {
    if ( v10 )
    {
      if ( qword_140E2DCC0 )
      {
        if ( (v10 & 0x10) != 0 )
          v10 &= ~0x10uLL;
        else
          v10 &= ~qword_140E2DCC0;
      }
      PageFilePte = MiSwizzleInvalidPte((unsigned int)v10 | (unsigned __int64)(v5 << 32), v10);
    }
    else
    {
      PageFilePte = MiMakePageFilePte(v5);
    }
    v14 = PageFilePte;
    result = 0;
    v10 = (v13 << 12) ^ (v14 ^ (v13 << 12)) & 0xFFFFFFFFFFFF0FFFuLL | 4;
    v15 = v10;
    if ( (v8 & 2) != 0 )
    {
      v10 = (v13 << 12) ^ (v14 ^ (v13 << 12)) & 0xFFFFFFFFFFFF0FFFuLL | 6;
      v15 = v10;
    }
  }
  *(_QWORD *)(a1 + 16) = v10;
  return result;
}
