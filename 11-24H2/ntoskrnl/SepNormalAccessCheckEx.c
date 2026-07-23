/*
 * XREFs of SepNormalAccessCheckEx @ 0x1404EB6BC
 * Callers:
 *     SepAccessCheckEx @ 0x1404E81A8 (SepAccessCheckEx.c)
 * Callees:
 *     SepMatchPackage @ 0x140323910 (SepMatchPackage.c)
 *     AuthzBasepEvaluateAceCondition @ 0x140323B60 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1403BADD4 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepSidInToken @ 0x1403CB430 (SepSidInToken.c)
 *     AuthzBasepSetAccessReasons @ 0x14041B4B0 (AuthzBasepSetAccessReasons.c)
 *     SepIsPackageSid @ 0x14041C6F0 (SepIsPackageSid.c)
 *     SepIsCapabilitySid @ 0x1404217D0 (SepIsCapabilitySid.c)
 *     SepMatchCapability @ 0x140424F30 (SepMatchCapability.c)
 *     AuthzBasepAddAccessTypeList @ 0x140446210 (AuthzBasepAddAccessTypeList.c)
 *     AuthzBasepObjectInTypeList @ 0x1404A9698 (AuthzBasepObjectInTypeList.c)
 *     Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline @ 0x1405E2C90 (Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline.c)
 */

