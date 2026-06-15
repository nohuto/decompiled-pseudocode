/*
 * XREFs of ??0CXvmPowerReferenceManager@@QEAA@U_GUID@@0@Z @ 0x1801037B4
 * Callers:
 *     ??$_Construct_in_place@VCXvmPowerReferenceManager@@$$CBU_GUID@@$$CBU2@@std@@YAXAEAVCXvmPowerReferenceManager@@$$QEBU_GUID@@1@Z @ 0x180103504 (--$_Construct_in_place@VCXvmPowerReferenceManager@@$$CBU_GUID@@$$CBU2@@std@@YAXAEAVCXvmPowerRefe.c)
 * Callees:
 *     ??0_Mutex_base@std@@QEAA@H@Z @ 0x1800CC04C (--0_Mutex_base@std@@QEAA@H@Z.c)
 *     _lambda_cece36584f45002ca434a9cf14e98d42_::operator() @ 0x180103BE0 (_lambda_cece36584f45002ca434a9cf14e98d42_--operator().c)
 */

// Hidden C++ exception states: #wind=3
CXvmPowerReferenceManager *__fastcall CXvmPowerReferenceManager::CXvmPowerReferenceManager(
        char *pv,
        struct _GUID *a2,
        struct _GUID *a3)
{
  char *v7; // [rsp+38h] [rbp+10h] BYREF

  *(_OWORD *)pv = 0LL;
  *((_OWORD *)pv + 1) = 0LL;
  *((_DWORD *)pv + 8) = 0;
  std::_Mutex_base::_Mutex_base((struct _Mtx_internal_imp_t *)(pv + 40), 0);
  *((_QWORD *)pv + 9) = 0LL;
  *((_QWORD *)pv + 10) = 0LL;
  *((_QWORD *)pv + 11) = 0LL;
  *((struct _GUID *)pv + 1) = *a3;
  *(struct _GUID *)pv = *a2;
  v7 = pv;
  lambda_cece36584f45002ca434a9cf14e98d42_::operator()(&v7);
  if ( *((_QWORD *)pv + 10) )
    *((_QWORD *)pv + 9) = CreateThreadpoolTimer(
                            (PTP_TIMER_CALLBACK)lambda_a5b20f628b6b681ff62fc21fdf557568_::_lambda_invoker_cdecl_,
                            pv,
                            0LL);
  return (CXvmPowerReferenceManager *)pv;
}
