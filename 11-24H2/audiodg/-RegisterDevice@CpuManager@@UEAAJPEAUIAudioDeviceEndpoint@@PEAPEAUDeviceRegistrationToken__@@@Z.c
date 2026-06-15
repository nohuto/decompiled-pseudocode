/*
 * XREFs of ?RegisterDevice@CpuManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegistrationToken__@@@Z @ 0x140068FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x140012DD8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ListKeyForDevice@@YAPEAUIUnknown@@PEAUIAudioDeviceEndpoint@@@Z @ 0x1400133D4 (-ListKeyForDevice@@YAPEAUIUnknown@@PEAUIAudioDeviceEndpoint@@@Z.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002C920 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAXPEAUIUnknown@@@Z @ 0x140045EA4 (-Attach@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAXPEAUIUnknown@@@Z.c)
 *     ?GetNode@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@CpuManager@@@6@@ATL@@AEBAPEAVCNode@12@AEBQEAUIUnknown@@AEAI1AEAPEAV312@@Z @ 0x1400684C8 (-GetNode@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V-$CElementTraits@PE.c)
 *     ?RemoveAtPos@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@CpuManager@@@6@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x140069898 (-RemoveAtPos@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V-$CElementTrait.c)
 *     ?SetAt@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@CpuManager@@@6@@ATL@@QEAAPEAU__POSITION@@AEBQEAUIUnknown@@AEBUListValue@DeviceRegistrations@CpuManager@@@Z @ 0x1400699B0 (-SetAt@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V-$CElementTraits@PEAU.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CpuManager::RegisterDevice(
        CpuManager *this,
        struct IAudioDeviceEndpoint *a2,
        struct DeviceRegistrationToken__ **a3)
{
  struct DeviceRegistrationToken__ **v3; // r14
  struct IAudioDeviceEndpoint *v4; // r15
  CpuManager *v5; // rsi
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  int v7; // ebx
  struct IUnknown *v8; // rax
  __int64 v9; // rbx
  __int64 Node; // rax
  __int64 v11; // rdi
  ATL::CAtlException *v13; // rbx
  int v14; // [rsp+30h] [rbp-88h] BYREF
  __int64 v15; // [rsp+38h] [rbp-80h]
  __int64 v16; // [rsp+40h] [rbp-78h] BYREF
  __int64 v17; // [rsp+48h] [rbp-70h] BYREF
  char *v18; // [rsp+50h] [rbp-68h]
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+58h] [rbp-60h] BYREF
  __int128 v20; // [rsp+60h] [rbp-58h] BYREF
  ATL::CAtlException *v21; // [rsp+70h] [rbp-48h] BYREF
  __int64 v25; // [rsp+D8h] [rbp+20h] BYREF

  v3 = a3;
  v4 = a2;
  v5 = this;
  v15 = 0LL;
  v16 = 0LL;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v19 = v6;
  v7 = (*(__int64 (__fastcall **)(CpuManager *))(*(_QWORD *)v5 + 128LL))(v5);
  if ( v7 < 0 )
    goto LABEL_12;
  v8 = ListKeyForDevice(v4);
  Microsoft::WRL::ComPtr<IUnknown>::Attach(&v16, (__int64)v8);
  v18 = (char *)v5 + 200;
  v9 = v16;
  v17 = v16;
  v14 = 0;
  LODWORD(v25) = 0;
  Node = ATL::CAtlMap<IUnknown *,CpuManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<CpuManager::DeviceRegistrations::ListValue>>::GetNode(
           (__int64)v5 + 200,
           (unsigned int *)&v17,
           &v14,
           (unsigned int *)&v25,
           &v20);
  v11 = Node;
  if ( Node )
  {
    _InterlockedIncrement((volatile signed __int32 *)(Node + 8));
    goto LABEL_11;
  }
  v20 = 0LL;
  LODWORD(v20) = 1;
  try
  {
    v25 = v9;
    v11 = ATL::CAtlMap<IUnknown *,CpuManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<CpuManager::DeviceRegistrations::ListValue>>::SetAt(
            (char *)v5 + 200,
            &v25,
            &v20);
    v15 = v11;
  }
  catch ( ATL::CAtlException *v21 )
  {
    v13 = v21;
    if ( *(_DWORD *)v21 == -1073741571 )
      _o__resetstkoflw();
    LODWORD(v25) = *(_DWORD *)v13;
    v7 = v25;
    v5 = this;
    v11 = v15;
    if ( (int)v25 < 0 )
      goto LABEL_7;
    v3 = a3;
    v4 = a2;
  }
  v7 = (*(__int64 (__fastcall **)(CpuManager *, struct IAudioDeviceEndpoint *, __int64))(*(_QWORD *)v5 + 112LL))(
         v5,
         v4,
         v11 + 16);
  if ( v7 >= 0 )
  {
LABEL_11:
    *v3 = (struct DeviceRegistrationToken__ *)v11;
    v7 = 0;
    goto LABEL_12;
  }
LABEL_7:
  if ( v11 )
    ATL::CAtlMap<IUnknown *,CpuManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<CpuManager::DeviceRegistrations::ListValue>>::RemoveAtPos(
      v18,
      v11);
  (*(void (__fastcall **)(CpuManager *))(*(_QWORD *)v5 + 136LL))(v5);
LABEL_12:
  CSAutoLock<1>::~CSAutoLock<1>(&v19);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
  return (unsigned int)v7;
}
