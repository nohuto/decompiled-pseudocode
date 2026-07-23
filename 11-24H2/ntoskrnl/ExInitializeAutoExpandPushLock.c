/*
 * XREFs of ExInitializeAutoExpandPushLock @ 0x140438B70
 * Callers:
 *     MiAllocateAweInfo @ 0x1407F8928 (MiAllocateAweInfo.c)
 *     MmInitializeProcessAddressSpace @ 0x14091A9E8 (MmInitializeProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess @ 0x140AE7F8C (MmInitializeHandBuiltProcess.c)
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
