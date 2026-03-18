/*
 * XREFs of KsepEngineGetShimsFromRegistry @ 0x140A5054C
 * Callers:
 *     KsepGetShimsForDriver @ 0x140A4FF48 (KsepGetShimsForDriver.c)
 * Callees:
 *     KsepLogError @ 0x14048E750 (KsepLogError.c)
 *     KsepPoolAllocatePaged @ 0x1404A0CB0 (KsepPoolAllocatePaged.c)
 *     KsepPoolFreePaged @ 0x1404A64EC (KsepPoolFreePaged.c)
 *     KsepDebugPrint @ 0x1404D3784 (KsepDebugPrint.c)
 *     KsepDbGetShimInfo @ 0x140732594 (KsepDbGetShimInfo.c)
 *     KsepStringSplitMultiString @ 0x140734248 (KsepStringSplitMultiString.c)
 *     KsepRegistryQueryDriverShims @ 0x1408292E4 (KsepRegistryQueryDriverShims.c)
 *     KsepStringDuplicate @ 0x14082AB14 (KsepStringDuplicate.c)
 *     KsepStringFree @ 0x14082BBBC (KsepStringFree.c)
 */

__int64 __fastcall KsepEngineGetShimsFromRegistry(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  _DWORD *v4; // r14
  _QWORD *v6; // rdi
  void *Paged; // rax
  void *v9; // r8
  void *v10; // r12
  int ShimInfo; // ebx
  int v13; // eax
  __int64 v14; // rdi
  _DWORD *v15; // rax
  void *v16; // rsi
  __int64 i; // rbx
  __int64 v18; // rax
  __int64 v19; // r15
  _QWORD *v20; // rax
  void *v21; // [rsp+20h] [rbp-10h] BYREF
  unsigned __int64 v22; // [rsp+28h] [rbp-8h] BYREF
  unsigned int v23; // [rsp+70h] [rbp+40h] BYREF
  _QWORD *v24; // [rsp+80h] [rbp+50h]

  v24 = a3;
  v22 = 0LL;
  v4 = 0LL;
  v21 = 0LL;
  v23 = 0;
  v6 = a3;
  if ( (*(_DWORD *)(a1 + 8) & 1) != 0 )
  {
    ShimInfo = -1073741275;
    goto LABEL_7;
  }
  Paged = KsepPoolAllocatePaged(0x800uLL);
  v10 = Paged;
  if ( !Paged )
  {
    ShimInfo = -1073741801;
    goto LABEL_7;
  }
  ShimInfo = KsepRegistryQueryDriverShims(*(_QWORD *)(a2 + 8), Paged, v9, &v22);
  if ( ShimInfo >= 0 )
  {
    v13 = KsepStringSplitMultiString((__int64)v10, v22, &v21, &v23);
    v14 = v23;
    ShimInfo = v13;
    if ( v13 >= 0 )
    {
      v15 = KsepPoolAllocatePaged(80LL * v23);
      v16 = v21;
      v4 = v15;
      if ( !v15 )
      {
        ShimInfo = -1073741801;
LABEL_20:
        if ( v16 )
        {
          if ( (_DWORD)v14 )
          {
            v19 = (__int64)v16;
            do
            {
              KsepStringFree(v19);
              v19 += 16LL;
              --v14;
            }
            while ( v14 );
          }
          KsepPoolFreePaged(v16);
        }
        v6 = v24;
        goto LABEL_4;
      }
      for ( i = 0LL; (unsigned int)i < (unsigned int)v14; i = (unsigned int)(i + 1) )
      {
        if ( (int)KsepStringDuplicate((__int64)&v4[20 * i + 4], *((_WORD **)v16 + 2 * (unsigned int)i + 1)) < 0 )
          break;
        v4[20 * i + 17] = 0;
      }
      ShimInfo = KsepDbGetShimInfo((__int64)v4, v14);
      if ( ShimInfo >= 0 )
      {
        v20 = v24;
        ShimInfo = 0;
        *a4 = v14;
        *v20 = v4;
        goto LABEL_20;
      }
      v18 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
      KsepHistoryErrors[2 * v18 + 1] = ShimInfo;
      KsepHistoryErrors[2 * v18] = 132101;
      if ( (KsepDebugFlag & 2) != 0 )
        KsepDebugPrint(0LL, (int)"KSE: Cannot resolve registry shims to Sdb: 0x%x\n", (unsigned int)ShimInfo);
      KsepLogError(0LL, (__int64)"KSE: Cannot resolve registry shims to Sdb: 0x%x\n", ShimInfo);
      v14 = v23;
    }
    v16 = v21;
    goto LABEL_20;
  }
LABEL_4:
  KsepPoolFreePaged(v10);
  if ( ShimInfo < 0 )
  {
LABEL_7:
    KsepPoolFreePaged(v4);
    *v6 = 0LL;
    *a4 = 0;
  }
  return (unsigned int)ShimInfo;
}
