/*
 * XREFs of IopFreeCompletionListPackets @ 0x1409A6BE8
 * Callers:
 *     IopDeleteIoCompletionInternal @ 0x14041E268 (IopDeleteIoCompletionInternal.c)
 * Callees:
 *     IoFreeIrp @ 0x1402508A0 (IoFreeIrp.c)
 *     IopDropIrp @ 0x140283AE0 (IopDropIrp.c)
 *     IopFreeMiniCompletionPacket @ 0x1409A6C70 (IopFreeMiniCompletionPacket.c)
 */

void __fastcall IopFreeCompletionListPackets(__int64 a1)
{
  ULONG_PTR v1; // rbx
  ULONG_PTR v2; // rcx
  ULONG_PTR v3; // rcx

  v1 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = 0LL;
  while ( v1 )
  {
    v2 = v1;
    v1 = *(_QWORD *)(v1 + 8);
    if ( *(_BYTE *)(v2 + 16) )
    {
      IopFreeMiniCompletionPacket(v2);
    }
    else
    {
      v3 = v2 - 168;
      if ( (*(_DWORD *)(v3 + 16) & 0x2000) != 0 )
        IopDropIrp((PIRP)v3, *(_QWORD *)(v3 + 192));
      else
        IoFreeIrp((PIRP)v3);
    }
  }
}
