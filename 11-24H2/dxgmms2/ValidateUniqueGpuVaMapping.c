/*
 * XREFs of ValidateUniqueGpuVaMapping @ 0x14009B80C
 * Callers:
 *     ?AddVaRangeToVadRangeListWithFix@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x140099824 (-AddVaRangeToVadRangeListWithFix@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED.c)
 * Callees:
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAUVIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x140036F30 (-GetVidMmGlobalAllocFromOwner@@YAPEAUVIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 */

char __fastcall ValidateUniqueGpuVaMapping(__int64 a1)
{
  _QWORD *VidMmGlobalAllocFromOwner; // rax
  _QWORD *v2; // r8
  unsigned __int64 v3; // rcx
  _QWORD *v4; // r13
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // r14
  _QWORD *v7; // rdx
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // r9
  bool v13; // di
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  char result; // al
  unsigned __int64 v17; // r9
  bool v18; // cl

  VidMmGlobalAllocFromOwner = GetVidMmGlobalAllocFromOwner(*(_DWORD *)(a1 + 72) & 0xF, *(_QWORD **)(a1 + 64));
  if ( VidMmGlobalAllocFromOwner )
  {
    v3 = v2[10];
    v4 = VidMmGlobalAllocFromOwner + 12;
    v5 = v2[14];
    v6 = v2[13];
    v7 = (_QWORD *)VidMmGlobalAllocFromOwner[12];
    v8 = v3 + v5 - v6;
    if ( v7 != VidMmGlobalAllocFromOwner + 12 )
    {
      while ( 1 )
      {
        v9 = v7[4];
        v10 = v7[8];
        v11 = v7[7];
        v12 = v9 + v10 - v11;
        if ( v8 <= v9 )
          return 1;
        if ( v3 < v12 && (v2[11] & 0x7FFFFFFFFFFFFFFFLL) != (v7[5] & 0x7FFFFFFFFFFFFFFFLL) )
        {
          v13 = 1;
          if ( *v2 == *(v7 - 6) && (v6 > v11 || v5 < v10) )
            break;
        }
LABEL_24:
        v7 = (_QWORD *)*v7;
        if ( v7 == v4 )
          return 1;
      }
      v14 = 0LL;
      v15 = 0LL;
      if ( v6 > v11 && v6 < v10 )
        v14 = v6 - v11;
      if ( v5 < v10 && v5 > v11 )
        v15 = v10 - v5;
      if ( v14 )
      {
        v13 = v2[10] >= v9 + v14;
        if ( !v15 )
        {
LABEL_22:
          if ( !v13 )
          {
LABEL_17:
            WdLogSingleEntry4(3LL, v11, v10);
            result = 0;
            WdLogGlobalForLineNumber = 513;
            return result;
          }
          v3 = v2[10];
          goto LABEL_24;
        }
      }
      else if ( !v15 )
      {
        goto LABEL_17;
      }
      v17 = v12 - v15;
      v18 = 0;
      if ( v8 <= v17 )
        v18 = v13;
      v13 = v18;
      goto LABEL_22;
    }
  }
  return 1;
}
