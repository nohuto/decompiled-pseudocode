/*
 * XREFs of IopIoRingUpdateCompletionUserEvent @ 0x14059782C
 * Callers:
 *     NtSetInformationIoRing @ 0x1407179B0 (NtSetInformationIoRing.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall IopIoRingUpdateCompletionUserEvent(__int64 a1, void **a2, KPROCESSOR_MODE a3)
{
  PVOID v4; // rbp
  void *v5; // rcx
  NTSTATUS result; // eax
  KIRQL v7; // al
  void *v8; // rdi
  PVOID v9; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0LL;
  v5 = *a2;
  if ( !*a2
    || (v9 = 0LL,
        result = ObReferenceObjectByHandle(v5, 2u, (POBJECT_TYPE)ExEventObjectType, a3, &v9, 0LL),
        v4 = v9,
        result >= 0) )
  {
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 104));
    v8 = *(void **)(a1 + 168);
    *(_QWORD *)(a1 + 168) = v4;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 104), v7);
    if ( v8 )
      ObfDereferenceObjectWithTag(v8, 0x746C6644u);
    return 0;
  }
  return result;
}
