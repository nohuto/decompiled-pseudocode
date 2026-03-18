/*
 * XREFs of ?CreateClientVmBusChannel@@YAJPEAXPEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHANNEL_STATE_CHANGE_CALLBACKS@@P6AXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@0II@ZP6AX5I@ZPEAPEAU5@@Z @ 0x140214B24
 * Callers:
 *     ?CreateVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1402151C0 (-CreateVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?CreateVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGADAPTER@@@Z @ 0x14021545C (-CreateVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?EnsureClientVmBusInterface@@YAJXZ @ 0x14021762C (-EnsureClientVmBusInterface@@YAJXZ.c)
 *     ?VmBusInterfaceDereference@@YAXXZ @ 0x14021DE48 (-VmBusInterfaceDereference@@YAXXZ.c)
 *     ?DestroyVmBusChannel@@YAXPEAUVMBCHANNEL__@@@Z @ 0x140407F4C (-DestroyVmBusChannel@@YAXPEAUVMBCHANNEL__@@@Z.c)
 */

__int64 __fastcall CreateClientVmBusChannel(
        __int64 a1,
        struct _DEVICE_OBJECT *a2,
        struct _GUID *a3,
        struct _GUID *a4,
        const struct _UNICODE_STRING *a5,
        struct _VMB_CHANNEL_STATE_CHANGE_CALLBACKS *a6,
        void (*a7)(struct VMBCHANNEL__ *, struct VMBPACKETCOMPLETION__ *, void *, unsigned int, unsigned int),
        void (*a8)(struct VMBCHANNEL__ *, unsigned int),
        struct VMBCHANNEL__ **a9)
{
  int v13; // ebx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v17; // edi
  __int64 v18; // rcx
  __int64 v19; // r8
  struct VMBCHANNEL__ *v20; // [rsp+50h] [rbp-31h] BYREF
  int v21; // [rsp+58h] [rbp-29h] BYREF
  __int64 v22; // [rsp+60h] [rbp-21h]
  char v23; // [rsp+68h] [rbp-19h]
  struct _VMB_CHANNEL_STATE_CHANGE_CALLBACKS *v24; // [rsp+70h] [rbp-11h]
  void (*v25)(struct VMBCHANNEL__ *, struct VMBPACKETCOMPLETION__ *, void *, unsigned int, unsigned int); // [rsp+78h] [rbp-9h]

  v21 = -1;
  v24 = a6;
  v25 = a7;
  v22 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v23 = 1;
    v21 = 2135;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, (__int64)a3, 2135);
  }
  else
  {
    v23 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v21, 2135);
  *a9 = 0LL;
  v13 = EnsureClientVmBusInterface();
  if ( v13 >= 0 )
  {
    v20 = 0LL;
    v17 = ((__int64 (__fastcall *)(struct _DEVICE_OBJECT *, _QWORD, struct VMBCHANNEL__ **))qword_14015D330)(
            a2,
            0LL,
            &v20);
    if ( v17 < 0 )
      goto LABEL_14;
    ((void (__fastcall *)(struct VMBCHANNEL__ *, __int64))qword_14015D3A0)(v20, 0x20000LL);
    ((void (__fastcall *)(struct VMBCHANNEL__ *, __int64, __int64))qword_14015D418)(v20, 256LL, 256LL);
    ((void (__fastcall *)(struct VMBCHANNEL__ *, struct _VMB_CHANNEL_STATE_CHANGE_CALLBACKS *))qword_14015D3B0)(
      v20,
      v24);
    ((void (__fastcall *)(struct VMBCHANNEL__ *, void (*)(struct VMBCHANNEL__ *, struct VMBPACKETCOMPLETION__ *, void *, unsigned int, unsigned int), _QWORD))qword_14015D3A8)(
      v20,
      v25,
      0LL);
    ((void (__fastcall *)(struct VMBCHANNEL__ *, __int64))qword_14015D3F8)(v20, a1);
    v17 = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *, struct _GUID *, struct _GUID *, _QWORD))qword_14015D420)(
            v20,
            a3,
            a4,
            0LL);
    if ( v17 < 0
      || (((void (__fastcall *)(struct VMBCHANNEL__ *, _QWORD))qword_14015D3E8)(v20, 0LL),
          ((void (__fastcall *)(struct VMBCHANNEL__ *, const struct _UNICODE_STRING *))qword_14015D390)(v20, a5),
          v17 = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *))qword_14015D360)(v20),
          v17 < 0) )
    {
LABEL_14:
      if ( v20 )
      {
        WdLogSingleEntry1(2LL, v17);
        WdLogGlobalForLineNumber = 15205;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Failed to create host VM bus channel. Status: 0x%I64x",
          v17,
          0LL,
          0LL,
          0LL,
          0LL);
        DestroyVmBusChannel(v20);
      }
      else
      {
        VmBusInterfaceDereference();
      }
    }
    else
    {
      ((void (__fastcall *)(struct VMBCHANNEL__ *))qword_14015D410)(v20);
      *a9 = v20;
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
    if ( v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit, v19, v21);
    return (unsigned int)v17;
  }
  else
  {
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
    if ( v23 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit, v15, v21);
    }
    return (unsigned int)v13;
  }
}
