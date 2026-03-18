/*
 * XREFs of HMRemoveHandleForObject @ 0x14016AC70
 * Callers:
 *     ?OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x140146F90 (-OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1401874A0 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1401875A0 (-RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RemoveInjectionDevicesForSessionUninitialize@CBaseInput@@SAXXZ @ 0x14020D6F4 (-RemoveInjectionDevicesForSessionUninitialize@CBaseInput@@SAXXZ.c)
 * Callees:
 *     _HMPheFromObject @ 0x140042A90 (_HMPheFromObject.c)
 *     HMUnlockObject @ 0x14005F160 (HMUnlockObject.c)
 *     ?GetEtwUserHandleType@@YA?AW4EtwUserHandleType@@E@Z @ 0x140062510 (-GetEtwUserHandleType@@YA-AW4EtwUserHandleType@@E@Z.c)
 *     EtwTraceUserDestroyHandle @ 0x1400D64AC (EtwTraceUserDestroyHandle.c)
 *     _HMPkheFromObjectWorker @ 0x1400E1208 (_HMPkheFromObjectWorker.c)
 *     HMRemoveHandleForObjectWorker @ 0x140134F1C (HMRemoveHandleForObjectWorker.c)
 *     HMCleanupGrantedHandle @ 0x14014A694 (HMCleanupGrantedHandle.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x1401A9280 (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 *     ?RemoveHandle@Win32JobObject@@YAXPEAXPEAU_HANDLEENTRY@@@Z @ 0x1401AA150 (-RemoveHandle@Win32JobObject@@YAXPEAXPEAU_HANDLEENTRY@@@Z.c)
 */

__int64 __fastcall HMRemoveHandleForObject(int *a1)
{
  __int64 v2; // rbx
  unsigned __int8 *v3; // rdi
  unsigned __int8 v4; // al
  __int64 **v5; // rsi
  unsigned int EtwUserHandleType; // eax
  __int64 v7; // r9
  struct _HANDLEENTRY *v8; // r8
  unsigned __int8 v9; // al
  __int64 *v10; // rbx
  __int64 v11; // rcx

  v2 = 0LL;
  v3 = (unsigned __int8 *)HMPheFromObject(a1);
  v4 = v3[24];
  if ( v4 == 19 || v4 == 22 )
  {
    v5 = (__int64 **)HMPkheFromObjectWorker(a1);
    EtwUserHandleType = GetEtwUserHandleType(v3[24]);
    EtwTraceUserDestroyHandle(**v5, EtwUserHandleType, 0LL, v7);
    if ( (unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline() )
    {
      Win32JobObject::RemoveHandle((Win32JobObject *)**v5, v3, v8);
    }
    else if ( (v3[25] & 0x20) != 0 )
    {
      HMCleanupGrantedHandle(**v5);
      v3[25] &= ~0x20u;
    }
    v9 = v3[24];
    if ( v9 == 19 )
    {
      v10 = *v5;
      ObfDereferenceObject((PVOID)(*v5)[4]);
      *((_DWORD *)v10 + 20) |= 4u;
      v2 = 0LL;
    }
    else if ( v9 == 22 )
    {
      v2 = (*v5)[2];
      ObfDereferenceObject(*(PVOID *)(v2 + 32));
    }
  }
  HMRemoveHandleForObjectWorker((__int64)v3);
  if ( !*(_DWORD *)(W32GetUserSessionState(v11) + 19816) && v2 )
    HMUnlockObject((int *)v2);
  return 1LL;
}
