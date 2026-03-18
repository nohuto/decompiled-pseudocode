/*
 * XREFs of ?SmCompressCtxStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@W4_ST_COMPRESSION_FORMAT@@@Z @ 0x1405FDB60
 * Callers:
 *     ?SmCompressManagerStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_MANAGER@1@W4_ST_COMPRESSION_FORMAT@@@Z @ 0x1405FDCE8 (-SmCompressManagerStart@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_MANAGER@1@W4_ST_COMPR.c)
 * Callees:
 *     ?SmCompressManagerGetIdealProcessor@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_MANAGER@1@KK@Z @ 0x1403937A0 (-SmCompressManagerGetIdealProcessor@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_MANAGER@1.c)
 *     ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PEAKP6AXPEAX@Z@Z @ 0x140393894 (-SmCompressCtxCreateThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PE.c)
 *     RtlGetCompressionWorkSpaceSize @ 0x140393E20 (RtlGetCompressionWorkSpaceSize.c)
 */

int __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxStart(__int64 a1, int a2)
{
  struct _EX_RUNDOWN_REF **v2; // rdi
  int result; // eax
  int IdealProcessor; // eax
  struct _EX_RUNDOWN_REF *v6; // rdx
  int v7; // [rsp+30h] [rbp+8h] BYREF
  ULONG CompressFragmentWorkSpaceSize; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(struct _EX_RUNDOWN_REF ***)(a1 + 8);
  CompressFragmentWorkSpaceSize = 0;
  result = RtlGetCompressionWorkSpaceSize(
             *((_WORD *)qword_140011220 + a2),
             (PULONG)(a1 + 164),
             &CompressFragmentWorkSpaceSize);
  if ( result >= 0 )
  {
    result = SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxCreateThread(
               a1,
               *v2,
               0LL,
               (__int64 (__fastcall *)(PVOID))SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxBalancerThread);
    if ( result >= 0 )
    {
      IdealProcessor = SMKM_STORE_MGR<SM_TRAITS>::SmCompressManagerGetIdealProcessor(
                         (__int64)v2,
                         *(_DWORD *)(a1 + 168),
                         0);
      v6 = *v2;
      v7 = IdealProcessor;
      result = SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxCreateThread(a1, v6, (__int64)&v7, 0LL);
      if ( result >= 0 )
        return 0;
    }
  }
  return result;
}
