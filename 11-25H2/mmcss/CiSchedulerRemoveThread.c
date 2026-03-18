/*
 * XREFs of CiSchedulerRemoveThread @ 0x1C0001010
 * Callers:
 *     CiThreadCleanup @ 0x1C000DF90 (CiThreadCleanup.c)
 * Callees:
 *     CiLogThreadBuffering @ 0x1C00010E0 (CiLogThreadBuffering.c)
 */

void __fastcall CiSchedulerRemoveThread(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  _QWORD *v4; // rax
  __int64 v5; // rax
  __int64 v6; // r8
  _QWORD *v7; // rdx

  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
  if ( byte_1C00090D0 )
    CiLogThreadBuffering(a1, 0LL);
  KeUpdateThreadTag(a1[12], 0LL);
  v2 = a1[10];
  v3 = a1[9];
  v4 = (_QWORD *)a1[11];
  if ( *(_QWORD **)(v2 + 8) != a1 + 10 || (_QWORD *)*v4 != a1 + 10 )
    goto LABEL_10;
  *v4 = v2;
  *(_QWORD *)(v2 + 8) = v4;
  if ( v4 == (_QWORD *)v2 )
  {
    v5 = v3 + 16;
    v6 = *(_QWORD *)(v3 + 16);
    if ( *(_QWORD *)(v6 + 8) == v5 )
    {
      v7 = *(_QWORD **)(v5 + 8);
      if ( *v7 == v5 )
      {
        *v7 = v6;
        *(_QWORD *)(v6 + 8) = v7;
        goto LABEL_9;
      }
    }
LABEL_10:
    __fastfail(3u);
  }
LABEL_9:
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
}
