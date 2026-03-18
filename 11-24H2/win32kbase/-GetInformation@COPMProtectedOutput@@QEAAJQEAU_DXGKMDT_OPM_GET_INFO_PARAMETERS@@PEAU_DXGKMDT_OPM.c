/*
 * XREFs of ?GetInformation@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_GET_INFO_PARAMETERS@@PEAU_DXGKMDT_OPM_REQUESTED_INFORMATION@@@Z @ 0x14008BE1C
 * Callers:
 *     ?GetInformation@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_GET_INFO_PARAMETERS@@QEAU_DXGKMDT_OPM_REQUESTED_INFORMATION@@@Z @ 0x14008BD3C (-GetInformation@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_GET_INFO_PARAMETERS@@QEAU_DXGKMDT_OPM_REQUESTED_.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAX$$A6AXPEAX@Z$1?OPMFreeMemory@OPM@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14008BA98 (--1-$unique_storage@U-$resource_policy@PEAX$$A6AXPEAX@Z$1-OPMFreeMemory@OPM@@YAX0@ZU-$integral_c.c)
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x14008BFA0 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     ?Unlock@CMutex@OPM@@QEAAXXZ @ 0x14008C010 (-Unlock@CMutex@OPM@@QEAAXXZ.c)
 *     CallMonitor @ 0x14008C1A0 (CallMonitor.c)
 *     ?OPMFreeMemory@OPM@@YAXPEAX@Z @ 0x14008C2B0 (-OPMFreeMemory@OPM@@YAXPEAX@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

__int64 __fastcall COPMProtectedOutput::GetInformation(
        COPMProtectedOutput *this,
        struct _DXGKMDT_OPM_GET_INFO_PARAMETERS *const a2,
        struct _DXGKMDT_OPM_REQUESTED_INFORMATION *a3)
{
  OPM::CMutex *v3; // rdi
  void *v7; // rdx
  OPM *v8; // rbx
  unsigned int v9; // esi
  void *v10; // rdx
  OPM *Pool2; // [rsp+50h] [rbp+8h] BYREF

  v3 = (OPM::CMutex *)*((_QWORD *)this + 1);
  OPM::CMutex::Lock(v3);
  if ( (*(unsigned __int8 (__fastcall **)(COPMProtectedOutput *))(*(_QWORD *)this + 16LL))(this) )
  {
    v9 = -1071774438;
  }
  else
  {
    Pool2 = (OPM *)ExAllocatePool2(258LL, 4120LL, 1297108807LL);
    v8 = Pool2;
    if ( Pool2 )
    {
      *(_QWORD *)Pool2 = *((_QWORD *)this + 9);
      memmove((char *)v8 + 8, a2, 0x1010uLL);
      v9 = CallMonitor(*((PDEVICE_OBJECT *)this + 2), 0x232497u, v8, 0x1018u, a3, 0x1000u);
      OPM::OPMFreeMemory(v8, v10);
    }
    else
    {
      wil::details::unique_storage<wil::details::resource_policy<void *,void (void *),&void OPM::OPMFreeMemory(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (void *),&void OPM::OPMFreeMemory(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
        &Pool2,
        v7);
      v9 = -1073741801;
    }
  }
  OPM::CMutex::Unlock(v3);
  return v9;
}
