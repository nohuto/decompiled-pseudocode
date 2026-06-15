/*
 * XREFs of ??$Make@VCDeviceOrientationNotificationsHandler@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCDeviceOrientationNotificationsHandler@@@12@XZ @ 0x140060E6C
 * Callers:
 *     std::call_once__lambda_c3c562c1cb4a987d14005078cd1fca93___ @ 0x140056D58 (std--call_once__lambda_c3c562c1cb4a987d14005078cd1fca93___.c)
 * Callees:
 *     ??1?$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x14005555C (--1-$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058D58 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x14005A0E4 (memset_0.c)
 *     ??0CDeviceOrientationNotificationsHandler@@QEAA@XZ @ 0x140061750 (--0CDeviceOrientationNotificationsHandler@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
CDeviceOrientationNotificationsHandler **__fastcall Microsoft::WRL::Details::Make<CDeviceOrientationNotificationsHandler,>(
        CDeviceOrientationNotificationsHandler **a1)
{
  CDeviceOrientationNotificationsHandler *v2; // rax
  CDeviceOrientationNotificationsHandler *v3; // rdi
  CDeviceOrientationNotificationsHandler *v4; // rdi
  CDeviceOrientationNotificationsHandler *v6; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = (CDeviceOrientationNotificationsHandler *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  v6 = v2;
  if ( v2 )
  {
    memset_0(v2, 0, 0x68uLL);
    v4 = CDeviceOrientationNotificationsHandler::CDeviceOrientationNotificationsHandler(v3);
    if ( *a1 )
      (*(void (__fastcall **)(CDeviceOrientationNotificationsHandler *))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v4;
    v6 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator<GraphStreamingResourceManager>::~MakeAllocator<GraphStreamingResourceManager>((void **)&v6);
  return a1;
}
