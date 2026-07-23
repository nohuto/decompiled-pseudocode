/*
 * XREFs of CcIsLazyWriteScanQueuedInternal @ 0x140265EE4
 * Callers:
 *     CcQueueLazyWriteScanThreadForVolume @ 0x140265C20 (CcQueueLazyWriteScanThreadForVolume.c)
 *     CcQueueLazyWriteScanThread @ 0x140577A50 (CcQueueLazyWriteScanThread.c)
 * Callees:
 *     <none>
 */

char __fastcall CcIsLazyWriteScanQueuedInternal(_BYTE *a1, int a2)
{
  char result; // al
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  bool v8; // zf

  result = 0;
  v3 = a2 - 1;
  if ( !v3 )
    goto LABEL_11;
  v4 = v3 - 1;
  if ( !v4 )
    goto LABEL_11;
  v5 = v4 - 2;
  if ( v5 )
  {
    v6 = v5 - 4;
    if ( !v6 )
      return a1[67];
    v7 = v6 - 8;
    if ( v7 )
    {
      if ( v7 != 16 )
        return result;
      goto LABEL_7;
    }
LABEL_11:
    if ( a1[69] || a1[70] )
      return 1;
    v8 = a1[71] == 0;
    goto LABEL_9;
  }
LABEL_7:
  if ( a1[68] )
    return 1;
  v8 = a1[67] == 0;
LABEL_9:
  if ( !v8 )
    return 1;
  return result;
}
