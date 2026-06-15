/*
 * XREFs of ??1CPdcActivationClient@@QEAA@XZ @ 0x1800FEA04
 * Callers:
 *     ??1CPowerReferenceManager@@QEAA@XZ @ 0x180103914 (--1CPowerReferenceManager@@QEAA@XZ.c)
 *     _CPowerReferenceManager::CPowerReferenceManager_::_1_::dtor$0 @ 0x180164D16 (_CPowerReferenceManager--CPowerReferenceManager_--_1_--dtor$0.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001AEC8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180025844 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CPdcActivationClient::~CPdcActivationClient(CPdcActivationClient *this)
{
  int v2; // eax
  char *v3; // rcx

  if ( *(_QWORD *)this )
  {
    v2 = Pdcv2ActivationClientUnregister() | 0x10000000;
    if ( v2 < 0 )
      AudSrvTraceLoggingErrorHelper("CPdcActivationClient::~CPdcActivationClient", 26, v2);
    *(_QWORD *)this = 0LL;
  }
  _Mtx_destroy_in_situ((CPdcActivationClient *)((char *)this + 32));
  v3 = (char *)*((_QWORD *)this + 1);
  if ( v3 )
  {
    std::_Deallocate<16,0>(
      v3,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 3) - (_QWORD)v3) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 2) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
  }
}
