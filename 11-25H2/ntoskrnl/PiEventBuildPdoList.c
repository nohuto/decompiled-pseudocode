/*
 * XREFs of PiEventBuildPdoList @ 0x140830634
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x14082FB18 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     PnpAllocateCriticalMemory @ 0x14082F488 (PnpAllocateCriticalMemory.c)
 *     PnpFinalizeVetoedRemove @ 0x140AB2A7C (PnpFinalizeVetoedRemove.c)
 */

__int64 __fastcall PiEventBuildPdoList(__int64 a1, int a2, __int64 a3, _DWORD *a4, __int64 *a5, _BYTE *a6, _BYTE *a7)
{
  unsigned int v7; // ebx
  __int64 CriticalMemory; // rsi
  unsigned int v13; // ecx
  _DWORD *v14; // r8
  unsigned int v15; // r9d
  __int64 v16; // rdx
  _DWORD *v17; // r8
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 result; // rax

  v7 = 0;
  *a6 = 0;
  *a7 = 0;
  CriticalMemory = PnpAllocateCriticalMemory(a2, 0x40uLL);
  if ( CriticalMemory )
  {
    *a4 = 0;
    v13 = 0;
    while ( 1 )
    {
      do
      {
        if ( !*(_BYTE *)(a1 + 8) )
          goto LABEL_26;
        v14 = *(_DWORD **)a1;
        if ( v13 >= **(_DWORD **)a1 || !v14 )
          goto LABEL_26;
        v15 = v13 + 1;
        v16 = *(_QWORD *)&v14[6 * v13 + 4];
        if ( v14[6 * v13 + 6] )
          break;
        if ( a2 == 4 )
          break;
        ++v13;
      }
      while ( a2 );
      if ( v16 )
        v17 = *(_DWORD **)(*(_QWORD *)(v16 + 312) + 40LL);
      else
        v17 = 0LL;
      v13 = v15;
      if ( a2 != 2 )
      {
        if ( !a2 )
          goto LABEL_20;
        v18 = v17[142];
        if ( v18 == 1 )
        {
          *a6 = 1;
        }
        else if ( v18 )
        {
          *a7 = 1;
        }
        if ( a2 == 4 )
        {
LABEL_20:
          if ( (v17[99] & 0x1000) != 0 )
          {
            v20 = 1LL;
            goto LABEL_25;
          }
          if ( v17[75] == 787 )
          {
            v20 = 5LL;
LABEL_25:
            PnpFinalizeVetoedRemove(a3, v20, v17 + 10);
            v7 = -2147483608;
            goto LABEL_26;
          }
        }
      }
      v19 = (unsigned int)*a4;
      *(_QWORD *)(CriticalMemory + 8 * v19) = v16;
      *a4 = v19 + 1;
    }
  }
  v7 = -1073741670;
LABEL_26:
  result = v7;
  *a5 = CriticalMemory;
  return result;
}
