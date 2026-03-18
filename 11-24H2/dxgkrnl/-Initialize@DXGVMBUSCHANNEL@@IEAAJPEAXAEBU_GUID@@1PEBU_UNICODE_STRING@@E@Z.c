/*
 * XREFs of ?Initialize@DXGVMBUSCHANNEL@@IEAAJPEAXAEBU_GUID@@1PEBU_UNICODE_STRING@@E@Z @ 0x14020B4E0
 * Callers:
 *     ?Create@DXGVMBUSCHANNEL@@SAJPEAXAEBU_GUID@@1PEBU_UNICODE_STRING@@EPEAPEAV1@@Z @ 0x14020B3C0 (-Create@DXGVMBUSCHANNEL@@SAJPEAXAEBU_GUID@@1PEBU_UNICODE_STRING@@EPEAPEAV1@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?EnsureClientVmBusInterface@@YAJXZ @ 0x14021DC0C (-EnsureClientVmBusInterface@@YAJXZ.c)
 *     ?VmBusInterfaceDereference@@YAXXZ @ 0x1402242B8 (-VmBusInterfaceDereference@@YAXXZ.c)
 *     ?EnsureServerVmBusInterface@@YAJXZ @ 0x1403F7138 (-EnsureServerVmBusInterface@@YAJXZ.c)
 */

__int64 __fastcall DXGVMBUSCHANNEL::Initialize(
        DXGVMBUSCHANNEL *this,
        void *a2,
        const struct _GUID *a3,
        const struct _GUID *a4,
        const struct _UNICODE_STRING *a5,
        unsigned __int8 a6)
{
  bool v7; // zf
  struct _KEVENT *v10; // rax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rbx
  const wchar_t *v15; // r9
  int v16; // eax
  _QWORD *v17; // rbx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // eax
  const wchar_t *v22; // r9
  int v23; // eax
  _QWORD *v24; // r14
  int v25; // eax
  const wchar_t *v26; // r9
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  __int64 v31; // rcx
  int v32; // eax
  int v33; // eax
  __int128 v35; // [rsp+58h] [rbp-29h] BYREF
  __int128 v36; // [rsp+68h] [rbp-19h] BYREF
  _DWORD v37[2]; // [rsp+78h] [rbp-9h] BYREF
  __int64 v38; // [rsp+80h] [rbp-1h]
  __int64 (__fastcall *v39)(); // [rsp+88h] [rbp+7h]
  __int64 (__fastcall *v40)(); // [rsp+90h] [rbp+Fh]
  __int64 (__fastcall *v41)(); // [rsp+98h] [rbp+17h]
  __int64 (__fastcall *v42)(); // [rsp+A0h] [rbp+1Fh]
  unsigned int v43; // [rsp+100h] [rbp+7Fh]

  v7 = a6 == 0;
  v43 = 2;
  *((_BYTE *)this + 27) = !v7;
  if ( v7 )
  {
    v10 = (struct _KEVENT *)operator new(0x18uLL, 0x4B677844u, 64LL);
    *((_QWORD *)this + 4) = v10;
    if ( !v10 )
    {
      WdLogSingleEntry2(2LL, -1073741801LL, this);
      WdLogGlobalForLineNumber = 198;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"m_pChannelStartEvent can't be allocated. Returning 0x%I64x",
        -1073741801LL,
        (__int64)this,
        0LL,
        0LL,
        0LL);
      goto LABEL_31;
    }
    KeInitializeEvent(v10, NotificationEvent, 0);
    v11 = EnsureClientVmBusInterface();
    LODWORD(v13) = v11;
    if ( v11 < 0 )
    {
      v14 = v11;
      WdLogSingleEntry2(2LL, v11, this);
      v15 = L"EnsureClientVmBusInterface failed. Returning 0x%I64x";
      WdLogGlobalForLineNumber = 221;
LABEL_8:
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v15, v14, (__int64)this, 0LL, 0LL, 0LL);
      goto LABEL_30;
    }
  }
  else
  {
    v16 = EnsureServerVmBusInterface();
    LODWORD(v13) = v16;
    if ( v16 < 0 )
    {
      v14 = v16;
      WdLogSingleEntry2(2LL, v16, this);
      v15 = L"EnsureServerVmBusInterface failed. Returning 0x%I64x";
      WdLogGlobalForLineNumber = 211;
      goto LABEL_8;
    }
  }
  v17 = (_QWORD *)((char *)this + 16);
  LOBYTE(v12) = a6;
  v18 = ((__int64 (__fastcall *)(struct _DRIVER_OBJECT *, __int64, char *))qword_140160350)(
          g_pDriverObject->DriverObject,
          v12,
          (char *)this + 16);
  v13 = v18;
  if ( v18 < 0 )
  {
    WdLogSingleEntry2(2LL, v18, this);
    WdLogGlobalForLineNumber = 234;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"VmbChannelAllocate failed. Returning 0x%I64x",
      v13,
      (__int64)this,
      0LL,
      0LL,
      0LL);
    VmBusInterfaceDereference();
    goto LABEL_30;
  }
  LOBYTE(v19) = 1;
  ((void (__fastcall *)(_QWORD, __int64))qword_140160408)(*v17, v19);
  v20 = *v17;
  if ( a6 )
  {
    v35 = DxgkVailVmBusChannel;
    v36 = DxgkVailVmBusChannelType;
    v21 = ((__int64 (__fastcall *)(__int64, __int128 *, __int128 *))qword_1401605C8)(v20, &v36, &v35);
    v13 = v21;
    if ( v21 < 0 )
    {
      WdLogSingleEntry2(2LL, v21, this);
      WdLogGlobalForLineNumber = 257;
      v22 = L"VmbServerChannelInitSetTargetInterfaceId failed. Returning 0x%I64x";
LABEL_17:
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v22, v13, (__int64)this, 0LL, 0LL, 0LL);
      goto LABEL_18;
    }
    if ( a2 )
    {
      v23 = ((__int64 (__fastcall *)(_QWORD, void *))qword_1401605D8)(*v17, a2);
      v13 = v23;
      if ( v23 < 0 )
      {
        WdLogSingleEntry2(2LL, v23, this);
        v22 = L"VmbServerChannelInitSetVmbusHandle failed. Returning 0x%I64x";
        WdLogGlobalForLineNumber = 273;
        goto LABEL_17;
      }
    }
    else
    {
      v43 = 3;
    }
    v27 = ((__int64 (__fastcall *)(_QWORD, _QWORD))qword_1401605B0)(*v17, v43);
    LODWORD(v13) = v27;
    if ( v27 < 0 )
    {
      v14 = v27;
      WdLogSingleEntry2(2LL, v27, this);
      v15 = L"VmbServerChannelInitSetFlags failed. Returning 0x%I64x";
      WdLogGlobalForLineNumber = 289;
      goto LABEL_8;
    }
  }
  else
  {
    v28 = ((__int64 (__fastcall *)(__int64, __int128 *, __int128 *, _QWORD))qword_140160440)(
            v20,
            &DxgkVailVmBusChannelType,
            &DxgkVailVmBusChannel,
            0LL);
    LODWORD(v13) = v28;
    if ( v28 < 0 )
    {
      v14 = v28;
      WdLogSingleEntry2(2LL, v28, this);
      v15 = L"VmbClientChannelInitSetTargetPnp failed. Returning 0x%I64x";
      WdLogGlobalForLineNumber = 303;
      goto LABEL_8;
    }
  }
  if ( a5 )
    ((void (__fastcall *)(_QWORD))qword_1401603B0)(*v17);
  v29 = ((__int64 (__fastcall *)(_QWORD, __int64))qword_1401603C0)(*v17, 2048LL);
  v13 = v29;
  if ( v29 < 0 )
  {
    WdLogSingleEntry2(2LL, v29, this);
    WdLogGlobalForLineNumber = 320;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"VmbChannelInitSetMaximumPacketSize failed. Returning 0x%I64x",
      v13,
      (__int64)this,
      0LL,
      0LL,
      0LL);
  }
