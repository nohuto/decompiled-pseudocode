/*
 * XREFs of SepDuplicateClaimAttributes @ 0x140A5E1D0
 * Callers:
 *     SepConvertToOwnTokenClaims @ 0x1404A6CD4 (SepConvertToOwnTokenClaims.c)
 *     SepDuplicateTokenClaims @ 0x140A5E164 (SepDuplicateTokenClaims.c)
 * Callees:
 *     AuthzBasepAllocateSecurityAttributesList @ 0x140356CD0 (AuthzBasepAllocateSecurityAttributesList.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x14035C750 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x14035F940 (AuthzBasepDuplicateSecurityAttributes.c)
 *     RtlSidHashInitialize @ 0x140365780 (RtlSidHashInitialize.c)
 *     SepLengthSidAndAttributesArray @ 0x140936544 (SepLengthSidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x140936600 (SeCaptureSidAndAttributesArray.c)
 *     AuthzBasepAllocateClaimCollectionNoLists @ 0x140A5E328 (AuthzBasepAllocateClaimCollectionNoLists.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepDuplicateClaimAttributes(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  int v5; // ebx
  _DWORD *v6; // r15
  _DWORD *v7; // rdi
  char v8; // r13
  char *v9; // rbp
  _QWORD *ClaimCollectionNoLists; // rsi
  __int64 SecurityAttributesList; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // ebx
  char *Pool2; // rax
  unsigned int v16; // edx
  __int64 v17; // [rsp+28h] [rbp-70h]
  __int64 v18; // [rsp+30h] [rbp-68h]
  char v19; // [rsp+A8h] [rbp+10h]
  unsigned int v20; // [rsp+B0h] [rbp+18h] BYREF
  PVOID v21; // [rsp+B8h] [rbp+20h] BYREF

  result = 0LL;
  v19 = 0;
  v20 = 0;
  v5 = 0;
  v21 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0;
  v9 = 0LL;
  if ( !a2 )
    return 3221225485LL;
  *a2 = 0LL;
  if ( a1 )
  {
    ClaimCollectionNoLists = (_QWORD *)AuthzBasepAllocateClaimCollectionNoLists();
    if ( !ClaimCollectionNoLists )
      return (unsigned int)-1073741670;
    if ( *(_QWORD *)(a1 + 576) )
    {
      SecurityAttributesList = AuthzBasepAllocateSecurityAttributesList();
      v6 = (_DWORD *)SecurityAttributesList;
      if ( !SecurityAttributesList )
      {
        v5 = -1073741670;
LABEL_35:
        ExFreePoolWithTag(ClaimCollectionNoLists, 0);
        return (unsigned int)v5;
      }
      v5 = AuthzBasepDuplicateSecurityAttributes(*(_QWORD *)(a1 + 576), SecurityAttributesList, 0);
      if ( v5 < 0 )
        goto LABEL_13;
      v19 = 1;
      ClaimCollectionNoLists[72] = v6;
    }
    if ( *(_QWORD *)(a1 + 584) )
    {
      v13 = AuthzBasepAllocateSecurityAttributesList();
      v7 = (_DWORD *)v13;
      if ( !v13 )
      {
LABEL_23:
        v5 = -1073741670;
        goto LABEL_24;
      }
      v5 = AuthzBasepDuplicateSecurityAttributes(*(_QWORD *)(a1 + 584), v13, 0);
      if ( v5 < 0 )
      {
LABEL_24:
        if ( !v6 )
          goto LABEL_14;
        if ( v19 )
          AuthzBasepFreeSecurityAttributesList(v6);
LABEL_13:
        ExFreePoolWithTag(v6, 0);
LABEL_14:
        if ( v7 )
        {
          if ( v8 )
            AuthzBasepFreeSecurityAttributesList(v7);
          ExFreePoolWithTag(v7, 0);
        }
        if ( v9 )
          ExFreePoolWithTag(v9, 0);
        goto LABEL_35;
      }
      v8 = 1;
      ClaimCollectionNoLists[73] = v7;
    }
    v12 = *(_QWORD *)(a1 + 8);
    if ( !v12 || !*(_DWORD *)a1 )
      goto LABEL_10;
    v5 = SepLengthSidAndAttributesArray(v12, *(_DWORD *)a1, &v20);
    if ( v5 < 0 )
      goto LABEL_24;
    v14 = v20;
    Pool2 = (char *)ExAllocatePool2(0x100uLL);
    v9 = Pool2;
    if ( Pool2 )
    {
      v5 = SeCaptureSidAndAttributesArray(*(char **)(a1 + 8), *(_DWORD *)a1, 0, Pool2, v14, v17, v18, &v21, &v20);
      if ( v5 >= 0 )
      {
        v16 = *(_DWORD *)a1;
        *(_DWORD *)ClaimCollectionNoLists = *(_DWORD *)a1;
        ClaimCollectionNoLists[1] = v9;
        RtlSidHashInitialize((__int64 *)v9, v16, ClaimCollectionNoLists + 4);
LABEL_10:
        *a2 = ClaimCollectionNoLists;
        return (unsigned int)v5;
      }
      goto LABEL_24;
    }
    goto LABEL_23;
  }
  return result;
}
