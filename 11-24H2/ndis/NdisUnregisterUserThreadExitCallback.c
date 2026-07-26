/*
 * XREFs of NdisUnregisterUserThreadExitCallback @ 0x1400E4510
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x14001DD50 (WPP_RECORDER_SF_.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_ETHREAD@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1400E3F6C (--1-$unique_storage@U-$resource_policy@PEAU_ETHREAD@@$$A6A_JPEAX@Z$1-ObfDereferenceObject@@YA_J0.c)
 *     ??1_NDIS_THREAD_EXIT_REGISTRATION@@QEAA@XZ @ 0x1400E3FA4 (--1_NDIS_THREAD_EXIT_REGISTRATION@@QEAA@XZ.c)
 *     ?ndisGetThreadStateReferenceFromThread@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDIS_THREAD_STATE@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@PEAU_ETHREAD@@@Z @ 0x1400E4858 (-ndisGetThreadStateReferenceFromThread@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy.c)
 */

void __fastcall NdisUnregisterUserThreadExitCallback(_NDIS_THREAD_EXIT_REGISTRATION *this)
{
  int v2; // edx
  __int64 v3; // rbx
  int v4; // edx
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  if ( this )
  {
    ndisGetThreadStateReferenceFromThread(&v5, *(_QWORD *)this);
    v3 = v5;
    if ( v5 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v2) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v2,
          27,
          22,
          (struct _GUID *)&WPP_a7bdd0433f833af46cc07abd1e9cfe56_Traceguids,
          v5);
      }
      *(_QWORD *)(v3 + 16) = 0LL;
    }
    PsSetThreadProperty(*(_QWORD *)this, 1398031173LL, 0LL);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v4,
        27,
        23,
        (struct _GUID *)&WPP_a7bdd0433f833af46cc07abd1e9cfe56_Traceguids,
        (char)this);
    }
    wil::details::unique_storage<wil::details::resource_policy<_ETHREAD *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_ETHREAD *,_ETHREAD *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_ETHREAD *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_ETHREAD *,_ETHREAD *,0,std::nullptr_t>>(&v5);
    _NDIS_THREAD_EXIT_REGISTRATION::~_NDIS_THREAD_EXIT_REGISTRATION(this);
    ExFreePoolWithTag(this, 0);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2,
      27,
      21,
      (struct _GUID *)&WPP_a7bdd0433f833af46cc07abd1e9cfe56_Traceguids);
  }
}