char __fastcall SepNormalAccessCheckEx(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        int a7,
        unsigned int a8,
        __int64 a9,
        int a10,
        char a11,
        char a12,
        char a13,
        __int64 a14)
{
  int v15; // esi
  __int64 v17; // rcx
  int v18; // r14d
  _DWORD *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  unsigned int v24; // r14d
  char *v25; // rdi
  bool v26; // zf
  int v27; // ebx
  char v28; // al
  unsigned __int8 *v29; // r14
  _DWORD *v30; // rbx
  unsigned __int8 *v31; // r8
  bool v32; // al
  int v33; // ebx
  int v34; // eax
  unsigned int v35; // r9d
  unsigned int v36; // eax
  unsigned __int8 *v37; // r8
  int v38; // ebx
  unsigned int v39; // r14d
  bool v40; // zf
  __int64 v41; // r11
  __int64 v42; // rbx
  __int64 v43; // r11
  unsigned int v44; // ebx
  _QWORD *v45; // rax
  void *v46; // r9
  void *v47; // r8
  void *v48; // r10
  void *v49; // r11
  unsigned int v50; // ebx
  _QWORD *v51; // rax
  void *v52; // r9
  void *v53; // r8
  void *v54; // r10
  void *v55; // r11
  unsigned int v57; // [rsp+60h] [rbp-48h] BYREF
  int v58; // [rsp+64h] [rbp-44h]
  int v59; // [rsp+68h] [rbp-40h] BYREF
  unsigned int v60; // [rsp+6Ch] [rbp-3Ch]
  unsigned int v61; // [rsp+B8h] [rbp+10h]
  int v63; // [rsp+C8h] [rbp+20h]
  int v64; // [rsp+E0h] [rbp+38h]

  v57 = 0;
  v59 = 0;
  v15 = 0;
  v17 = a8;
  v18 = *(_DWORD *)(a2 + 200) & 0x2000;
  v64 = *(_DWORD *)(a2 + 200) & 0x4000;
  v60 = *(unsigned __int16 *)(a4 + 4);
  v58 = v18;
  if ( a8 )
  {
    v20 = (_DWORD *)(a9 + 24);
    do
    {
      *v20 = a1;
      v20 += 12;
      --v17;
    }
    while ( v17 );
  }
  LODWORD(v21) = Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline(v17, a2);
  if ( (_DWORD)v21 )
  {
    if ( v18 && !v64 )
      goto LABEL_11;
  }
  else if ( v18 )
  {
    goto LABEL_11;
  }
  if ( !a11 )
    v15 = *(_DWORD *)a14 | a1;
LABEL_11:
  v24 = 0;
  v63 = v15;
  v25 = (char *)(a4 + 8);
  v61 = 0;
  v26 = v60 == 0;
  if ( v60 )
  {
    while ( 1 )
    {
      v27 = *(_DWORD *)(a9 + 24);
      if ( !v27 && !v15 )
      {
LABEL_68:
        v26 = v24 == v60;
        break;
      }
      if ( (v25[1] & 8) != 0 || !v27 && *v25 && *v25 != 9 )
        goto LABEL_116;
      v28 = *v25;
      if ( *v25 )
      {
        switch ( v28 )
        {
          case 5:
            v23 = *((unsigned int *)v25 + 2);
            v36 = *((_DWORD *)v25 + 2) & 1;
            if ( v36 && v25 != (char *)-12LL )
            {
              if ( a10
                && SepSidInToken(a2, 0LL, (unsigned __int8 *)&v25[16 * v36 + ((8 * (v23 & 2)) | 0xC)], 0, a11, a12)
                && AuthzBasepObjectInTypeList((_DWORD *)v25 + 3, a9, a8, &v57) )
              {
                AuthzBasepAddAccessTypeList(a9, a8, v57, v24, *((_DWORD *)v25 + 1), 0);
              }
              goto LABEL_116;
            }
            v37 = (unsigned __int8 *)&v25[16 * v36 + ((8 * (v23 & 2)) | 0xC)];
            goto LABEL_93;
          case 4:
            if ( !SepSidInToken(a2, 0LL, (unsigned __int8 *)&v25[4 * (unsigned __int8)v25[13] + 20], 0, a11, a12) )
              goto LABEL_116;
            v32 = SepSidInToken(a3, 0LL, (unsigned __int8 *)v25 + 12, 0, a11, a12);
            goto LABEL_94;
          case 1:
            if ( SepSidInToken(a2, 0LL, (unsigned __int8 *)v25 + 8, 1, a11, a12) )
            {
              v38 = *((_DWORD *)v25 + 1) & v27;
              if ( v38 )
              {
                LODWORD(v23) = v38;
LABEL_57:
                LOBYTE(v21) = AuthzBasepSetAccessReasons(v23, 0x20000, v24, *(_QWORD *)(a9 + 40), 0);
                goto LABEL_68;
              }
            }
            goto LABEL_116;
        }
        if ( v28 != 6 )
        {
          if ( v28 != 9 )
          {
            if ( a13 )
            {
              if ( v28 == 10 && KeGetCurrentIrql() < 2u )
              {
                v50 = 4 * (unsigned __int8)v25[9] + 8;
                if ( *((unsigned __int16 *)v25 + 1) - v50 != 8 )
                {
                  if ( a5 && !*a6 )
                    AuthzBasepInitializeResourceClaimsFromSacl(a5, a6);
                  v51 = *(_QWORD **)(a2 + 1096);
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
                    (_DWORD *)a2,
                    *(void **)(a2 + 776),
                    (void *)*a6,
                    v52,
                    v53,
                    v54,
                    v55,
                    &v25[v50 + 8],
                    *((unsigned __int16 *)v25 + 1) - v50 - 8,
                    1u,
                    a11,
                    &v59);
                  if ( ((v59 + 1) & 0xFFFFFFFD) == 0 && SepSidInToken(a2, 0LL, (unsigned __int8 *)v25 + 8, 1, a11, a12) )
                  {
                    v23 = (unsigned int)(*(_DWORD *)(a9 + 24) & *((_DWORD *)v25 + 1));
                    if ( (*(_DWORD *)(a9 + 24) & *((_DWORD *)v25 + 1)) != 0 )
                      goto LABEL_57;
                  }
                }
              }
            }
            goto LABEL_116;
          }
          v44 = 4 * (unsigned __int8)v25[9] + 8;
          if ( *((unsigned __int16 *)v25 + 1) - v44 == 8 )
            goto LABEL_116;
          if ( a5 && !*a6 )
            AuthzBasepInitializeResourceClaimsFromSacl(a5, a6);
          v45 = *(_QWORD **)(a2 + 1096);
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
            (_DWORD *)a2,
            *(void **)(a2 + 776),
            (void *)*a6,
            v46,
            v47,
            v48,
            v49,
            &v25[v44 + 8],
            *((unsigned __int16 *)v25 + 1) - v44 - 8,
            0,
            a11,
            &v59);
          if ( v59 != 1 )
            goto LABEL_116;
          if ( (unsigned int)Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline(
                               v23,
                               v22) )
          {
LABEL_30:
            v33 = v58;
            if ( v58 && !v64 )
              goto LABEL_39;
            if ( !a11 && v15 && SepIsPackageSid((__int64)(v25 + 8)) )
            {
              v30 = (_DWORD *)(a14 + 4);
              SepMatchPackage(
                a2,
                v63,
                (_WORD *)v25 + 4,
                *((_DWORD *)v25 + 1),
                (_BYTE *)(a14 + 21),
                (_DWORD *)(a14 + 4),
                (_BYTE *)(a14 + 20),
                (_DWORD *)(a14 + 16),
                (_BYTE *)(a14 + 24));
            }
            else
            {
              if ( v33 && !v64 || a11 || !v15 || !SepIsCapabilitySid((__int64)(v25 + 8)) )
              {
LABEL_39:
                if ( !*(_DWORD *)(a9 + 24) || !SepSidInToken(a2, 0LL, (unsigned __int8 *)v25 + 8, 0, a11, a12) )
                  goto LABEL_116;
                v35 = v61;
                goto LABEL_96;
              }
              v31 = (unsigned __int8 *)(v25 + 8);
LABEL_38:
              v30 = (_DWORD *)(a14 + 8);
              SepMatchCapability(a2, v63, v31, *((_DWORD *)v25 + 1), (_BYTE *)(a14 + 22), (_DWORD *)(a14 + 8));
            }
LABEL_36:
            v34 = ~*v30;
            v15 &= v34;
            *(_DWORD *)a14 &= v34;
            goto LABEL_116;
          }
          if ( !v58 && !a11 && v15 )
          {
            v29 = (unsigned __int8 *)(v25 + 8);
            if ( SepIsPackageSid((__int64)(v25 + 8)) )
            {
LABEL_24:
              v30 = (_DWORD *)(a14 + 4);
              SepMatchPackage(
                a2,
                v63,
                v29,
                *((_DWORD *)v25 + 1),
                (_BYTE *)(a14 + 21),
                (_DWORD *)(a14 + 4),
                (_BYTE *)(a14 + 20),
                (_DWORD *)(a14 + 16),
                (_BYTE *)(a14 + 24));
              goto LABEL_36;
            }
            if ( SepIsCapabilitySid((__int64)(v25 + 8)) )
              goto LABEL_26;
            v24 = v61;
          }
          if ( !*(_DWORD *)(a9 + 24) )
            goto LABEL_116;
          v37 = (unsigned __int8 *)(v25 + 8);
LABEL_93:
          v32 = SepSidInToken(a2, 0LL, v37, 0, a11, a12);
LABEL_94:
          if ( v32 )
          {
            v35 = v24;
LABEL_96:
            AuthzBasepAddAccessTypeList(a9, a8, 0, v35, *((_DWORD *)v25 + 1), 0);
            goto LABEL_116;
          }
          goto LABEL_116;
        }
        v39 = *((_DWORD *)v25 + 2) & 1;
        LOBYTE(v21) = SepSidInToken(
                        a2,
                        0LL,
                        (unsigned __int8 *)&v25[16 * v39 + ((8LL * (*((_DWORD *)v25 + 2) & 2)) | 0xC)],
                        1,
                        a11,
                        a12);
        if ( (_BYTE)v21 )
        {
          if ( v39 && (v23 = (unsigned __int64)(v25 + 12), v25 != (char *)-12LL) && a10 )
          {
            if ( !AuthzBasepObjectInTypeList((_DWORD *)v23, a9, a8, &v57) )
              goto LABEL_116;
            LODWORD(v21) = *(_DWORD *)(a9 + 48LL * v57 + 24);
            v40 = ((unsigned int)v21 & *((_DWORD *)v25 + 1)) == 0;
          }
          else
          {
            v40 = (v27 & *((_DWORD *)v25 + 1)) == 0;
          }
          if ( !v40 )
          {
            v24 = v61;
            goto LABEL_68;
          }
        }
      }
      else
      {
        if ( (unsigned int)Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline(v23, v22) )
          goto LABEL_30;
        if ( !v58 && !a11 && v15 )
        {
          v29 = (unsigned __int8 *)(v25 + 8);
          if ( SepIsPackageSid((__int64)(v25 + 8)) )
            goto LABEL_24;
          if ( SepIsCapabilitySid((__int64)(v25 + 8)) )
          {
LABEL_26:
            v31 = v29;
            goto LABEL_38;
          }
          v24 = v61;
        }
        if ( *(_DWORD *)(a9 + 24) )
        {
          v32 = SepSidInToken(a2, 0LL, (unsigned __int8 *)v25 + 8, 0, a11, a12);
          goto LABEL_94;
        }
      }
LABEL_116:
      ++v61;
      v21 = *((unsigned __int16 *)v25 + 1);
      v24 = v61;
      v25 += v21;
      if ( v61 >= v60 )
        goto LABEL_68;
    }
  }
  if ( v26 )
  {
    v41 = a9 + 24;
    if ( *(_DWORD *)(a9 + 24) )
    {
      LOBYTE(v21) = a8;
      if ( a8 )
      {
        v42 = a8;
        do
        {
          LOBYTE(v21) = AuthzBasepSetAccessReasons(*(_DWORD *)v41, 0x800000, 0, *(_QWORD *)(v41 + 16), 0);
          v41 = v43 + 48;
          --v42;
        }
        while ( v42 );
      }
    }
  }
  return v21;
}
