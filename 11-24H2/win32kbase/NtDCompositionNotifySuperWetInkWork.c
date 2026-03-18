/*
 * XREFs of NtDCompositionNotifySuperWetInkWork @ 0x140223540
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x14006DF90 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x140074908 (-AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtDCompositionNotifySuperWetInkWork(__int64 a1)
{
  int v1; // ebx
  struct DirectComposition::CApplicationChannel *v2; // rsi
  __int64 v3; // rdi
  __int64 v4; // rcx
  struct DirectComposition::CApplicationChannel *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  v1 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v6);
  if ( v1 >= 0 )
  {
    v2 = v6;
    v3 = *((_QWORD *)v6 + 5);
    DirectComposition::CCriticalSection::AcquireShared(*(PERESOURCE *)(v3 + 16));
    v4 = *(_QWORD *)(v3 + 88);
    if ( v4 )
      KeSetEvent(*(PRKEVENT *)(v4 + 8), 1, 0);
    ExReleaseResourceLite(*(PERESOURCE *)(v3 + 16));
    KeLeaveCriticalRegion();
    (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v2)(v2);
  }
  return (unsigned int)v1;
}
