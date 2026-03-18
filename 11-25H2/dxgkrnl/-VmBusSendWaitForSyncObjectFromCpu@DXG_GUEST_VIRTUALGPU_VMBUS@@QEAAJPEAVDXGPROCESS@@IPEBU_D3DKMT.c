/*
 * XREFs of ?VmBusSendWaitForSyncObjectFromCpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@E@Z @ 0x140228BDC
 * Callers:
 *     ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1401E08AC (-OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z.c)
 *     ?WaitFence@BLTQUEUE@@QEAAJ_KPEAVDXGDEVICE@@@Z @ 0x14027C528 (-WaitFence@BLTQUEUE@@QEAAJ_KPEAVDXGDEVICE@@@Z.c)
 *     ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@HPEAX1@Z @ 0x1402A61E0 (-DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x14001F610 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1400234D0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1400648D8 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x140182164 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPE.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1401821C4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402FACC0 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendWaitForSyncObjectFromCpu(
        struct DXGADAPTER **this,
        struct DXGPROCESS *a2,
        int a3,
        const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *a4,
        unsigned __int8 a5)
{
  bool v5; // cf
  struct DXGPROCESS *v7; // rdi
  struct _KEVENT *hAsyncEvent; // r14
  NTSTATUS v11; // eax
  int v12; // edi
  UINT ObjectCount; // eax
  struct DXGKVMB_COMMAND_BASE *v14; // r13
  _DWORD *v15; // r9
  UINT i; // edx
  const D3DKMT_HANDLE *ObjectHandleArray; // rax
  __int64 v18; // rdi
  D3DKMT_HANDLE v19; // ecx
  unsigned int v20; // eax
  __int64 v21; // r11
  int v22; // r8d
  __int64 v23; // rax
  char *v25; // [rsp+50h] [rbp-B0h]
  PVOID Object; // [rsp+58h] [rbp-A8h] BYREF
  PVOID v27[2]; // [rsp+60h] [rbp-A0h] BYREF
  struct _KEVENT Event; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v29[24]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v30[32]; // [rsp+A0h] [rbp-60h] BYREF
  struct DXGKVMB_COMMAND_BASE *v31[2]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v32; // [rsp+D0h] [rbp-30h]

  v5 = a4->ObjectCount < 0x2AAA;
  v7 = a2;
  v27[0] = a2;
  if ( !v5 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 9351;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"ObjectCount is too big", 9351LL, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v30, this[9], a5 == 0);
  if ( *((_DWORD *)this[9] + 50) == 1 )
  {
    hAsyncEvent = (struct _KEVENT *)a4->hAsyncEvent;
    memset(&Event, 0, sizeof(Event));
    if ( hAsyncEvent )
    {
      if ( (*((_DWORD *)v7 + 102) & 0x10) == 0 )
      {
        Object = 0LL;
        v11 = ObReferenceObjectByHandle(hAsyncEvent, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
        hAsyncEvent = (struct _KEVENT *)Object;
        v12 = v11;
        if ( v11 < 0 )
        {
          WdLogSingleEntry2(3LL, a4->hAsyncEvent, v11);
          WdLogGlobalForLineNumber = 9379;
LABEL_8:
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v30);
          return (unsigned int)v12;
        }
        v7 = (struct DXGPROCESS *)v27[0];
      }
    }
    else
    {
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      hAsyncEvent = &Event;
    }
    ObjectCount = a4->ObjectCount;
    *(_OWORD *)v31 = 0LL;
    v32 = 0;
    DXGVMBUSMESSAGE::InitializeMessage(
      (DXGVMBUSMESSAGE *)v31,
      (struct DXG_VMBUS_CHANNEL_BASE *)this,
      12 * ObjectCount + 56,
      0LL,
      0LL,
      0LL);
    v14 = v31[0];
    if ( !v31[0] )
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 9404;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        0xFFFFFFFFLL,
        L"Failed to allocate memory for DXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU",
        9404LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v12 = -1073741801;
      goto LABEL_13;
    }
    *((_BYTE *)v31[0] + 12) = 0;
    *((_DWORD *)v14 + 3) &= 0x1FFu;
    *(_QWORD *)v14 = 0LL;
    *((_DWORD *)v14 + 2) = 0;
    *((_QWORD *)v14 + 2) = 22LL;
    *((_DWORD *)v14 + 2) = DXGPROCESS::GetHostProcess(v7);
    *((_DWORD *)v14 + 8) = a4->Flags.0;
    *((_DWORD *)v14 + 6) = a3;
    *((_DWORD *)v14 + 7) = a4->ObjectCount;
    *((_QWORD *)v14 + 5) = hAsyncEvent;
    *((_BYTE *)v14 + 48) = hAsyncEvent != &Event;
    v25 = (char *)v14 + 4 * a4->ObjectCount + 56;
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v29, v7);
    v15 = v27[0];
    for ( i = 0; i < a4->ObjectCount; ++i )
    {
      ObjectHandleArray = a4->ObjectHandleArray;
      v18 = i;
      v19 = ObjectHandleArray[i];
      if ( v19 )
      {
        v20 = (v19 >> 6) & 0xFFFFFF;
        if ( v20 >= v15[74] )
          goto LABEL_30;
        v21 = *((_QWORD *)v15 + 35);
        if ( ((v19 >> 25) & 0x60) != (*(_BYTE *)(v21 + 16LL * v20 + 8) & 0x60) )
          goto LABEL_30;
        if ( (*(_DWORD *)(v21 + 16LL * v20 + 8) & 0x2000) != 0 )
          goto LABEL_30;
        v22 = *(_DWORD *)(v21 + 16LL * v20 + 8) & 0x1F;
        if ( !v22 )
          goto LABEL_30;
        if ( v22 != 11 )
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_30:
          WdLogSingleEntry1(3LL, a4->ObjectHandleArray[v18]);
          WdLogGlobalForLineNumber = 9427;
LABEL_31:
          v12 = -1073741811;
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v29);
          goto LABEL_13;
        }
        v23 = *(_QWORD *)(v21 + 16LL * v20);
        if ( !v23 )
          goto LABEL_30;
        *((_DWORD *)v14 + i + 14) = *(_DWORD *)(v23 + 44);
      }
      else if ( i )
      {
        WdLogSingleEntry1(3LL, ObjectHandleArray[i]);
        WdLogGlobalForLineNumber = 9441;
        goto LABEL_31;
      }
      *(_QWORD *)&v25[8 * v18] = a4->FenceValueArray[v18];
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v29);
    v12 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(
            (DXG_VMBUS_CHANNEL_BASE *)this,
            (unsigned __int8 *)v31[1],
            v31[0],
            v32);
    if ( v12 < 0 )
      goto LABEL_13;
    if ( !a4->hAsyncEvent )
    {
      v27[0] = (char *)this[9] + 3096;
      v27[1] = hAsyncEvent;
      if ( !KeWaitForMultipleObjects(2u, v27, WaitAny, Executive, 0, 0, 0LL, 0LL) )
      {
        WdLogSingleEntry1(4LL, this);
        WdLogGlobalForLineNumber = 9465;
        v12 = -1073741130;
LABEL_13:
        if ( hAsyncEvent )
        {
          if ( hAsyncEvent != &Event )
            ObfDereferenceObject(hAsyncEvent);
        }
        goto LABEL_16;
      }
      v12 = 0;
    }
LABEL_16:
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v31);
    goto LABEL_8;
  }
  WdLogSingleEntry0(3LL);
  WdLogGlobalForLineNumber = 9358;
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v30);
  return 3221226166LL;
}
