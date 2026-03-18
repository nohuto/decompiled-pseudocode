/*
 * XREFs of ExInitializeAutoExpandPushLock @ 0x140441FA0
 * Callers:
 *     MiAllocateAweInfo @ 0x1407E8328 (MiAllocateAweInfo.c)
 *     MmInitializeProcessAddressSpace @ 0x140904AC8 (MmInitializeProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess @ 0x140A47A3C (MmInitializeHandBuiltProcess.c)
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
