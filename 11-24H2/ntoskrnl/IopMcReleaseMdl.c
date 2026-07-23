/*
 * XREFs of IopMcReleaseMdl @ 0x14059FC28
 * Callers:
 *     IopIoRingCompleteIrp @ 0x1403B4960 (IopIoRingCompleteIrp.c)
 *     IopIoRingDispatchWrite @ 0x140714A08 (IopIoRingDispatchWrite.c)
 *     IopIoRingDispatchRead @ 0x140A912F8 (IopIoRingDispatchRead.c)
 * Callees:
 *     IoFreeMdl @ 0x14025ED30 (IoFreeMdl.c)
 *     IopMcDereferenceBufferEntry @ 0x140431590 (IopMcDereferenceBufferEntry.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     IopMcDereferenceMdl @ 0x14059FB58 (IopMcDereferenceMdl.c)
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
