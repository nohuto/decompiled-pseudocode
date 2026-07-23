/*
 * XREFs of SepExamineSaclEx @ 0x140A19D34
 * Callers:
 *     SepExamineGlobalSaclEx @ 0x14045837C (SepExamineGlobalSaclEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140A07A00 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     AuthzBasepEvaluateAceCondition @ 0x140323B60 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1403B95E0 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1403BADD4 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepSidInToken @ 0x1403CB430 (SepSidInToken.c)
 *     AuthzBasepObjectInTypeList @ 0x1404A9698 (AuthzBasepObjectInTypeList.c)
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 *     SepSetAuditInfoForObjectType @ 0x1407928C0 (SepSetAuditInfoForObjectType.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall SepExamineSaclEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        unsigned int a6,
        char a7,
        int *a8,
        _DWORD *a9,
        unsigned __int8 *a10,
        char a11,
        _BYTE *a12,
        _BYTE *a13)
{
  _DWORD *v13; // r12
  __int64 v14; // r10
  _BYTE *v16; // r9
  __int64 v17; // r11
  _BYTE *v19; // r8
  int *v20; // r15
  char v21; // r13
  _WORD *v22; // rcx
  unsigned int v23; // edx
  char *v24; // rsi
  char v25; // r14
  unsigned __int8 v26; // al
  int v27; // edi
  int v28; // eax
  int v29; // r15d
  _WORD *v30; // rbx
  unsigned int v31; // edi
  unsigned int v32; // ecx
  _QWORD *v33; // rax
  void *v34; // r9
  void *v35; // rdx
  void *v36; // r8
  void *v37; // r10
  int *v38; // rdi
  bool v39; // zf
  unsigned int i; // ebx
  int v41; // eax
  _DWORD *v42; // rdi
  unsigned int j; // ebx
  unsigned __int8 *v44; // rbx
  bool v45; // al
  unsigned int v46; // ebx
  char v47; // al
  unsigned int v48; // eax
  unsigned int Size; // [rsp+60h] [rbp-78h]
  char Size_4; // [rsp+64h] [rbp-74h]
  int v51; // [rsp+68h] [rbp-70h] BYREF
  int v52; // [rsp+6Ch] [rbp-6Ch] BYREF
  unsigned int v53; // [rsp+70h] [rbp-68h]
  _DWORD *v54; // [rsp+78h] [rbp-60h] BYREF
  char *v55; // [rsp+80h] [rbp-58h]
  unsigned int v56; // [rsp+E0h] [rbp+8h]

  v52 = -1;
  v13 = 0LL;
  v14 = a3;
  v54 = 0LL;
  v16 = a13;
  v17 = a2;
  Size = 0;
  v19 = a12;
  *a12 = 0;
  *a13 = 0;
  if ( a1 )
  {
    v53 = *(unsigned __int16 *)(a1 + 4);
    if ( v53 )
    {
      v20 = a8;
      v21 = 0;
      Size_4 = 0;
      if ( (a4 & 0x2000000) != 0 )
      {
        v21 = 0x80;
        if ( *a8 >= 0 )
          v21 = 64;
        Size_4 = v21;
      }
      v22 = **(_WORD ***)(v14 + 152);
      if ( *v22 == *(_WORD *)SeAnonymousLogonSid )
      {
        v28 = memcmp(v22, SeAnonymousLogonSid, 4LL * *((unsigned __int8 *)SeAnonymousLogonSid + 1) + 8);
        v19 = a12;
        v16 = a13;
        v14 = a3;
        v17 = a2;
        if ( !v28 )
          Size = 4 * *((unsigned __int8 *)SeWorldSid + 1) + 8;
      }
      v23 = 0;
      v24 = (char *)(a1 + 8);
      v56 = 0;
      v55 = (char *)(a1 + 8);
      while ( 1 )
      {
        if ( (*v19 || *v16) && a6 <= 1 )
        {
LABEL_19:
          if ( v13 )
          {
            AuthzBasepFreeSecurityAttributesList(v13);
            ExFreePoolWithTag(v13, 0);
          }
          return;
        }
        v25 = v24[1];
        if ( (v25 & 8) == 0 )
          break;
LABEL_18:
        ++v23;
        v20 = a8;
        v24 += *((unsigned __int16 *)v24 + 1);
        v14 = a3;
        v17 = a2;
        v56 = v23;
        v55 = v24;
        if ( v23 >= v53 )
          goto LABEL_19;
      }
      v51 = -1;
      v26 = *v24;
      if ( *v24 == 2 )
      {
        if ( !SepSidInToken(v14, a10, (unsigned __int8 *)v24 + 8, 1, 0, a11)
          && (!Size || *(_WORD *)SeWorldSid != *((_WORD *)v24 + 4) || memcmp(SeWorldSid, v24 + 8, Size)) )
        {
          goto LABEL_15;
        }
        v27 = *((_DWORD *)v24 + 1);
        if ( !a6 )
        {
          if ( *v20 >= 0 )
          {
            if ( (v25 & 0x40) != 0 && ((v27 & *a9) != 0 || v21 == 64) )
              goto LABEL_25;
            goto LABEL_15;
          }
          if ( v25 >= 0 )
            goto LABEL_15;
          v39 = (v27 & a4) == 0;
          goto LABEL_40;
        }
        for ( i = 0; i < a6; ++i )
          SepSetAuditInfoForObjectType(v25, v27, a4, a5, a6, a7, i, (__int64)v20, (__int64)a9, a12, a13);
LABEL_69:
        v24 = v55;
        v13 = v54;
        v21 = Size_4;
        goto LABEL_15;
      }
      if ( v26 == 7 )
      {
        v41 = *((_DWORD *)v24 + 2);
        v29 = *((_DWORD *)v24 + 1);
        if ( (v41 & 1) != 0 )
          v42 = v24 + 12;
        else
          v42 = 0LL;
        v44 = (unsigned __int8 *)&v24[16 * (*((_DWORD *)v24 + 2) & 1) + ((8LL * (v41 & 2)) | 0xC)];
        v45 = SepSidInToken(v14, a10, v44, 1, 0, a11);
        if ( !v42 )
        {
          if ( !v45 && (!Size || *(_WORD *)SeWorldSid != *(_WORD *)v44 || memcmp(SeWorldSid, v44, Size)) )
            goto LABEL_15;
          v46 = 0;
          if ( !a6 )
            goto LABEL_15;
          do
            SepSetAuditInfoForObjectType(v25, v29, a4, a5, a6, a7, v46++, (__int64)a8, (__int64)a9, a12, a13);
          while ( v46 < a6 );
          goto LABEL_69;
        }
        if ( !v45 && (!Size || *(_WORD *)SeWorldSid != *(_WORD *)v44 || memcmp(SeWorldSid, v44, Size)) )
          goto LABEL_15;
        v47 = AuthzBasepObjectInTypeList(v42, a5, a6, &v51);
        v38 = a8;
        if ( v47 )
        {
          v48 = v51;
          goto LABEL_88;
        }
      }
      else
      {
        if ( v26 != 13 )
          goto LABEL_18;
        v29 = *((_DWORD *)v24 + 1);
        v30 = v24 + 8;
        v31 = 4 * (unsigned __int8)v24[9] + 8;
        if ( v17 && !v13 )
        {
          AuthzBasepInitializeResourceClaimsFromSacl(v17, (__int64 *)&v54);
          v19 = a12;
          v23 = v56;
          v13 = v54;
        }
        v32 = *((unsigned __int16 *)v24 + 1) - v31;
        if ( (int)(v32 - 8) <= 0 )
          goto LABEL_17;
        v33 = *(_QWORD **)(a3 + 1096);
        if ( v33 )
        {
          v34 = (void *)v33[72];
          v35 = (void *)v33[74];
          v36 = (void *)v33[73];
          v37 = (void *)v33[75];
        }
        else
        {
          v34 = 0LL;
          v35 = 0LL;
          v36 = 0LL;
          v37 = 0LL;
        }
        AuthzBasepEvaluateAceCondition(
          (_DWORD *)a3,
          *(void **)(a3 + 776),
          v13,
          v34,
          v35,
          v36,
          v37,
          (_WORD *)((char *)v30 + v31),
          v32 - 8,
          1u,
          0,
          &v52);
        if ( v52 != 1
          || !SepSidInToken(a3, a10, (unsigned __int8 *)v24 + 8, 1, 0, a11)
          && (!Size || *(_WORD *)SeWorldSid != *v30 || memcmp(SeWorldSid, v24 + 8, Size)) )
        {
          goto LABEL_15;
        }
        v38 = a8;
        if ( !a6 )
        {
          if ( *a8 >= 0 )
          {
            if ( (v25 & 0x40) == 0 || (v29 & *a9) == 0 && v21 != 64 )
              goto LABEL_15;
LABEL_25:
            v19 = a12;
            *a12 = 1;
            goto LABEL_16;
          }
          if ( v25 >= 0 )
          {
LABEL_15:
            v19 = a12;
LABEL_16:
            v23 = v56;
LABEL_17:
            v16 = a13;
            goto LABEL_18;
          }
          v39 = (v29 & a4) == 0;
LABEL_40:
          if ( !v39 || v21 == (char)0x80 )
          {
            v16 = a13;
            v19 = a12;
            v23 = v56;
            *a13 = 1;
            goto LABEL_18;
          }
          goto LABEL_15;
        }
        for ( j = 0; j < a6; ++j )
          SepSetAuditInfoForObjectType(v25, v29, a4, a5, a6, a7, j, (__int64)a8, (__int64)a9, a12, a13);
        v24 = v55;
        v13 = v54;
        v21 = Size_4;
      }
      v48 = -1;
LABEL_88:
      if ( v48 != -1 )
        SepSetAuditInfoForObjectType(v25, v29, a4, a5, a6, a7, v48, (__int64)v38, (__int64)a9, a12, a13);
      goto LABEL_15;
    }
  }
}
