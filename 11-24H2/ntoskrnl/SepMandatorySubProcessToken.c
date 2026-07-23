/*
 * XREFs of SepMandatorySubProcessToken @ 0x1404EC31C
 * Callers:
 *     SeSubProcessToken @ 0x140AD660C (SeSubProcessToken.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     RtlSidDominates @ 0x1403EFBC0 (RtlSidDominates.c)
 *     RtlFindAceByType @ 0x140404D90 (RtlFindAceByType.c)
 *     SepLocateTokenIntegrity @ 0x14040ECA0 (SepLocateTokenIntegrity.c)
 *     Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline @ 0x1405E208C (Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     SeTokenIsAdmin @ 0x14085AA10 (SeTokenIsAdmin.c)
 *     ObQuerySecurityObject @ 0x1408AEA1C (ObQuerySecurityObject.c)
 *     PsReferenceProcessFilePointer @ 0x140922040 (PsReferenceProcessFilePointer.c)
 *     RtlCreateSecurityDescriptor @ 0x1409E16D0 (RtlCreateSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepMandatorySubProcessToken(_DWORD *Token, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v4; // r14d
  _QWORD *v5; // r15
  int v6; // eax
  NTSTATUS SecurityObject; // ebx
  PVOID v10; // r12
  _BYTE *v11; // rsi
  _BYTE *Pool2; // rax
  __int16 v13; // ax
  ACL *v14; // rcx
  __int64 v15; // rax
  char *AceByType; // rax
  unsigned __int8 *v17; // r14
  PSID *TokenIntegrity; // rax
  PSID *v19; // r15
  int v20; // eax
  unsigned int v21; // edx
  int v22; // eax
  int v23; // eax
  int v24; // ecx
  PSID v25; // rax
  int v26; // eax
  unsigned int v27; // ecx
  int v28; // eax
  unsigned int v29; // eax
  __int64 v30; // rax
  _QWORD *v31; // r8
  __int64 v32; // rcx
  __int64 v33; // rdx
  int v34; // eax
  __int64 *v35; // r8
  __int64 v36; // r11
  __int64 v37; // r9
  int v38; // ecx
  __int64 v39; // r10
  int v40; // edx
  __int64 v41; // rcx
  unsigned int v42; // eax
  int v43; // eax
  int v44; // eax
  unsigned int v45; // ecx
  int v46; // eax
  unsigned int v47; // eax
  BOOLEAN Dominates[4]; // [rsp+30h] [rbp-99h] BYREF
  unsigned int v50; // [rsp+34h] [rbp-95h] BYREF
  PVOID Object; // [rsp+38h] [rbp-91h] BYREF
  _QWORD *v52; // [rsp+40h] [rbp-89h]
  _BYTE SecurityDescriptor[128]; // [rsp+50h] [rbp-79h] BYREF

  v4 = 0;
  v52 = a4;
  *a4 = 0LL;
  v5 = a4;
  v6 = *(_DWORD *)(a3 + 1532);
  Object = 0LL;
  Dominates[0] = 0;
  SecurityObject = 0;
  v10 = 0LL;
  v11 = 0LL;
  if ( (v6 & 1) != 0 || (*(_DWORD *)(a2 + 212) & 2) == 0 )
    goto LABEL_42;
  SecurityObject = PsReferenceProcessFilePointer(a3, &Object);
  if ( SecurityObject < 0
    || (v50 = 128,
        v11 = SecurityDescriptor,
        SecurityObject = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u),
        SecurityObject < 0) )
  {
    v10 = Object;
    goto LABEL_66;
  }
  v10 = Object;
  SecurityObject = ObQuerySecurityObject((_DWORD)Object, 16, (unsigned int)SecurityDescriptor, 128, (__int64)&v50);
  if ( SecurityObject != -1073741789 )
  {
LABEL_10:
    if ( SecurityObject >= 0 && v11 )
    {
      v13 = *((_WORD *)v11 + 1);
      if ( (v13 & 0x10) == 0 )
      {
LABEL_13:
        v14 = 0LL;
        goto LABEL_18;
      }
      if ( v13 >= 0 )
      {
        v14 = (ACL *)*((_QWORD *)v11 + 3);
      }
      else
      {
        v15 = *((unsigned int *)v11 + 3);
        if ( !(_DWORD)v15 )
          goto LABEL_13;
        v14 = (ACL *)&v11[v15];
      }
LABEL_18:
      AceByType = (char *)RtlFindAceByType(v14, 0x11u, 0LL);
      if ( AceByType )
      {
        v17 = (unsigned __int8 *)(AceByType + 8);
        TokenIntegrity = (PSID *)SepLocateTokenIntegrity(a2);
        v19 = TokenIntegrity;
        if ( !TokenIntegrity )
          goto LABEL_41;
        SecurityObject = RtlSidDominates(*TokenIntegrity, v17, Dominates);
        if ( SecurityObject < 0 )
          goto LABEL_66;
        if ( Dominates[0] )
        {
          if ( (unsigned int)Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline() )
          {
            v20 = v17[1];
            v21 = (_BYTE)v20 ? *(_DWORD *)&v17[4 * (v20 - 1) + 8] : 0;
            v22 = *((unsigned __int8 *)*v19 + 1);
            if ( (_BYTE)v22 )
            {
              if ( v21 < *((_DWORD *)*v19 + (unsigned int)(v22 - 1) + 2) )
                *(_DWORD *)(a2 + 200) &= ~0x1000u;
            }
          }
          v23 = v17[1];
          if ( (_BYTE)v23 )
            v24 = *(_DWORD *)&v17[4 * (v23 - 1) + 8];
          else
            v24 = 0;
          *((_DWORD *)*v19 + 2) = v24;
          v25 = *v19;
          v5 = v52;
          *v52 = v25;
          v26 = v17[1];
          if ( (_BYTE)v26 )
          {
            v27 = *(_DWORD *)&v17[4 * (v26 - 1) + 8];
            v4 = 0;
          }
          else
          {
            v4 = 0;
            v27 = 0;
          }
          v28 = *(_DWORD *)(a2 + 200);
          if ( v27 >= 0x2000 )
            v29 = v28 | 0x2000;
          else
            v29 = v28 & 0xFFFFDFFF;
          *(_DWORD *)(a2 + 200) = v29;
        }
        else
        {
LABEL_41:
          v5 = v52;
          v4 = 0;
        }
      }
      goto LABEL_42;
    }
    SecurityObject = 0;
LABEL_42:
    if ( Token )
    {
      if ( (Token[50] & 0x1000) != 0 && !SeTokenIsAdmin(Token) )
      {
        *(_DWORD *)(a2 + 200) &= ~0x1000u;
        v30 = SepLocateTokenIntegrity(a2);
        v31 = (_QWORD *)v30;
        if ( v30 )
        {
          v32 = *(_QWORD *)(*(_QWORD *)(a2 + 216) + 56LL);
          if ( v32 )
          {
            v36 = SepLocateTokenIntegrity(v32);
            if ( v36 )
            {
              v37 = *v35;
              v38 = *(unsigned __int8 *)(*v35 + 1);
              if ( (_BYTE)v38 )
                v4 = *(_DWORD *)(v37 + 4LL * (unsigned int)(v38 - 1) + 8);
              v39 = *(_QWORD *)v36;
              v40 = *(unsigned __int8 *)(*(_QWORD *)v36 + 1LL);
              v41 = (unsigned int)(v40 - 1);
              if ( (_BYTE)v40 )
                v42 = *(_DWORD *)(v39 + 4 * v41 + 8);
              else
                v42 = 0;
              if ( v4 > v42 )
              {
                v43 = 0;
                if ( (_BYTE)v40 )
                  v43 = *(_DWORD *)(v39 + 4 * v41 + 8);
                *(_DWORD *)(v37 + 8) = v43;
                *v5 = *v35;
                v44 = *(unsigned __int8 *)(*(_QWORD *)v36 + 1LL);
                if ( (_BYTE)v44 )
                  v45 = *(_DWORD *)(*(_QWORD *)v36 + 4LL * (unsigned int)(v44 - 1) + 8);
                else
                  v45 = 0;
                v46 = *(_DWORD *)(a2 + 200);
                if ( v45 >= 0x2000 )
                  v47 = v46 | 0x2000;
                else
                  v47 = v46 & 0xFFFFDFFF;
                *(_DWORD *)(a2 + 200) = v47;
              }
            }
          }
          else
          {
            v33 = *(_QWORD *)v30;
            v34 = *(unsigned __int8 *)(*(_QWORD *)v30 + 1LL);
            if ( (_BYTE)v34 && *(_DWORD *)(v33 + 4LL * (unsigned int)(v34 - 1) + 8) > 0x2000u )
            {
              *(_DWORD *)(v33 + 8) = 0x2000;
              *v5 = *v31;
            }
          }
        }
      }
    }
    goto LABEL_66;
  }
  Pool2 = (_BYTE *)ExAllocatePool2(0x100uLL, v50, 0x20206553u);
  v11 = Pool2;
  if ( !Pool2 )
  {
    SecurityObject = -1073741801;
    goto LABEL_66;
  }
  SecurityObject = RtlCreateSecurityDescriptor(Pool2, 1u);
  if ( SecurityObject >= 0 )
  {
    SecurityObject = ObQuerySecurityObject((_DWORD)v10, 16, (_DWORD)v11, v50, (__int64)&v50);
    goto LABEL_10;
  }
LABEL_66:
  if ( v10 )
    ObfDereferenceObjectWithTag(v10, 0x746C6644u);
  if ( v11 && v11 != SecurityDescriptor )
    ExFreePoolWithTag(v11, 0);
  return (unsigned int)SecurityObject;
}
