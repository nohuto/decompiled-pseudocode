/*
 * XREFs of VidMmQueryAllocationSizeInSystemMemory @ 0x1400FADF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidMmQueryAllocationSizeInSystemMemory(__int64 ***a1, char a2)
{
  __int64 v2; // rax

  v2 = ***a1;
  if ( a2 )
    return *(_QWORD *)(v2 + 8);
  else
    return *(_QWORD *)(v2 + 16);
}
