/*
 * XREFs of RaidUpdateZoneIoReceiveWithStatus @ 0x140054864
 * Callers:
 *     RaidStartIoPacket @ 0x140004760 (RaidStartIoPacket.c)
 * Callees:
 *     DbgLogRequest @ 0x140015470 (DbgLogRequest.c)
 *     RaidGetIoStartingLbaAndLength @ 0x140022870 (RaidGetIoStartingLbaAndLength.c)
 *     IsZonedWriteRequest @ 0x140025E10 (IsZonedWriteRequest.c)
 *     GetZoneIndexFromUnitAndLba @ 0x14006CE84 (GetZoneIndexFromUnitAndLba.c)
 *     PortSrbGetLbaFromCdb @ 0x14013AC9C (PortSrbGetLbaFromCdb.c)
 */

bool __fastcall RaidUpdateZoneIoReceiveWithStatus(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r13
  __int64 v5; // rdi
  unsigned __int8 *v6; // r14
  char v7; // si
  unsigned int v8; // ebp
  unsigned int v9; // r10d
  unsigned int *v10; // r9
  __int64 v11; // rax
  unsigned __int8 *v12; // r11
  unsigned __int64 v13; // r8
  char v14; // r11
  unsigned __int8 v15; // bp
  unsigned int v16; // esi
  unsigned int v17; // r10d
  unsigned int *v18; // r9
  __int64 v19; // rax
  unsigned __int64 v20; // r8
  __int64 v21; // rsi
  __int64 LbaFromCdb; // rax
  __int64 ZoneIndexFromUnitAndLba; // r10
  __int64 v24; // rdx
  signed __int8 v25; // al
  signed __int8 v26; // al
  char v27; // tt
  bool v28; // bp
  __int64 v29; // r10
  __int64 v31; // [rsp+90h] [rbp+18h] BYREF
  __int64 v32; // [rsp+98h] [rbp+20h] BYREF

  v31 = a3;
  if ( !a2 )
    return 0;
  v4 = *(_QWORD *)(a2 + 184);
  v5 = *(_QWORD *)(v4 + 8);
  if ( *(_BYTE *)(v5 + 2) == 40 )
  {
    v6 = 0LL;
    v7 = 0;
    if ( !*(_DWORD *)(v5 + 20) )
    {
      v8 = *(_DWORD *)(v5 + 56);
      v9 = 0;
      if ( v8 )
      {
        v10 = (unsigned int *)(v5 + 120);
        do
        {
          v11 = *v10;
          v12 = v6;
          if ( (unsigned int)v11 >= 0x80 )
          {
            v13 = *(unsigned int *)(v5 + 16);
            if ( (unsigned int)v11 < (unsigned int)v13 )
            {
              if ( *(_DWORD *)(v5 + v11) == 64 )
              {
                if ( v11 + 40 <= v13 )
                {
                  if ( *(_BYTE *)(v5 + v11 + 10) )
                    v6 = (unsigned __int8 *)(v11 + v5 + 24);
                  break;
                }
              }
              else if ( *(_DWORD *)(v5 + v11) == 65 )
              {
                if ( v11 + 56 <= v13 )
                {
                  v7 = 1;
                  if ( !*(_BYTE *)(v5 + v11 + 10) )
                    break;
                  v6 = (unsigned __int8 *)(v11 + v5 + 24);
                }
              }
              else if ( *(_DWORD *)(v5 + v11) == 66 && v11 + 40 <= v13 )
              {
                v6 = (unsigned __int8 *)(v11 + v5 + 32);
                if ( !*(_DWORD *)(v5 + v11 + 12) )
                  v6 = v12;
                break;
              }
              if ( v7 )
                break;
            }
          }
          ++v9;
          ++v10;
        }
        while ( v9 < v8 );
      }
    }
    v14 = 0;
    v15 = 0;
    if ( !*(_DWORD *)(v5 + 20) )
    {
      v16 = *(_DWORD *)(v5 + 56);
      v17 = 0;
      if ( v16 )
      {
        v18 = (unsigned int *)(v5 + 120);
        do
        {
          v19 = *v18;
          if ( (unsigned int)v19 >= 0x80 )
          {
            v20 = *(unsigned int *)(v5 + 16);
            if ( (unsigned int)v19 < (unsigned int)v20 )
            {
              if ( *(_DWORD *)(v19 + v5) == 64 )
              {
                if ( v19 + 40 <= v20 )
                {
                  v15 = *(_BYTE *)(v19 + v5 + 10);
                  break;
                }
              }
              else if ( *(_DWORD *)(v19 + v5) == 65 )
              {
                if ( v19 + 56 <= v20 )
                {
                  v15 = *(_BYTE *)(v19 + v5 + 10);
                  v14 = 1;
                }
              }
              else if ( *(_DWORD *)(v19 + v5) == 66 && v19 + 40 <= v20 )
              {
                break;
              }
              if ( v14 )
                break;
            }
          }
          ++v17;
          ++v18;
        }
        while ( v17 < v16 );
      }
    }
  }
  else
  {
    v15 = *(_BYTE *)(v5 + 10);
    v6 = (unsigned __int8 *)(v5 + 72);
  }
  v21 = *(_QWORD *)(*(_QWORD *)(v4 + 40) + 64LL);
  if ( !IsZonedWriteRequest(v21, a2, 0LL, 0LL) )
    return 0;
  LbaFromCdb = PortSrbGetLbaFromCdb(v6, v15);
  ZoneIndexFromUnitAndLba = (unsigned int)GetZoneIndexFromUnitAndLba(v21, LbaFromCdb);
  while ( 1 )
  {
    v24 = *(_QWORD *)(v21 + 3440);
    v25 = *(_BYTE *)(v24 + ZoneIndexFromUnitAndLba);
    if ( v25 == -1 )
      break;
    v27 = *(_BYTE *)(v24 + ZoneIndexFromUnitAndLba);
    v26 = _InterlockedCompareExchange8((volatile signed __int8 *)(v24 + ZoneIndexFromUnitAndLba), v25 + 1, v25);
    if ( v27 == v26 )
    {
      v28 = v26 != 0;
      goto LABEL_48;
    }
  }
  *(_DWORD *)(v5 + 12) |= 0x1000000u;
  _InterlockedAdd((volatile signed __int32 *)(a1 + 176), 1u);
  v28 = 1;
  ++*(_DWORD *)(*(_QWORD *)(v21 + 24) + 5664LL);
  ++*(_DWORD *)(v21 + 2288);
LABEL_48:
  if ( (qword_140170460 & 0x1000) != 0 )
  {
    v32 = 0LL;
    LODWORD(v31) = 0;
    RaidGetIoStartingLbaAndLength(v6, (__int64)&v32, (__int64)&v31);
    DbgLogRequest(
      *(_QWORD *)(v21 + 24),
      45,
      v32,
      (unsigned int)v31,
      *(unsigned __int8 *)(v29 + *(_QWORD *)(v21 + 3440)),
      v5,
      0LL);
  }
  return v28;
}
