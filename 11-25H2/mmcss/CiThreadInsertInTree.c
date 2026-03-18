/*
 * XREFs of CiThreadInsertInTree @ 0x1C0003BF0
 * Callers:
 *     CiThreadCreate @ 0x1C000D720 (CiThreadCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CiThreadInsertInTree(__int64 a1)
{
  char v2; // bl
  _QWORD *v3; // rdx
  _QWORD *v4; // rax
  unsigned __int64 v5; // r8

  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc);
  v2 = 0;
  v3 = *(_QWORD **)&WPP_MAIN_CB.DeviceQueue.Type;
  *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement = KeGetCurrentThread();
  LOBYTE(v4) = 0;
  v5 = *(_QWORD *)(a1 + 96);
  if ( !*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type )
    goto LABEL_8;
  while ( v5 <= v3[7] )
  {
    if ( v5 >= v3[7] )
    {
      v2 = 1;
      goto LABEL_5;
    }
    v4 = (_QWORD *)*v3;
    if ( !*v3 )
      goto LABEL_8;
LABEL_10:
    v3 = v4;
  }
  v4 = (_QWORD *)v3[1];
  if ( v4 )
    goto LABEL_10;
  LOBYTE(v4) = 1;
LABEL_8:
  RtlRbInsertNodeEx(&WPP_MAIN_CB.DeviceQueue, v3, (unsigned __int8)v4, a1 + 40);
LABEL_5:
  *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc, 0);
  return (unsigned __int8)v2 ^ 1u;
}
