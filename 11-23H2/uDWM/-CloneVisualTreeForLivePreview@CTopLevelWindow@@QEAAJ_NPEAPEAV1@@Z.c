/*
 * XREFs of ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_NPEAPEAV1@@Z @ 0x18000F370
 * Callers:
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N122PEA_N@Z @ 0x18000A3F8 (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N122PE.c)
 *     ?RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z @ 0x18000F264 (-RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?_AddWindow@CDesktopThumbnailBase@@IEAAJPEAVCWindowData@@@Z @ 0x1800122C0 (-_AddWindow@CDesktopThumbnailBase@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x180049AF0 (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJXZ @ 0x1800C7D34 (-_FadeOutToGlass@CLivePreview@@AEAAJXZ.c)
 *     ?GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z @ 0x1800E5968 (-GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z.c)
 * Callees:
 *     ??1CloneWindow@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x18000F628 (--1CloneWindow@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 *     ??0?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18000F72C (--0-$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ?CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x18000F7D0 (-CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?LockExclusive@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180010CC0 (-LockExclusive@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?StartActivity@CloneWindow@WindowFrameLoggingTelemetry@@QEAAXXZ @ 0x180010D34 (-StartActivity@CloneWindow@WindowFrameLoggingTelemetry@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x180010F30 (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180010FD0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?SetStopResult@?$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x1800110FC (-SetStopResult@-$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Ac.c)
 *     ?ReportStopActivity@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x180011140 (-ReportStopActivity@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0Is.c)
 *     ?RenderRecursive@CVisual@@UEAAJXZ @ 0x180016A50 (-RenderRecursive@CVisual@@UEAAJXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002E2FC (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18004F2A0 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTopLevelWindow::CloneVisualTreeForLivePreview(
        CTopLevelWindow *this,
        unsigned __int8 a2,
        struct CTopLevelWindow **a3)
{
  int v3; // r13d
  __int64 v5; // rcx
  __int64 v6; // rcx
  char v7; // si
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // r12d
  char *v13; // r15
  __int64 v14; // r14
  int v15; // edi
  __int64 v16; // r8
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  char v24; // bl
  PSRWLOCK v25; // rcx
  char v27; // dl
  int v28; // eax
  _DWORD *v29; // rbx
  int v30; // r9d
  PSRWLOCK SRWLock; // [rsp+40h] [rbp-C0h] BYREF
  struct CTopLevelWindow **v32; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v33; // [rsp+50h] [rbp-B0h] BYREF
  void **v34; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v35[24]; // [rsp+68h] [rbp-98h] BYREF
  int v36; // [rsp+80h] [rbp-80h]
  __int64 v37; // [rsp+90h] [rbp-70h]

  v32 = a3;
  v3 = a2;
  wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)&v34);
  v34 = &WindowFrameLoggingTelemetry::CloneWindow::`vftable';
  WindowFrameLoggingTelemetry::CloneWindow::StartActivity((WindowFrameLoggingTelemetry::CloneWindow *)&v34);
  v5 = *((_QWORD *)this + 39);
  if ( v5 )
  {
    if ( (_BYTE)v3 || (v27 = 0, !*(_DWORD *)(v5 + 280)) )
      v27 = 8;
    *(_BYTE *)(v5 + 92) = v27 | *(_BYTE *)(v5 + 92) & 0xF7;
  }
  v6 = *((_QWORD *)this + 42);
  v7 = 8 * v3;
  if ( v6 )
    *(_BYTE *)(v6 + 92) = v7 | *(_BYTE *)(v6 + 92) & 0xF7;
  v8 = *((_QWORD *)this + 72);
  if ( v8 )
    *(_BYTE *)(v8 + 92) = v7 | *(_BYTE *)(v8 + 92) & 0xF7;
  v9 = *((_QWORD *)this + 74);
  if ( v9 )
    *(_BYTE *)(v9 + 92) = v7 | *(_BYTE *)(v9 + 92) & 0xF7;
  v10 = *((_QWORD *)this + 70);
  if ( v10 )
    *(_BYTE *)(v10 + 92) = v7 | *(_BYTE *)(v10 + 92) & 0xF7;
  v11 = *((_QWORD *)this + 103);
  if ( v11 )
    *(_BYTE *)(v11 + 92) = v7 | *(_BYTE *)(v11 + 92) & 0xF7;
  v12 = 0;
  v13 = (char *)this + 528;
  do
  {
    if ( *(_QWORD *)v13 )
    {
      *(_BYTE *)(*(_QWORD *)v13 + 92LL) = v7 | *(_BYTE *)(*(_QWORD *)v13 + 92LL) & 0xF7;
      if ( !(_BYTE)v3 )
      {
        v14 = *(_QWORD *)v13;
        v15 = 0;
        if ( *(_QWORD *)(*(_QWORD *)v13 + 392LL) )
        {
          *(_BYTE *)(v14 + 288) |= 0x40u;
          v28 = *(_DWORD *)(v14 + 88);
          if ( (v28 & 0x10000) == 0 )
          {
            *(_DWORD *)(v14 + 88) = v28 | 0x10000;
            CVisual::PropagateDirtyChildren((CVisual *)v14);
          }
          v15 = CVisual::RenderRecursive((CVisual *)v14);
        }
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x160Fu, 0LL);
          goto LABEL_33;
        }
      }
    }
    ++v12;
    v13 += 8;
  }
  while ( v12 < 4 );
  SRWLock = 0LL;
  v16 = (8 * v3 + 2) | 1u;
  if ( (*((_DWORD *)this + 156) & 0x20) == 0 )
    v16 = (unsigned int)(8 * v3 + 2);
  v17 = CTopLevelWindow::CloneVisualTree(this, &SRWLock, v16);
  v15 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x1621u, 0LL);
  }
  else
  {
    *v32 = (struct CTopLevelWindow *)SRWLock;
    v18 = *((_QWORD *)this + 39);
    if ( v18 )
      *(_BYTE *)(v18 + 92) &= ~8u;
    v19 = *((_QWORD *)this + 42);
    if ( v19 )
      *(_BYTE *)(v19 + 92) &= ~8u;
    v20 = *((_QWORD *)this + 72);
    if ( v20 )
      *(_BYTE *)(v20 + 92) &= ~8u;
    v21 = *((_QWORD *)this + 74);
    if ( v21 )
      *(_BYTE *)(v21 + 92) &= ~8u;
    v22 = *((_QWORD *)this + 70);
    if ( v22 )
      *(_BYTE *)(v22 + 92) &= ~8u;
    v23 = *((_QWORD *)this + 103);
    if ( v23 )
      *(_BYTE *)(v23 + 92) &= ~8u;
  }
LABEL_33:
  wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(&v34, &SRWLock);
  v24 = wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowFrameLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
          v37,
          (unsigned int)v15,
          &v32);
  v25 = SRWLock;
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v24 )
  {
    wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
      &v34,
      (unsigned int)v32);
  }
  else
  {
    v29 = *(_DWORD **)(wil::details::static_lazy<WindowFrameLogging>::get(
                         v25,
                         _lambda_e6d4de8c865c86d40bfbebb968f8a12c_::_lambda_invoker_cdecl_)
                     + 8);
    if ( *v29 > 5u )
    {
      LODWORD(v32) = GetCurrentThreadId();
      LODWORD(SRWLock) = v15;
      v33 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (_DWORD)v29,
        (unsigned int)&unk_180125BC5,
        v37 + 8,
        v30,
        (__int64)&v33,
        (__int64)&SRWLock,
        (__int64)&v32);
    }
  }
  if ( v36 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v35);
  WindowFrameLoggingTelemetry::CloneWindow::~CloneWindow((WindowFrameLoggingTelemetry::CloneWindow *)&v34);
  return (unsigned int)v15;
}
