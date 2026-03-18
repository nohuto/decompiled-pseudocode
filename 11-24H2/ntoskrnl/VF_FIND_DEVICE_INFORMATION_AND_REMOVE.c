/*
 * XREFs of VF_FIND_DEVICE_INFORMATION_AND_REMOVE @ 0x140B8503C
 * Callers:
 *     VfHalDeleteDevice @ 0x140B871A0 (VfHalDeleteDevice.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 */

struct _LIST_ENTRY *__fastcall VF_FIND_DEVICE_INFORMATION_AND_REMOVE(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *v2; // rbx
  KIRQL v3; // r8
  struct _LIST_ENTRY *i; // rax
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rdx

  v2 = 0LL;
  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140F03A90);
  for ( i = ViAdapterList.Flink; &ViAdapterList != i; i = i->Flink )
  {
    Flink = i->Flink;
    if ( i[4].Flink == a1 )
    {
      v2 = i;
      if ( Flink->Blink != i || (Blink = i->Blink, Blink->Flink != i) )
        __fastfail(3u);
      Blink->Flink = Flink;
      Flink->Blink = Blink;
      break;
    }
  }
  KeReleaseSpinLock(&qword_140F03A90, v3);
  return v2;
}
