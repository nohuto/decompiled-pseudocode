/*
 * XREFs of EmonSaveProfilingContextInternalEnhanced @ 0x14055C1DC
 * Callers:
 *     EmonSaveProfilingContextEnhanced @ 0x140B51710 (EmonSaveProfilingContextEnhanced.c)
 * Callees:
 *     EmonReadCounter @ 0x14055B3F4 (EmonReadCounter.c)
 */

__int64 __fastcall EmonSaveProfilingContextInternalEnhanced(int a1, int a2)
{
  __int64 v2; // r11
  int v3; // ecx
  int v4; // ecx
  __int64 result; // rax
  unsigned int i; // ebx
  int v7; // edx
  __int64 j; // r10
  __int64 v9; // r8

  v2 = *(_QWORD *)(KiProcessorBlock[a2] + 88);
  if ( a1 )
  {
    v3 = a1 - 1;
    if ( v3 )
    {
      v4 = v3 - 99;
      if ( v4 )
      {
        if ( v4 == 1 )
          v2 += 72LL;
        else
          v2 = 0LL;
      }
      else
      {
        v2 += 48LL;
      }
    }
    else
    {
      v2 += 24LL;
    }
  }
  result = *(unsigned int *)(v2 + 4);
  for ( i = 0; i < (unsigned int)result; ++i )
  {
    v7 = 0;
    for ( j = 0LL; (unsigned int)j <= *(_DWORD *)(v2 + 8); j = (unsigned int)(j + 1) )
    {
      if ( *(_DWORD *)(*(_QWORD *)(v2 + 16) + 48 * j + 28) != 3 && ++v7 > i )
        goto LABEL_16;
    }
    j = 0xFFFFFFFFLL;
LABEL_16:
    v9 = *(_QWORD *)(v2 + 16) + 48 * j;
    if ( *(_DWORD *)(v9 + 24) == 2 )
      EmonReadCounter(j, *(_DWORD *)v2, (_QWORD *)v9, *(_DWORD **)(v9 + 16));
    result = *(unsigned int *)(v2 + 4);
  }
  return result;
}
