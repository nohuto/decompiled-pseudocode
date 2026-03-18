/*
 * XREFs of PopSleepDeviceList @ 0x140431774
 * Callers:
 *     PoBroadcastSystemState @ 0x140B54B5C (PoBroadcastSystemState.c)
 * Callees:
 *     KeWaitForMultipleObjects @ 0x14027C240 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     PopIsNotifyForDirectedPowerTransition @ 0x1404319F8 (PopIsNotifyForDirectedPowerTransition.c)
 *     PopPushPowerStateTransitionRecordWithCallback @ 0x140431D24 (PopPushPowerStateTransitionRecordWithCallback.c)
 *     PopIssueDirectedPowerTransition @ 0x140AB3DFC (PopIssueDirectedPowerTransition.c)
 *     PopNotifyDevice @ 0x140B5A320 (PopNotifyDevice.c)
 *     PoDelistPowerStateTransitionBlocker @ 0x140B5A8B4 (PoDelistPowerStateTransitionBlocker.c)
 */

int __fastcall PopSleepDeviceList(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r15d
  int v7; // ebx
  int v8; // esi
  int v9; // r12d
  _QWORD *v10; // r14
  _QWORD *v11; // rax
  _BYTE *v12; // rax
  _QWORD *v13; // rsi
  __int64 v14; // rax
  _QWORD *v15; // rcx
  __int16 v17; // [rsp+48h] [rbp-49h] BYREF
  char v18; // [rsp+4Ah] [rbp-47h]
  char v19; // [rsp+4Bh] [rbp-46h]
  int v20; // [rsp+4Ch] [rbp-45h]
  _QWORD v21[2]; // [rsp+50h] [rbp-41h] BYREF
  _BYTE v22[4]; // [rsp+60h] [rbp-31h] BYREF
  int v23; // [rsp+64h] [rbp-2Dh]
  _QWORD v24[2]; // [rsp+68h] [rbp-29h] BYREF
  int v25; // [rsp+78h] [rbp-19h]
  int v26; // [rsp+7Ch] [rbp-15h]
  _BYTE v27[4]; // [rsp+80h] [rbp-11h] BYREF
  int v28; // [rsp+84h] [rbp-Dh]
  _QWORD v29[2]; // [rsp+88h] [rbp-9h] BYREF
  int v30; // [rsp+98h] [rbp+7h]
  int v31; // [rsp+9Ch] [rbp+Bh]
  PVOID Object[2]; // [rsp+A0h] [rbp+Fh] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+B0h] [rbp+1Fh] BYREF

  v4 = *(_DWORD *)(a2 + 4);
  v19 = 0;
  v22[1] = 0;
  v22[3] = 0;
  v26 = 0;
  v7 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v8 = 0;
  v27[1] = 0;
  v27[3] = 0;
  v31 = 0;
  if ( (DWORD1(PopCurrentBroadcast) & 0x800000) != 0 )
    v9 = -1073741779;
  else
    v9 = PopPushPowerStateTransitionRecordWithCallback(
           KeGetCurrentThread()->ApcState.Process,
           (unsigned int)KeGetCurrentThread(),
           a1,
           2,
           (__int64)PopBroadcastBlameBugcheckCallback);
  v10 = (_QWORD *)(a2 + 24);
  v11 = (_QWORD *)*v10;
  while ( v11 != v10 )
  {
    v11 = (_QWORD *)*v11;
    ++v8;
  }
  v17 = 1;
  v21[1] = v21;
  v21[0] = v21;
  v29[1] = v29;
  v29[0] = v29;
  v24[1] = v24;
  v24[0] = v24;
  *(_QWORD *)(a1 + 24) = &v17;
  *(_QWORD *)(a1 + 32) = v27;
  *(_QWORD *)(a1 + 40) = v22;
  Object[0] = &v17;
  v12 = v27;
  Object[1] = v27;
  v18 = 6;
  v20 = 0;
  v27[0] = 5;
  v27[2] = 8;
  v28 = v8;
  v30 = v4;
  v22[0] = 5;
  v22[2] = 8;
  v23 = 0;
  v25 = v4;
  while ( v4 > 0 )
  {
    LODWORD(v12) = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL);
    if ( *(int *)(a1 + 448) < 0 )
      break;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)qword_140F0AA30 + 1, &LockHandle);
    v13 = (_QWORD *)*v10;
    if ( *(_QWORD **)(*v10 + 8LL) != v10
      || (v14 = *v13, *(_QWORD **)(*v13 + 8LL) != v13)
      || (*v10 = v14, *(_QWORD *)(v14 + 8) = v10, v15 = *(_QWORD **)(a1 + 440), *v15 != a1 + 432) )
    {
      __fastfail(3u);
    }
    v13[1] = v15;
    *v13 = a1 + 432;
    *v15 = v13;
    *(_QWORD *)(a1 + 440) = v13;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    --v4;
    ++v7;
    if ( (unsigned __int8)PopIsNotifyForDirectedPowerTransition(v13) )
      LODWORD(v12) = PopIssueDirectedPowerTransition(a1, v13);
    else
      LODWORD(v12) = PopNotifyDevice(a1, v13);
    if ( (PopSimulate & 0x80000) != 0 )
    {
      while ( v7 > 0 )
      {
        LODWORD(v12) = KeWaitForSingleObject(v22, Executive, 0, 0, 0LL);
        --v7;
      }
    }
  }
  while ( v7 > 0 )
  {
    LODWORD(v12) = KeWaitForSingleObject(v22, Executive, 0, 0, 0LL);
    --v7;
  }
  if ( v9 >= 0 )
    LODWORD(v12) = PoDelistPowerStateTransitionBlocker(a1, a2, a3, a4);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  return (int)v12;
}
