/*
 * XREFs of ?RegisterDevice@GraphStreamingResourceManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegistrationToken__@@@Z @ 0x140013200
 * Callers:
 *     <none>
 * Callees:
 *     ?ListKeyForDevice@@YAPEAUIUnknown@@PEAUIAudioDeviceEndpoint@@@Z @ 0x1400133A4 (-ListKeyForDevice@@YAPEAUIUnknown@@PEAUIAudioDeviceEndpoint@@@Z.c)
 *     ?SetAt@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@@6@@ATL@@QEAAPEAU__POSITION@@AEBQEAUIUnknown@@AEBUListValue@DeviceRegistrations@GraphStreamingResourceManager@@@Z @ 0x1400133D8 (-SetAt@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V-$.c)
 *     ?RemoveAtPos@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@@6@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x140043504 (-RemoveAtPos@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManage.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall GraphStreamingResourceManager::RegisterDevice(
        GraphStreamingResourceManager *this,
        struct IAudioDeviceEndpoint *a2,
        struct DeviceRegistrationToken__ **a3)
{
  struct DeviceRegistrationToken__ **v3; // r15
  struct IAudioDeviceEndpoint *v4; // r12
  GraphStreamingResourceManager *v5; // rsi
  struct _RTL_CRITICAL_SECTION *v6; // r14
  struct IUnknown *v7; // rdi
  __int64 v8; // rbx
  __int64 i; // rbx
  int v10; // esi
  ATL::CAtlException *v12; // rbx
  __int64 v13; // [rsp+20h] [rbp-88h]
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+28h] [rbp-80h]
  char *v15; // [rsp+40h] [rbp-68h]
  __int128 v16; // [rsp+48h] [rbp-60h] BYREF
  __int64 v17; // [rsp+58h] [rbp-50h]
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+60h] [rbp-48h]
  ATL::CAtlException *v19; // [rsp+68h] [rbp-40h] BYREF
  struct IUnknown *v23; // [rsp+C8h] [rbp+20h] BYREF

  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  v14 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v18 = v6;
  v7 = ListKeyForDevice(v4);
  v15 = (char *)v5 + 200;
  v8 = *((_QWORD *)v5 + 25);
  if ( v8 )
  {
    for ( i = *(_QWORD *)(v8 + 8LL * ((unsigned int)v7 % *((_DWORD *)v5 + 54))); i; i = *(_QWORD *)(i + 32) )
    {
      if ( *(_DWORD *)(i + 40) == (_DWORD)v7 && *(struct IUnknown **)i == v7 )
        goto LABEL_3;
    }
  }
  i = 0LL;
LABEL_3:
  if ( i )
  {
    _InterlockedIncrement((volatile signed __int32 *)(i + 8));
    goto LABEL_19;
  }
  try
  {
    v16 = 0LL;
    v17 = 0LL;
    LODWORD(v16) = 1;
    v23 = v7;
    i = ATL::CAtlMap<IUnknown *,GraphStreamingResourceManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<GraphStreamingResourceManager::DeviceRegistrations::ListValue>>::SetAt(
          (char *)v5 + 200,
          &v23,
          &v16);
    v13 = i;
  }
  catch ( ATL::CAtlException *v19 )
  {
    v12 = v19;
    if ( *(_DWORD *)v19 == -1073741571 )
      _o__resetstkoflw();
    LODWORD(v23) = *(_DWORD *)v12;
    v10 = (int)v23;
    i = v13;
    v6 = v14;
    if ( (int)v23 < 0 )
      goto LABEL_6;
    v5 = this;
    v3 = a3;
    v4 = a2;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, struct IAudioDeviceEndpoint *, __int64))(*((_QWORD *)v5 - 1) + 64LL))(
          (__int64)v5 - 8,
          v4,
          i + 16);
  if ( v10 >= 0 )
  {
LABEL_19:
    *v3 = (struct DeviceRegistrationToken__ *)i;
    v10 = 0;
    goto LABEL_8;
  }
LABEL_6:
  if ( i )
    ATL::CAtlMap<IUnknown *,GraphStreamingResourceManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<GraphStreamingResourceManager::DeviceRegistrations::ListValue>>::RemoveAtPos(
      v15,
      i);
LABEL_8:
  if ( v6 )
    LeaveCriticalSection(v6);
  if ( v7 )
    ((void (__fastcall *)(struct IUnknown *))v7->lpVtbl->Release)(v7);
  return (unsigned int)v10;
}
