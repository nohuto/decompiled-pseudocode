/*
 * XREFs of RaidLogRequestComplete @ 0x14001512C
 * Callers:
 *     RaidUnitCompleteRequest @ 0x14001F490 (RaidUnitCompleteRequest.c)
 *     RaUnitAsyncError @ 0x140029460 (RaUnitAsyncError.c)
 *     RaidUnitCompleteResetRequest @ 0x14003C670 (RaidUnitCompleteResetRequest.c)
 *     RaidUpdateUnitIdentityWorkRoutine @ 0x1400A1600 (RaidUpdateUnitIdentityWorkRoutine.c)
 * Callees:
 *     DbgLogRequest @ 0x140015470 (DbgLogRequest.c)
 */

__int64 __fastcall RaidLogRequestComplete(int a1, __int64 a2, __int64 a3)
{
  char v3; // r10
  unsigned __int8 v4; // r9
  __int64 v6; // r11
  int v7; // r15d
  unsigned __int8 v8; // r14
  unsigned __int8 v9; // bp
  _BYTE *v10; // rbx
  unsigned __int8 v11; // si
  int v12; // edi
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // esi
  unsigned int *v16; // rdi
  __int64 v17; // rcx
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  __int64 v21; // rdx
  unsigned int v22; // ebp
  unsigned int v23; // edi
  unsigned int *v24; // rsi
  __int64 v25; // rcx
  unsigned __int64 v26; // r14
  int v27; // edx
  unsigned int v28; // ebp
  unsigned int *v29; // rdi
  __int64 v30; // rcx
  unsigned __int64 v31; // r14
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rcx
  char v34; // r12
  unsigned int v35; // ebp
  unsigned int v36; // esi
  unsigned int *v37; // r15
  __int64 v38; // rcx
  unsigned __int64 v39; // rdi
  _BYTE *v40; // rdx
  _BYTE *v41; // rdx

  v3 = *(_BYTE *)(a3 + 2);
  v4 = 0;
  v6 = a3;
  v7 = a1;
  v8 = 0;
  v9 = 0;
  v10 = 0LL;
  v11 = 0;
  if ( v3 == 40 )
    v12 = *(_DWORD *)(a3 + 20);
  else
    v12 = *(unsigned __int8 *)(a3 + 2);
  if ( v3 != 40 )
    a3 = 0LL;
  if ( v12 )
  {
    switch ( v12 )
    {
      case 23:
        if ( v3 == 40 )
        {
          v28 = *(_DWORD *)(a3 + 56);
          if ( v28 )
          {
            v29 = (unsigned int *)(a3 + 120);
            while ( 1 )
            {
              v30 = *v29;
              v11 = 0;
              if ( (unsigned int)v30 >= 0x80 )
              {
                v31 = *(unsigned int *)(a3 + 16);
                if ( (unsigned int)v30 <= (unsigned int)v31 && *(_DWORD *)(v30 + a3) == 96 && v30 + 24 <= v31 )
                  break;
              }
              LODWORD(v10) = (_DWORD)v10 + 1;
              ++v29;
              if ( (unsigned int)v10 >= v28 )
                goto LABEL_47;
            }
            v11 = *(_BYTE *)(v30 + a3 + 8);
          }
LABEL_47:
          v32 = *(unsigned __int8 *)(a3 + 3);
          v33 = (unsigned __int64)v11 << 8;
        }
        else
        {
          v33 = *(unsigned __int8 *)(v6 + 3);
          v32 = (unsigned __int64)*(unsigned __int8 *)(v6 + 4) << 8;
        }
        v21 = ((v33 | v32) << 8) | 0x17000000;
        break;
      case 36:
        if ( v3 == 40 )
        {
          v22 = *(_DWORD *)(a3 + 56);
          v23 = 0;
          if ( v22 )
          {
            v24 = (unsigned int *)(a3 + 120);
            while ( 1 )
            {
              v25 = *v24;
              LODWORD(v10) = 0;
              if ( (unsigned int)v25 >= 0x80 )
              {
                v26 = *(unsigned int *)(a3 + 16);
                if ( (unsigned int)v25 <= (unsigned int)v26 && *(_DWORD *)(v25 + a3) == 97 && v25 + 24 <= v26 )
                  break;
              }
              ++v23;
              ++v24;
              if ( v23 >= v22 )
                goto LABEL_34;
            }
            LODWORD(v10) = *(_DWORD *)(v25 + a3 + 12);
          }
LABEL_34:
          v27 = ((_DWORD)v10 << 8) | *(unsigned __int8 *)(a3 + 3);
        }
        else
        {
          v27 = *(unsigned __int8 *)(v6 + 3) | (*(_DWORD *)(v6 + 8) << 8);
        }
        v21 = (unsigned int)(v27 << 8) | 0x24000000LL;
        break;
      case 37:
        if ( v3 == 40 )
        {
          v15 = *(_DWORD *)(a3 + 56);
          if ( v15 )
          {
            v16 = (unsigned int *)(a3 + 120);
            while ( 1 )
            {
              v17 = *v16;
              v9 = 0;
              if ( (unsigned int)v17 >= 0x80 )
              {
                v18 = *(unsigned int *)(a3 + 16);
                if ( (unsigned int)v17 <= (unsigned int)v18 && *(_DWORD *)(v17 + a3) == 98 && v17 + 24 <= v18 )
                  break;
              }
              LODWORD(v10) = (_DWORD)v10 + 1;
              ++v16;
              if ( (unsigned int)v10 >= v15 )
                goto LABEL_21;
            }
            v9 = *(_BYTE *)(v17 + a3 + 8);
          }
LABEL_21:
          v19 = *(unsigned __int8 *)(a3 + 3);
          v20 = (unsigned __int64)v9 << 8;
        }
        else
        {
          v20 = *(unsigned __int8 *)(v6 + 3);
          v19 = (unsigned __int64)*(unsigned __int8 *)(v6 + 4) << 8;
        }
        v21 = ((v20 | v19) << 8) | 0x25000000;
        break;
      default:
        v13 = *(unsigned __int8 *)(v6 + 3);
        v14 = (unsigned int)(v12 << 24);
        goto LABEL_80;
    }
    return DbgLogRequest(v7, 2, a2, *(_DWORD *)(a2 + 48), v6, v21, 0LL);
  }
  if ( v3 != 40 )
  {
    v13 = *(unsigned __int8 *)(v6 + 3) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 72) << 8);
    v14 = *(unsigned __int8 *)(v6 + 4);
    goto LABEL_80;
  }
  v34 = 0;
  if ( *(_BYTE *)(a3 + 2) != 40 || *(_DWORD *)(a3 + 20) )
    goto LABEL_78;
  v35 = *(_DWORD *)(a3 + 56);
  v36 = 0;
  if ( !v35 )
    goto LABEL_76;
  v37 = (unsigned int *)(a3 + 120);
  while ( 1 )
  {
    v38 = *v37;
    if ( (unsigned int)v38 >= 0x80 )
    {
      v39 = *(unsigned int *)(a3 + 16);
      if ( (unsigned int)v38 < (unsigned int)v39 )
        break;
    }
LABEL_69:
    ++v36;
    ++v37;
    if ( v36 >= v35 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)(v38 + a3) != 64 )
  {
    if ( *(_DWORD *)(v38 + a3) == 65 )
    {
      if ( v38 + 56 <= v39 )
      {
        v8 = *(_BYTE *)(v38 + a3 + 8);
        v40 = (_BYTE *)(v38 + a3 + 24);
        v34 = 1;
        if ( !*(_BYTE *)(v38 + a3 + 10) )
          v40 = v10;
        v10 = v40;
      }
    }
    else if ( *(_DWORD *)(v38 + a3) == 66 && v38 + 40 <= v39 )
    {
      if ( *(_DWORD *)(v38 + a3 + 12) )
        v10 = (_BYTE *)(v38 + a3 + 32);
      goto LABEL_74;
    }
    goto LABEL_68;
  }
  if ( v38 + 40 > v39 )
  {
LABEL_68:
    if ( v34 )
      goto LABEL_75;
    goto LABEL_69;
  }
  v41 = (_BYTE *)(v38 + a3 + 24);
  if ( !*(_BYTE *)(v38 + a3 + 10) )
    v41 = v10;
  v10 = v41;
LABEL_74:
  v8 = *(_BYTE *)(v38 + a3 + 8);
LABEL_75:
  v7 = a1;
LABEL_76:
  if ( v10 )
    v4 = *v10;
LABEL_78:
  v13 = ((unsigned __int64)v4 << 8) | *(unsigned __int8 *)(a3 + 3);
  v14 = v8;
LABEL_80:
  v21 = v14 | (v13 << 8);
  return DbgLogRequest(v7, 2, a2, *(_DWORD *)(a2 + 48), v6, v21, 0LL);
}
