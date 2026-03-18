/*
 * XREFs of SepSetTokenCapabilities @ 0x140936380
 * Callers:
 *     SepGetAnonymousToken @ 0x14035F4BC (SepGetAnonymousToken.c)
 *     SepDuplicateToken @ 0x140856520 (SepDuplicateToken.c)
 *     SepFilterToken @ 0x140AD2664 (SepFilterToken.c)
 *     NtCreateLowBoxToken @ 0x140AD8020 (NtCreateLowBoxToken.c)
 * Callees:
 *     RtlSidHashInitialize @ 0x140365780 (RtlSidHashInitialize.c)
 *     SepFreeTokenCapabilities @ 0x14046FF38 (SepFreeTokenCapabilities.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     RtlIsParentOfChildAppContainer @ 0x1406FB2C0 (RtlIsParentOfChildAppContainer.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x140794D78 (SepInsertOrReferenceSharedSidEntries.c)
 *     SepLengthSidAndAttributesArray @ 0x140936544 (SepLengthSidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x140936600 (SeCaptureSidAndAttributesArray.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepSetTokenCapabilities(__int64 a1, void *a2, __int64 a3, unsigned int a4)
{
  __int64 result; // rax
  unsigned int **Pool2; // rax
  unsigned int **v9; // rsi
  int v10; // eax
  unsigned int v11; // ebp
  void *v12; // rcx
  int v13; // [rsp+80h] [rbp+8h] BYREF

  v13 = 0;
  if ( *(_QWORD *)(a1 + 792) )
  {
    if ( !a2 )
      return 3221225506LL;
    v12 = *(void **)(a1 + 784);
    if ( v12 )
    {
      if ( !RtlIsParentOfChildAppContainer(v12, a2) )
        return 3221225506LL;
    }
  }
  if ( a4 )
  {
    if ( a4 > 0x1000 )
    {
      return 3221225485LL;
    }
    else if ( SepTokenCapabilitySidSharingEnabled
           || (result = SepLengthSidAndAttributesArray(a3, a4, &v13), (int)result >= 0) )
    {
      Pool2 = (unsigned int **)ExAllocatePool2(0x100uLL);
      v9 = Pool2;
      if ( Pool2 )
      {
        if ( SepTokenCapabilitySidSharingEnabled )
          v10 = SepInsertOrReferenceSharedSidEntries(a3, Pool2, a4);
        else
          v10 = SeCaptureSidAndAttributesArray(a3, a4, 0LL, Pool2);
        v11 = v10;
        if ( v10 < 0 )
        {
          ExFreePoolWithTag(v9, 0);
        }
        else
        {
          if ( *(_QWORD *)(a1 + 792) )
            SepFreeTokenCapabilities(a1);
          *(_QWORD *)(a1 + 792) = v9;
          *(_DWORD *)(a1 + 800) = a4;
          RtlSidHashInitialize((__int64 *)v9, a4, (_QWORD *)(a1 + 808));
        }
        return v11;
      }
      else
      {
        return 3221225626LL;
      }
    }
  }
  else
  {
    if ( *(_QWORD *)(a1 + 792) )
      SepFreeTokenCapabilities(a1);
    *(_QWORD *)(a1 + 792) = 0LL;
    *(_DWORD *)(a1 + 800) = 0;
    memset_0((void *)(a1 + 808), 0, 0x110uLL);
    return 0LL;
  }
  return result;
}
