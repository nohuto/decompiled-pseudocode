/*
 * XREFs of IopFreeCompletionListPackets @ 0x1409905F8
 * Callers:
 *     IopDeleteIoCompletionInternal @ 0x14040F238 (IopDeleteIoCompletionInternal.c)
 * Callees:
 *     IoFreeIrp @ 0x1402C30B0 (IoFreeIrp.c)
 *     IopDropIrp @ 0x1403B3CD0 (IopDropIrp.c)
 *     IopFreeMiniCompletionPacket @ 0x140990680 (IopFreeMiniCompletionPacket.c)
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
    v3 = v1;
    v1 = *(_QWORD *)(v1 + 8);
    if ( *(_BYTE *)(v3 + 16) )
    {
      IopFreeMiniCompletionPacket(v3);
    }
    else
    {
      v2 = v3 - 168;
      if ( (*(_DWORD *)(v2 + 16) & 0x2000) != 0 )
        IopDropIrp((PIRP)v2, *(_QWORD *)(v2 + 192));
      else
        IoFreeIrp((PIRP)v2);
    }
  }
}
