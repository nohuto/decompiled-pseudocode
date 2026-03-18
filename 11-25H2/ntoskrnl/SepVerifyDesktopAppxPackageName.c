/*
 * XREFs of SepVerifyDesktopAppxPackageName @ 0x140291ED8
 * Callers:
 *     SepVerifyDesktopAppxImage @ 0x140291D1C (SepVerifyDesktopAppxImage.c)
 * Callees:
 *     AuthzBasepAllocateSecurityAttributesList @ 0x14029040C (AuthzBasepAllocateSecurityAttributesList.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x140291638 (AuthzBasepSetSecurityAttributesToken.c)
 *     SeSecurityAttributePresent @ 0x1402940F0 (SeSecurityAttributePresent.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x140366160 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepEvaluateAceCondition @ 0x140367C20 (AuthzBasepEvaluateAceCondition.c)
 *     wcslen @ 0x1404FD750 (wcslen.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     SeQuerySecurityAttributesToken @ 0x1409F23F0 (SeQuerySecurityAttributesToken.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepVerifyDesktopAppxPackageName(__int64 a1, __int64 a2, _BYTE *a3)
{
  unsigned int v5; // r15d
  int SecurityAttributesToken; // ebx
  size_t v7; // rax
  __int16 v9; // ax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdi
  unsigned int i; // ecx
  unsigned int v15; // r15d
  _BYTE *Pool2; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 SecurityAttributesList; // rax
  void *v20; // r14
  int v21; // ebx
  size_t v22; // [rsp+20h] [rbp-E0h]
  size_t v23; // [rsp+20h] [rbp-E0h]
  size_t v24; // [rsp+60h] [rbp-A0h] BYREF
  int v25; // [rsp+68h] [rbp-98h] BYREF
  int v26; // [rsp+70h] [rbp-90h] BYREF
  int v27; // [rsp+74h] [rbp-8Ch]
  const wchar_t *v28; // [rsp+78h] [rbp-88h]
  _BYTE *v29; // [rsp+80h] [rbp-80h]
  _BYTE v30[512]; // [rsp+90h] [rbp-70h] BYREF

  v29 = a3;
  v24 = 0LL;
  *a3 = 0;
  v27 = 0;
  v25 = 2;
  v5 = 0;
  SecurityAttributesToken = 0;
  v28 = L"WIN://SYSAPPID";
  v7 = 2 * wcslen(L"WIN://SYSAPPID");
  if ( v7 >= 0xFFFE )
    LOWORD(v7) = -4;
  LOWORD(v26) = v7;
  HIWORD(v26) = v7 + 2;
  if ( (unsigned __int8)SeSecurityAttributePresent(a1, &v26) )
  {
    LODWORD(v22) = 512;
    Pool2 = v30;
    SecurityAttributesToken = SeQuerySecurityAttributesToken(a1, (int)&v26, 1, v30, v22, (__int64)&v24);
    if ( SecurityAttributesToken == -1073741789 )
    {
      v21 = v24;
      Pool2 = (_BYTE *)ExAllocatePool2(0x100uLL);
      if ( !Pool2 )
        return (unsigned int)-1073741801;
      LODWORD(v23) = v21;
      SecurityAttributesToken = SeQuerySecurityAttributesToken(a1, (int)&v26, 1, Pool2, v23, (__int64)&v24);
    }
    if ( SecurityAttributesToken < 0 )
    {
      if ( !Pool2 )
        return (unsigned int)SecurityAttributesToken;
      goto LABEL_26;
    }
    if ( !Pool2 )
      return (unsigned int)-1073739509;
    SecurityAttributesList = AuthzBasepAllocateSecurityAttributesList(v18, v17);
    v20 = (void *)SecurityAttributesList;
    if ( !SecurityAttributesList )
    {
      SecurityAttributesToken = -1073741670;
LABEL_26:
      if ( Pool2 != v30 )
        ExFreePoolWithTag(Pool2, 0);
      return (unsigned int)SecurityAttributesToken;
    }
    SecurityAttributesToken = AuthzBasepSetSecurityAttributesToken(SecurityAttributesList, &v25, (__int64)Pool2);
    if ( SecurityAttributesToken < 0 )
    {
LABEL_24:
      AuthzBasepFreeSecurityAttributesList(v20, v12, 0LL);
      ExFreePoolWithTag(v20, 0);
      goto LABEL_26;
    }
LABEL_5:
    v9 = *(_WORD *)(a2 + 2);
    if ( (v9 & 4) != 0 )
    {
      if ( v9 >= 0 )
      {
        v11 = *(_QWORD *)(a2 + 32);
LABEL_9:
        if ( v11 )
        {
          v12 = *(unsigned __int16 *)(v11 + 4);
          v13 = v11 + 8;
          for ( i = 0; i < (unsigned int)v12; ++i )
          {
            if ( i >= v5 && *(_BYTE *)v13 == 9 )
            {
              v15 = i;
              if ( !v13 )
                goto LABEL_16;
              SecurityAttributesToken = AuthzBasepEvaluateAceCondition(
                                          a1,
                                          (_DWORD)v20,
                                          0,
                                          0,
                                          0LL,
                                          0LL,
                                          0LL,
                                          v13 + 4 * (unsigned int)*(unsigned __int8 *)(v13 + 9) + 8 + 8LL,
                                          *(unsigned __int16 *)(v13 + 2)
                                        - (4 * (unsigned int)*(unsigned __int8 *)(v13 + 9)
                                         + 8)
                                        - 8,
                                          0,
                                          0,
                                          (__int64)&v24 + 4);
              if ( SecurityAttributesToken < 0 )
                goto LABEL_17;
              if ( HIDWORD(v24) != 1 )
              {
LABEL_16:
                v5 = v15 + 1;
                if ( v13 )
                  goto LABEL_5;
                goto LABEL_17;
              }
              goto LABEL_18;
            }
            v13 += *(unsigned __int16 *)(v13 + 2);
          }
        }
        goto LABEL_17;
      }
      v10 = *(unsigned int *)(a2 + 16);
      if ( (_DWORD)v10 )
      {
        v11 = a2 + v10;
        goto LABEL_9;
      }
    }
LABEL_17:
    if ( HIDWORD(v24) == 1 )
LABEL_18:
      *v29 = 1;
    goto LABEL_24;
  }
  return (unsigned int)SecurityAttributesToken;
}
