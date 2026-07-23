/*
 * XREFs of MxCreatePfn @ 0x140C54874
 * Callers:
 *     MxCreatePfnsForPtes @ 0x140C549C0 (MxCreatePfnsForPtes.c)
 * Callees:
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 *     MiCopyPfnEntryRaw @ 0x1404386A0 (MiCopyPfnEntryRaw.c)
 */

__int64 __fastcall MxCreatePfn(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  char v5; // r8
  __int64 v6; // r11
  char v7; // cl
  __int64 v8; // r10
  __int64 v9; // r11
  __int64 v10; // r9
  __int64 result; // rax
  __int64 v12[4]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v13; // [rsp+40h] [rbp-10h]
  __int64 v14; // [rsp+48h] [rbp-8h]
  int v15; // [rsp+60h] [rbp+10h]
  unsigned int v16; // [rsp+80h] [rbp+30h]

  v13 = 393216LL;
  v14 = a4 & 0xFFFFFFFFFFLL;
  v12[0] = 0LL;
  v12[2] = 0LL;
  v12[1] = a2;
  v12[3] = 1LL;
  MiMakeDemandZeroPte(4);
  v7 = 1;
  if ( (v5 & 0x10) != 0 )
  {
    v7 = 0;
  }
  else if ( (v5 & 8) != 0 )
  {
    v7 = 2;
  }
  v15 = v13;
  BYTE2(v15) = (v7 << 6) | BYTE2(v13) & 0x3F;
  LODWORD(v13) = v15;
  BYTE2(v13) = BYTE2(v15) | 0x10;
  MiCopyPfnEntryRaw(48 * v6 - 0x220000000000LL, v12);
  *(_QWORD *)(v8 + 16) = v10;
  *(_QWORD *)(v8 + 40) |= 0x40000000000000uLL;
  if ( a5 )
  {
    if ( v9 == (v9 & 0xFFFFFFFFFFFFFE00uLL) )
      *(_DWORD *)(v8 + 36) = *(_DWORD *)(v8 + 36) & 0xE7FFFFFF | 0x10000000;
    *(_QWORD *)(v8 + 40) |= 0x10000000000uLL;
    HIWORD(v16) = HIWORD(*(_DWORD *)(v8 + 32));
    LOWORD(v16) = 2;
  }
  else
  {
    HIWORD(v16) = HIWORD(*(_DWORD *)(v8 + 32));
    LOWORD(v16) = 1;
  }
  result = v16;
  *(_DWORD *)(v8 + 32) = v16;
  return result;
}