LABEL_30:
  if ( a6 )
  {
LABEL_18:
    v24 = (_QWORD *)((char *)this + 16);
    if ( (int)v13 < 0 )
    {
LABEL_40:
      ((void (__fastcall *)(_QWORD))qword_140160358)(*v24);
      *v24 = 0LL;
      VmBusInterfaceDereference();
      return (unsigned int)v13;
    }
    goto LABEL_19;
  }
LABEL_31:
  v24 = (_QWORD *)((char *)this + 16);
  v30 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64))qword_140160438)(*((_QWORD *)this + 2), 8LL, 8LL);
  v13 = v30;
  if ( v30 < 0 )
  {
    WdLogSingleEntry2(2LL, v30, this);
    v26 = L"VmbClientChannelInitSetRingBufferPageCount failed. Returning 0x%I64x";
    WdLogGlobalForLineNumber = 333;
    goto LABEL_35;
  }
LABEL_19:
  ((void (__fastcall *)(_QWORD, DXGVMBUSCHANNEL *))qword_140160418)(*v24, this);
  v25 = ((__int64 (__fastcall *)(_QWORD, void *, _QWORD))qword_1401603C8)(*v24, &ProcessRingPacket, 0LL);
  v13 = v25;
  if ( v25 < 0 )
  {
    WdLogSingleEntry2(2LL, v25, this);
    v26 = L"VmbChannelInitSetProcessPacketCallbacks failed. Returning 0x%I64x";
    WdLogGlobalForLineNumber = 348;
LABEL_35:
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v26, v13, (__int64)this, 0LL, 0LL, 0LL);
    goto LABEL_40;
  }
  v31 = *v24;
  v38 = 0LL;
  v39 = ProcessChannelClosed;
  v40 = ProcessChannelSuspended;
  v41 = ProcessChannelStarted;
  v42 = ProcessChannelPostStarted;
  v37[0] = 1;
  v37[1] = 48;
  v32 = ((__int64 (__fastcall *)(__int64, _DWORD *))qword_1401603D0)(v31, v37);
  v13 = v32;
  if ( v32 < 0 )
  {
    WdLogSingleEntry2(2LL, v32, this);
    v26 = L"VmbChannelInitSetStateChangeCallbacks failed. Returning 0x%I64x";
    WdLogGlobalForLineNumber = 370;
    goto LABEL_35;
  }
  if ( !a6 )
  {
    v33 = ((__int64 (__fastcall *)(_QWORD))qword_140160380)(*v24);
    v13 = v33;
    if ( v33 < 0 )
    {
      WdLogSingleEntry2(2LL, v33, this);
      v26 = L"VmbChannelEnable failed. Returning 0x%I64x";
      WdLogGlobalForLineNumber = 381;
      goto LABEL_35;
    }
    *((_BYTE *)this + 24) = 1;
  }
  return (unsigned int)v13;
}
