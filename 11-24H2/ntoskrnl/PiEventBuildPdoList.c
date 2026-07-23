/*
 * XREFs of PiEventBuildPdoList @ 0x1409BCA98
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1409BBF7C (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     PnpAllocateCriticalMemory @ 0x1409BBC94 (PnpAllocateCriticalMemory.c)
 *     PnpFinalizeVetoedRemove @ 0x140AB1A68 (PnpFinalizeVetoedRemove.c)
 */

__int64 __fastcall PiEventBuildPdoList(
        unsigned int **a1,
        int a2,
        __int64 a3,
        _DWORD *a4,
        __int64 *a5,
        _BYTE *a6,
        _BYTE *a7)
{
  unsigned int v7; // ebx
  ULONG_PTR v12; // r8
  __int64 CriticalMemory; // rsi
  unsigned int v14; // ecx
  unsigned int *v15; // r8
  unsigned int v16; // r9d
  __int64 v17; // rdx
  _DWORD *v18; // r8
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 result; // rax

  v7 = 0;
  v12 = 8LL * **a1;
  *a6 = 0;
  *a7 = 0;
  CriticalMemory = PnpAllocateCriticalMemory(a2, 0x40uLL, v12, 0x4E706E50u);
  if ( CriticalMemory )
  {
    *a4 = 0;
    v14 = 0;
    while ( 1 )
    {
      do
      {
        if ( !*((_BYTE *)a1 + 8) )
          goto LABEL_26;
        v15 = *a1;
        if ( v14 >= **a1 || !v15 )
          goto LABEL_26;
        v16 = v14 + 1;
        v17 = *(_QWORD *)&v15[6 * v14 + 4];
        if ( v15[6 * v14 + 6] )
          break;
        if ( a2 == 4 )
          break;
        ++v14;
      }
      while ( a2 );
      if ( v17 )
        v18 = *(_DWORD **)(*(_QWORD *)(v17 + 312) + 40LL);
      else
        v18 = 0LL;
      v14 = v16;
      if ( a2 != 2 )
      {
        if ( !a2 )
          goto LABEL_20;
        v19 = v18[142];
        if ( v19 == 1 )
        {
          *a6 = 1;
        }
        else if ( v19 )
        {
          *a7 = 1;
        }
        if ( a2 == 4 )
        {
LABEL_20:
          if ( (v18[99] & 0x1000) != 0 )
          {
            v21 = 1LL;
            goto LABEL_25;
          }
          if ( v18[75] == 787 )
          {
            v21 = 5LL;
LABEL_25:
            PnpFinalizeVetoedRemove(a3, v21, v18 + 10);
            v7 = -2147483608;
            goto LABEL_26;
          }
        }
      }
      v20 = (unsigned int)*a4;
      *(_QWORD *)(CriticalMemory + 8 * v20) = v17;
      *a4 = v20 + 1;
    }
  }
  v7 = -1073741670;
LABEL_26:
  result = v7;
  *a5 = CriticalMemory;
  return result;
}
