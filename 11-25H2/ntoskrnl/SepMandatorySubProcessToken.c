/*
 * XREFs of SepMandatorySubProcessToken @ 0x14047E350
 * Callers:
 *     SeSubProcessToken @ 0x140A0C9E8 (SeSubProcessToken.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     RtlSidDominates @ 0x1403F2890 (RtlSidDominates.c)
 *     SepLocateTokenIntegrity @ 0x14041DC40 (SepLocateTokenIntegrity.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     SeTokenIsAdmin @ 0x1408D9E10 (SeTokenIsAdmin.c)
 *     PsReferenceProcessFilePointer @ 0x14090B800 (PsReferenceProcessFilePointer.c)
 *     ObQuerySecurityObject @ 0x14099CFD4 (ObQuerySecurityObject.c)
 *     RtlCreateSecurityDescriptor @ 0x1409EC7E0 (RtlCreateSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepMandatorySubProcessToken(_DWORD *Token, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v4; // r14d
  _QWORD *v5; // r15
  int v6; // eax
  NTSTATUS SecurityObject; // ebx
  void *v10; // r12
  _BYTE *v11; // rdi
  __int16 v12; // ax
  __int64 v13; // rax
  _BYTE *v14; // rax
  _BYTE *v15; // rcx
  unsigned int i; // edx
  _BYTE *Pool2; // rax
  unsigned __int8 *v19; // r14
  PSID *TokenIntegrity; // rax
  PSID *v21; // r15
  int v22; // eax
  int v23; // ecx
  PSID v24; // rax
  int v25; // eax
  unsigned int v26; // ecx
  int v27; // eax
  unsigned int v28; // eax
  __int64 v29; // rax
  _QWORD *v30; // r8
  __int64 v31; // rcx
  __int64 v32; // rdx
  int v33; // eax
  __int64 *v34; // r8
  __int64 v35; // r11
  __int64 v36; // r9
  int v37; // ecx
  __int64 v38; // r10
  int v39; // edx
  __int64 v40; // rcx
  unsigned int v41; // eax
  int v42; // eax
  int v43; // eax
  unsigned int v44; // ecx
  int v45; // eax
  unsigned int v46; // eax
  BOOLEAN Dominates[4]; // [rsp+30h] [rbp-99h] BYREF
  int v48; // [rsp+34h] [rbp-95h] BYREF
  void *v49; // [rsp+38h] [rbp-91h] BYREF
  _QWORD *v50; // [rsp+40h] [rbp-89h]
  _BYTE SecurityDescriptor[128]; // [rsp+50h] [rbp-79h] BYREF

  v4 = 0;
  v50 = a4;
  *a4 = 0LL;
  v5 = a4;
  v6 = *(_DWORD *)(a3 + 1532);
  v49 = 0LL;
  Dominates[0] = 0;
  SecurityObject = 0;
  v10 = 0LL;
  v11 = 0LL;
  if ( (v6 & 1) != 0 || (*(_DWORD *)(a2 + 212) & 2) == 0 )
    goto LABEL_18;
  SecurityObject = PsReferenceProcessFilePointer(a3, &v49);
  if ( SecurityObject < 0
    || (v48 = 128,
        v11 = SecurityDescriptor,
        SecurityObject = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u),
        SecurityObject < 0) )
  {
    v10 = v49;
    goto LABEL_20;
  }
  v10 = v49;
  SecurityObject = ObQuerySecurityObject((_DWORD)v49, 16, (unsigned int)SecurityDescriptor, 128, (__int64)&v48);
  if ( SecurityObject != -1073741789 )
  {
LABEL_6:
    if ( SecurityObject >= 0 && v11 )
    {
      v12 = *((_WORD *)v11 + 1);
      if ( (v12 & 0x10) != 0 )
      {
        if ( v12 >= 0 )
        {
          v14 = (_BYTE *)*((_QWORD *)v11 + 3);
LABEL_12:
          if ( v14 )
          {
            v15 = v14 + 8;
            for ( i = 0; i < *((unsigned __int16 *)v14 + 2); ++i )
            {
              if ( *v15 == 17 )
              {
                if ( !v15 )
                  goto LABEL_18;
                v19 = v15 + 8;
                TokenIntegrity = (PSID *)SepLocateTokenIntegrity(a2);
                v21 = TokenIntegrity;
                if ( !TokenIntegrity )
                  goto LABEL_46;
                SecurityObject = RtlSidDominates(*TokenIntegrity, v19, Dominates);
                if ( SecurityObject < 0 )
                  goto LABEL_20;
                if ( Dominates[0] )
                {
                  v22 = v19[1];
                  if ( (_BYTE)v22 )
                    v23 = *(_DWORD *)&v19[4 * (v22 - 1) + 8];
                  else
                    v23 = 0;
                  *((_DWORD *)*v21 + 2) = v23;
                  v24 = *v21;
                  v5 = v50;
                  *v50 = v24;
                  v25 = v19[1];
                  if ( (_BYTE)v25 )
                  {
                    v26 = *(_DWORD *)&v19[4 * (v25 - 1) + 8];
                    v4 = 0;
                  }
                  else
                  {
                    v4 = 0;
                    v26 = 0;
                  }
                  v27 = *(_DWORD *)(a2 + 200);
                  if ( v26 >= 0x2000 )
                    v28 = v27 | 0x2000;
                  else
                    v28 = v27 & 0xFFFFDFFF;
                  *(_DWORD *)(a2 + 200) = v28;
                }
                else
                {
LABEL_46:
                  v5 = v50;
                  v4 = 0;
                }
                goto LABEL_18;
              }
              v15 += *((unsigned __int16 *)v15 + 1);
            }
          }
          goto LABEL_18;
        }
        v13 = *((unsigned int *)v11 + 3);
        if ( (_DWORD)v13 )
        {
          v14 = &v11[v13];
          goto LABEL_12;
        }
      }
    }
    else
    {
      SecurityObject = 0;
    }
LABEL_18:
    if ( Token )
    {
      if ( (Token[50] & 0x1000) != 0 && !SeTokenIsAdmin(Token) )
      {
        *(_DWORD *)(a2 + 200) &= ~0x1000u;
        v29 = SepLocateTokenIntegrity(a2);
        v30 = (_QWORD *)v29;
        if ( v29 )
        {
          v31 = *(_QWORD *)(*(_QWORD *)(a2 + 216) + 48LL);
          if ( v31 )
          {
            v35 = SepLocateTokenIntegrity(v31);
            if ( v35 )
            {
              v36 = *v34;
              v37 = *(unsigned __int8 *)(*v34 + 1);
              if ( (_BYTE)v37 )
                v4 = *(_DWORD *)(v36 + 4LL * (unsigned int)(v37 - 1) + 8);
              v38 = *(_QWORD *)v35;
              v39 = *(unsigned __int8 *)(*(_QWORD *)v35 + 1LL);
              v40 = (unsigned int)(v39 - 1);
              if ( (_BYTE)v39 )
                v41 = *(_DWORD *)(v38 + 4 * v40 + 8);
              else
                v41 = 0;
              if ( v4 > v41 )
              {
                v42 = 0;
                if ( (_BYTE)v39 )
                  v42 = *(_DWORD *)(v38 + 4 * v40 + 8);
                *(_DWORD *)(v36 + 8) = v42;
                *v5 = *v34;
                v43 = *(unsigned __int8 *)(*(_QWORD *)v35 + 1LL);
                if ( (_BYTE)v43 )
                  v44 = *(_DWORD *)(*(_QWORD *)v35 + 4LL * (unsigned int)(v43 - 1) + 8);
                else
                  v44 = 0;
                v45 = *(_DWORD *)(a2 + 200);
                if ( v44 >= 0x2000 )
                  v46 = v45 | 0x2000;
                else
                  v46 = v45 & 0xFFFFDFFF;
                *(_DWORD *)(a2 + 200) = v46;
              }
            }
          }
          else
          {
            v32 = *(_QWORD *)v29;
            v33 = *(unsigned __int8 *)(*(_QWORD *)v29 + 1LL);
            if ( (_BYTE)v33 && *(_DWORD *)(v32 + 4LL * (unsigned int)(v33 - 1) + 8) > 0x2000u )
            {
              *(_DWORD *)(v32 + 8) = 0x2000;
              *v5 = *v30;
            }
          }
        }
      }
    }
    goto LABEL_20;
  }
  Pool2 = (_BYTE *)ExAllocatePool2(0x100uLL);
  v11 = Pool2;
  if ( !Pool2 )
  {
    SecurityObject = -1073741801;
    goto LABEL_20;
  }
  SecurityObject = RtlCreateSecurityDescriptor(Pool2, 1u);
  if ( SecurityObject >= 0 )
  {
    SecurityObject = ObQuerySecurityObject((_DWORD)v10, 16, (_DWORD)v11, v48, (__int64)&v48);
    goto LABEL_6;
  }
LABEL_20:
  if ( v10 )
    ObfDereferenceObjectWithTag(v10, 0x746C6644u);
  if ( v11 && v11 != SecurityDescriptor )
    ExFreePoolWithTag(v11, 0);
  return (unsigned int)SecurityObject;
}
