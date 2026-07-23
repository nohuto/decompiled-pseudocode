/*
 * XREFs of SepMaximumAccessCheckEx @ 0x1404E9F90
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
        unsigned int a11,
        char a12,
        char a13,
        __int64 a14)
{
  __int64 v15; // r15
  char v16; // r14
  __int64 v17; // r13
  int v18; // ebx
  __int64 v19; // rbp
  _DWORD *v20; // r11
  __int64 v21; // rbx
  _DWORD *v22; // r11
  int v23; // r8d
  __int64 result; // rax
  unsigned int v25; // r12d
  char *v26; // rdi
  __int64 v27; // rsi
  char v28; // al
  int IsEnabledDeviceUsageNoInline; // eax
  _DWORD *v30; // rbx
  unsigned __int8 *v31; // r8
  unsigned int v32; // eax
  unsigned int v33; // r8d
  bool v34; // al
  unsigned int v35; // ebx
  __int64 v36; // r9
  int v37; // ecx
  unsigned int v38; // ebx
  _QWORD *v39; // rax
  void *v40; // r9
  void *v41; // r8
  void *v42; // r10
  void *v43; // r11
  unsigned int v44; // ebx
  _QWORD *v45; // rax
  void *v46; // r9
  void *v47; // r8
  void *v48; // r10
  void *v49; // r11
  _DWORD *v50; // rcx
  int v51; // edx
  __int64 v52; // r8
  int v53; // [rsp+28h] [rbp-90h]
  int v54; // [rsp+28h] [rbp-90h]
  int v55; // [rsp+60h] [rbp-58h] BYREF
  unsigned int v56; // [rsp+64h] [rbp-54h]
  int v57; // [rsp+C0h] [rbp+8h]
  unsigned int v59; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v60; // [rsp+D8h] [rbp+20h]

  v60 = a4;
  v59 = 0;
  v55 = 0;
  v15 = a1;
  v16 = a11;
  v17 = a8;
  v18 = *(_DWORD *)(a1 + 200) & 0x2000;
  v19 = a7;
  a6 = *(_DWORD *)(a1 + 200) & 0x4000;
  v57 = v18;
  if ( (_BYTE)a11 && a7 )
  {
    v20 = (_DWORD *)(a8 + 28);
    v21 = a7;
    do
    {
      AuthzBasepSetAccessReasons(*v20, 0x800000, 0, *(_QWORD *)(v20 + 3), 1);
      a1 = (unsigned int)*v22;
      *v22 &= v23;
      *(v22 - 1) = a1;
      v20 = v22 + 12;
      --v21;
    }
    while ( v21 );
    v18 = v57;
    a4 = v60;
  }
  result = *(unsigned __int16 *)(a3 + 4);
  v25 = 0;
  v26 = (char *)(a3 + 8);
  v56 = result;
  a11 = 0;
  if ( (_DWORD)result )
  {
    v27 = a14;
    while ( 1 )
    {
      if ( (v26[1] & 8) != 0 )
        goto LABEL_88;
      v28 = *v26;
      if ( !*v26 )
        break;
      if ( v28 == 5 )
      {
        a1 = *((unsigned int *)v26 + 2);
        v32 = *((_DWORD *)v26 + 2) & 1;
        if ( !v32 || v26 == (char *)-12LL )
        {
          if ( SepSidInToken(v15, 0LL, (unsigned __int8 *)&v26[16 * v32 + ((8 * (a1 & 2)) | 0xC)], 0, v16, a12) )
          {
            v53 = 1;
            goto LABEL_85;
          }
          goto LABEL_87;
        }
        if ( !a9
          || !SepSidInToken(v15, 0LL, (unsigned __int8 *)&v26[16 * v32 + ((8 * (a1 & 2)) | 0xC)], 0, v16, a12)
          || !AuthzBasepObjectInTypeList((_DWORD *)v26 + 3, v17, v19, &v59) )
        {
          goto LABEL_87;
        }
        v53 = 1;
LABEL_35:
        v33 = v59;
        goto LABEL_86;
      }
      if ( v28 == 4 )
      {
        if ( !SepSidInToken(v15, 0LL, (unsigned __int8 *)&v26[4 * (unsigned __int8)v26[13] + 20], 0, v16, a12) )
          goto LABEL_88;
        v34 = SepSidInToken(a2, 0LL, (unsigned __int8 *)v26 + 12, 0, 0, a12);
        goto LABEL_64;
      }
      if ( v28 != 1 )
      {
        if ( v28 == 6 )
        {
          v35 = *((_DWORD *)v26 + 2) & 1;
          if ( !SepSidInToken(
                  v15,
                  0LL,
                  (unsigned __int8 *)&v26[16 * v35 + ((8LL * (*((_DWORD *)v26 + 2) & 2)) | 0xC)],
                  1,
                  v16,
                  a12) )
            goto LABEL_87;
          if ( !v35 || v26 == (char *)-12LL )
            goto LABEL_84;
          if ( !a9 )
          {
            v36 = *(_QWORD *)(v17 + 40);
            v37 = *((_DWORD *)v26 + 1) & ~*(_DWORD *)(v17 + 28);
            *(_DWORD *)(v17 + 32) |= v37;
            AuthzBasepSetAccessReasons(v37, 0x20000, v25, v36, 0);
            goto LABEL_87;
          }
          if ( !AuthzBasepObjectInTypeList((_DWORD *)v26 + 3, v17, v19, &v59) )
            goto LABEL_87;
          v53 = 2;
          goto LABEL_35;
        }
        if ( v28 != 9 )
        {
          if ( !a13 || v28 != 10 || KeGetCurrentIrql() >= 2u )
            goto LABEL_88;
          v44 = 4 * (unsigned __int8)v26[9] + 8;
          if ( *((unsigned __int16 *)v26 + 1) - v44 != 8 )
          {
            if ( a4 && !*a5 )
              AuthzBasepInitializeResourceClaimsFromSacl(a4, a5);
            v45 = *(_QWORD **)(v15 + 1096);
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
              (_DWORD *)v15,
              *(void **)(v15 + 776),
              (void *)*a5,
              v46,
              v47,
              v48,
              v49,
              &v26[v44 + 8],
              *((unsigned __int16 *)v26 + 1) - v44 - 8,
              1u,
              v16,
              &v55);
            if ( ((v55 + 1) & 0xFFFFFFFD) == 0 && SepSidInToken(v15, 0LL, (unsigned __int8 *)v26 + 8, 1, v16, a12) )
            {
LABEL_84:
              v53 = 2;
LABEL_85:
              v33 = 0;
LABEL_86:
              AuthzBasepAddAccessTypeList(v17, (unsigned int)v19, v33, v25, *((_DWORD *)v26 + 1), v53);
            }
          }
LABEL_87:
          v18 = v57;
          goto LABEL_88;
        }
        v38 = 4 * (unsigned __int8)v26[9] + 8;
        if ( *((unsigned __int16 *)v26 + 1) - v38 == 8 )
          goto LABEL_87;
        if ( a4 && !*a5 )
          AuthzBasepInitializeResourceClaimsFromSacl(a4, a5);
        v39 = *(_QWORD **)(v15 + 1096);
        if ( v39 )
        {
          v40 = (void *)v39[72];
          v41 = (void *)v39[74];
          v42 = (void *)v39[73];
          v43 = (void *)v39[75];
        }
        else
        {
          v40 = 0LL;
          v41 = 0LL;
          v42 = 0LL;
          v43 = 0LL;
        }
        AuthzBasepEvaluateAceCondition(
          (_DWORD *)v15,
          *(void **)(v15 + 776),
          (void *)*a5,
          v40,
          v41,
          v42,
          v43,
          &v26[v38 + 8],
          *((unsigned __int16 *)v26 + 1) - v38 - 8,
          0,
          v16,
          &v55);
        if ( v55 != 1 )
          goto LABEL_87;
        IsEnabledDeviceUsageNoInline = Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline(
                                         a1,
                                         a2);
        v18 = v57;
        goto LABEL_11;
      }
      if ( SepSidInToken(v15, 0LL, (unsigned __int8 *)v26 + 8, 1, v16, a12) )
      {
        v54 = 2;
LABEL_66:
        AuthzBasepAddAccessTypeList(v17, (unsigned int)v19, 0, v25, *((_DWORD *)v26 + 1), v54);
      }
LABEL_88:
      ++a11;
      result = *((unsigned __int16 *)v26 + 1);
      v25 = a11;
      v26 += result;
      a4 = v60;
      if ( a11 >= v56 )
        goto LABEL_89;
    }
    IsEnabledDeviceUsageNoInline = Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline(
                                     a1,
                                     a2);
LABEL_11:
    if ( IsEnabledDeviceUsageNoInline )
    {
      if ( v18 && !a6 )
        goto LABEL_26;
      if ( v16 || !SepIsPackageSid((__int64)(v26 + 8)) )
      {
        if ( v18 && !a6 || v16 || !SepIsCapabilitySid((__int64)(v26 + 8)) )
        {
LABEL_26:
          if ( SepSidInToken(v15, 0LL, (unsigned __int8 *)v26 + 8, 0, v16, a12) )
            AuthzBasepAddAccessTypeList(v17, (unsigned int)v19, 0, a11, *((_DWORD *)v26 + 1), 1);
          goto LABEL_88;
        }
        v31 = (unsigned __int8 *)(v26 + 8);
LABEL_19:
        v30 = (_DWORD *)(v27 + 8);
        SepMatchCapability(v15, -1, v31, *((_DWORD *)v26 + 1), (_BYTE *)(v27 + 22), (_DWORD *)(v27 + 8));
      }
      else
      {
LABEL_15:
        v30 = (_DWORD *)(v27 + 4);
        SepMatchPackage(
          v15,
          -1,
          (_WORD *)v26 + 4,
          *((_DWORD *)v26 + 1),
          (_BYTE *)(v27 + 21),
          (_DWORD *)(v27 + 4),
          (_BYTE *)(v27 + 20),
          (_DWORD *)(v27 + 16),
          (_BYTE *)(v27 + 24));
      }
      *(_DWORD *)v27 &= ~*v30;
      goto LABEL_87;
    }
    if ( !v18 && !v16 )
    {
      if ( SepIsPackageSid((__int64)(v26 + 8)) )
        goto LABEL_15;
      if ( SepIsCapabilitySid((__int64)(v26 + 8)) )
      {
        v31 = (unsigned __int8 *)(v26 + 8);
        goto LABEL_19;
      }
      v25 = a11;
    }
    v34 = SepSidInToken(v15, 0LL, (unsigned __int8 *)v26 + 8, 0, v16, a12);
LABEL_64:
    if ( v34 )
    {
      v54 = 1;
      goto LABEL_66;
    }
    goto LABEL_88;
  }
LABEL_89:
  if ( v16 && (_DWORD)v19 )
  {
    v50 = (_DWORD *)(v17 + 28);
    v51 = ~a10;
    v52 = v19;
    do
    {
      result = *(v50 - 1) & (*v50 | (unsigned int)v51);
      *v50 = result;
      v50 += 12;
      --v52;
    }
    while ( v52 );
  }
  return result;
}
