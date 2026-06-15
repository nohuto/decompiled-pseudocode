/*
 * XREFs of ??$MakeAndInitialize@VCAPOEndpointNotificationsHandler@@V1@AEAPEAUIMMDevice@@@Details@WRL@Microsoft@@YAJPEAPEAVCAPOEndpointNotificationsHandler@@AEAPEAUIMMDevice@@@Z @ 0x14003FDB8
 * Callers:
 *     ?GetEndpointNotificationHandler@CAPOProcessingHost@@AEAAJPEAUIMMDevice@@PEAPEAVCAPOEndpointNotificationsHandler@@@Z @ 0x140017FC8 (-GetEndpointNotificationHandler@CAPOProcessingHost@@AEAAJPEAUIMMDevice@@PEAPEAVCAPOEndpointNotif.c)
 * Callees:
 *     ??4?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIMMDevice@@@Z @ 0x14000E34C (--4-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIMMDevice@@@Z.c)
 *     ??0CAPOEndpointNotificationsHandler@@QEAA@XZ @ 0x14003FE5C (--0CAPOEndpointNotificationsHandler@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x14005562C (--1-$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058E48 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CAPOEndpointNotificationsHandler,CAPOEndpointNotificationsHandler,IMMDevice * &>(
        __int64 **a1,
        __int64 *a2)
{
  CAPOEndpointNotificationsHandler *v4; // rax
  __int64 *v6; // rbx
  CAPOEndpointNotificationsHandler *v7; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = (CAPOEndpointNotificationsHandler *)operator new(0xC0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v4;
  if ( v4 )
  {
    v6 = (__int64 *)CAPOEndpointNotificationsHandler::CAPOEndpointNotificationsHandler(v4);
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::operator=(v6 + 5, *a2);
    if ( v6 )
      (*(void (__fastcall **)(__int64 *))(*v6 + 8))(v6);
    *a1 = v6;
    if ( v6 )
      (*(void (__fastcall **)(__int64 *))(*v6 + 16))(v6);
    return 0LL;
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<GraphStreamingResourceManager>::~MakeAllocator<GraphStreamingResourceManager>(&v7);
    return 2147942414LL;
  }
}
