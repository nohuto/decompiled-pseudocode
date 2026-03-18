/*
 * XREFs of ?CreateCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_CREATECOMPOSITIONSURFACE@@PEAU_DXGCOMPOSITIONMESSAGE_CREATECOMPOSITIONSURFACE_RETURN@@@Z @ 0x1401B5578
 * Callers:
 *     ?ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1401B6C90 (-ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x140019E18 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     ?Create@CompositionSurfaceObject@@SAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAPEAX@Z @ 0x140035F30 (-Create@CompositionSurfaceObject@@SAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAPEAX@Z.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x14003DDC0 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     ?Detach@CPROCESSATTACHHELPER@@QEAAXXZ @ 0x14004F730 (-Detach@CPROCESSATTACHHELPER@@QEAAXXZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x14004FB0C (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DXG_HOST_COMPOSITIONOBJECTCHANNEL::CreateCompositionSurfaceCallback(
        DXG_HOST_COMPOSITIONOBJECTCHANNEL *this,
        struct _DXGCOMPOSITIONMESSAGE_CREATECOMPOSITIONSURFACE *a2,
        struct _DXGCOMPOSITIONMESSAGE_CREATECOMPOSITIONSURFACE_RETURN *a3)
{
  struct CompositionSurfaceObject *v5; // rdi
  int v6; // eax
  __int64 v7; // r8
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rbx
  HANDLE v12; // rdi
  __int64 CurrentProcess; // rax
  int v14; // eax
  int v15; // eax
  struct _KPROCESS *v16; // rdx
  void **v18; // [rsp+20h] [rbp-89h]
  struct CompositionSurfaceObject *v19; // [rsp+50h] [rbp-59h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-51h] BYREF
  HANDLE v21; // [rsp+60h] [rbp-49h] BYREF
  struct _OBJECT_ATTRIBUTES v22; // [rsp+68h] [rbp-41h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+98h] [rbp-11h] BYREF
  char v24; // [rsp+C8h] [rbp+1Fh]

  v22.SecurityDescriptor = (PVOID)*((_QWORD *)this + 6);
  v21 = 0LL;
  Handle = 0LL;
  *(_QWORD *)&v22.Length = 48LL;
  v19 = 0LL;
  v5 = 0LL;
  memset(&v22.RootDirectory, 0, 24);
  v22.SecurityQualityOfService = 0LL;
  v18 = &v21;
  v6 = CompositionSurfaceObject::Create(0LL, &v22);
  v8 = v6;
  if ( v6 < 0 )
  {
    WdLogSingleEntry1(3LL, v6);
    WdLogGlobalForLineNumber = 227;
    goto LABEL_11;
  }
  v9 = CompositionSurfaceObject::ResolveHandle(v21, 2u, v7, &v19);
  v8 = v9;
  if ( v9 < 0 )
  {
    WdLogSingleEntry1(3LL, v9);
    WdLogGlobalForLineNumber = 242;
LABEL_7:
    v5 = v19;
    goto LABEL_11;
  }
  v11 = *((_QWORD *)this + 4);
  v12 = v21;
  CurrentProcess = PsGetCurrentProcess(v10);
  LODWORD(v18) = 0;
  v14 = ObDuplicateObject(CurrentProcess, v12, v11, &Handle, v18, 0, 6, 1);
  v8 = v14;
  if ( v14 < 0 )
  {
    WdLogSingleEntry1(3LL, v14);
    WdLogGlobalForLineNumber = 258;
    goto LABEL_7;
  }
  v5 = v19;
  v15 = (*(__int64 (__fastcall **)(_QWORD, struct CompositionSurfaceObject *, __int64))(**((_QWORD **)this + 1) + 56LL))(
          *((_QWORD *)this + 1),
          v19,
          17LL);
  if ( v15 )
  {
    *((_DWORD *)a3 + 3) = v15;
    v5 = 0LL;
    *((_QWORD *)a3 + 2) = Handle;
    goto LABEL_13;
  }
  v8 = -1073741801;
  WdLogSingleEntry1(6LL, -1073741801LL);
  WdLogGlobalForLineNumber = 277;
  DxgkLogInternalTriageEvent(
    0LL,
    262145LL,
    0xFFFFFFFFLL,
    L"AllocateHandle failed. Returning 0x%I64x",
    -1073741801LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_11:
  if ( Handle )
  {
    v16 = (struct _KPROCESS *)*((_QWORD *)this + 4);
    v24 = 0;
    CPROCESSATTACHHELPER::Attach(&ApcState, v16);
    ObCloseHandle(Handle, 1);
    CPROCESSATTACHHELPER::Detach(&ApcState);
  }
LABEL_13:
  if ( v21 )
    ObCloseHandle(v21, 1);
  if ( v5 )
    DxgkCompositionObject::Release(v5);
  *((_DWORD *)a3 + 1) = v8;
  return v8;
}
