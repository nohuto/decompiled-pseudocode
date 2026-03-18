/*
 * XREFs of EtwpDisassociateConsumer @ 0x140991268
 * Callers:
 *     EtwpRealtimeDeliverBuffer @ 0x140990DE0 (EtwpRealtimeDeliverBuffer.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall EtwpDisassociateConsumer(__int64 a1, void *a2)
{
  void **v3; // rdx
  void **v4; // rax
  struct _KEVENT *v5; // rcx

  v3 = *(void ***)a2;
  if ( v3[1] != a2 || (v4 = (void **)*((_QWORD *)a2 + 1), *v4 != a2) )
    __fastfail(3u);
  *v4 = v3;
  v3[1] = v4;
  --*(_DWORD *)(a1 + 344);
  v5 = (struct _KEVENT *)*((_QWORD *)a2 + 6);
  *((_BYTE *)a2 + 90) |= 4u;
  KeSetEvent(v5, 0, 0);
  return ObfDereferenceObject(a2);
}
