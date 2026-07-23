/*
 * XREFs of WheapGetErrorSourceFunction @ 0x14048678C
 * Callers:
 *     WheapAttemptArchitecturalErrorRecovery @ 0x14065A420 (WheapAttemptArchitecturalErrorRecovery.c)
 *     WheapCallErrorSourceCorrect @ 0x14065BDB4 (WheapCallErrorSourceCorrect.c)
 *     WheapCallErrorSourceInitialize @ 0x14065BDF4 (WheapCallErrorSourceInitialize.c)
 *     WheapCallErrorSourceUninitialize @ 0x14065BE6C (WheapCallErrorSourceUninitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WheapGetErrorSourceFunction(__int64 a1, int a2, char a3)
{
  __int64 v3; // r9
  int *v6; // r11
  bool v7; // zf
  _QWORD *v8; // r8
  int *v9; // rcx
  signed __int32 v10; // eax
  int v11; // edx
  int v12; // edx
  int v14; // edx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax

  v3 = 0LL;
  if ( a1 )
  {
    v6 = (int *)(a1 + 40);
    if ( *(_DWORD *)(a1 + 40) <= 0x12u )
    {
      v7 = (*(_DWORD *)(a1 + 132) & 0x40000000) == 0;
      v8 = &WheapSourceConfiguration;
      v9 = (int *)(a1 + 40);
      if ( !v7 )
        v8 = &WheapSourceConfigOverride;
      if ( a3 )
      {
LABEL_10:
        if ( a2 )
        {
          v11 = a2 - 1;
          if ( v11 )
          {
            v12 = v11 - 1;
            if ( v12 )
            {
              v14 = v12 - 1;
              if ( v14 )
              {
                if ( v14 == 1 )
                {
                  v15 = *v6;
                  if ( (_DWORD)v15 == 16 )
                    return *(_QWORD *)(a1 + 184);
                  else
                    return v8[8 * v15 + 6];
                }
              }
              else
              {
                return v8[8 * (__int64)*v9 + 5];
              }
            }
            else
            {
              return v8[8 * (__int64)*v9 + 4];
            }
          }
          else
          {
            v16 = *v9;
            if ( (_DWORD)v16 == 16 )
              return *(_QWORD *)(a1 + 176);
            else
              return v8[8 * v16 + 3];
          }
        }
        else
        {
          v17 = *v9;
          if ( (_DWORD)v17 == 16 )
            return *(_QWORD *)(a1 + 192);
          else
            return v8[8 * v17 + 2];
        }
      }
      else if ( *(_DWORD *)(a1 + 108) != 3 )
      {
        while ( 1 )
        {
          v10 = *(_DWORD *)(a1 + 92);
          if ( v10 < 0 )
            break;
          if ( v10 == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 92), v10 + 1, v10) )
          {
            v9 = (int *)(a1 + 40);
            goto LABEL_10;
          }
        }
      }
    }
  }
  return v3;
}
