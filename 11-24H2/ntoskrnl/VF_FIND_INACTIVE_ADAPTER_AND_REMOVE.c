/*
 * XREFs of VF_FIND_INACTIVE_ADAPTER_AND_REMOVE @ 0x140B870C0
 * Callers:
 *     VfGetDmaAdapter @ 0x140B88940 (VfGetDmaAdapter.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 */

_LIST_ENTRY *__fastcall VF_FIND_INACTIVE_ADAPTER_AND_REMOVE(struct _LIST_ENTRY *a1)
{
  _LIST_ENTRY *v2; // rbx
  KIRQL v3; // r8
  _LIST_ENTRY *i; // rax
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rcx

  v2 = 0LL;
  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140F03D70);
  for ( i = ViAdapterList.Flink; &ViAdapterList != i; i = i->Flink )
  {
    if ( i[4].Flink == a1 && (SHIDWORD(i[4].Blink) <= 0 || LOBYTE(i[4].Blink) == 1) )
    {
      Flink = i->Flink;
      v2 = i;
      if ( i->Flink->Blink != i || (Blink = i->Blink, Blink->Flink != i) )
        __fastfail(3u);
      Blink->Flink = Flink;
      Flink->Blink = Blink;
      break;
    }
  }
  KeReleaseSpinLock(&qword_140F03D70, v3);
  return v2;
}
