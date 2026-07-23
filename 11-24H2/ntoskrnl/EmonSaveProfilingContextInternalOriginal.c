/*
 * XREFs of EmonSaveProfilingContextInternalOriginal @ 0x14055C294
 * Callers:
 *     EmonSaveProfilingContextOriginal @ 0x140B51740 (EmonSaveProfilingContextOriginal.c)
 * Callees:
 *     EmonReadCounter @ 0x14055B3F4 (EmonReadCounter.c)
 */

void __fastcall EmonSaveProfilingContextInternalOriginal(int a1, int a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r11
  int v4; // ecx
  int v5; // ecx
  __int64 v6; // r8

  v2 = 0;
  v3 = *(_QWORD *)(KiProcessorBlock[a2] + 88);
  if ( a1 )
  {
    v4 = a1 - 1;
    if ( v4 )
    {
      v5 = v4 - 99;
      if ( v5 )
      {
        if ( v5 == 1 )
          v3 += 72LL;
        else
          v3 = 0LL;
      }
      else
      {
        v3 += 48LL;
      }
    }
    else
    {
      v3 += 24LL;
    }
  }
  if ( *(_DWORD *)(v3 + 4) )
  {
    do
    {
      v6 = *(_QWORD *)(v3 + 16) + 48LL * v2;
      if ( *(_DWORD *)(v6 + 24) == 2 )
        EmonReadCounter(v2, *(_DWORD *)v3, (_QWORD *)v6, *(_DWORD **)(v6 + 16));
      ++v2;
    }
    while ( v2 < *(_DWORD *)(v3 + 4) );
  }
}
