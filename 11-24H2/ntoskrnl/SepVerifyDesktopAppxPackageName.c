/*
 * XREFs of SepVerifyDesktopAppxPackageName @ 0x1403BAF3C
 * Callers:
 *     SepVerifyDesktopAppxImage @ 0x1404EC6F0 (SepVerifyDesktopAppxImage.c)
 * Callees:
 *     SeSecurityAttributePresent @ 0x140322DA0 (SeSecurityAttributePresent.c)
 *     AuthzBasepEvaluateAceCondition @ 0x140323B60 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x1403B8BCC (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1403B95E0 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x1403B972C (AuthzBasepAllocateSecurityAttributesList.c)
 *     wcslen @ 0x1404FD790 (wcslen.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     SeQuerySecurityAttributesToken @ 0x1409E61E0 (SeQuerySecurityAttributesToken.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepVerifyDesktopAppxPackageName(_DWORD *a1, __int64 a2, _BYTE *a3)
{
  unsigned int v5; // r15d
  int SecurityAttributesToken; // ebx
  size_t v7; // rax
  __int16 v9; // ax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdi
  unsigned int i; // ecx
  unsigned int v14; // r15d
  _BYTE *Pool2; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 SecurityAttributesList; // rax
  __int64 v19; // r9
  _DWORD *v20; // r14
  int v21; // ebx
  size_t v22; // [rsp+20h] [rbp-E0h]
  size_t v23; // [rsp+20h] [rbp-E0h]
  size_t v24; // [rsp+60h] [rbp-A0h] BYREF
  int v25; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING v26; // [rsp+70h] [rbp-90h] BYREF
  _BYTE *v27; // [rsp+80h] [rbp-80h]
  _BYTE v28[512]; // [rsp+90h] [rbp-70h] BYREF

  v27 = a3;
  v24 = 0LL;
  *a3 = 0;
  *(_DWORD *)(&v26.MaximumLength + 1) = 0;
  v25 = 2;
  v5 = 0;
  SecurityAttributesToken = 0;
  v26.Buffer = (wchar_t *)L"WIN://SYSAPPID";
  v7 = 2 * wcslen(L"WIN://SYSAPPID");
  if ( v7 >= 0xFFFE )
    LOWORD(v7) = -4;
  v26.Length = v7;
  v26.MaximumLength = v7 + 2;
  if ( (unsigned __int8)SeSecurityAttributePresent((__int64)a1, &v26) )
  {
    LODWORD(v22) = 512;
    Pool2 = v28;
    SecurityAttributesToken = SeQuerySecurityAttributesToken((int)a1, (int)&v26, 1, v28, v22, (__int64)&v24);
    if ( SecurityAttributesToken == -1073741789 )
    {
      v21 = v24;
      Pool2 = (_BYTE *)ExAllocatePool2(0x100uLL, (unsigned int)v24, 0x20206553u);
      if ( !Pool2 )
        return (unsigned int)-1073741801;
      LODWORD(v23) = v21;
      SecurityAttributesToken = SeQuerySecurityAttributesToken((int)a1, (int)&v26, 1, Pool2, v23, (__int64)&v24);
    }
    if ( SecurityAttributesToken < 0 )
    {
      if ( !Pool2 )
        return (unsigned int)SecurityAttributesToken;
      goto LABEL_26;
    }
    if ( !Pool2 )
      return (unsigned int)-1073739509;
    SecurityAttributesList = AuthzBasepAllocateSecurityAttributesList(v17, v16);
    v20 = (_DWORD *)SecurityAttributesList;
    if ( !SecurityAttributesList )
    {
      SecurityAttributesToken = -1073741670;
LABEL_26:
      if ( Pool2 != v28 )
        ExFreePoolWithTag(Pool2, 0);
      return (unsigned int)SecurityAttributesToken;
    }
    SecurityAttributesToken = AuthzBasepSetSecurityAttributesToken(SecurityAttributesList, &v25, (__int64)Pool2, v19);
    if ( SecurityAttributesToken < 0 )
    {
LABEL_24:
      AuthzBasepFreeSecurityAttributesList(v20);
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
          v12 = v11 + 8;
          for ( i = 0; i < *(unsigned __int16 *)(v11 + 4); ++i )
          {
            if ( i >= v5 && *(_BYTE *)v12 == 9 )
            {
              v14 = i;
              if ( !v12 )
                goto LABEL_16;
              SecurityAttributesToken = AuthzBasepEvaluateAceCondition(
                                          a1,
                                          v20,
                                          0LL,
                                          0LL,
                                          0LL,
                                          0LL,
                                          0LL,
                                          (_DWORD *)(v12 + 4 * (unsigned int)*(unsigned __int8 *)(v12 + 9) + 8 + 8LL),
                                          *(unsigned __int16 *)(v12 + 2)
                                        - (4 * (unsigned int)*(unsigned __int8 *)(v12 + 9)
                                         + 8)
                                        - 8,
                                          0,
                                          0,
                                          (_DWORD *)&v24 + 1);
              if ( SecurityAttributesToken < 0 )
                goto LABEL_17;
              if ( HIDWORD(v24) != 1 )
              {
LABEL_16:
                v5 = v14 + 1;
                if ( v12 )
                  goto LABEL_5;
                goto LABEL_17;
              }
              goto LABEL_18;
            }
            v12 += *(unsigned __int16 *)(v12 + 2);
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
      *v27 = 1;
    goto LABEL_24;
  }
  return (unsigned int)SecurityAttributesToken;
}
