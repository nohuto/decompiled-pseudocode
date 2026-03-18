/*
 * XREFs of SepVerifyDesktopAppxPackageName @ 0x140355758
 * Callers:
 *     SepVerifyDesktopAppxImage @ 0x140356A00 (SepVerifyDesktopAppxImage.c)
 * Callees:
 *     SeSecurityAttributePresent @ 0x1403438C0 (SeSecurityAttributePresent.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1403450F0 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x140356CD0 (AuthzBasepAllocateSecurityAttributesList.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x140357454 (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x14035C750 (AuthzBasepFreeSecurityAttributesList.c)
 *     wcslen @ 0x1404FFED0 (wcslen.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     SeQuerySecurityAttributesToken @ 0x1409ECEB0 (SeQuerySecurityAttributesToken.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepVerifyDesktopAppxPackageName(_DWORD *a1, __int64 a2, _BYTE *a3)
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
  __int64 SecurityAttributesList; // rax
  void *v18; // r14
  __int64 v19; // r9
  int v20; // ebx
  size_t v21; // [rsp+20h] [rbp-E0h]
  size_t v22; // [rsp+20h] [rbp-E0h]
  size_t v23; // [rsp+60h] [rbp-A0h] BYREF
  int v24; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING v25; // [rsp+70h] [rbp-90h] BYREF
  _BYTE *v26; // [rsp+80h] [rbp-80h]
  _BYTE v27[512]; // [rsp+90h] [rbp-70h] BYREF

  v26 = a3;
  v23 = 0LL;
  *a3 = 0;
  *(_DWORD *)(&v25.MaximumLength + 1) = 0;
  v24 = 2;
  v5 = 0;
  SecurityAttributesToken = 0;
  v25.Buffer = (wchar_t *)L"WIN://SYSAPPID";
  v7 = 2 * wcslen(L"WIN://SYSAPPID");
  if ( v7 >= 0xFFFE )
    LOWORD(v7) = -4;
  v25.Length = v7;
  v25.MaximumLength = v7 + 2;
  if ( (unsigned __int8)SeSecurityAttributePresent((__int64)a1, &v25) )
  {
    LODWORD(v21) = 512;
    Pool2 = v27;
    SecurityAttributesToken = SeQuerySecurityAttributesToken((int)a1, (int)&v25, 1, v27, v21, (__int64)&v23);
    if ( SecurityAttributesToken == -1073741789 )
    {
      v20 = v23;
      Pool2 = (_BYTE *)ExAllocatePool2(0x100uLL);
      if ( !Pool2 )
        return (unsigned int)-1073741801;
      LODWORD(v22) = v20;
      SecurityAttributesToken = SeQuerySecurityAttributesToken((int)a1, (int)&v25, 1, Pool2, v22, (__int64)&v23);
    }
    if ( SecurityAttributesToken < 0 )
    {
      if ( !Pool2 )
        return (unsigned int)SecurityAttributesToken;
      goto LABEL_26;
    }
    if ( !Pool2 )
      return (unsigned int)-1073739509;
    SecurityAttributesList = AuthzBasepAllocateSecurityAttributesList();
    v18 = (void *)SecurityAttributesList;
    if ( !SecurityAttributesList )
    {
      SecurityAttributesToken = -1073741670;
LABEL_26:
      if ( Pool2 != v27 )
        ExFreePoolWithTag(Pool2, 0);
      return (unsigned int)SecurityAttributesToken;
    }
    SecurityAttributesToken = AuthzBasepSetSecurityAttributesToken(SecurityAttributesList, &v24, Pool2);
    if ( SecurityAttributesToken < 0 )
    {
LABEL_24:
      AuthzBasepFreeSecurityAttributesList(v18, v12, 0LL, v19);
      ExFreePoolWithTag(v18, 0);
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
                                          v18,
                                          0LL,
                                          0LL,
                                          0LL,
                                          0LL,
                                          0LL,
                                          (_DWORD *)(v13 + 4 * (unsigned int)*(unsigned __int8 *)(v13 + 9) + 8 + 8LL),
                                          *(unsigned __int16 *)(v13 + 2)
                                        - (4 * (unsigned int)*(unsigned __int8 *)(v13 + 9)
                                         + 8)
                                        - 8,
                                          0,
                                          0,
                                          (_DWORD *)&v23 + 1);
              if ( SecurityAttributesToken < 0 )
                goto LABEL_17;
              if ( HIDWORD(v23) != 1 )
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
    if ( HIDWORD(v23) == 1 )
LABEL_18:
      *v26 = 1;
    goto LABEL_24;
  }
  return (unsigned int)SecurityAttributesToken;
}
