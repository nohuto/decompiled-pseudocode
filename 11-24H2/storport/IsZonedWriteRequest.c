/*
 * XREFs of IsZonedWriteRequest @ 0x140025E10
 * Callers:
 *     RaidUnitCompleteRequest @ 0x14001F490 (RaidUnitCompleteRequest.c)
 *     RaidUpdateZoneIoMetadata @ 0x1400282B0 (RaidUpdateZoneIoMetadata.c)
 *     RaidUpdateZoneIoReceiveWithStatus @ 0x140054864 (RaidUpdateZoneIoReceiveWithStatus.c)
 *     RaidUpdateZoneIoSubmission @ 0x14006D564 (RaidUpdateZoneIoSubmission.c)
 * Callees:
 *     GetZoneIndexFromUnitAndLba @ 0x14006CE84 (GetZoneIndexFromUnitAndLba.c)
 *     PortSrbGetLbaFromCdb @ 0x14013AC9C (PortSrbGetLbaFromCdb.c)
 */

char __fastcall IsZonedWriteRequest(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v6; // rdx
  __int64 v7; // rdx
  char v8; // r9
  unsigned int v10; // esi
  _BYTE *v11; // r11
  unsigned int v12; // ebp
  unsigned int v13; // r12d
  unsigned int *v14; // rdi
  __int64 v15; // rax
  unsigned __int64 v16; // r8
  int v17; // r14d
  __int64 v18; // r15
  unsigned __int8 v19; // r8
  unsigned int v20; // r12d
  unsigned int *v21; // r14
  __int64 v22; // rax
  unsigned __int64 v23; // rdi
  int v24; // ebp
  unsigned __int64 v25; // rcx
  int v27; // eax
  int v28; // r14d
  int v29; // ebp
  __int64 LbaFromCdb; // rax
  __int64 v31; // r10

  if ( a3 )
    a2 = *(_QWORD *)(a3 + 160);
  if ( !a2 )
    return 0;
  if ( !a1 )
    return 0;
  if ( (*(_BYTE *)(a1 + 136) & 2) == 0 )
    return 0;
  v6 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v6 != 15 )
    return 0;
  v7 = *(_QWORD *)(v6 + 8);
  v8 = *(_BYTE *)(v7 + 2);
  if ( v8 == 40 ? *(_DWORD *)(v7 + 20) : *(unsigned __int8 *)(v7 + 2) )
    return 0;
  if ( v8 != 40 )
  {
    v19 = *(_BYTE *)(v7 + 10);
    v11 = (_BYTE *)(v7 + 72);
    goto LABEL_31;
  }
  v10 = 0;
  v11 = 0LL;
  if ( !*(_DWORD *)(v7 + 20) )
  {
    v12 = *(_DWORD *)(v7 + 56);
    v13 = 0;
    if ( v12 )
    {
      v14 = (unsigned int *)(v7 + 120);
      do
      {
        v15 = *v14;
        if ( (unsigned int)v15 >= 0x80 )
        {
          v16 = *(unsigned int *)(v7 + 16);
          if ( (unsigned int)v15 < (unsigned int)v16 )
          {
            v17 = *(_DWORD *)(v15 + v7);
            v18 = v15 + v7;
            if ( v17 == 64 )
            {
              if ( (unsigned __int64)(unsigned int)v15 + 40 <= v16 )
              {
                if ( *(_BYTE *)(v18 + 10) )
                  v11 = (_BYTE *)(v18 + 24);
                break;
              }
            }
            else
            {
              v28 = v17 - 65;
              if ( v28 )
              {
                if ( v28 == 1 && (unsigned __int64)(unsigned int)v15 + 40 <= v16 )
                {
                  if ( *(_DWORD *)(v18 + 12) )
                    v11 = (_BYTE *)(v18 + 32);
                  break;
                }
              }
              else if ( (unsigned __int64)(unsigned int)v15 + 56 <= v16 )
              {
                if ( *(_BYTE *)(v18 + 10) )
                  v11 = (_BYTE *)(v18 + 24);
                break;
              }
            }
          }
        }
        ++v13;
        ++v14;
      }
      while ( v13 < v12 );
    }
  }
  v19 = 0;
  if ( *(_DWORD *)(v7 + 20) )
    goto LABEL_31;
  v20 = *(_DWORD *)(v7 + 56);
  if ( !v20 )
    goto LABEL_31;
  v21 = (unsigned int *)(v7 + 120);
  while ( 1 )
  {
    v22 = *v21;
    if ( (unsigned int)v22 < 0x80 )
      goto LABEL_27;
    v23 = *(unsigned int *)(v7 + 16);
    if ( (unsigned int)v22 >= (unsigned int)v23 )
      goto LABEL_27;
    v24 = *(_DWORD *)(v22 + v7);
    if ( v24 == 64 )
    {
      v25 = (unsigned int)v22 + 40LL;
      goto LABEL_26;
    }
    v29 = v24 - 65;
    if ( !v29 )
      break;
    if ( v29 == 1 && (unsigned __int64)(unsigned int)v22 + 40 <= v23 )
      goto LABEL_31;
LABEL_27:
    ++v10;
    ++v21;
    if ( v10 >= v20 )
      goto LABEL_31;
  }
  v25 = (unsigned int)v22 + 56LL;
LABEL_26:
  if ( v25 > v23 )
    goto LABEL_27;
  v19 = *(_BYTE *)(v22 + v7 + 10);
LABEL_31:
  if ( !v11 || ((*v11 - 10) & 0x5F) != 0 || !*(_DWORD *)(a1 + 932) )
    return 0;
  v27 = v8 == 40 ? *(_DWORD *)(v7 + 24) : *(_DWORD *)(v7 + 12);
  if ( (v27 & 0x1000) == 0 || !*(_QWORD *)(a1 + 3440) )
    return 0;
  if ( a4 )
  {
    LbaFromCdb = PortSrbGetLbaFromCdb(v11, v19);
    *a4 = GetZoneIndexFromUnitAndLba(v31, LbaFromCdb);
  }
  return 1;
}
