/*
 * XREFs of ?KiFlushScbReferences@@YAXPEAU_KPRCB@@PEAU_KSCB@@@Z @ 0x1405C4C04
 * Callers:
 *     KeRemoveSchedulingGroup @ 0x14049F368 (KeRemoveSchedulingGroup.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __fastcall KiFlushScbReferences(struct _KPRCB *a1, struct _KSCB *a2)
{
  unsigned __int16 PrcbLockFlags; // ax
  unsigned int Number; // ecx
  __int128 Object; // [rsp+38h] [rbp-9h] BYREF
  char *v7; // [rsp+48h] [rbp+7h]
  struct _KDPC Dpc; // [rsp+58h] [rbp+17h] BYREF
  unsigned int v9; // [rsp+A8h] [rbp+67h] BYREF

  memset_0(&Dpc, 0, sizeof(Dpc));
  v7 = 0LL;
  v9 = 0;
  Object = 0LL;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&a1->PrcbLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v9);
    while ( a1->PrcbLock );
  }
  PrcbLockFlags = a2->PrcbLockFlags;
  _InterlockedAnd64((volatile signed __int64 *)&a1->PrcbLock, 0LL);
  if ( (PrcbLockFlags & 0x100) != 0 )
  {
    Number = a1->Number;
    v7 = (char *)&Object + 8;
    *((_QWORD *)&Object + 1) = (char *)&Object + 8;
    Dpc.DeferredRoutine = KiFlushScbReferencesDpc;
    Dpc.DeferredContext = &Object;
    Dpc.DpcData = 0LL;
    LOWORD(Object) = 0;
    BYTE2(Object) = 6;
    DWORD1(Object) = 0;
    LOWORD(Dpc.TargetInfoAsUlong) = 787;
    Dpc.ProcessorHistory = 0LL;
    Dpc.Number = Number + 2048;
    KeInsertQueueDpc(&Dpc, 0LL, 0LL);
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  }
}
