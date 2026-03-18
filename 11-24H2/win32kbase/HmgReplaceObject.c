/*
 * XREFs of HmgReplaceObject @ 0x1400BB8D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x14002DFB0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14002E8D0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z @ 0x1400307E0 (-vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z.c)
 */

__int64 __fastcall HmgReplaceObject(__int64 *a1, __int128 *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // r8
  int v6; // edx
  int v7; // eax
  __int16 v8; // r8
  __int128 v9; // xmm0
  __int16 v10; // dx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rsi
  unsigned __int64 v14; // rdx
  __int64 v15; // r10
  unsigned int v16; // r9d
  unsigned int v17; // ecx
  __int64 v18; // r11
  __int64 v19; // rax
  __int64 v20; // r9
  __int64 v21; // r9
  unsigned int v22; // r8d
  unsigned int v23; // ecx
  __int64 v24; // r10
  __int64 v26; // [rsp+20h] [rbp-30h] BYREF
  int v27; // [rsp+28h] [rbp-28h]
  __int16 v28; // [rsp+2Ch] [rbp-24h]
  __int64 v29; // [rsp+30h] [rbp-20h]
  __int128 v30; // [rsp+38h] [rbp-18h]
  __int64 v31; // [rsp+48h] [rbp-8h]

  v2 = 0;
  v26 = 0LL;
  v27 = 0;
  v28 = 0;
  v5 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  v6 = (*(_DWORD *)a1 >> 8) & 0xFF0000;
  v7 = (unsigned __int16)*(_DWORD *)a1;
  v29 = v5;
  HANDLELOCK::vLockHandle(&v26, v7 | v6, 0);
  if ( v27 )
  {
    v8 = *((_WORD *)a1 + 7);
    v9 = *a2;
    v10 = *((_WORD *)a2 + 7);
    v31 = *((_QWORD *)a2 + 2);
    v11 = v8 & 0x60 | v10 & 0x80u;
    *((_WORD *)a2 + 7) = v11;
    v12 = *a1;
    *((_WORD *)a1 + 7) = v8 & 0x80 | v10 & 0x60;
    *(_QWORD *)a2 = v12;
    *((_WORD *)a2 + 6) = *((_WORD *)a1 + 6);
    *((_DWORD *)a2 + 2) = *((_DWORD *)a1 + 2);
    *((_QWORD *)a2 + 2) = a1[2];
    v30 = v9;
    v13 = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v11) + 88) + 5672LL);
    v14 = (unsigned __int16)*(_DWORD *)a1 | (*(_DWORD *)a1 >> 8) & 0xFF0000u;
    if ( (unsigned int)v14 >= 0x10000 )
    {
      if ( *(_DWORD *)v13 <= 0x10000u )
      {
        v14 = (unsigned __int16)*(_DWORD *)a1;
      }
      else
      {
        v15 = *(_QWORD *)(v13 + 16);
        v16 = *(_DWORD *)(v15 + 2056);
        if ( (unsigned __int16)*(_DWORD *)a1 >= v16 + ((*(unsigned __int16 *)(v15 + 2) + 0xFFFF) << 16) )
        {
          v20 = 0LL;
        }
        else
        {
          if ( (unsigned __int16)*(_DWORD *)a1 >= v16 )
            v17 = (((unsigned __int16)*(_DWORD *)a1 - v16) >> 16) + 1;
          else
            v17 = 0;
          v18 = *(_QWORD *)(v15 + 8LL * v17 + 8);
          if ( v17 )
            v19 = (unsigned __int16)*(_DWORD *)a1 + ((1 - v17) << 16) - v16;
          else
            v19 = (unsigned __int16)*(_DWORD *)a1;
          v20 = 0LL;
          if ( (unsigned int)v19 < *(_DWORD *)(v18 + 20) )
            v20 = *(_QWORD *)v18 + 24 * v19;
        }
        if ( *(unsigned __int8 *)(v20 + 13) == WORD1(v14) )
          v14 = (unsigned __int16)*(_DWORD *)a1;
      }
    }
    v21 = *(_QWORD *)(v13 + 16);
    v22 = *(_DWORD *)(v21 + 2056);
    if ( (unsigned int)v14 < v22 + ((*(unsigned __int16 *)(v21 + 2) + 0xFFFF) << 16) )
    {
      if ( (unsigned int)v14 >= v22 )
        v23 = (((unsigned int)v14 - v22) >> 16) + 1;
      else
        v23 = 0;
      v24 = *(_QWORD *)(v21 + 8LL * v23 + 8);
      if ( v23 )
        v14 = ((1 - v23) << 16) - v22 + (unsigned int)v14;
      if ( (unsigned int)v14 < *(_DWORD *)(v24 + 20) )
        *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v24 + 24) + 8 * (v14 >> 8)) + 16LL * (unsigned __int8)v14 + 8) = a2;
    }
    *a1 = v30;
    *((_WORD *)a1 + 6) = WORD6(v30);
    *((_DWORD *)a1 + 2) = DWORD2(v30);
    a1[2] = v31;
    HANDLELOCK::vUnlock((HANDLELOCK *)&v26);
    v2 = 1;
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v26);
  return v2;
}
