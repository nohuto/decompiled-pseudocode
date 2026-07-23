/*
 * XREFs of RtlpHpLfhContextCompact @ 0x180065FB0
 * Callers:
 *     RtlpHpHeapCompact @ 0x180066914 (RtlpHpHeapCompact.c)
 * Callees:
 *     RtlpHpEnvCompactionSchedule @ 0x1800656C0 (RtlpHpEnvCompactionSchedule.c)
 *     RtlpHpLfhOwnerCompact @ 0x180066280 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhPrivateSlotsCompact @ 0x1800E3F90 (RtlpHpLfhPrivateSlotsCompact.c)
 *     RtlpHpEnvCompactionIsScheduled @ 0x180140874 (RtlpHpEnvCompactionIsScheduled.c)
 */

void __fastcall RtlpHpLfhContextCompact(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // r15d
  _QWORD *v6; // rsi
  __int64 v7; // rbp
  unsigned __int8 *v8; // rcx
  unsigned __int8 *v9; // rdi
  unsigned __int64 v10; // r11
  __int64 v11; // rbx
  volatile signed __int32 *v12; // r9
  signed __int32 v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // edx
  unsigned int v16; // ecx
  __int64 v17; // r8
  signed __int32 v18; // ett
  __int64 v19; // rax
  char v20; // r10
  __int64 v21; // r8
  struct _TEB *v22; // r9
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // rdx
  signed int v27; // ebx
  char v28; // r10
  volatile signed __int32 *v29; // rax
  volatile signed __int32 *v30; // rax

  if ( !*(_DWORD *)(a1 + 76) )
    return;
  v5 = 0;
  LOBYTE(a2) = (int)a2 < 0;
  if ( ((unsigned __int8)a2 & ((*(_BYTE *)(a1 + 72) & 1) != 0)) != 0 )
    v5 = RtlpHpLfhPrivateSlotsCompact();
  v6 = (_QWORD *)(a1 + 448);
  v7 = 128LL;
  do
  {
    v8 = (unsigned __int8 *)*v6;
    v9 = 0LL;
    if ( (*v6 & 1) == 0 )
      v9 = (unsigned __int8 *)*v6;
    if ( v9 && v9[92] )
    {
      v10 = a1 + 192;
      v11 = *v9 >> 1;
      v9[92] = 0;
      if ( (unsigned int)v11 >= 0x7E )
      {
        v15 = 0;
      }
      else
      {
        v12 = (volatile signed __int32 *)(a1 + 444);
        v13 = *(_DWORD *)(a1 + 444);
        while ( 1 )
        {
          v14 = (MEMORY[0x7FFE0008] >> 20) - v13;
          if ( !v14 )
            break;
          v18 = v13;
          v13 = _InterlockedCompareExchange(v12, MEMORY[0x7FFE0008] >> 20, v13);
          if ( v18 == v13 )
          {
            if ( v14 > 0x1E )
            {
              v30 = (volatile signed __int32 *)(a1 + 192);
              if ( v10 < (unsigned __int64)v12 )
              {
                do
                {
                  *(_WORD *)v30 = 0;
                  v30 = (volatile signed __int32 *)((char *)v30 + 2);
                }
                while ( v30 < v12 );
              }
            }
            else
            {
              v19 = 3LL;
              v20 = v14;
              v21 = 1LL;
              while ( 1 )
              {
                if ( (v14 & 1) != 0 )
                  v21 *= v19;
                LOBYTE(v14) = (unsigned __int8)v14 >> 1;
                if ( !(_BYTE)v14 )
                  break;
                v19 *= v19;
              }
              v28 = 2 * v20;
              v29 = (volatile signed __int32 *)(a1 + 192);
              if ( v10 < (unsigned __int64)v12 )
              {
                do
                {
                  *(_WORD *)v29 = (v21 * (unsigned __int64)*(unsigned __int16 *)v29) >> v28;
                  v29 = (volatile signed __int32 *)((char *)v29 + 2);
                }
                while ( v29 < v12 );
              }
            }
            break;
          }
        }
        v15 = *(unsigned __int16 *)(v10 + 2 * v11);
      }
      v16 = ((unsigned int)RtlpHpLfhPerfFlags >> 8) & 3;
      if ( v16 )
      {
        if ( v16 == 2 )
        {
          v17 = 2LL;
          goto LABEL_21;
        }
        if ( v16 == 1 )
          goto LABEL_20;
        v22 = NtCurrentTeb();
        v23 = v22->RngState[0];
        v24 = v22->RngState[1];
        v25 = v24 + v23;
        v26 = v23 ^ v24;
        v22->RngState[1] = __ROL8__(v26, 37);
        v22->RngState[0] = v26 ^ (v26 << 16) ^ __ROL8__(v23, 24);
        v27 = BYTE4(v25) % 3u;
        RtlpHpLfhOwnerCompact(a1, v9, (unsigned int)v27);
        if ( v27 >= 1 )
        {
          v9[92] = 1;
          ++v5;
        }
      }
      else
      {
        if ( (RtlpHpLfhPerfFlags & 1) != 0 && v15 >= *((unsigned __int16 *)v9 + 38) )
        {
          if ( v15 >= *((unsigned __int16 *)v9 + 39) && (*(_BYTE *)(a1 + 72) & 1) != 0 )
            v17 = 2LL;
          else
LABEL_20:
            v17 = 1LL;
LABEL_21:
          RtlpHpLfhOwnerCompact(a1, v9, v17);
          ++v5;
          v9[92] = 1;
          goto LABEL_8;
        }
        RtlpHpLfhOwnerCompact(a1, v9, 0LL);
      }
    }
LABEL_8:
    ++v6;
    --v7;
  }
  while ( v7 );
  if ( v5 )
  {
    if ( !(unsigned int)RtlpHpEnvCompactionIsScheduled(v8, a2, a3, a4) )
      RtlpHpEnvCompactionSchedule();
  }
}
