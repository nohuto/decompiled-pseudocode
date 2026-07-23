/*
 * XREFs of SepCreateClaimAttributes @ 0x140A4EA70
 * Callers:
 *     SepSetTokenClaims @ 0x140A4E9F4 (SepSetTokenClaims.c)
 * Callees:
 *     AuthzBasepSetSecurityAttributesToken @ 0x1403B8BCC (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1403B95E0 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x1403B972C (AuthzBasepAllocateSecurityAttributesList.c)
 *     RtlSidHashInitialize @ 0x1403EAE30 (RtlSidHashInitialize.c)
 *     SepLengthSidAndAttributesArray @ 0x14098567C (SepLengthSidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x140985730 (SeCaptureSidAndAttributesArray.c)
 *     AuthzBasepAllocateClaimCollectionNoLists @ 0x140A56748 (AuthzBasepAllocateClaimCollectionNoLists.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepCreateClaimAttributes(unsigned int **a1, __int64 a2, __int64 a3, unsigned int a4, char *a5)
{
  __int64 result; // rax
  int v8; // ebx
  _DWORD *v9; // r14
  _DWORD *v10; // rsi
  char v11; // r12
  _SID_AND_ATTRIBUTES *v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int *ClaimCollectionNoLists; // rdi
  __int64 SecurityAttributesList; // rax
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // r9
  unsigned int v20; // ebx
  char *Pool2; // rax
  __int64 v22; // [rsp+28h] [rbp-80h]
  __int64 v23; // [rsp+30h] [rbp-78h]
  int v24; // [rsp+54h] [rbp-54h] BYREF
  unsigned int v25; // [rsp+58h] [rbp-50h] BYREF
  PVOID v26; // [rsp+60h] [rbp-48h] BYREF
  char v27; // [rsp+B0h] [rbp+8h]

  v24 = 1;
  v27 = 0;
  result = a2;
  v25 = 0;
  v8 = 0;
  v26 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0;
  v12 = 0LL;
  if ( !a1 )
    return 3221225485LL;
  *a1 = 0LL;
  if ( a2 || a3 || a4 )
  {
    ClaimCollectionNoLists = (unsigned int *)AuthzBasepAllocateClaimCollectionNoLists();
    if ( !ClaimCollectionNoLists )
      return (unsigned int)-1073741670;
    if ( a2 )
    {
      SecurityAttributesList = AuthzBasepAllocateSecurityAttributesList(v14, v13);
      v9 = (_DWORD *)SecurityAttributesList;
      if ( !SecurityAttributesList )
      {
        v8 = -1073741670;
LABEL_37:
        ExFreePoolWithTag(ClaimCollectionNoLists, 0);
        return (unsigned int)v8;
      }
      v8 = AuthzBasepSetSecurityAttributesToken(SecurityAttributesList, &v24, a2, v17);
      if ( v8 < 0 )
        goto LABEL_30;
      v27 = 1;
      *((_QWORD *)ClaimCollectionNoLists + 72) = v9;
    }
    if ( a3 )
    {
      v18 = AuthzBasepAllocateSecurityAttributesList(v14, v13);
      v10 = (_DWORD *)v18;
      if ( !v18 )
      {
LABEL_26:
        v8 = -1073741670;
        goto LABEL_27;
      }
      v8 = AuthzBasepSetSecurityAttributesToken(v18, &v24, a3, v19);
      if ( v8 < 0 )
      {
LABEL_27:
        if ( !v9 )
        {
LABEL_31:
          if ( v10 )
          {
            if ( v11 )
              AuthzBasepFreeSecurityAttributesList(v10);
            ExFreePoolWithTag(v10, 0);
          }
          if ( v12 )
            ExFreePoolWithTag(v12, 0);
          goto LABEL_37;
        }
        if ( v27 )
          AuthzBasepFreeSecurityAttributesList(v9);
LABEL_30:
        ExFreePoolWithTag(v9, 0);
        goto LABEL_31;
      }
      v11 = 1;
      *((_QWORD *)ClaimCollectionNoLists + 73) = v10;
    }
    if ( !a5 || !a4 )
      goto LABEL_24;
    v8 = SepLengthSidAndAttributesArray((__int64)a5, a4, &v25);
    if ( v8 < 0 )
      goto LABEL_27;
    v20 = v25;
    Pool2 = (char *)ExAllocatePool2(0x100uLL, v25, 0x64546553u);
    v12 = (_SID_AND_ATTRIBUTES *)Pool2;
    if ( Pool2 )
    {
      v8 = SeCaptureSidAndAttributesArray(a5, a4, 0, Pool2, v20, v22, v23, &v26, &v25);
      if ( v8 >= 0 )
      {
        *ClaimCollectionNoLists = a4;
        *((_QWORD *)ClaimCollectionNoLists + 1) = v12;
        RtlSidHashInitialize(v12, a4, (PSID_AND_ATTRIBUTES_HASH)(ClaimCollectionNoLists + 8));
LABEL_24:
        *a1 = ClaimCollectionNoLists;
        return (unsigned int)v8;
      }
      goto LABEL_27;
    }
    goto LABEL_26;
  }
  return result;
}
