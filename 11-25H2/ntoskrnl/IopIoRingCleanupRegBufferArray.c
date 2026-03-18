/*
 * XREFs of IopIoRingCleanupRegBufferArray @ 0x14070A444
 * Callers:
 *     IopDeleteIoRing @ 0x14070A3D0 (IopDeleteIoRing.c)
 *     IopIoRingDispatchRegisterBuffers @ 0x14070A748 (IopIoRingDispatchRegisterBuffers.c)
 * Callees:
 *     IopMcWaitAndCleanupBufferEntry @ 0x14059F7D4 (IopMcWaitAndCleanupBufferEntry.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall IopIoRingCleanupRegBufferArray(unsigned int a1, ULONG_PTR *a2)
{
  ULONG_PTR *v3; // rbx
  __int64 v4; // rdi

  if ( a1 )
  {
    v3 = a2;
    v4 = a1;
    do
    {
      if ( *v3 )
        IopMcWaitAndCleanupBufferEntry(*v3);
      ++v3;
      --v4;
    }
    while ( v4 );
  }
  ExFreePoolWithTag(a2, 0x42527249u);
}
