/*
 * XREFs of RtlpHpLfhHeatMapQuery @ 0x180060E00
 * Callers:
 *     RtlpHpLfhPrivateSlotShutdown @ 0x180060ADC (RtlpHpLfhPrivateSlotShutdown.c)
 *     RtlpHpLfhContextSlotStandbyProcess @ 0x180060FB8 (RtlpHpLfhContextSlotStandbyProcess.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x180061270 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhPrivateSlotListCompact @ 0x1800E4020 (RtlpHpLfhPrivateSlotListCompact.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpLfhHeatMapQuery(__int64 a1, volatile signed __int32 *a2, unsigned __int8 *a3)
{
  __int64 v4; // rdi
  volatile signed __int32 *v6; // r9
  signed __int32 v7; // eax
  int v8; // r11d
  unsigned int v9; // ecx
  unsigned int v10; // edx
  unsigned int v11; // ecx
  signed __int32 v13; // ett
  __int64 v14; // rax
  char v15; // r10
  __int64 v16; // r8
  struct _TEB *v17; // r9
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rdx
  char v22; // r10
  volatile signed __int32 *j; // rax
  volatile signed __int32 *i; // rax

  v4 = *a3 >> 1;
  if ( (unsigned int)v4 >= 0x7E )
  {
    v8 = 0;
    v10 = 0;
  }
  else
  {
    v6 = a2 + 63;
    v7 = *((_DWORD *)a2 + 63);
    while ( 1 )
    {
      v8 = 0;
      v9 = (MEMORY[0x7FFE0008] >> 20) - v7;
      if ( !v9 )
        break;
      v13 = v7;
      v7 = _InterlockedCompareExchange(v6, MEMORY[0x7FFE0008] >> 20, v7);
      if ( v13 == v7 )
      {
        if ( v9 > 0x1E )
        {
          for ( i = a2; i < v6; i = (volatile signed __int32 *)((char *)i + 2) )
            *(_WORD *)i = 0;
        }
        else
        {
          v14 = 3LL;
          v15 = v9;
          v16 = 1LL;
          while ( 1 )
          {
            if ( (v9 & 1) != 0 )
              v16 *= v14;
            LOBYTE(v9) = (unsigned __int8)v9 >> 1;
            if ( !(_BYTE)v9 )
              break;
            v14 *= v14;
          }
          v22 = 2 * v15;
          for ( j = a2; j < v6; j = (volatile signed __int32 *)((char *)j + 2) )
            *(_WORD *)j = (v16 * (unsigned __int64)*(unsigned __int16 *)j) >> v22;
        }
        break;
      }
    }
    v10 = *((unsigned __int16 *)a2 + v4);
  }
  v11 = ((unsigned int)RtlpHpLfhPerfFlags >> 8) & 3;
  if ( v11 )
  {
    if ( v11 == 2 )
    {
      return 2LL;
    }
    else
    {
      if ( v11 == 1 )
        return 1LL;
      v17 = NtCurrentTeb();
      v18 = v17->RngState[0];
      v19 = v17->RngState[1];
      v20 = v19 + v18;
      v21 = v18 ^ v19;
      v17->RngState[1] = __ROL8__(v21, 37);
      v17->RngState[0] = v21 ^ (v21 << 16) ^ __ROL8__(v18, 24);
      return BYTE4(v20) % 3u;
    }
  }
  else if ( (RtlpHpLfhPerfFlags & 1) != 0 && v10 >= *((unsigned __int16 *)a3 + 38) )
  {
    if ( v10 < *((unsigned __int16 *)a3 + 39) )
      return 1LL;
    LOBYTE(v8) = (*(_BYTE *)(a1 + 72) & 1) != 0;
    return (unsigned int)(v8 + 1);
  }
  else
  {
    return 0LL;
  }
}
