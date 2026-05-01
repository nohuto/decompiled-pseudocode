/*
 * XREFs of PiiFilterExecute @ 0x180676284
 * Callers:
 *     ?SendAddGameToConfigStoreTelemetry@IsGameManager@@AEAAXK@Z @ 0x18031B3E8 (-SendAddGameToConfigStoreTelemetry@IsGameManager@@AEAAXK@Z.c)
 * Callees:
 *     AslFree @ 0x180139254 (AslFree.c)
 *     PiiFilterEmbeddedPathsExecute @ 0x180675E34 (PiiFilterEmbeddedPathsExecute.c)
 *     AslPathClean @ 0x180676388 (AslPathClean.c)
 */

__int64 __fastcall PiiFilterExecute(unsigned __int16 *a1, __int64 a2, _QWORD *a3, void *a4)
{
  PVOID Heap; // rax
  void *v8; // rsi
  int v9; // ebx
  unsigned __int64 v10; // rdx
  unsigned __int16 v11; // cx
  int v12; // edx

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x208uLL);
  v8 = Heap;
  if ( !Heap )
  {
    v9 = -1073741801;
LABEL_14:
    *a1 = 0;
    return (unsigned int)v9;
  }
  v9 = AslPathClean(a4, Heap);
  if ( v9 >= 0 )
  {
    v9 = PiiFilterEmbeddedPathsExecute(a1, v10, a3, (__int64)v8);
    if ( v9 >= 0 )
    {
      if ( ((unsigned __int16)(*a1 - 97) <= 0x19u || (unsigned __int16)(*a1 - 65) <= 0x19u) && a1[1] == 58 )
      {
        v11 = a1[2];
        v12 = 0;
        while ( v11 )
        {
          a1[v12++] = v11;
          v11 = a1[v12 + 2];
        }
        a1[v12] = 0;
      }
      v9 = 0;
    }
  }
  AslFree(NtCurrentPeb()->ProcessHeap, v8);
  if ( v9 )
    goto LABEL_14;
  return (unsigned int)v9;
}
