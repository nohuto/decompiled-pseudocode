/*
 * XREFs of ?Configure@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z @ 0x14008B094
 * Callers:
 *     ?ConfigureProtectedOutput@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z @ 0x14008A618 (-ConfigureProtectedOutput@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAX$$A6AXPEAX@Z$1?OPMFreeMemory@OPM@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14008BA98 (--1-$unique_storage@U-$resource_policy@PEAX$$A6AXPEAX@Z$1-OPMFreeMemory@OPM@@YAX0@ZU-$integral_c.c)
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x14008BFA0 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     ?Unlock@CMutex@OPM@@QEAAXXZ @ 0x14008C010 (-Unlock@CMutex@OPM@@QEAAXXZ.c)
 *     CallMonitor @ 0x14008C1A0 (CallMonitor.c)
 *     ?OPMFreeMemory@OPM@@YAXPEAX@Z @ 0x14008C2B0 (-OPMFreeMemory@OPM@@YAXPEAX@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

__int64 __fastcall COPMProtectedOutput::Configure(
        COPMProtectedOutput *this,
        struct _DXGKMDT_OPM_CONFIGURE_PARAMETERS *const a2,
        unsigned int a3,
        const unsigned __int8 *a4)
{
  OPM::CMutex *v4; // rdi
  size_t v6; // rbp
  unsigned int v9; // esi
  ULONG v10; // esi
  _DWORD *v11; // rbx
  void *v12; // rdx
  _QWORD *Pool2; // [rsp+60h] [rbp+8h] BYREF

  v4 = (OPM::CMutex *)*((_QWORD *)this + 1);
  v6 = a3;
  OPM::CMutex::Lock(v4);
  if ( (*(unsigned __int8 (__fastcall **)(COPMProtectedOutput *))(*(_QWORD *)this + 16LL))(this) )
  {
    v9 = -1071774438;
  }
  else
  {
    v10 = v6 + 4112;
    if ( (unsigned int)v6 >= 0xFFFFEFF0 )
    {
      v9 = -1071774453;
    }
    else
    {
      Pool2 = (_QWORD *)ExAllocatePool2(258LL, v10, 1297108807LL);
      v11 = Pool2;
      if ( Pool2 )
      {
        *Pool2 = *((_QWORD *)this + 9);
        memmove(v11 + 2, a2, 0x1000uLL);
        v11[1026] = v6;
        memmove(v11 + 1027, a4, v6);
        v9 = CallMonitor(*((PDEVICE_OBJECT *)this + 2), 0x23249Fu, v11, v10, 0LL, 0);
        OPM::OPMFreeMemory((OPM *)v11, v12);
      }
      else
      {
        wil::details::unique_storage<wil::details::resource_policy<void *,void (void *),&void OPM::OPMFreeMemory(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (void *),&void OPM::OPMFreeMemory(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&Pool2);
        v9 = -1073741801;
      }
    }
  }
  OPM::CMutex::Unlock(v4);
  return v9;
}
