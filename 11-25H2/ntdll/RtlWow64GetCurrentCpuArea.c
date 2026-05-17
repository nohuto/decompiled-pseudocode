/*
 * XREFs of RtlWow64GetCurrentCpuArea @ 0x180075780
 * Callers:
 *     RtlWow64GetCurrentMachine @ 0x1801108D0 (RtlWow64GetCurrentMachine.c)
 * Callees:
 *     RtlpGetEntireXStateAreaLength @ 0x180075A00 (RtlpGetEntireXStateAreaLength.c)
 */

__int64 __fastcall RtlWow64GetCurrentCpuArea(_WORD *a1, __int64 *a2, _QWORD *a3)
{
  unsigned int v3; // r10d
  _WORD *v7; // r15
  __int16 v8; // bp
  __int64 v10; // r11
  int v11; // edx
  __int64 v12; // r9
  unsigned int v13; // edi
  int v14; // r14d
  int v15; // eax
  int v16; // r8d
  int v17; // eax
  int v18; // r14d
  int EntireXStateAreaLength; // eax
  __int64 v20; // rcx

  v3 = 0;
  v7 = NtCurrentTeb()->TlsSlots[1];
  v8 = v7[1];
  if ( v8 != 332 )
  {
    if ( v7[1] == 452 )
    {
      v11 = 0x200000;
      v13 = 4;
    }
    else if ( (unsigned __int16)v7[1] == 34404 )
    {
      v11 = 0x100000;
      v13 = 8;
    }
    else
    {
      if ( (unsigned __int16)v7[1] != 43620 )
        return 3221225485LL;
      v13 = 8;
      v11 = 0x400000;
    }
    v12 = 0LL;
    v10 = 0LL;
    goto LABEL_9;
  }
  v10 = MEMORY[0x7FFE03D8] & 0x40000000000009FCLL;
  v11 = 0x10000;
  v12 = MEMORY[0x7FFE03D8] & 0x40000000000009FCLL;
  v13 = 2;
  if ( (MEMORY[0x7FFE03D8] & 0x40000000000009FCLL) == 0 )
  {
LABEL_9:
    v14 = 0;
LABEL_10:
    v15 = 0;
    v16 = 0;
    if ( (v11 & 0x10000) != 0 )
    {
      v15 = 716;
      v16 = 4;
    }
    else
    {
      if ( (v11 & 0x100000) != 0 )
      {
        v15 = 1232;
      }
      else
      {
        if ( (v11 & 0x200000) != 0 )
        {
          v15 = 416;
          v16 = 8;
          goto LABEL_12;
        }
        if ( (v11 & 0x400000) == 0 )
          goto LABEL_12;
        v15 = 912;
      }
      v16 = 16;
    }
LABEL_12:
    v17 = v15 + 32;
    if ( v14 )
    {
      v18 = -v16 & (v16 + v17 - 1);
      if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
      {
        v12 = v10 & (MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8]);
        if ( (v11 & 0x10000) == 0 && (v11 & 0x100000) == 0 )
        {
          if ( (v11 & 0x400000) != 0 )
            v12 &= 4u;
          else
            v12 = 0LL;
        }
      }
      EntireXStateAreaLength = RtlpGetEntireXStateAreaLength(v12);
      v17 = v18 - v16 + EntireXStateAreaLength - 448;
    }
    v3 = v16 + v17 - 1;
    goto LABEL_17;
  }
  v11 = 65600;
  if ( MEMORY[0x7FFE03D8] )
  {
    v14 = 2;
    goto LABEL_10;
  }
LABEL_17:
  v20 = ~(v13 * 2 - 1LL) & ((unsigned __int64)&v7[v13 + 1] + 1);
  if ( a1 )
    *a1 = v8;
  if ( a2 )
    *a2 = v20;
  if ( a3 )
    *a3 = *(_QWORD *)((v20 + v3 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL);
  return 0LL;
}
