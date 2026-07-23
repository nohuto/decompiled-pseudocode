/*
 * XREFs of KiAccumulateTicksFromCycles @ 0x1403D1D50
 * Callers:
 *     KiEndDebugAccumulation @ 0x1404F2520 (KiEndDebugAccumulation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiAccumulateTicksFromCycles(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        int a4,
        unsigned __int64 a5)
{
  unsigned __int128 v5; // rax
  __int64 v6; // rdi
  unsigned __int128 v8; // rax
  __int64 v9; // r8
  unsigned __int64 v10; // r10
  char *v11; // r8
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // r11d

  *((_QWORD *)&v5 + 1) = a2;
  *(_QWORD *)&v5 = 0xFFFFF78000000300uLL;
  v6 = *((_QWORD *)&v5 + 1);
  if ( !MEMORY[0xFFFFF78000000300] )
    return v5;
  if ( MEMORY[0xFFFFF78000000369] )
  {
    v8 = (a3 << MEMORY[0xFFFFF78000000369]) * (unsigned __int128)MEMORY[0xFFFFF78000000360];
    v9 = a5 << MEMORY[0xFFFFF78000000369];
  }
  else
  {
    v8 = a3 * (unsigned __int128)MEMORY[0xFFFFF78000000360];
    v9 = a5;
  }
  v10 = (*((unsigned __int64 *)&v8 + 1) * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64;
  v5 = (((unsigned __int64)v9 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64)
     * (unsigned __int64)KiMaximumIncrementReciprocal;
  DWORD2(v5) = (*((_QWORD *)&v5 + 1) >> KiMaximumIncrementShiftCount) - (v10 >> KiMaximumIncrementShiftCount);
  if ( !DWORD2(v5) )
    return v5;
  if ( a4 )
  {
    if ( a4 == 1 )
    {
      *(_DWORD *)(a1 + 34372) += DWORD2(v5);
      *(_DWORD *)(a1 + 34380) += DWORD2(v5);
    }
    else if ( a4 == 2 || a4 == 3 )
    {
      *(_DWORD *)(a1 + 34372) += DWORD2(v5);
      *(_DWORD *)(a1 + 34384) += DWORD2(v5);
    }
  }
  else
  {
    if ( (*(_DWORD *)(v6 + 116) & 0x400) != 0
      || (*(_QWORD *)&v5 = __popcnt(*(unsigned int *)(v6 + 1100)), ((a5 >> 4) & 0x1F) >= (unsigned int)v5) )
    {
      *(_DWORD *)(a1 + 34372) += DWORD2(v5);
      *(_DWORD *)(v6 + 652) += DWORD2(v5);
    }
    else
    {
      *(_DWORD *)(a1 + 34376) += DWORD2(v5);
      *(_DWORD *)(v6 + 732) += DWORD2(v5);
    }
    if ( v6 != *(_QWORD *)(a1 + 24) )
    {
      v11 = (char *)(v6 + 195);
      if ( *(char *)(v6 + 195) < 16 )
      {
        *(_QWORD *)&v5 = *(_QWORD *)(v6 + 104);
        if ( (_QWORD)v5 )
        {
          *(_QWORD *)&v5 = *(_QWORD *)(v6 + 104);
          if ( (_QWORD)v5 )
          {
            v12 = v5 + *(unsigned int *)(a1 + 216);
            if ( *v11 < 16 && (*(_DWORD *)(v6 + 120) & 0x200) == 0 )
            {
              v13 = v5 + *(unsigned int *)(a1 + 216);
              while ( (*(_BYTE *)(v13 + 112) & 2) == 0 )
              {
                v13 = *(_QWORD *)(v13 + 416);
                if ( !v13 )
                {
                  do
                  {
                    v14 = *(_DWORD *)(v12 + 124);
                    if ( v14 )
                      break;
                    v12 = *(_QWORD *)(v12 + 416);
                  }
                  while ( v12 );
                  if ( v14 )
                    break;
                  goto LABEL_22;
                }
              }
LABEL_24:
              *(_DWORD *)(a1 + 34412) += DWORD2(v5);
              return v5;
            }
LABEL_22:
            v11 = (char *)(v6 + 195);
          }
        }
      }
      if ( *v11 >= 8 )
        return v5;
      goto LABEL_24;
    }
  }
  return v5;
}
