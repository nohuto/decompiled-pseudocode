/*
 * XREFs of RaidUpdateZoneIoSubmission @ 0x14006D564
 * Callers:
 *     RaidUpdateZoneIoMetadata @ 0x1400282B0 (RaidUpdateZoneIoMetadata.c)
 * Callees:
 *     DbgLogRequest @ 0x140015470 (DbgLogRequest.c)
 *     RaidGetIoStartingLbaAndLength @ 0x140022870 (RaidGetIoStartingLbaAndLength.c)
 *     IsZonedWriteRequest @ 0x140025E10 (IsZonedWriteRequest.c)
 *     GetZoneIndexFromUnitAndLba @ 0x14006CE84 (GetZoneIndexFromUnitAndLba.c)
 *     PortSrbGetLbaFromCdb @ 0x14013AC9C (PortSrbGetLbaFromCdb.c)
 */

void __fastcall RaidUpdateZoneIoSubmission(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r13
  __int64 v6; // rdi
  unsigned __int8 *v7; // rsi
  char v8; // bp
  unsigned int v9; // r14d
  unsigned int v10; // r10d
  unsigned int *v11; // r9
  __int64 v12; // rax
  unsigned __int8 *v13; // r11
  unsigned __int64 v14; // r8
  char v15; // r11
  unsigned __int8 v16; // bp
  unsigned int v17; // r14d
  unsigned int v18; // r10d
  unsigned int *v19; // r9
  __int64 v20; // rax
  unsigned __int64 v21; // r8
  __int64 v22; // r14
  ULONG_PTR LbaFromCdb; // rax
  unsigned int ZoneIndexFromUnitAndLba; // eax
  _QWORD *v25; // r8
  __int64 v26; // rdx
  signed __int8 v27; // al
  char v28; // tt
  _QWORD *v29; // r10
  __int64 v30; // r11
  __int64 v31; // [rsp+40h] [rbp-38h] BYREF
  int v32; // [rsp+90h] [rbp+18h]
  unsigned int v33; // [rsp+98h] [rbp+20h] BYREF

  if ( a3 )
    a2 = *(_QWORD *)(a3 + 160);
  if ( !a2 )
    return;
  v5 = *(_QWORD *)(a2 + 184);
  v6 = *(_QWORD *)(v5 + 8);
  v32 = *(_DWORD *)(v6 + 12);
  if ( *(_BYTE *)(v6 + 2) != 40 )
  {
    v16 = *(_BYTE *)(v6 + 10);
    v7 = (unsigned __int8 *)(v6 + 72);
    goto LABEL_44;
  }
  v7 = 0LL;
  v8 = 0;
  if ( !*(_DWORD *)(v6 + 20) )
  {
    v9 = *(_DWORD *)(v6 + 56);
    v10 = 0;
    if ( v9 )
    {
      v11 = (unsigned int *)(v6 + 120);
      do
      {
        v12 = *v11;
        v13 = v7;
        if ( (unsigned int)v12 >= 0x80 )
        {
          v14 = *(unsigned int *)(v6 + 16);
          if ( (unsigned int)v12 < (unsigned int)v14 )
          {
            if ( *(_DWORD *)(v12 + v6) == 64 )
            {
              if ( v12 + 40 <= v14 )
              {
                if ( *(_BYTE *)(v12 + v6 + 10) )
                  v7 = (unsigned __int8 *)(v12 + v6 + 24);
                break;
              }
            }
            else if ( *(_DWORD *)(v12 + v6) == 65 )
            {
              if ( v12 + 56 <= v14 )
              {
                v8 = 1;
                if ( !*(_BYTE *)(v12 + v6 + 10) )
                  break;
                v7 = (unsigned __int8 *)(v12 + v6 + 24);
              }
            }
            else if ( *(_DWORD *)(v12 + v6) == 66 && v12 + 40 <= v14 )
            {
              v7 = (unsigned __int8 *)(v12 + v6 + 32);
              if ( !*(_DWORD *)(v12 + v6 + 12) )
                v7 = v13;
              break;
            }
            if ( v8 )
              break;
          }
        }
        ++v10;
        ++v11;
      }
      while ( v10 < v9 );
    }
  }
  v15 = 0;
  v16 = 0;
  if ( *(_DWORD *)(v6 + 20) )
    goto LABEL_44;
  v17 = *(_DWORD *)(v6 + 56);
  v18 = 0;
  if ( !v17 )
    goto LABEL_44;
  v19 = (unsigned int *)(v6 + 120);
  while ( 1 )
  {
    v20 = *v19;
    if ( (unsigned int)v20 >= 0x80 )
    {
      v21 = *(unsigned int *)(v6 + 16);
      if ( (unsigned int)v20 < (unsigned int)v21 )
        break;
    }
LABEL_40:
    ++v18;
    ++v19;
    if ( v18 >= v17 )
      goto LABEL_44;
  }
  if ( *(_DWORD *)(v20 + v6) != 64 )
  {
    if ( *(_DWORD *)(v20 + v6) == 65 )
    {
      if ( v20 + 56 <= v21 )
      {
        v16 = *(_BYTE *)(v20 + v6 + 10);
        v15 = 1;
      }
    }
    else if ( *(_DWORD *)(v20 + v6) == 66 && v20 + 40 <= v21 )
    {
      goto LABEL_44;
    }
    goto LABEL_39;
  }
  if ( v20 + 40 > v21 )
  {
LABEL_39:
    if ( v15 )
      goto LABEL_44;
    goto LABEL_40;
  }
  v16 = *(_BYTE *)(v20 + v6 + 10);
LABEL_44:
  v22 = *(_QWORD *)(*(_QWORD *)(v5 + 40) + 64LL);
  if ( IsZonedWriteRequest(v22, a2, 0LL, 0LL) )
  {
    LbaFromCdb = PortSrbGetLbaFromCdb(v7, v16);
    ZoneIndexFromUnitAndLba = GetZoneIndexFromUnitAndLba(v22, LbaFromCdb);
    v25 = (_QWORD *)(v22 + 3440);
    v26 = ZoneIndexFromUnitAndLba;
    if ( (v32 & 0x1000000) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 176));
    }
    else
    {
      do
      {
        v27 = *(_BYTE *)(*v25 + v26);
        if ( !v27 )
          break;
        v28 = *(_BYTE *)(*v25 + v26);
      }
      while ( v28 != _InterlockedCompareExchange8((volatile signed __int8 *)(*v25 + v26), v27 - 1, v27) );
    }
    if ( (qword_140170460 & 0x1000) != 0 )
    {
      v31 = 0LL;
      v33 = 0;
      RaidGetIoStartingLbaAndLength(v7, (__int64)&v31, (__int64)&v33);
      DbgLogRequest(*(_QWORD *)(v22 + 24), 46, v31, v33, *(unsigned __int8 *)(v30 + *v29), v6, 0LL);
    }
  }
}
