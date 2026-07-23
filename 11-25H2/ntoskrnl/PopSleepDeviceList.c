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

int __fastcall PopSleepDeviceList(__int64 a1, __int64 a2)
{
  int v2; // r15d
  int v5; // ebx
  int v6; // esi
  int v7; // r12d
  _QWORD *v8; // r14
  _QWORD *v9; // rax
  _BYTE *v10; // rax
  _QWORD *v11; // rsi
  __int64 v12; // rax
  _QWORD *v13; // rcx
  __int16 v15; // [rsp+48h] [rbp-49h] BYREF
  char v16; // [rsp+4Ah] [rbp-47h]
  char v17; // [rsp+4Bh] [rbp-46h]
  int v18; // [rsp+4Ch] [rbp-45h]
  _QWORD v19[2]; // [rsp+50h] [rbp-41h] BYREF
  _BYTE v20[4]; // [rsp+60h] [rbp-31h] BYREF
  int v21; // [rsp+64h] [rbp-2Dh]
  _QWORD v22[2]; // [rsp+68h] [rbp-29h] BYREF
  int v23; // [rsp+78h] [rbp-19h]
  int v24; // [rsp+7Ch] [rbp-15h]
  _BYTE v25[4]; // [rsp+80h] [rbp-11h] BYREF
  int v26; // [rsp+84h] [rbp-Dh]
  _QWORD v27[2]; // [rsp+88h] [rbp-9h] BYREF
  int v28; // [rsp+98h] [rbp+7h]
  int v29; // [rsp+9Ch] [rbp+Bh]
  PVOID Object[2]; // [rsp+A0h] [rbp+Fh] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+B0h] [rbp+1Fh] BYREF

  v2 = *(_DWORD *)(a2 + 4);
  v17 = 0;
  v20[1] = 0;
  v20[3] = 0;
  v24 = 0;
  v5 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = 0;
  v25[1] = 0;
  v25[3] = 0;
  v29 = 0;
  if ( (DWORD1(PopCurrentBroadcast) & 0x800000) != 0 )
    v7 = -1073741779;
  else
    v7 = PopPushPowerStateTransitionRecordWithCallback(
           KeGetCurrentThread()->ApcState.Process,
           (unsigned int)KeGetCurrentThread(),
           a1,
           2,
           (__int64)PopBroadcastBlameBugcheckCallback);
  v8 = (_QWORD *)(a2 + 24);
  v9 = (_QWORD *)*v8;
  while ( v9 != v8 )
  {
    v9 = (_QWORD *)*v9;
    ++v6;
  }
  v15 = 1;
  v19[1] = v19;
  v19[0] = v19;
  v27[1] = v27;
  v27[0] = v27;
  v22[1] = v22;
  v22[0] = v22;
  *(_QWORD *)(a1 + 24) = &v15;
  *(_QWORD *)(a1 + 32) = v25;
  *(_QWORD *)(a1 + 40) = v20;
  Object[0] = &v15;
  v10 = v25;
  Object[1] = v25;
  v16 = 6;
  v18 = 0;
  v25[0] = 5;
  v25[2] = 8;
  v26 = v6;
  v28 = v2;
  v20[0] = 5;
  v20[2] = 8;
  v21 = 0;
  v23 = v2;
  while ( v2 > 0 )
  {
    LODWORD(v10) = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL);
    if ( *(int *)(a1 + 448) < 0 )
      break;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)qword_140F0AA30 + 1, &LockHandle);
    v11 = (_QWORD *)*v8;
    if ( *(_QWORD **)(*v8 + 8LL) != v8
      || (v12 = *v11, *(_QWORD **)(*v11 + 8LL) != v11)
      || (*v8 = v12, *(_QWORD *)(v12 + 8) = v8, v13 = *(_QWORD **)(a1 + 440), *v13 != a1 + 432) )
    {
      __fastfail(3u);
    }
    v11[1] = v13;
    *v11 = a1 + 432;
    *v13 = v11;
    *(_QWORD *)(a1 + 440) = v11;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    --v2;
    ++v5;
    if ( (unsigned __int8)PopIsNotifyForDirectedPowerTransition(v11) )
      LODWORD(v10) = PopIssueDirectedPowerTransition(a1, v11);
    else
      LODWORD(v10) = PopNotifyDevice(a1, v11);
    if ( (PopSimulate & 0x80000) != 0 )
    {
      while ( v5 > 0 )
      {
        LODWORD(v10) = KeWaitForSingleObject(v20, Executive, 0, 0, 0LL);
        --v5;
      }
    }
  }
  while ( v5 > 0 )
  {
    LODWORD(v10) = KeWaitForSingleObject(v20, Executive, 0, 0, 0LL);
    --v5;
  }
  if ( v7 >= 0 )
    LODWORD(v10) = PoDelistPowerStateTransitionBlocker();
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  return (int)v10;
}
