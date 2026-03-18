/*
 * XREFs of PopWakeDeviceList @ 0x14043154C
 * Callers:
 *     PoBroadcastSystemState @ 0x140B54B5C (PoBroadcastSystemState.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     PopIsNotifyForDirectedPowerTransition @ 0x1404319F8 (PopIsNotifyForDirectedPowerTransition.c)
 *     PopPushPowerStateTransitionRecordWithCallback @ 0x140431D24 (PopPushPowerStateTransitionRecordWithCallback.c)
 *     PopIssueDirectedPowerTransition @ 0x140AB3DFC (PopIssueDirectedPowerTransition.c)
 *     PopNotifyDevice @ 0x140B5A320 (PopNotifyDevice.c)
 *     PoDelistPowerStateTransitionBlocker @ 0x140B5A8B4 (PoDelistPowerStateTransitionBlocker.c)
 */

int __fastcall PopWakeDeviceList(_QWORD *a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  int v6; // r12d
  __int64 v7; // rcx
  int v8; // r14d
  int v9; // ebx
  _QWORD *v10; // r15
  _QWORD *v11; // rax
  _BYTE *v12; // rax
  _QWORD *v13; // rdi
  __int64 v14; // rax
  _QWORD *v15; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-29h] BYREF
  _BYTE v18[4]; // [rsp+50h] [rbp-11h] BYREF
  int v19; // [rsp+54h] [rbp-Dh]
  _QWORD v20[2]; // [rsp+58h] [rbp-9h] BYREF
  int v21; // [rsp+68h] [rbp+7h]
  int v22; // [rsp+6Ch] [rbp+Bh]
  _BYTE Object[4]; // [rsp+70h] [rbp+Fh] BYREF
  int v24; // [rsp+74h] [rbp+13h]
  _QWORD v25[2]; // [rsp+78h] [rbp+17h] BYREF
  int v26; // [rsp+88h] [rbp+27h]
  int v27; // [rsp+8Ch] [rbp+2Bh]

  v18[1] = 0;
  v18[3] = 0;
  v22 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  Object[1] = 0;
  Object[3] = 0;
  v27 = 0;
  if ( (DWORD1(PopCurrentBroadcast) & 0x800000) != 0 )
    v6 = -1073741779;
  else
    v6 = PopPushPowerStateTransitionRecordWithCallback(
           KeGetCurrentThread()->ApcState.Process,
           (unsigned int)KeGetCurrentThread(),
           (_DWORD)a1,
           2,
           (__int64)PopBroadcastBlameBugcheckCallback);
  v7 = 0LL;
  v8 = *a2 - a2[1];
  v9 = 0;
  v10 = a2 + 10;
  v11 = (_QWORD *)*v10;
  while ( v11 != v10 )
  {
    v11 = (_QWORD *)*v11;
    v7 = (unsigned int)(v7 + 1);
  }
  Object[0] = 5;
  v25[1] = v25;
  v25[0] = v25;
  v20[1] = v20;
  v20[0] = v20;
  a1[4] = Object;
  v12 = v18;
  a1[5] = v18;
  Object[2] = 8;
  v24 = v7;
  v26 = v8;
  v18[0] = 5;
  v18[2] = 8;
  v19 = 0;
  v21 = v8;
  if ( v8 > 0 )
  {
    do
    {
      KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)qword_140F0AA30 + 1, &LockHandle);
      v13 = (_QWORD *)*v10;
      if ( *(_QWORD **)(*v10 + 8LL) != v10
        || (v14 = *v13, *(_QWORD **)(*v13 + 8LL) != v13)
        || (*v10 = v14, *(_QWORD *)(v14 + 8) = v10, v15 = (_QWORD *)a1[55], (_QWORD *)*v15 != a1 + 54) )
      {
        __fastfail(3u);
      }
      v13[1] = v15;
      *v13 = a1 + 54;
      *v15 = v13;
      a1[55] = v13;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      --v8;
      ++v9;
      if ( (unsigned __int8)PopIsNotifyForDirectedPowerTransition(v13) )
        LODWORD(v12) = PopIssueDirectedPowerTransition(a1, v13);
      else
        LODWORD(v12) = PopNotifyDevice(a1, v13);
      if ( (PopSimulate & 0x80000) != 0 )
      {
        while ( v9 > 0 )
        {
          LODWORD(v12) = KeWaitForSingleObject(v18, Executive, 0, 0, 0LL);
          --v9;
        }
      }
    }
    while ( v8 > 0 );
    while ( v9 > 0 )
    {
      LODWORD(v12) = KeWaitForSingleObject(v18, Executive, 0, 0, 0LL);
      --v9;
    }
  }
  if ( v6 >= 0 )
    LODWORD(v12) = PoDelistPowerStateTransitionBlocker(v7, a2, a3, a4);
  a1[4] = 0LL;
  a1[5] = 0LL;
  return (int)v12;
}
