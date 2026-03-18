/*
 * XREFs of ExInitializeAutoExpandPushLock @ 0x140441FA0
 * Callers:
 *     MiAllocateAweInfo @ 0x1407F81B8 (MiAllocateAweInfo.c)
 *     MmInitializeProcessAddressSpace @ 0x1408F8590 (MmInitializeProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess @ 0x140AE66AC (MmInitializeHandBuiltProcess.c)
 * Callees:
 *     <none>
 */

void __fastcall ExInitializeAutoExpandPushLock(_QWORD *a1, char a2)
{
  a1[1] = 0LL;
  if ( (a2 & 1) == 0 )
    *((_DWORD *)a1 + 2) = 4;
  *a1 = 0LL;
}
