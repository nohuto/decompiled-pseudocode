/*
 * XREFs of ?QuerySwapChainBindingStatus@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1403B8870
 * Callers:
 *     ?QuerySwapChainBindingStatusFromVm@DXGVIRTUALMACHINE@@QEAAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAK@Z @ 0x1403B86F4 (-QuerySwapChainBindingStatusFromVm@DXGVIRTUALMACHINE@@QEAAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEA.c)
 * Callees:
 *     ?OpenDwmHandle@DxgkCompositionObject@@QEBAJPEAPEAX@Z @ 0x14000B630 (-OpenDwmHandle@DxgkCompositionObject@@QEBAJPEAPEAX@Z.c)
 *     ?DxgkQuerySwapChainBindingStatus@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x14000C67C (-DxgkQuerySwapChainBindingStatus@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400199A0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x140021E58 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     NtNotifyPresentToCompositionSurface @ 0x140026A70 (NtNotifyPresentToCompositionSurface.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?AddRef@DxgkCompositionObject@@QEBAJXZ @ 0x1400379DC (-AddRef@DxgkCompositionObject@@QEBAJXZ.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1400389E4 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x14003B7FC (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x14003E990 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DXG_HOST_COMPOSITIONOBJECTCHANNEL::QuerySwapChainBindingStatus(
        DXG_HOST_COMPOSITIONOBJECTCHANNEL *this,
        unsigned int a2,
        struct _D3DKMT_PRESENTHISTORYTOKEN *a3)
{
  unsigned int v6; // edi
  DxgkCompositionObject *v7; // r14
  struct DXGFASTMUTEX *v8; // rax
  DxgkCompositionObject *v9; // rax
  __int64 v10; // rcx
  struct _KPROCESS *v11; // rbx
  DXGPROCESS *ProcessDxgProcess; // rax
  DXGPROCESS *v13; // rbx
  int v15; // eax
  int v16; // eax
  HANDLE v17; // rax
  int SwapChainBindingStatus; // eax
  HANDLE Handle[2]; // [rsp+20h] [rbp-39h] BYREF
  _BYTE v20[16]; // [rsp+30h] [rbp-29h] BYREF
  _BYTE v21[16]; // [rsp+40h] [rbp-19h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-9h] BYREF
  char v23; // [rsp+80h] [rbp+27h]

  v6 = -1073741823;
  v7 = 0LL;
  v8 = (struct DXGFASTMUTEX *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 48LL))(*((_QWORD *)this + 1));
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v21, v8, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v21);
  v9 = (DxgkCompositionObject *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 1) + 72LL))(
                                  *((_QWORD *)this + 1),
                                  a2,
                                  17LL);
  if ( v9 )
  {
    v7 = v9;
    DxgkCompositionObject::AddRef(v9);
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v21);
  if ( v7 )
  {
    v11 = (struct _KPROCESS *)*((_QWORD *)this + 3);
    v23 = 0;
    if ( (struct _KPROCESS *)PsGetCurrentProcess(v10) != v11 )
    {
      KeStackAttachProcess(v11, &ApcState);
      v23 = 1;
    }
    DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v20);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
    ProcessDxgProcess = (DXGPROCESS *)PsGetProcessDxgProcess(*((_QWORD *)this + 3));
    v13 = ProcessDxgProcess;
    if ( ProcessDxgProcess )
      DXGPROCESS::AcquireReference(ProcessDxgProcess);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20);
    if ( v13 )
    {
      if ( *((_DWORD *)v13 + 10) == 1 && (*(unsigned int (**)(void))(*((_QWORD *)v13 + 11) + 232LL))() )
      {
        Handle[0] = 0LL;
        v15 = DxgkCompositionObject::OpenDwmHandle(v7, Handle);
        v6 = v15;
        if ( v15 < 0 )
        {
          WdLogSingleEntry1(3LL, v15);
          WdLogGlobalForLineNumber = 809;
        }
        else
        {
          v16 = NtNotifyPresentToCompositionSurface(Handle[0], (char *)a3);
          v6 = v16;
          if ( v16 < 0 )
          {
            WdLogSingleEntry3(3LL, v16, Handle[0], a3);
            WdLogGlobalForLineNumber = 786;
          }
          else
          {
            v17 = Handle[0];
            Handle[1] = 0LL;
            a3->Token.Flip.Flags.Value |= 0x2000000u;
            a3->Token.Flip.hLogicalSurface = (ULONG64)v17;
            SwapChainBindingStatus = DxgkQuerySwapChainBindingStatus(1, 0LL, a3);
            v6 = SwapChainBindingStatus;
            if ( SwapChainBindingStatus < 0 )
            {
              WdLogSingleEntry1(3LL, SwapChainBindingStatus);
              WdLogGlobalForLineNumber = 800;
            }
            a3->Token.Flip.hLogicalSurface = 0LL;
          }
          ObCloseHandle(Handle[0], 1);
        }
      }
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
      DXGPROCESS::ReleaseReference(v13);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20);
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v20);
    if ( v23 )
      KeUnstackDetachProcess(&ApcState);
    DxgkCompositionObject::Release(v7);
  }
  return v6;
}
