/*
 * XREFs of SepMaximumAccessCheckEx @ 0x1403CEF04
 * Callers:
 *     SepAccessCheckEx @ 0x1403CE444 (SepAccessCheckEx.c)
 * Callees:
 *     SepMatchPackage @ 0x140367B50 (SepMatchPackage.c)
 *     AuthzBasepEvaluateAceCondition @ 0x140367C20 (AuthzBasepEvaluateAceCondition.c)
 *     SepMatchCapability @ 0x140368F64 (SepMatchCapability.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x14036B400 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepIsPackageSid @ 0x14036C3F0 (SepIsPackageSid.c)
 *     SepIsCapabilitySid @ 0x14036C460 (SepIsCapabilitySid.c)
 *     SepSidInToken @ 0x1403CF090 (SepSidInToken.c)
 *     AuthzBasepAddAccessTypeList @ 0x1403CF2F4 (AuthzBasepAddAccessTypeList.c)
 *     AuthzBasepSetAccessReasons @ 0x14042F8C0 (AuthzBasepSetAccessReasons.c)
 *     AuthzBasepObjectInTypeList @ 0x1404ADE68 (AuthzBasepObjectInTypeList.c)
 */

__int64 __fastcall SepMaximumAccessCheckEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        int a6,
        unsigned int a7,
        __int64 a8,
        int a9,
        int a10,
        unsigned __int8 a11,
        char a12,
        char a13,
        __int64 a14)
{
  int v15; // ecx
  int v17; // ecx
  unsigned __int8 v18; // bl
  __int64 v19; // rbp
  __int64 v20; // rsi
  __int64 result; // rax
  unsigned int v22; // r12d
  char *v23; // rdi
  __int64 v24; // r13
  char v25; // al
  __int64 v26; // r8
  __int64 v27; // rcx
  int v28; // r8d
  _DWORD *v29; // r11
  __int64 v30; // rbx
  _WORD *v31; // r14
  _DWORD *v32; // rcx
  int v33; // edx
  __int64 v34; // r8
  int *v35; // r11
  int v36; // ecx
  int v37; // r8d
  _DWORD *v38; // rbx
  int v39; // ecx
  char v40; // r14
  unsigned int v41; // r14d
  __int64 v42; // r9
  int v43; // ecx
  unsigned int v44; // r14d
  _QWORD *v45; // rax
  void *v46; // r9
  void *v47; // r8
  void *v48; // r10
  void *v49; // r11
  unsigned int v50; // r14d
  _QWORD *v51; // rax
  void *v52; // r9
  void *v53; // r8
  void *v54; // r10
  void *v55; // r11
  int v56; // [rsp+20h] [rbp-98h]
  int v57; // [rsp+28h] [rbp-90h]
  int v58; // [rsp+28h] [rbp-90h]
  unsigned int v59; // [rsp+60h] [rbp-58h]
  int v60; // [rsp+C0h] [rbp+8h] BYREF
  __int64 v61; // [rsp+C8h] [rbp+10h]
  int v62; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v63; // [rsp+D8h] [rbp+20h]

  v63 = a4;
  v61 = a2;
  v60 = 0;
  v15 = *(_DWORD *)(a1 + 200);
  v62 = 0;
  v17 = v15 & 0x2000;
  v18 = a11;
  v19 = a8;
  v20 = a7;
  a6 = v17;
  if ( a11 && a7 )
  {
    v29 = (_DWORD *)(a8 + 28);
    v30 = a7;
    do
    {
      AuthzBasepSetAccessReasons(*v29, 0x800000, 0, *(_QWORD *)(v29 + 3), 1);
      v36 = *v35;
      *v35 &= v37;
      *(v35 - 1) = v36;
      v29 = v35 + 12;
      --v30;
    }
    while ( v30 );
    v18 = a11;
    v17 = a6;
    a4 = v63;
  }
  result = *(unsigned __int16 *)(a3 + 4);
  v22 = 0;
  v23 = (char *)(a3 + 8);
  v59 = result;
  if ( (_DWORD)result )
  {
    v24 = a14;
    while ( 1 )
    {
      if ( (v23[1] & 8) != 0 )
        goto LABEL_13;
      v25 = *v23;
      if ( !*v23 )
        break;
      if ( v25 == 5 )
      {
        v39 = *((_DWORD *)v23 + 2);
        if ( (v39 & 1) != 0 && v23 != (char *)-12LL )
        {
          if ( !a9 )
            goto LABEL_13;
          LOBYTE(v57) = a12;
          LOBYTE(v56) = v18;
          if ( !(unsigned __int8)SepSidInToken(a1, 0LL, &v23[16 * (v39 & 1) + ((8LL * (v39 & 2)) | 0xC)], 0LL, v56, v57)
            || !(unsigned __int8)AuthzBasepObjectInTypeList(v23 + 12, v19, (unsigned int)v20, &v60) )
          {
            goto LABEL_13;
          }
          v58 = 1;
          goto LABEL_36;
        }
        v26 = (__int64)&v23[16 * (v39 & 1) + ((8LL * (v39 & 2)) | 0xC)];
        goto LABEL_39;
      }
      if ( v25 != 4 )
      {
        if ( v25 == 1 )
          goto LABEL_77;
        if ( v25 == 6 )
        {
          LOBYTE(a4) = 1;
          v41 = *((_DWORD *)v23 + 2) & 1;
          LOBYTE(v57) = a12;
          LOBYTE(v56) = v18;
          if ( !(unsigned __int8)SepSidInToken(
                                   a1,
                                   0LL,
                                   &v23[16 * v41 + ((8LL * (*((_DWORD *)v23 + 2) & 2)) | 0xC)],
                                   a4,
                                   v56,
                                   v57) )
            goto LABEL_13;
          if ( v41 && v23 != (char *)-12LL )
          {
            if ( !a9 )
            {
              v42 = *(_QWORD *)(v19 + 40);
              v43 = *((_DWORD *)v23 + 1) & ~*(_DWORD *)(v19 + 28);
              *(_DWORD *)(v19 + 32) |= v43;
              AuthzBasepSetAccessReasons(v43, 0x20000, v22, v42, 0);
              goto LABEL_13;
            }
            if ( !(unsigned __int8)AuthzBasepObjectInTypeList(v23 + 12, v19, (unsigned int)v20, &v60) )
              goto LABEL_13;
            v58 = 2;
LABEL_36:
            v28 = v60;
LABEL_12:
            AuthzBasepAddAccessTypeList(v19, v20, v28, v22, *((_DWORD *)v23 + 1), v58);
            goto LABEL_13;
          }
LABEL_78:
          v58 = 2;
LABEL_11:
          v28 = 0;
          goto LABEL_12;
        }
        if ( v25 != 9 )
        {
          if ( !a13 )
            goto LABEL_13;
          if ( v25 != 10 )
            goto LABEL_13;
          if ( KeGetCurrentIrql() >= 2u )
            goto LABEL_13;
          v50 = 4 * (unsigned __int8)v23[9] + 8;
          if ( *((unsigned __int16 *)v23 + 1) - v50 == 8 )
            goto LABEL_13;
          if ( a4 && !*a5 )
            AuthzBasepInitializeResourceClaimsFromSacl(a4, a5);
          v51 = *(_QWORD **)(a1 + 1096);
          if ( v51 )
          {
            v52 = (void *)v51[72];
            v53 = (void *)v51[74];
            v54 = (void *)v51[73];
            v55 = (void *)v51[75];
          }
          else
          {
            v52 = 0LL;
            v53 = 0LL;
            v54 = 0LL;
            v55 = 0LL;
          }
          AuthzBasepEvaluateAceCondition(
            (_DWORD *)a1,
            *(void **)(a1 + 776),
            (void *)*a5,
            v52,
            v53,
            v54,
            v55,
            &v23[v50 + 8],
            *((unsigned __int16 *)v23 + 1) - v50 - 8,
            1u,
            v18,
            &v62);
          if ( ((v62 + 1) & 0xFFFFFFFD) != 0 )
            goto LABEL_13;
LABEL_77:
          LOBYTE(v57) = a12;
          LOBYTE(a4) = 1;
          LOBYTE(v56) = v18;
          if ( !(unsigned __int8)SepSidInToken(a1, 0LL, v23 + 8, a4, v56, v57) )
            goto LABEL_13;
          goto LABEL_78;
        }
        v44 = 4 * (unsigned __int8)v23[9] + 8;
        if ( *((unsigned __int16 *)v23 + 1) - v44 == 8 )
          goto LABEL_13;
        if ( a4 && !*a5 )
          AuthzBasepInitializeResourceClaimsFromSacl(a4, a5);
        v45 = *(_QWORD **)(a1 + 1096);
        if ( v45 )
        {
          v46 = (void *)v45[72];
          v47 = (void *)v45[74];
          v48 = (void *)v45[73];
          v49 = (void *)v45[75];
        }
        else
        {
          v46 = 0LL;
          v47 = 0LL;
          v48 = 0LL;
          v49 = 0LL;
        }
        AuthzBasepEvaluateAceCondition(
          (_DWORD *)a1,
          *(void **)(a1 + 776),
          (void *)*a5,
          v46,
          v47,
          v48,
          v49,
          &v23[v44 + 8],
          *((unsigned __int16 *)v23 + 1) - v44 - 8,
          0,
          v18,
          &v62);
        if ( v62 != 1 )
          goto LABEL_13;
        if ( !a6 && !v18 )
        {
          v31 = v23 + 8;
          if ( SepIsPackageSid((__int64)(v23 + 8)) )
          {
LABEL_26:
            v38 = (_DWORD *)(v24 + 4);
            SepMatchPackage(
              a1,
              -1,
              v31,
              *((_DWORD *)v23 + 1),
              (_BYTE *)(v24 + 21),
              (_DWORD *)(v24 + 4),
              (_BYTE *)(v24 + 20),
              (_DWORD *)(v24 + 16),
              (_BYTE *)(v24 + 24));
LABEL_28:
            *(_DWORD *)v24 &= ~*v38;
            goto LABEL_13;
          }
          if ( SepIsCapabilitySid((__int64)(v23 + 8)) )
            goto LABEL_27;
        }
        v26 = (__int64)(v23 + 8);
LABEL_39:
        LOBYTE(v57) = a12;
LABEL_8:
        LOBYTE(v56) = v18;
        v27 = a1;
        goto LABEL_9;
      }
      v40 = a12;
      LOBYTE(v57) = a12;
      LOBYTE(v56) = v18;
      if ( !(unsigned __int8)SepSidInToken(a1, 0LL, &v23[4 * (unsigned __int8)v23[13] + 20], 0LL, v56, v57) )
        goto LABEL_13;
      v27 = v61;
      v26 = (__int64)(v23 + 12);
      LOBYTE(v57) = v40;
      LOBYTE(v56) = 0;
LABEL_9:
      if ( (unsigned __int8)SepSidInToken(v27, 0LL, v26, 0LL, v56, v57) )
      {
        v58 = 1;
        goto LABEL_11;
      }
LABEL_13:
      result = *((unsigned __int16 *)v23 + 1);
      ++v22;
      v18 = a11;
      v23 += result;
      v17 = a6;
      a4 = v63;
      if ( v22 >= v59 )
        goto LABEL_14;
    }
    if ( !v17 && !v18 )
    {
      v31 = v23 + 8;
      if ( SepIsPackageSid((__int64)(v23 + 8)) )
        goto LABEL_26;
      if ( SepIsCapabilitySid((__int64)(v23 + 8)) )
      {
LABEL_27:
        v38 = (_DWORD *)(v24 + 8);
        SepMatchCapability(a1, -1, v31, *((_DWORD *)v23 + 1), (_SID_AND_ATTRIBUTES *)(v24 + 22), (_DWORD *)(v24 + 8));
        goto LABEL_28;
      }
    }
    v26 = (__int64)(v23 + 8);
    LOBYTE(v57) = a12;
    goto LABEL_8;
  }
LABEL_14:
  if ( a11 && (_DWORD)v20 )
  {
    v32 = (_DWORD *)(v19 + 28);
    v33 = ~a10;
    v34 = v20;
    do
    {
      result = *(v32 - 1) & (*v32 | (unsigned int)v33);
      *v32 = result;
      v32 += 12;
      --v34;
    }
    while ( v34 );
  }
  return result;
}
