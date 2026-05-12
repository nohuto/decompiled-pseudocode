/*
 * XREFs of NvmeControllerSetIoQueueCountCompletion @ 0x1400CA1F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NvmeControllerSetIoQueueCountCompletion(__int64 a1, __int64 *a2, unsigned __int16 *a3)
{
  int v5; // r9d
  unsigned __int16 v6; // cx
  unsigned __int16 v7; // dx
  __int64 v8; // r9
  __int64 v9; // rcx
  __int16 v10; // dx
  __int16 v11; // ax
  __int64 v12; // rax
  __int64 result; // rax

  if ( a3 )
  {
    *(_WORD *)(*a2 + 4260) = a3[7];
    if ( ((*(unsigned __int16 *)(*a2 + 4260) >> 9) & 7) == 0 )
    {
      v5 = *(unsigned __int16 *)(*a2 + 4260) >> 1;
      if ( (unsigned __int8)v5 <= 6u && !(_BYTE)v5 )
      {
        *(_DWORD *)(a1 + 12) = *a3 + 1;
        *(_DWORD *)(a1 + 16) = a3[1] + 1;
        if ( *(_BYTE *)(a1 + 1728) == 1 )
        {
          *(_WORD *)(a1 + 22) = *(_WORD *)(a1 + 12);
          *(_WORD *)(a1 + 26) = *(_WORD *)(a1 + 16);
        }
        else
        {
          v6 = *(_WORD *)(a1 + 12);
          if ( *(_WORD *)(a1 + 28) < v6 )
            v6 = *(_WORD *)(a1 + 28);
          *(_WORD *)(a1 + 22) = v6;
          v7 = *(_WORD *)(a1 + 16);
          if ( *(_WORD *)(a1 + 30) < v7 )
            v7 = *(_WORD *)(a1 + 30);
          v8 = *(_QWORD *)(a1 + 1736);
          *(_WORD *)(a1 + 26) = v7;
          if ( *(_BYTE *)v8 )
          {
            *(_WORD *)(v8 + 2) = v7 * (unsigned __int64)*(unsigned __int8 *)(v8 + 4) / 0x64;
            v9 = *(_QWORD *)(a1 + 1736);
            v10 = *(_WORD *)(a1 + 26);
            if ( (*(_DWORD *)(v9 + 12) & 0x80) != 0 )
            {
              *(_WORD *)(v9 + 2) = v10;
            }
            else if ( v10 )
            {
              v11 = *(_WORD *)(v9 + 2);
              if ( v11 == v10 )
                *(_WORD *)(v9 + 2) = v11 - 1;
            }
            v12 = *(_QWORD *)(a1 + 1736);
            if ( *(_WORD *)(v12 + 2) )
              *(_WORD *)(a1 + 22) = *(_WORD *)(a1 + 26);
            else
              *(_BYTE *)v12 = 0;
          }
        }
      }
    }
  }
  result = *a2;
  _interlockedbittestandreset((volatile signed __int32 *)(*a2 + 4256), 3u);
  return result;
}
