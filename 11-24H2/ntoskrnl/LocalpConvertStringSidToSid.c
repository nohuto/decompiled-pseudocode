/*
 * XREFs of LocalpConvertStringSidToSid @ 0x140866A28
 * Callers:
 *     SeConvertStringSidToSid @ 0x1404B5F90 (SeConvertStringSidToSid.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x1408684DC (LocalConvertStringSDToSD_Rev1.c)
 *     LocalGetAclForString @ 0x140869D60 (LocalGetAclForString.c)
 *     LocalGetSidForString @ 0x14086B0D4 (LocalGetSidForString.c)
 * Callees:
 *     wcschr @ 0x1404FD650 (wcschr.c)
 *     wcstoul @ 0x1404FE090 (wcstoul.c)
 *     wcstoxq @ 0x1404FE264 (wcstoxq.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     SddlpAlloc @ 0x140867ED4 (SddlpAlloc.c)
 *     SddlpFree @ 0x140867F20 (SddlpFree.c)
 */

__int64 __fastcall LocalpConvertStringSidToSid(_WORD *a1, __int64 *a2, wchar_t **a3)
{
  unsigned __int8 v3; // si
  int v5; // ebx
  int v6; // r12d
  const void *v7; // r13
  const wchar_t *v8; // rdi
  wchar_t *v9; // rdi
  wchar_t *v10; // rax
  unsigned int v11; // r9d
  unsigned __int64 v12; // rcx
  wchar_t *v13; // r14
  wchar_t *v14; // rdi
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned __int8 v17; // al
  bool v18; // sf
  wchar_t *v20; // r14
  __int64 v21; // rcx
  __int16 v23; // cx
  unsigned int i; // edi
  int v25; // r8d
  unsigned __int64 v26; // rcx
  __int64 v27; // rdx
  wchar_t *v28; // r13
  __int64 v29; // rax
  __int64 v30; // r15
  size_t v31; // r12
  __int64 v32; // rax
  int v33; // eax
  wchar_t **v34; // rax
  int v35; // [rsp+30h] [rbp-D0h]
  __int16 v36; // [rsp+34h] [rbp-CCh]
  wchar_t *EndPtr; // [rsp+38h] [rbp-C8h] BYREF
  int v38; // [rsp+40h] [rbp-C0h]
  int v39; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v40; // [rsp+48h] [rbp-B8h]
  __int64 v41; // [rsp+50h] [rbp-B0h]
  __int64 v42; // [rsp+58h] [rbp-A8h]
  wchar_t **v43; // [rsp+60h] [rbp-A0h]
  __int64 *v44; // [rsp+68h] [rbp-98h]
  char v45; // [rsp+70h] [rbp-90h] BYREF

  v3 = 0;
  v43 = a3;
  v44 = a2;
  v41 = 0LL;
  EndPtr = 0LL;
  v5 = 0;
  v42 = 0LL;
  v6 = 10;
  v38 = 10;
  v7 = 0LL;
  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  if ( ((*a1 - 83) & 0xFFDF) != 0 || a1[1] != 45 )
    return 3221225592LL;
  v8 = a1 + 2;
  if ( a1[2] == 48 )
  {
    if ( ((a1[3] - 88) & 0xFFDF) == 0 )
      v6 = 16;
    v38 = v6;
  }
  v40 = wcstoul(v8, &EndPtr, v6);
  if ( v40 > 0xFF )
    return 3221225592LL;
  if ( EndPtr == v8 )
    return 3221225592LL;
  if ( *EndPtr != 45 )
    return 3221225592LL;
  v9 = EndPtr + 1;
  if ( !EndPtr[1] )
    return 3221225592LL;
  v10 = wcschr(EndPtr + 1, 0x2Du);
  if ( !v10 || v10 == v9 )
    return 3221225592LL;
  if ( *v9 != 48 || (v11 = 16, ((v9[1] - 88) & 0xFFDF) != 0) )
    v11 = v6;
  v39 = 0;
  v12 = wcstoxq(0LL, v9, &EndPtr, v11, 1, &v39);
  if ( v12 > 0xFFFFFFFFFFFFLL )
    return 3221225592LL;
  v13 = EndPtr;
  if ( EndPtr == v9 || *EndPtr != 45 || !EndPtr[1] )
    return 3221225592LL;
  HIBYTE(v36) = v12;
  v14 = EndPtr;
  LOBYTE(v36) = BYTE1(v12);
  HIBYTE(v35) = BYTE2(v12);
  BYTE2(v35) = BYTE3(v12);
  BYTE1(v35) = BYTE4(v12);
  LOBYTE(v35) = BYTE5(v12);
  while ( 1 )
  {
    if ( !v14 )
      goto LABEL_36;
    if ( v3 == 0xFF )
    {
      v5 = -1073741675;
      goto LABEL_87;
    }
    v15 = *v14;
    if ( (_WORD)v15 != 45 )
      break;
    if ( *(v14 - 1) != 45 )
    {
      ++v3;
      if ( v14[1] == 48 && ((v14[2] - 88) & 0xFFDF) == 0 )
        v14 += 2;
      goto LABEL_28;
    }
LABEL_25:
    if ( v14[1] == 58 && (((_WORD)v15 - 71) & 0xFFF3) == 0 && (_DWORD)v15 != 75 )
      goto LABEL_51;
    if ( (unsigned __int16)(v15 - 48) > 9u )
    {
      if ( (unsigned __int16)(v15 - 97) <= 5u )
        goto LABEL_28;
      if ( (unsigned __int16)(v15 - 65) > 5u )
      {
        v5 = -1073741704;
LABEL_87:
        *a3 = v14;
        goto LABEL_46;
      }
    }
    if ( (_DWORD)v15 == 68 && v14[1] == 58 )
    {
      v28 = EndPtr;
      v29 = v14 - EndPtr;
      v30 = v29;
      v31 = 2 * v29;
      if ( v29 < 256 )
      {
        v13 = (wchar_t *)&v45;
      }
      else
      {
        v32 = SddlpAlloc(v30 * 2 + 2);
        v42 = v32;
        if ( !v32 )
        {
LABEL_65:
          v5 = -1073741801;
          goto LABEL_46;
        }
        v13 = (wchar_t *)v32;
      }
      memmove(v13, v28, v31);
      v34 = v43;
      v6 = v38;
      ++v3;
      v13[v30] = 0;
      *v34 = v14;
      v17 = v3;
      goto LABEL_37;
    }
LABEL_28:
    ++v14;
  }
  if ( (unsigned int)v15 > 0x3B )
    goto LABEL_25;
  v16 = 0x800120100000001LL;
  if ( !_bittest64(&v16, v15) )
    goto LABEL_25;
LABEL_51:
  v23 = *(v14 - 1);
  if ( v23 == 45 )
    --v14;
  else
    ++v3;
  *a3 = v14;
  v5 = -1073741704;
  if ( v23 != 45 )
    v5 = 0;
LABEL_36:
  v17 = v3;
  v18 = v5 < 0;
  if ( v5 )
  {
LABEL_43:
    if ( v18 )
      goto LABEL_46;
    v21 = SddlpAlloc(4LL * v3 + 12);
    *v44 = v21;
    if ( v21 )
    {
      *(_BYTE *)v21 = v40;
      *(_DWORD *)(v21 + 2) = v35;
      *(_WORD *)(v21 + 6) = v36;
      *(_BYTE *)(v21 + 1) = v3;
      memmove((void *)(v21 + 8), v7, 4LL * v3);
      goto LABEL_46;
    }
    goto LABEL_65;
  }
LABEL_37:
  if ( !v3-- )
    v3 = v17;
  if ( v3 )
  {
    v20 = v13 + 1;
    v41 = SddlpAlloc(4LL * v3);
    v7 = (const void *)v41;
    if ( v41 )
    {
      for ( i = 0; i < v3; ++i )
      {
        if ( *v20 != 48 || (v25 = 16, ((v20[1] - 88) & 0xFFDF) != 0) )
          v25 = v6;
        *((_DWORD *)v7 + i) = wcstoul(v20, &EndPtr, v25);
        if ( EndPtr )
        {
          v26 = *EndPtr;
          if ( (unsigned int)v26 > 0x3B || (v27 = 0x800320000000001LL, !_bittest64(&v27, v26)) )
          {
            if ( EndPtr[1] != 58
              || (LOWORD(v26) = v26 - 68, (unsigned __int16)v26 > 0xFu)
              || (v33 = 34825, !_bittest(&v33, v26)) )
            {
              v5 = -1073741704;
              break;
            }
          }
        }
        v20 = EndPtr + 1;
      }
    }
    else
    {
      v5 = -1073741801;
    }
    v18 = v5 < 0;
    goto LABEL_43;
  }
  v5 = -1073741704;
LABEL_46:
  SddlpFree(v41);
  if ( v42 )
    SddlpFree(v42);
  return (unsigned int)v5;
}
