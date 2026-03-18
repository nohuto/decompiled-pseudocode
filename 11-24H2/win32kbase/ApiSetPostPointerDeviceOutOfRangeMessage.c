/*
 * XREFs of ApiSetPostPointerDeviceOutOfRangeMessage @ 0x1401255DC
 * Callers:
 *     RIMOnAsyncWorkItemNotification @ 0x1401972C4 (RIMOnAsyncWorkItemNotification.c)
 *     RIMRemoveFromActiveDevices @ 0x1401E0EE0 (RIMRemoveFromActiveDevices.c)
 * Callees:
 *     EtwTracePointerDeviceOutOfRangeMessageStart @ 0x140152F80 (EtwTracePointerDeviceOutOfRangeMessageStart.c)
 *     EtwTracePointerDeviceOutOfRangeMessageStop @ 0x140155710 (EtwTracePointerDeviceOutOfRangeMessageStop.c)
 *     Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline @ 0x1401A67CC (Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetPostPointerDeviceOutOfRangeMessage(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  int (*v5)(void); // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  void (__fastcall *v8)(__int64, _QWORD, _QWORD); // rax

  result = Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline();
  if ( (_DWORD)result || *(_DWORD *)(a1 + 24) != 7 )
  {
    EtwTracePointerDeviceOutOfRangeMessageStart();
    v5 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v4, v3) + 48) + 4480LL);
    if ( v5 && v5() >= 0 )
    {
      v8 = *(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v7, v6) + 48)
                                                          + 4488LL);
      if ( v8 )
        v8(a1, 0LL, 0LL);
    }
    return EtwTracePointerDeviceOutOfRangeMessageStop();
  }
  return result;
}
