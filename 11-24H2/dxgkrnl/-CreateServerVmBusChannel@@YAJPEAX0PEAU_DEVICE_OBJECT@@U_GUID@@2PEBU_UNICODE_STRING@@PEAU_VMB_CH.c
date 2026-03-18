/*
 * XREFs of ?CreateServerVmBusChannel@@YAJPEAX0PEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHANNEL_STATE_CHANGE_CALLBACKS@@P6AXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@0II@ZP6AX5I@ZIPEAPEAU5@@Z @ 0x14021B494
 * Callers:
 *     ?CreateVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEAXPEAVDXGPROCESSVMWP@@@Z @ 0x14021BD7C (-CreateVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEAXPEAVDXGPROCESSVMWP@@@Z.c)
 *     ?CreateVmBusChannel@DXG_HOST_VIRTUALGPU_VMBUS@@QEAAJPEAXPEAUDXGK_VIRTUAL_GPU_PARAV@@@Z @ 0x14021BF2C (-CreateVmBusChannel@DXG_HOST_VIRTUALGPU_VMBUS@@QEAAJPEAXPEAUDXGK_VIRTUAL_GPU_PARAV@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?VmBusInterfaceDereference@@YAXXZ @ 0x1402242B8 (-VmBusInterfaceDereference@@YAXXZ.c)
 *     ?EnsureServerVmBusInterface@@YAJXZ @ 0x1403F7138 (-EnsureServerVmBusInterface@@YAJXZ.c)
 */

__int64 __fastcall CreateServerVmBusChannel(
        __int64 a1,
        void *a2,
        struct _DEVICE_OBJECT *a3,
        struct _GUID *a4,
        struct _GUID *a5,
        const struct _UNICODE_STRING *a6,
        struct _VMB_CHANNEL_STATE_CHANGE_CALLBACKS *a7,
        void (*a8)(struct VMBCHANNEL__ *, struct VMBPACKETCOMPLETION__ *, void *, unsigned int, unsigned int),
        void (*a9)(struct VMBCHANNEL__ *, unsigned int),
        unsigned int a10,
        struct VMBCHANNEL__ **a11)
{
  __int64 v12; // rsi
  __int64 v15; // rdx
  int v16; // ebx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // r8
  struct VMBCHANNEL__ *v23; // [rsp+58h] [rbp-49h] BYREF
  __int128 v24; // [rsp+68h] [rbp-39h] BYREF
  __int128 v25; // [rsp+78h] [rbp-29h] BYREF
  int v26; // [rsp+88h] [rbp-19h] BYREF
  __int64 v27; // [rsp+90h] [rbp-11h]
  char v28; // [rsp+98h] [rbp-9h]

  v26 = -1;
  v12 = (__int64)a3;
  v27 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v28 = 1;
    v26 = 2135;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, (__int64)a3, 2135);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v26, 2135);
  *a11 = 0LL;
  v16 = EnsureServerVmBusInterface();
  if ( v16 < 0 )
  {
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
    if ( v28 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit, v18, v26);
    }
    return (unsigned int)v16;
  }
  LOBYTE(v15) = 1;
  v23 = 0LL;
  LODWORD(v12) = ((__int64 (__fastcall *)(__int64, __int64, struct VMBCHANNEL__ **))qword_140160350)(v12, v15, &v23);
  if ( (int)v12 < 0 )
  {
LABEL_20:
    VmBusInterfaceDereference();
    goto LABEL_21;
  }
  LODWORD(v12) = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *, __int64))qword_1401605D8)(v23, a1);
  if ( (int)v12 < 0 )
    goto LABEL_19;
  LODWORD(v12) = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *, __int64))qword_1401603C0)(v23, 0x20000LL);
  if ( (int)v12 < 0 )
    goto LABEL_19;
  ((void (__fastcall *)(struct VMBCHANNEL__ *, void *))qword_140160418)(v23, a2);
  v25 = (__int128)*a4;
  v24 = (__int128)*a5;
  LODWORD(v12) = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *, __int128 *, __int128 *))qword_1401605C8)(
                   v23,
                   &v25,
                   &v24);
  if ( (int)v12 < 0 )
    goto LABEL_19;
  LODWORD(v12) = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *, struct _VMB_CHANNEL_STATE_CHANGE_CALLBACKS *))qword_1401603D0)(
                   v23,
                   a7);
  if ( (int)v12 < 0 )
    goto LABEL_19;
  LODWORD(v12) = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *, void (*)(struct VMBCHANNEL__ *, struct VMBPACKETCOMPLETION__ *, void *, unsigned int, unsigned int), void (*)(struct VMBCHANNEL__ *, unsigned int)))qword_1401603C8)(
                   v23,
                   a8,
                   a9);
  if ( (int)v12 < 0 )
    goto LABEL_19;
  ((void (__fastcall *)(struct VMBCHANNEL__ *, __int64))qword_1401605B0)(v23, 2LL);
  ((void (__fastcall *)(struct VMBCHANNEL__ *, const struct _UNICODE_STRING *))qword_1401603B0)(v23, a6);
  if ( a10 )
  {
    v20 = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *, _QWORD, _QWORD))qword_1401605B8)(v23, a10, 0LL);
    v12 = v20;
    if ( v20 < 0 )
    {
      WdLogSingleEntry1(2LL, v20);
      WdLogGlobalForLineNumber = 15286;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to reserve IO space: 0x%I64x",
        v12,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_19;
    }
  }
  LODWORD(v12) = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *))qword_140160380)(v23);
  if ( (int)v12 < 0 )
  {
LABEL_19:
    WdLogSingleEntry1(2LL, (int)v12);
    WdLogGlobalForLineNumber = 15303;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to create Host VmBus channel 0x%I64x",
      (int)v12,
      0LL,
      0LL,
      0LL,
      0LL);
    ((void (__fastcall *)(struct VMBCHANNEL__ *))qword_140160358)(v23);
    if ( (int)v12 >= 0 )
      goto LABEL_21;
    goto LABEL_20;
  }
  ((void (__fastcall *)(struct VMBCHANNEL__ *))qword_140160430)(v23);
  *a11 = v23;
LABEL_21:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
  if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit, v22, v26);
  return (unsigned int)v12;
}
