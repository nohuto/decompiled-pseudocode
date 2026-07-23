/*
 * XREFs of IntPartIsInterruptSteerable @ 0x1402B4170
 * Callers:
 *     KeIntSteerGetSteeringMode @ 0x1402B40E4 (KeIntSteerGetSteeringMode.c)
 * Callees:
 *     KeQueryInterruptPartitionInformation @ 0x1402B48F0 (KeQueryInterruptPartitionInformation.c)
 */

__int64 __fastcall IntPartIsInterruptSteerable(__int64 a1, bool *a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned int v6; // ebp
  int v7; // edx
  unsigned int i; // esi
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0LL;
  v10 = 0LL;
  v3 = *(unsigned __int16 *)(a1 + 8);
  if ( (_WORD)v3 )
    goto LABEL_14;
  if ( !KiIntPartInitialized )
  {
    v7 = 259;
    if ( KeActiveProcessors.Count )
      v2 = KeActiveProcessors.Bitmap[v3];
    *a2 = v2 == *(_QWORD *)a1;
    return (unsigned int)v7;
  }
  if ( KiInterruptPartitions
    && (v6 = *(unsigned __int8 *)(KiInterruptPartitions + 2), v7 = 0, *(_BYTE *)(KiInterruptPartitions + 2)) )
  {
    *a2 = 1;
    for ( i = 0; i < v6; ++i )
    {
      v7 = KeQueryInterruptPartitionInformation(0LL, i, &v10);
      if ( v7 < 0 || (*(_QWORD *)a1 & (unsigned __int64)v10) == 0 )
        goto LABEL_15;
    }
  }
  else
  {
LABEL_14:
    v7 = 0;
LABEL_15:
    *a2 = 0;
  }
  return (unsigned int)v7;
}
