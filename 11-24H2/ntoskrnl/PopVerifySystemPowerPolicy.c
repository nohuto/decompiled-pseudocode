/*
 * XREFs of PopVerifySystemPowerPolicy @ 0x14099EEFC
 * Callers:
 *     PopApplyPolicy @ 0x14099EC20 (PopApplyPolicy.c)
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 * Callees:
 *     PopIsHiberbootSupported @ 0x1406F7530 (PopIsHiberbootSupported.c)
 *     PopVerifyPowerActionPolicy @ 0x14099F5BC (PopVerifyPowerActionPolicy.c)
 *     PopVerifySystemPowerState @ 0x140A77F9C (PopVerifySystemPowerState.c)
 *     PopIsHibernateSupported @ 0x140A88308 (PopIsHibernateSupported.c)
 */

__int64 __fastcall PopVerifySystemPowerPolicy(_OWORD *a1, __int64 a2)
{
  __int128 v3; // xmm0
  _OWORD *v4; // rcx
  int *v5; // rbx
  int v6; // eax
  int v7; // ecx
  unsigned int v8; // eax
  unsigned int v9; // eax
  int *v10; // r10
  void *v11; // r11
  int v12; // r9d
  int v13; // ecx
  int v14; // r9d
  int v15; // ecx
  int *v16; // r10
  int v17; // r9d
  int v18; // ecx
  int *v19; // r10
  int v20; // r9d
  int v21; // ecx
  __int64 v22; // r14
  unsigned int v23; // ebp
  int *v24; // rsi
  int v25; // ebx
  int v26; // r9d
  int v27; // eax
  unsigned int v28; // eax
  _DWORD *v29; // rcx
  int v30; // eax
  _DWORD *v31; // rdx
  unsigned int v32; // r8d
  int v33; // r9d
  char v34; // al
  int v35; // eax
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx

  *(_OWORD *)a2 = *a1;
  *(_OWORD *)(a2 + 16) = a1[1];
  *(_OWORD *)(a2 + 32) = a1[2];
  *(_OWORD *)(a2 + 48) = a1[3];
  *(_OWORD *)(a2 + 64) = a1[4];
  *(_OWORD *)(a2 + 80) = a1[5];
  *(_OWORD *)(a2 + 96) = a1[6];
  v3 = a1[7];
  v4 = a1 + 8;
  *(_OWORD *)(a2 + 112) = v3;
  *(_OWORD *)(a2 + 128) = *v4;
  *(_OWORD *)(a2 + 144) = v4[1];
  *(_OWORD *)(a2 + 160) = v4[2];
  *(_OWORD *)(a2 + 176) = v4[3];
  *(_OWORD *)(a2 + 192) = v4[4];
  *(_OWORD *)(a2 + 208) = v4[5];
  *(_QWORD *)(a2 + 224) = *((_QWORD *)v4 + 12);
  if ( *(_DWORD *)a2 != 1 )
    return 3221225485LL;
  if ( HIBYTE(word_140F0B664) )
  {
    *(_DWORD *)(a2 + 72) = 4;
  }
  else if ( (_BYTE)word_140F0B664 )
  {
    *(_DWORD *)(a2 + 72) = 3;
  }
  else if ( byte_140F0B663 )
  {
    *(_DWORD *)(a2 + 72) = 2;
  }
  v5 = (int *)(a2 + 68);
  v6 = *(_DWORD *)(a2 + 68);
  if ( v6 < 2 )
  {
    *v5 = 2;
    v6 = 2;
  }
  else if ( v6 > 4 )
  {
    *v5 = 4;
    v6 = 4;
  }
  v7 = *(_DWORD *)(a2 + 72);
  if ( v7 < 2 )
  {
    *(_DWORD *)(a2 + 72) = 2;
    v7 = 2;
  }
  else if ( v7 > 4 )
  {
    *(_DWORD *)(a2 + 72) = 4;
    v7 = 4;
  }
  if ( v7 < v6 )
  {
    *(_DWORD *)(a2 + 72) = v6;
    v7 = v6;
  }
  if ( v6 < (int)PopAdminPolicy )
    *v5 = PopAdminPolicy;
  if ( v7 > SDWORD1(PopAdminPolicy) )
    *(_DWORD *)(a2 + 72) = DWORD1(PopAdminPolicy);
  v8 = *(_DWORD *)(a2 + 192);
  if ( v8 < DWORD2(PopAdminPolicy) )
  {
    *(_DWORD *)(a2 + 192) = DWORD2(PopAdminPolicy);
    v8 = DWORD2(PopAdminPolicy);
  }
  if ( v8 > HIDWORD(PopAdminPolicy) )
    *(_DWORD *)(a2 + 192) = HIDWORD(PopAdminPolicy);
  v9 = *(_DWORD *)(a2 + 212);
  if ( v9 < (unsigned int)qword_140F0B650 )
  {
    *(_DWORD *)(a2 + 212) = qword_140F0B650;
    v9 = qword_140F0B650;
  }
  if ( v9 > HIDWORD(qword_140F0B650) )
    *(_DWORD *)(a2 + 212) = HIDWORD(qword_140F0B650);
  PopVerifyPowerActionPolicy(a2 + 4);
  PopVerifyPowerActionPolicy(a2 + 16);
  PopVerifyPowerActionPolicy(a2 + 28);
  PopVerifyPowerActionPolicy(a2 + 48);
  v10 = (int *)(a2 + 40);
  v11 = &PopCapabilities;
  if ( a2 != -40 )
  {
    v12 = *v10;
    v13 = *v10;
    if ( *v10 <= -1 || (unsigned int)(v12 - 2) <= 3 )
    {
      if ( v12 == 5 )
      {
        if ( PopIsHiberbootSupported((__int64)&PopCapabilities) || (unsigned __int8)PopIsHibernateSupported(v37) )
          goto LABEL_29;
        v12 = 4;
      }
      else if ( v13 != 4 )
      {
        if ( v13 != 3 )
        {
          if ( v13 != 2 )
            goto LABEL_29;
LABEL_143:
          if ( !byte_140F0B663 )
          {
            v12 = 3;
            if ( !(_BYTE)word_140F0B664 )
            {
              v12 = 4;
              if ( !HIBYTE(word_140F0B664) )
                v12 = 1;
            }
          }
          goto LABEL_29;
        }
LABEL_141:
        if ( (_BYTE)word_140F0B664 )
          goto LABEL_29;
        v12 = 2;
        goto LABEL_143;
      }
      if ( HIBYTE(word_140F0B664) )
      {
LABEL_29:
        *v10 = v12;
        goto LABEL_30;
      }
      v12 = 3;
      goto LABEL_141;
    }
  }
LABEL_30:
  if ( v5 )
  {
    v14 = *v5;
    v15 = *v5;
    if ( *v5 <= -1 || (unsigned int)(v14 - 2) <= 3 )
    {
      if ( v14 == 5 )
      {
        if ( PopIsHiberbootSupported((__int64)v11) || (unsigned __int8)PopIsHibernateSupported(v38) )
          goto LABEL_35;
        v14 = 4;
      }
      else if ( v15 != 4 )
      {
        if ( v15 != 3 )
        {
          if ( v15 != 2 )
            goto LABEL_35;
LABEL_150:
          if ( !byte_140F0B663 )
          {
            v14 = 3;
            if ( !(_BYTE)word_140F0B664 )
            {
              v14 = 4;
              if ( !HIBYTE(word_140F0B664) )
                v14 = 1;
            }
          }
          goto LABEL_35;
        }
LABEL_148:
        if ( (_BYTE)word_140F0B664 )
          goto LABEL_35;
        v14 = 2;
        goto LABEL_150;
      }
      if ( HIBYTE(word_140F0B664) )
      {
LABEL_35:
        *v5 = v14;
        goto LABEL_36;
      }
      v14 = 3;
      goto LABEL_148;
    }
  }
LABEL_36:
  v16 = (int *)(a2 + 72);
  if ( a2 != -72 )
  {
    v17 = *v16;
    v18 = *v16;
    if ( *v16 <= -1 || (unsigned int)(v17 - 2) <= 3 )
    {
      if ( v17 == 5 )
      {
        if ( PopIsHiberbootSupported((__int64)v11) || (unsigned __int8)PopIsHibernateSupported(v39) )
          goto LABEL_41;
        v17 = 4;
      }
      else if ( v18 != 4 )
      {
        if ( v18 != 3 )
        {
          if ( v18 != 2 )
            goto LABEL_41;
LABEL_157:
          if ( !byte_140F0B663 )
          {
            v17 = 3;
            if ( !(_BYTE)word_140F0B664 )
            {
              v17 = 4;
              if ( !HIBYTE(word_140F0B664) )
                v17 = 1;
            }
          }
          goto LABEL_41;
        }
LABEL_155:
        if ( (_BYTE)word_140F0B664 )
          goto LABEL_41;
        v17 = 2;
        goto LABEL_157;
      }
      if ( HIBYTE(word_140F0B664) )
      {
LABEL_41:
        *v16 = v17;
        goto LABEL_42;
      }
      v17 = 3;
      goto LABEL_155;
    }
  }
LABEL_42:
  v19 = (int *)(a2 + 76);
  if ( a2 == -76 )
    goto LABEL_48;
  v20 = *v19;
  v21 = *v19;
  if ( *v19 > -1 && (unsigned int)(v20 - 2) > 3 )
    goto LABEL_48;
  if ( v20 == 5 )
  {
    if ( PopIsHiberbootSupported((__int64)v11) || (unsigned __int8)PopIsHibernateSupported(v40) )
      goto LABEL_47;
    v20 = 4;
  }
  else if ( v21 != 4 )
  {
    if ( v21 != 3 )
    {
      if ( v21 != 2 )
        goto LABEL_47;
LABEL_164:
      if ( !byte_140F0B663 )
      {
        v20 = 3;
        if ( !(_BYTE)word_140F0B664 )
        {
          v20 = 4;
          if ( !HIBYTE(word_140F0B664) )
            v20 = 1;
        }
      }
      goto LABEL_47;
    }
LABEL_162:
    if ( (_BYTE)word_140F0B664 )
      goto LABEL_47;
    v20 = 2;
    goto LABEL_164;
  }
  if ( !HIBYTE(word_140F0B664) )
  {
    v20 = 3;
    goto LABEL_162;
  }
LABEL_47:
  *v19 = v20;
LABEL_48:
  v22 = a2 + 116;
  v23 = 0;
  v24 = (int *)(a2 + 104);
  do
  {
    v25 = *v24;
    PopVerifyPowerActionPolicy(v22 - 12);
    if ( v25 == 3 && *v24 < 3 )
    {
      *v24 = 6;
      PopVerifyPowerActionPolicy(v24);
    }
    if ( v24 != (int *)-12LL )
    {
      v26 = v24[3];
      if ( v26 <= -1 || (unsigned int)(v26 - 2) <= 3 )
      {
        switch ( v26 )
        {
          case 5:
            if ( PopIsHiberbootSupported((__int64)&PopCapabilities)
              || (unsigned __int8)PopIsHibernateSupported(&PopCapabilities) )
            {
              goto LABEL_55;
            }
            v26 = 4;
            break;
          case 4:
            break;
          case 3:
LABEL_169:
            if ( (_BYTE)word_140F0B664 )
              goto LABEL_55;
            v26 = 2;
            goto LABEL_171;
          case 2:
LABEL_171:
            if ( !byte_140F0B663 )
            {
              v26 = 3;
              if ( !(_BYTE)word_140F0B664 )
              {
                v26 = 4;
                if ( !HIBYTE(word_140F0B664) )
                  v26 = 1;
              }
            }
            goto LABEL_55;
          default:
            goto LABEL_55;
        }
        if ( HIBYTE(word_140F0B664) )
        {
LABEL_55:
          v24[3] = v26;
          goto LABEL_56;
        }
        v26 = 3;
        goto LABEL_169;
      }
    }
LABEL_56:
    if ( *v24 == 2 && v24[3] > 4 )
    {
      v24[3] = 4;
      PopVerifySystemPowerState(v22, 1LL);
    }
    if ( v23 )
    {
      v27 = v24[1];
      if ( *v24 == 6 )
        v28 = v27 | 0x10;
      else
        v28 = v27 & 0xFFFFFFEF;
      v24[1] = v28;
    }
    if ( (unsigned int)*(v24 - 1) > 0x64 )
      *(v24 - 1) = 100;
    ++v23;
    v22 += 24LL;
    v24 += 6;
  }
  while ( v23 < 4 );
  PopVerifyPowerActionPolicy(a2 + 220);
  if ( !*(_DWORD *)(a2 + 92) )
    *(_DWORD *)(a2 + 92) = 1;
  v29 = (_DWORD *)(a2 + 88);
  v30 = *(_DWORD *)(a2 + 88);
  v31 = (_DWORD *)(a2 + 88);
  if ( v30 && !byte_140F0B667 )
  {
    *v29 = 0;
    v31 = (_DWORD *)(a2 + 88);
    v30 = 0;
  }
  v32 = *(_DWORD *)(a2 + 60);
  v33 = v32;
  if ( v32 )
  {
    v29 = v31;
    if ( v32 < 0x3C )
    {
      *(_DWORD *)(a2 + 60) = 60;
      v33 = 60;
    }
  }
  if ( (unsigned int)(v30 - 1) <= 0x3A )
    *v29 = 60;
  v34 = *(_BYTE *)(a2 + 64);
  if ( (unsigned __int8)v34 > 0x5Au )
  {
    *(_BYTE *)(a2 + 64) = 90;
    v34 = 90;
  }
  if ( v33 && !v34 )
    *(_BYTE *)(a2 + 64) = 90;
  v35 = *(_DWORD *)(a2 + 68);
  if ( *(_DWORD *)(a2 + 72) < v35 )
    *(_DWORD *)(a2 + 72) = v35;
  if ( *(_DWORD *)(a2 + 76) > v35 )
    *(_DWORD *)(a2 + 76) = v35;
  return 0LL;
}
