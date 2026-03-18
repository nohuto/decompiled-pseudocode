/*
 * XREFs of IopMcReleaseMdl @ 0x14059F578
 * Callers:
 *     IopIoRingCompleteIrp @ 0x1402A2964 (IopIoRingCompleteIrp.c)
 *     IopIoRingDispatchWrite @ 0x14070AD78 (IopIoRingDispatchWrite.c)
 *     IopIoRingDispatchRead @ 0x140A90A08 (IopIoRingDispatchRead.c)
 * Callees:
 *     IoFreeMdl @ 0x1402D5960 (IoFreeMdl.c)
 *     IopMcDereferenceBufferEntry @ 0x14043D0D4 (IopMcDereferenceBufferEntry.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     IopMcDereferenceMdl @ 0x14059F4A8 (IopMcDereferenceMdl.c)
 */

__int64 __fastcall IopMcReleaseMdl(struct _MDL *BugCheckParameter4, KPRIORITY a2)
{
  struct _MDL **v3; // r8
  ULONG_PTR *v4; // rbx

  v3 = &BugCheckParameter4[1].Next
     + ((BugCheckParameter4->ByteCount + 4095LL + (unsigned __int64)(BugCheckParameter4->ByteOffset & 0xFFF)) >> 12);
  if ( *(_DWORD *)v3 != 1051651 )
    KeBugCheckEx(0x1F4u, 3uLL, (ULONG_PTR)v3, *(unsigned int *)v3, (ULONG_PTR)BugCheckParameter4);
  v4 = (ULONG_PTR *)v3[1];
  if ( *(_WORD *)v4 != 3074 )
    KeBugCheckEx(
      0x1F4u,
      4uLL,
      (ULONG_PTR)v4,
      *v4,
      (ULONG_PTR)&BugCheckParameter4[1]
    + 8 * ((BugCheckParameter4->ByteCount + 4095LL + (unsigned __int64)(BugCheckParameter4->ByteOffset & 0xFFF)) >> 12));
  IoFreeMdl(BugCheckParameter4);
  IopMcDereferenceMdl((ULONG_PTR)v4, a2);
  return IopMcDereferenceBufferEntry((ULONG_PTR)v4);
}
