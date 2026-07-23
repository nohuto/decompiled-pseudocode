/*
 * XREFs of PpmConfigureRestrictionPolicy @ 0x140490D78
 * Callers:
 *     PpmParkApplyPolicy @ 0x1404E4B18 (PpmParkApplyPolicy.c)
 *     PpmParkApplyPolicyEx @ 0x1405DE964 (PpmParkApplyPolicyEx.c)
 * Callees:
 *     <none>
 */

char __fastcall PpmConfigureRestrictionPolicy(__int64 a1)
{
  _UNKNOWN **v1; // rax
  unsigned __int16 v3; // r9
  _BYTE *v4; // rbx
  __int64 v5; // r11
  __int64 *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // r10
  __int16 v11; // ax
  int v12; // edx
  unsigned __int64 v13; // rcx
  _BYTE *i; // rax
  unsigned __int16 v15; // ax
  __int128 v17; // [rsp+0h] [rbp-18h]
  _UNKNOWN *retaddr; // [rsp+18h] [rbp+0h] BYREF

  v1 = &retaddr;
  if ( *(_DWORD *)(a1 + 1232) <= 1u )
    return (char)v1;
  v3 = *(_WORD *)(a1 + 10);
  v4 = &unk_140E0B424;
  v5 = dword_140F0B38C;
  v6 = 0LL;
  *(_QWORD *)&v17 = 0LL;
  v7 = 0LL;
  v8 = 7LL;
  do
  {
    v9 = *((unsigned int *)v4 - 1);
    if ( !*v4 )
      v3 = *(_WORD *)(a1 + 10);
    switch ( (_DWORD)v9 )
    {
      case 0:
        goto LABEL_22;
      case 1:
        if ( !PpmEntryLevelPerfProfile )
          goto LABEL_14;
        v6 = (__int64 *)(PpmEntryLevelPerfProfile + 488 * v5 + 40);
        goto LABEL_32;
      case 2:
        v10 = PpmBackgroundProfile;
        break;
      case 3:
        if ( !PpmMultimediaQosProfile )
        {
LABEL_22:
          v6 = &PpmCurrentProfile[0][61 * dword_140F0B38C + 5];
          v7 = v17 | 0x2000000000000LL;
          *(_QWORD *)&v17 = v17 | 0x2000000000000LL;
          goto LABEL_14;
        }
        v6 = (__int64 *)(488 * v5 + PpmMultimediaQosProfile + 40);
LABEL_32:
        v7 = *v6;
        v17 = *(_OWORD *)v6;
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
      v17 = *(_OWORD *)v6;
      v7 = *v6;
    }
LABEL_14:
    if ( v6 && (v7 & 0x2000000000000LL) != 0 )
    {
      v15 = *((unsigned __int8 *)v6 + 484);
      if ( v3 )
      {
        if ( (_BYTE)v15 && v3 >= v15 )
          v3 = *((unsigned __int8 *)v6 + 484);
      }
      else
      {
        v3 = *((unsigned __int8 *)v6 + 484);
      }
    }
    v4 += 8;
    v11 = v3 < *(_WORD *)(a1 + 10) ? v3 : 0;
    *(_WORD *)(a1 + 2 * v9 + 1238) = v11;
    v3 = v11;
    --v8;
  }
  while ( v8 );
  v12 = *(_DWORD *)(a1 + 1232);
  v13 = 14LL;
  for ( i = (_BYTE *)(a1 + 1238); ((unsigned __int8)i & 7) != 0 && v13; ++i )
  {
    if ( *i )
    {
LABEL_44:
      LODWORD(v1) = 3;
      goto LABEL_41;
    }
    --v13;
  }
  while ( v13 >= 8 )
  {
    if ( *(_QWORD *)i )
      goto LABEL_44;
    i += 8;
    v13 -= 8LL;
  }
  while ( v13 )
  {
    if ( *i )
      goto LABEL_44;
    ++i;
    --v13;
  }
  LODWORD(v1) = 2;
LABEL_41:
  *(_DWORD *)(a1 + 1232) = (_DWORD)v1;
  LOBYTE(v1) = (_DWORD)v1 != v12;
  *(_BYTE *)(a1 + 1236) = (_BYTE)v1;
  return (char)v1;
}
