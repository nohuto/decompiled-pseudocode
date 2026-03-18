/*
 * XREFs of MiInitializePrototypePtes @ 0x140946874
 * Callers:
 *     MiCreatePrototypePtes @ 0x140261F58 (MiCreatePrototypePtes.c)
 *     MiCreatePagingFileMap @ 0x140942908 (MiCreatePagingFileMap.c)
 *     MiExtendSection @ 0x1409463BC (MiExtendSection.c)
 * Callees:
 *     MmAccessFault @ 0x140216750 (MmAccessFault.c)
 *     MiMakeSubsectionPte @ 0x14022929C (MiMakeSubsectionPte.c)
 *     MiEncodeProtoFill @ 0x1402C6470 (MiEncodeProtoFill.c)
 *     MiMakeDemandZeroPte @ 0x1402E3CC0 (MiMakeDemandZeroPte.c)
 *     MiInitializeFaultVaListCore @ 0x140437C20 (MiInitializeFaultVaListCore.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall MiInitializePrototypePtes(ULONG_PTR BugCheckParameter1, unsigned __int64 a2, _DWORD *a3, int a4)
{
  __int64 result; // rax
  __int64 v9; // rdi
  unsigned int v10; // r11d
  __int64 v11; // r8
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rax
  __int64 v14; // r10
  __int64 v15; // r8
  ULONG_PTR v16; // r11
  _QWORD v17[2]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v18[40]; // [rsp+30h] [rbp-88h] BYREF
  int v19; // [rsp+58h] [rbp-60h]

  result = (__int64)memset_0(v18, 0, 0x78uLL);
  v9 = *(_QWORD *)a3;
  LOBYTE(v10) = 2;
  if ( *(_QWORD *)(*(_QWORD *)a3 + 64LL) )
  {
    result = MiMakeSubsectionPte((__int64)a3);
    v11 = v10;
LABEL_5:
    v12 = result;
    goto LABEL_6;
  }
  if ( (*(_DWORD *)(v9 + 56) & 0x1000) == 0 )
  {
    result = MiMakeDemandZeroPte((a3[8] >> 1) & 0x1F);
    v11 = 1026LL;
    goto LABEL_5;
  }
  v12 = 0LL;
  v11 = 1026LL;
LABEL_6:
  if ( a2 >= 0x200 )
  {
    if ( !a4 )
    {
      v17[0] = BugCheckParameter1;
      v17[1] = 8 * a2;
      MiInitializeFaultVaListCore((__int64)v18, (__int64)v17, 1LL, v10);
      v19 = (*(_DWORD *)(v14 + v9) >> 20) & 0x7F;
      MmAccessFault(v16, BugCheckParameter1, 0, v15 | (unsigned __int64)v18);
      goto LABEL_8;
    }
    v13 = v12;
    if ( !v12 )
      v13 = MiMakeDemandZeroPte(4) & 0xFFFFFFFFFFFFFC1FuLL;
    result = MiEncodeProtoFill(BugCheckParameter1, a2, v13 | v11);
    a2 -= result;
    BugCheckParameter1 += 8 * result;
  }
  if ( a2 )
  {
LABEL_8:
    result = v12;
    memset64((void *)BugCheckParameter1, v12, a2 & 0x1FFFFFFFFFFFFFFFLL);
  }
  return result;
}
