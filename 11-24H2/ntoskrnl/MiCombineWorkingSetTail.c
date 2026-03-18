/*
 * XREFs of MiCombineWorkingSetTail @ 0x140685430
 * Callers:
 *     MiCombinePte @ 0x1406850D0 (MiCombinePte.c)
 * Callees:
 *     MiReleaseWalkLocks @ 0x1402E37F0 (MiReleaseWalkLocks.c)
 *     MiProcessCrcList @ 0x1409F2910 (MiProcessCrcList.c)
 */

__int64 __fastcall MiCombineWorkingSetTail(__int64 a1)
{
  _QWORD *v1; // rbx

  v1 = *(_QWORD **)(a1 + 184);
  if ( v1[1] == v1[2] )
  {
    MiReleaseWalkLocks(a1);
    MiProcessCrcList(
      v1[3],
      v1[4],
      v1[1],
      *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 192) + 138LL));
    v1[1] = 0LL;
  }
  return 0LL;
}
