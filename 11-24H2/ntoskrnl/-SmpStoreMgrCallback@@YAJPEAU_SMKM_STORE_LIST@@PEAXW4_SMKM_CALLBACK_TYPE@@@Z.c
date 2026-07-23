/*
 * XREFs of ?SmpStoreMgrCallback@@YAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z @ 0x14044A4B0
 * Callers:
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x14029F070 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 */

__int64 __fastcall SmpStoreMgrCallback(struct _EX_RUNDOWN_REF *a1, unsigned __int64 *a2, int a3)
{
  unsigned int v3; // ebx
  struct _EX_RUNDOWN_REF *v7; // rcx

  v3 = 0;
  if ( (unsigned int)(a3 - 8) <= 1 )
  {
    v7 = a1 + 264;
    if ( a3 == 8 )
    {
      if ( ExAcquireRundownProtection_0(v7) )
      {
        if ( a2 )
          *a2 = a1[262].Count;
      }
      else
      {
        return (unsigned int)-1073740640;
      }
    }
    else
    {
      ExReleaseRundownProtection_0(v7);
    }
  }
  return v3;
}
