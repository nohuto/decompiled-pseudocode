/*
 * XREFs of SepCreateClaimAttributes @ 0x140A56BE0
 * Callers:
 *     SepSetTokenClaims @ 0x140A56B64 (SepSetTokenClaims.c)
 * Callees:
 *     AuthzBasepAllocateSecurityAttributesList @ 0x140356CD0 (AuthzBasepAllocateSecurityAttributesList.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x140357454 (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x14035C750 (AuthzBasepFreeSecurityAttributesList.c)
 *     RtlSidHashInitialize @ 0x140365780 (RtlSidHashInitialize.c)
 *     SepLengthSidAndAttributesArray @ 0x140936544 (SepLengthSidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x140936600 (SeCaptureSidAndAttributesArray.c)
 *     AuthzBasepAllocateClaimCollectionNoLists @ 0x140A5E328 (AuthzBasepAllocateClaimCollectionNoLists.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepCreateClaimAttributes(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4, char *a5)
{
  __int64 result; // rax
  int v8; // ebx
  _DWORD *v9; // r14
  _DWORD *v10; // rsi
  char v11; // r12
  char *v12; // rbp
  _QWORD *ClaimCollectionNoLists; // rdi
  __int64 SecurityAttributesList; // rax
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // r9
  unsigned int v18; // ebx
  char *Pool2; // rax
  __int64 v20; // [rsp+28h] [rbp-80h]
  __int64 v21; // [rsp+30h] [rbp-78h]
  int v22; // [rsp+54h] [rbp-54h] BYREF
  unsigned int v23; // [rsp+58h] [rbp-50h] BYREF
  PVOID v24; // [rsp+60h] [rbp-48h] BYREF
  char v25; // [rsp+B0h] [rbp+8h]

  v22 = 1;
  v25 = 0;
  result = a2;
  v23 = 0;
  v8 = 0;
  v24 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0;
  v12 = 0LL;
  if ( !a1 )
    return 3221225485LL;
  *a1 = 0LL;
  if ( a2 || a3 || a4 )
  {
    ClaimCollectionNoLists = (_QWORD *)AuthzBasepAllocateClaimCollectionNoLists();
    if ( !ClaimCollectionNoLists )
      return (unsigned int)-1073741670;
    if ( a2 )
    {
      SecurityAttributesList = AuthzBasepAllocateSecurityAttributesList();
      v9 = (_DWORD *)SecurityAttributesList;
      if ( !SecurityAttributesList )
      {
        v8 = -1073741670;
LABEL_37:
        ExFreePoolWithTag(ClaimCollectionNoLists, 0);
        return (unsigned int)v8;
      }
      v8 = AuthzBasepSetSecurityAttributesToken(SecurityAttributesList, &v22, a2, v15);
      if ( v8 < 0 )
        goto LABEL_30;
      v25 = 1;
      ClaimCollectionNoLists[72] = v9;
    }
    if ( a3 )
    {
      v16 = AuthzBasepAllocateSecurityAttributesList();
      v10 = (_DWORD *)v16;
      if ( !v16 )
      {
LABEL_26:
        v8 = -1073741670;
        goto LABEL_27;
      }
      v8 = AuthzBasepSetSecurityAttributesToken(v16, &v22, a3, v17);
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
        if ( v25 )
          AuthzBasepFreeSecurityAttributesList(v9);
LABEL_30:
        ExFreePoolWithTag(v9, 0);
        goto LABEL_31;
      }
      v11 = 1;
      ClaimCollectionNoLists[73] = v10;
    }
    if ( !a5 || !a4 )
      goto LABEL_24;
    v8 = SepLengthSidAndAttributesArray((__int64)a5, a4, &v23);
    if ( v8 < 0 )
      goto LABEL_27;
    v18 = v23;
    Pool2 = (char *)ExAllocatePool2(0x100uLL);
    v12 = Pool2;
    if ( Pool2 )
    {
      v8 = SeCaptureSidAndAttributesArray(a5, a4, 0, Pool2, v18, v20, v21, &v24, &v23);
      if ( v8 >= 0 )
      {
        *(_DWORD *)ClaimCollectionNoLists = a4;
        ClaimCollectionNoLists[1] = v12;
        RtlSidHashInitialize((__int64 *)v12, a4, ClaimCollectionNoLists + 4);
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
