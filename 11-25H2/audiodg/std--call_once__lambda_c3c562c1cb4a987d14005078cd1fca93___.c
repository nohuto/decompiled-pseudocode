/*
 * XREFs of std::call_once__lambda_c3c562c1cb4a987d14005078cd1fca93___ @ 0x140056E28
 * Callers:
 *     ?AddDeviceOrientationNotificationClient@CAPOProcessingHost@@AEAAJPEAVCAPOProcessingHostObject@@@Z @ 0x140056D8C (-AddDeviceOrientationNotificationClient@CAPOProcessingHost@@AEAAJPEAVCAPOProcessingHostObject@@@.c)
 * Callees:
 *     ??$Make@VCDeviceOrientationNotificationsHandler@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCDeviceOrientationNotificationsHandler@@@12@XZ @ 0x140060F5C (--$Make@VCDeviceOrientationNotificationsHandler@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCDevi.c)
 *     ??1_Init_once_completer@std@@QEAA@XZ @ 0x140061E58 (--1_Init_once_completer@std@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::call_once__lambda_c3c562c1cb4a987d14005078cd1fca93___(union _RTL_RUN_ONCE *a1, __int64 *a2)
{
  __int64 *v4; // rax
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  union _RTL_RUN_ONCE *v9; // [rsp+20h] [rbp-18h] BYREF
  int v10; // [rsp+28h] [rbp-10h]
  int v11; // [rsp+2Ch] [rbp-Ch]
  WINBOOL fPending; // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+50h] [rbp+18h] BYREF

  fPending = 0;
  if ( !__std_init_once_begin_initialize(a1, 0, &fPending, 0LL) )
    abort();
  if ( fPending )
  {
    v9 = a1;
    v11 = 0;
    v4 = (__int64 *)Microsoft::WRL::Details::Make<CDeviceOrientationNotificationsHandler,>(&v13);
    v5 = *a2;
    v6 = *v4;
    *v4 = 0LL;
    v7 = *(_QWORD *)(v5 + 296);
    *(_QWORD *)(v5 + 296) = v6;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    v8 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    v10 = 0;
    std::_Init_once_completer::~_Init_once_completer((std::_Init_once_completer *)&v9);
  }
}
