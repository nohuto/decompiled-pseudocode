/*
 * XREFs of SepSetTokenCapabilities @ 0x1409854B8
 * Callers:
 *     SepGetAnonymousToken @ 0x1403B977C (SepGetAnonymousToken.c)
 *     SepCreateAppContainerToken @ 0x140606A30 (SepCreateAppContainerToken.c)
 *     SepDuplicateToken @ 0x1408527E0 (SepDuplicateToken.c)
 *     SepFilterToken @ 0x140985C1C (SepFilterToken.c)
 *     NtCreateLowBoxToken @ 0x140AD5A60 (NtCreateLowBoxToken.c)
 * Callees:
 *     RtlSidHashInitialize @ 0x1403EAE30 (RtlSidHashInitialize.c)
 *     SepFreeTokenCapabilities @ 0x14046A360 (SepFreeTokenCapabilities.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     RtlIsParentOfChildAppContainer @ 0x1406F8F00 (RtlIsParentOfChildAppContainer.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x140794E00 (SepInsertOrReferenceSharedSidEntries.c)
 *     SepLengthSidAndAttributesArray @ 0x14098567C (SepLengthSidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x140985730 (SeCaptureSidAndAttributesArray.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepSetTokenCapabilities(__int64 a1, void *a2, __int64 a3, unsigned int a4)
{
  __int64 result; // rax
  unsigned int v8; // ebp
  unsigned int **Pool2; // rax
  _SID_AND_ATTRIBUTES *v10; // rsi
  int v11; // eax
  unsigned int v12; // ebp
  void *v13; // rcx
  unsigned int v14; // [rsp+80h] [rbp+8h] BYREF

  v14 = 0;
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
      result = SepLengthSidAndAttributesArray(a3, a4, &v14);
      if ( (int)result < 0 )
        return result;
      v8 = v14;
    }
    Pool2 = (unsigned int **)ExAllocatePool2(0x100uLL, v8, 0x73536553u);
    v10 = (_SID_AND_ATTRIBUTES *)Pool2;
    if ( Pool2 )
    {
      if ( SepTokenCapabilitySidSharingEnabled )
        v11 = SepInsertOrReferenceSharedSidEntries(a3, Pool2, a4);
      else
        v11 = SeCaptureSidAndAttributesArray(a3, a4, 0LL, Pool2);
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
