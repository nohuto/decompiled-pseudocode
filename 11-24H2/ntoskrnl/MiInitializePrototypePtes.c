/*
 * XREFs of MiInitializePrototypePtes @ 0x140989EA4
 * Callers:
 *     MiCreatePrototypePtes @ 0x1402751A4 (MiCreatePrototypePtes.c)
 *     MiExtendSection @ 0x14098A4D8 (MiExtendSection.c)
 *     MiCreatePagingFileMap @ 0x14098CB78 (MiCreatePagingFileMap.c)
 * Callees:
 *     MmAccessFault @ 0x140243610 (MmAccessFault.c)
 *     MiEncodeProtoFill @ 0x140269858 (MiEncodeProtoFill.c)
 *     MiMakeSubsectionPte @ 0x1402FC49C (MiMakeSubsectionPte.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 *     MiInitializeFaultVaListCore @ 0x14042A6A0 (MiInitializeFaultVaListCore.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiInitializePrototypePtes(ULONG_PTR BugCheckParameter1, unsigned __int64 a2, _DWORD *a3, int a4)
{
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v11; // rdi
  unsigned int v12; // r11d
  __int64 v13; // r8
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rax
  __int64 v16; // r10
  __int64 v17; // r8
  ULONG_PTR v18; // r11
  _QWORD v19[2]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v20[40]; // [rsp+30h] [rbp-88h] BYREF
  int v21; // [rsp+58h] [rbp-60h]

  result = (__int64)memset_0(v20, 0, 0x78uLL);
  v11 = *(_QWORD *)a3;
  LOBYTE(v12) = 2;
  if ( *(_QWORD *)(*(_QWORD *)a3 + 64LL) )
  {
    result = MiMakeSubsectionPte((__int64)a3, v9);
    v13 = v12;
LABEL_5:
    v14 = result;
    goto LABEL_6;
  }
  if ( (*(_DWORD *)(v11 + 56) & 0x1000) == 0 )
  {
    result = MiMakeDemandZeroPte((a3[8] >> 1) & 0x1F);
    v13 = 1026LL;
    goto LABEL_5;
  }
  v14 = 0LL;
  v13 = 1026LL;
LABEL_6:
  if ( a2 >= 0x200 )
  {
    if ( !a4 )
    {
      v19[0] = BugCheckParameter1;
      v19[1] = 8 * a2;
      MiInitializeFaultVaListCore((__int64)v20, (__int64)v19, 1LL, v12);
      v21 = (*(_DWORD *)(v16 + v11) >> 20) & 0x7F;
      MmAccessFault(v18, BugCheckParameter1, 0, v17 | (unsigned __int64)v20);
      goto LABEL_8;
    }
    v15 = v14;
    if ( !v14 )
      v15 = MiMakeDemandZeroPte(4) & 0xFFFFFFFFFFFFFC1FuLL;
    result = MiEncodeProtoFill(BugCheckParameter1, a2, v15 | v13, v10);
    a2 -= result;
    BugCheckParameter1 += 8 * result;
  }
  if ( a2 )
  {
LABEL_8:
    result = v14;
    memset64((void *)BugCheckParameter1, v14, a2 & 0x1FFFFFFFFFFFFFFFLL);
  }
  return result;
}
