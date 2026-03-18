/*
 * XREFs of ?DrtTestSignalEventCb@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1401C66C4
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x14041AC88 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140015500 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x140019B00 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?CallDxgkSignalEventCbAtDispatch@@YAJPEBU_DXGKARGCB_SIGNALEVENT@@@Z @ 0x14006EF80 (-CallDxgkSignalEventCbAtDispatch@@YAJPEBU_DXGKARGCB_SIGNALEVENT@@@Z.c)
 *     DxgkSignalEventCB @ 0x14007B7C0 (DxgkSignalEventCB.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@PEAVDXGPAGINGQUEUE@@PEAE_N4@Z @ 0x14018061C (-GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@PE.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1401821C4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z @ 0x1401EE930 (-GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z.c)
 *     ?VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS@@IPEAE@Z @ 0x140224378 (-VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DrtTestSignalEventCb(struct ADAPTER_RENDER **a1, struct _D3DKMT_DRT_ESCAPE_HEAD *a2)
{
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v5; // r14
  __int64 v6; // rdi
  unsigned int v7; // ebx
  volatile signed __int32 *v8; // r15
  unsigned int v9; // eax
  __int64 v10; // rdx
  int v11; // ecx
  unsigned __int8 v12; // r8
  __int64 v13; // rax
  const wchar_t *v14; // r9
  unsigned int v16; // ebx
  unsigned int v17; // edi
  unsigned int HostProcess; // eax
  int v19; // eax
  void *v20; // rax
  int DxgAdapterSyncObject; // eax
  struct _KTHREAD **v22; // rcx
  _QWORD *v23; // rcx
  int v24; // eax
  _DXGKARGCB_SIGNALEVENT v25; // [rsp+50h] [rbp-48h] BYREF
  struct DXGADAPTERSYNCOBJECT *v26; // [rsp+A8h] [rbp+10h] BYREF

  if ( *((_DWORD *)a2 + 1) < 0x20u )
    return 3221225485LL;
  *(_QWORD *)&v25.0 = 0LL;
  v26 = 0LL;
  Current = DXGPROCESS::GetCurrent();
  v5 = Current;
  if ( !a1 || !Current )
    return 3221225485LL;
  v6 = 0LL;
  if ( !*((_BYTE *)a2 + 25) )
    goto LABEL_19;
  v7 = *((_DWORD *)a2 + 4);
  v8 = (volatile signed __int32 *)((char *)Current + 248);
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
  v9 = (v7 >> 6) & 0xFFFFFF;
  if ( v9 < *((_DWORD *)v5 + 74) )
  {
    v10 = *((_QWORD *)v5 + 35);
    if ( ((v7 >> 25) & 0x60) == (*(_BYTE *)(v10 + 16LL * v9 + 8) & 0x60)
      && (*(_DWORD *)(v10 + 16LL * v9 + 8) & 0x2000) == 0 )
    {
      v11 = *(_DWORD *)(v10 + 16LL * v9 + 8) & 0x1F;
      if ( v11 )
      {
        if ( v11 == 8 )
        {
          v6 = *(_QWORD *)(v10 + 16LL * v9);
          goto LABEL_12;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  v6 = 0LL;
LABEL_12:
  _InterlockedDecrement(v8 + 4);
  ExReleasePushLockSharedEx(v8, 0LL);
  KeLeaveCriticalRegion();
  if ( !v6 )
  {
    WdLogSingleEntry1(2LL, *((_QWORD *)a2 + 2));
    v13 = *((_QWORD *)a2 + 2);
    v14 = L"Invalid sync object handle: 0x%I64x";
    WdLogGlobalForLineNumber = 92;
LABEL_14:
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v14, v13, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  if ( !*((_BYTE *)a1 + 209) )
    goto LABEL_23;
  *((_QWORD *)a2 + 2) = DXGSYNCOBJECT::GetHostHandle((DXGSYNCOBJECT *)v6, *((_DWORD *)a2 + 4), v12);
LABEL_19:
  if ( *((_BYTE *)a1 + 209) )
  {
    v16 = *((_DWORD *)a2 + 1);
    v17 = *((_DWORD *)a1 + 1188);
    HostProcess = DXGPROCESS::GetHostProcess(v5);
    v19 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(a1 + 583),
            HostProcess,
            v17,
            0,
            0,
            D3DKMT_ESCAPE_DRT_TEST,
            0,
            v16,
            (unsigned __int8 *)a2);
    v6 = v19;
    if ( v19 < 0 )
    {
      WdLogSingleEntry1(2LL, v19);
      WdLogGlobalForLineNumber = 114;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Paravirtualized escape failed: 0x%I64x",
        v6,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    return (unsigned int)v6;
  }
LABEL_23:
  v20 = (void *)*((_QWORD *)v5 + 8);
  v25.hDxgkProcess = v20;
  if ( !*((_BYTE *)a2 + 25) )
  {
    if ( !v20 )
      return 3221225485LL;
    v25.hEvent = (HANDLE)*((_QWORD *)a2 + 2);
LABEL_31:
    if ( *((_BYTE *)a2 + 24) )
      v24 = CallDxgkSignalEventCbAtDispatch(&v25);
    else
      v24 = DxgkSignalEventCB(&v25);
    LODWORD(v6) = v24;
    return (unsigned int)v6;
  }
  v25.Flags |= 1u;
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v6 + 32));
  DxgAdapterSyncObject = DXGSYNCOBJECT::GetDxgAdapterSyncObject((DXGSYNCOBJECT *)v6, a1[391], &v26, 0LL, 0LL, 0, 0);
  v22 = (struct _KTHREAD **)(v6 + 32);
  LODWORD(v6) = DxgAdapterSyncObject;
  DXGFASTMUTEX::Release(v22);
  if ( (int)v6 >= 0 )
  {
    v23 = (_QWORD *)*((_QWORD *)v26 + 5);
    v25.hEvent = v23;
    if ( !v23 || !v23[1] )
    {
      WdLogSingleEntry0(2LL);
      v13 = 136LL;
      v14 = L"Invalid CpuEvent object";
      WdLogGlobalForLineNumber = 136;
      goto LABEL_14;
    }
    goto LABEL_31;
  }
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 129;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"Failed to get adapter sync object",
    129LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return (unsigned int)v6;
}
