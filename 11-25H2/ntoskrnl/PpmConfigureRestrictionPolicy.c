/*
 * XREFs of PpmConfigureRestrictionPolicy @ 0x140496590
 * Callers:
 *     PpmParkApplyPolicy @ 0x1404E9D84 (PpmParkApplyPolicy.c)
 * Callees:
 *     <none>
 */

char __fastcall PpmConfigureRestrictionPolicy(__int64 a1)
{
  _UNKNOWN **v1; // rax
  unsigned __int8 v3; // r11
  _BYTE *v4; // rdi
  __int64 v5; // rbx
  __int64 *v6; // rdx
  __int64 v7; // r9
  __int64 v8; // rbp
  __int64 v9; // rsi
  __int64 v10; // rcx
  char v11; // al
  int v12; // edx
  unsigned __int64 v13; // rcx
  _BYTE *i; // rax
  unsigned __int8 v15; // r10
  unsigned __int8 v16; // cl
  __int64 v17; // rcx
  __int128 v19; // [rsp+0h] [rbp-18h]
  _UNKNOWN *retaddr; // [rsp+18h] [rbp+0h] BYREF

  v1 = &retaddr;
  if ( *(_DWORD *)(a1 + 160) <= 1u )
    return (char)v1;
  v3 = *(_BYTE *)(a1 + 10);
  v4 = &unk_140E0B244;
  v5 = dword_140F0B70C;
  v6 = 0LL;
  *(_QWORD *)&v19 = 0LL;
  v7 = 0LL;
  v8 = 7LL;
  do
  {
    v9 = *((unsigned int *)v4 - 1);
    if ( !*v4 )
      v3 = *(_BYTE *)(a1 + 10);
    switch ( (_DWORD)v9 )
    {
      case 0:
        goto LABEL_22;
      case 1:
        v17 = PpmEntryLevelPerfProfile;
        if ( !PpmEntryLevelPerfProfile )
          goto LABEL_14;
LABEL_29:
        v6 = (__int64 *)(v17 + 488 * v5 + 40);
        v7 = *v6;
        v19 = *(_OWORD *)v6;
        goto LABEL_14;
      case 2:
        v10 = PpmBackgroundProfile;
        break;
      case 3:
        v17 = PpmMultimediaQosProfile;
        if ( PpmMultimediaQosProfile )
          goto LABEL_29;
LABEL_22:
        v6 = &PpmCurrentProfile[0][61 * dword_140F0B70C + 5];
        v7 = v19 | 0x2000000000000LL;
        *(_QWORD *)&v19 = v19 | 0x2000000000000LL;
        goto LABEL_14;
      case 4:
        goto LABEL_22;
      case 5:
        v10 = PpmEcoQosProfile;
        break;
      case 6:
        v10 = PpmUtilityQosProfile;
        break;
      default:
        goto LABEL_22;
    }
    if ( v10 )
    {
      v6 = (__int64 *)(v10 + 488 * v5 + 40);
      v19 = *(_OWORD *)v6;
      v7 = *v6;
    }
LABEL_14:
    if ( v6 && (v7 & 0x2000000000000LL) != 0 )
    {
      v15 = *((_BYTE *)v6 + 484);
      if ( v3 )
      {
        if ( v15 )
        {
          v16 = v3;
          if ( v3 >= v15 )
            v16 = *((_BYTE *)v6 + 484);
          v3 = v16;
        }
      }
      else
      {
        v3 = *((_BYTE *)v6 + 484);
      }
    }
    v4 += 8;
    v11 = v3 < *(_BYTE *)(a1 + 10) ? v3 : 0;
    *(_BYTE *)(v9 + a1 + 165) = v11;
    v3 = v11;
    --v8;
  }
  while ( v8 );
  v12 = *(_DWORD *)(a1 + 160);
  v13 = 7LL;
  for ( i = (_BYTE *)(a1 + 165); ((unsigned __int8)i & 7) != 0 && v13; ++i )
  {
    if ( *i )
    {
LABEL_43:
      LODWORD(v1) = 3;
      goto LABEL_38;
    }
    --v13;
  }
  while ( v13 >= 8 )
  {
    if ( *(_QWORD *)i )
      goto LABEL_43;
    i += 8;
    v13 -= 8LL;
  }
  while ( v13 )
  {
    if ( *i )
      goto LABEL_43;
    ++i;
    --v13;
  }
  LODWORD(v1) = 2;
LABEL_38:
  *(_DWORD *)(a1 + 160) = (_DWORD)v1;
  LOBYTE(v1) = (_DWORD)v1 != v12;
  *(_BYTE *)(a1 + 164) = (_BYTE)v1;
  return (char)v1;
}
