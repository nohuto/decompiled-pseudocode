/*
 * XREFs of ?SmCompressCtxCreateThreadParams@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAPEAU_SM_COMPRESS_THREAD_PARAMS@1@PEAU_SM_COMPRESS_CONTEXT@1@K@Z @ 0x140375CAC
 * Callers:
 *     ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PEAKP6AXPEAX@Z@Z @ 0x140376298 (-SmCompressCtxCreateThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PE.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     SmAllocEx @ 0x1402F5228 (SmAllocEx.c)
 */

_QWORD *__fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxCreateThreadParams(__int64 a1, int a2)
{
  struct _EX_RUNDOWN_REF *v2; // r14
  __int64 v5; // rbx
  ULONG_PTR v6; // rcx
  unsigned int *v7; // rdi
  _QWORD *v8; // rax

  v2 = (struct _EX_RUNDOWN_REF *)(a1 + 144);
  v5 = 0LL;
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 144)) )
  {
    v6 = 40LL;
    v7 = (unsigned int *)(a1 + 164);
    if ( a2 )
      v6 = *v7 + 4136LL;
    v8 = (_QWORD *)SmAllocEx(v6, 0x74436D73u, *(_DWORD *)(a1 + 168) | 0x80000000);
    if ( v8 )
    {
      v8[1] = 0LL;
      v8[2] = 0LL;
      v8[3] = 0LL;
      v8[4] = 0LL;
      *v8 = a1;
      if ( a2 )
      {
        v8[3] = v8 + 5;
        v8[4] = (char *)v8 + *v7 + 40;
      }
      return v8;
    }
    else
    {
      ExReleaseRundownProtection_0(v2);
    }
  }
  return (_QWORD *)v5;
}
