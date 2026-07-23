/*
 * XREFs of SepSetTokenCapabilities @ 0x140A08CB8
 * Callers:
 *     SepGetAnonymousToken @ 0x1402905D8 (SepGetAnonymousToken.c)
 *     SepFilterToken @ 0x140997EFC (SepFilterToken.c)
 *     NtCreateLowBoxToken @ 0x140ACDB00 (NtCreateLowBoxToken.c)
 * Callees:
 *     RtlSidHashInitialize @ 0x14036C330 (RtlSidHashInitialize.c)
 *     SepFreeTokenCapabilities @ 0x140471AA8 (SepFreeTokenCapabilities.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     RtlIsParentOfChildAppContainer @ 0x1406EF480 (RtlIsParentOfChildAppContainer.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x1407859A8 (SepInsertOrReferenceSharedSidEntries.c)
 *     SepLengthSidAndAttributesArray @ 0x1408A3830 (SepLengthSidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x1408A38E0 (SeCaptureSidAndAttributesArray.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepSetTokenCapabilities(__int64 a1, void *a2, char *a3, unsigned int a4)
{
  __int64 result; // rax
  unsigned int v8; // ebp
  unsigned int **Pool2; // rax
  _SID_AND_ATTRIBUTES *v10; // rsi
  int v11; // eax
  unsigned int v12; // ebp
  void *v13; // rcx
  __int64 v14; // [rsp+28h] [rbp-50h]
  __int64 v15; // [rsp+30h] [rbp-48h]
  PVOID v16; // [rsp+50h] [rbp-28h] BYREF
  unsigned int v17; // [rsp+80h] [rbp+8h] BYREF

  v17 = 0;
  v16 = 0LL;
  if ( *(_QWORD *)(a1 + 792) )
  {
    if ( !a2 )
      return 3221225506LL;
    v13 = *(void **)(a1 + 784);
    if ( v13 )
    {
      if ( !RtlIsParentOfChildAppContainer(v13, a2) )
        return 3221225506LL;
    }
  }
  if ( a4 )
  {
    if ( a4 > 0x1000 )
      return 3221225485LL;
    if ( SepTokenCapabilitySidSharingEnabled )
    {
      v8 = 32 * a4;
    }
    else
    {
      result = SepLengthSidAndAttributesArray((__int64)a3, a4, &v17);
      if ( (int)result < 0 )
        return result;
      v8 = v17;
    }
    Pool2 = (unsigned int **)ExAllocatePool2(0x100uLL);
    v10 = (_SID_AND_ATTRIBUTES *)Pool2;
    if ( Pool2 )
    {
      if ( SepTokenCapabilitySidSharingEnabled )
        v11 = SepInsertOrReferenceSharedSidEntries((__int64)a3, Pool2, a4);
      else
        v11 = SeCaptureSidAndAttributesArray(a3, a4, 0, (char *)Pool2, v8, v14, v15, &v16, &v17);
      v12 = v11;
      if ( v11 < 0 )
      {
        ExFreePoolWithTag(v10, 0);
      }
      else
      {
        if ( *(_QWORD *)(a1 + 792) )
          SepFreeTokenCapabilities(a1);
        *(_QWORD *)(a1 + 792) = v10;
        *(_DWORD *)(a1 + 800) = a4;
        RtlSidHashInitialize(v10, a4, (PSID_AND_ATTRIBUTES_HASH)(a1 + 808));
      }
      return v12;
    }
    else
    {
      return 3221225626LL;
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
}
