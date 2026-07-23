/*
 * XREFs of SepTokenDeleteMethod @ 0x140AD6F50
 * Callers:
 *     ObpRemoveObjectRoutine @ 0x140842AF0 (ObpRemoveObjectRoutine.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ExDeleteResourceLite @ 0x1402E55A0 (ExDeleteResourceLite.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1403B95E0 (AuthzBasepFreeSecurityAttributesList.c)
 *     SepDereferenceLuidToIndexEntry @ 0x14044AEF8 (SepDereferenceLuidToIndexEntry.c)
 *     SepFreeTokenCapabilities @ 0x14046A360 (SepFreeTokenCapabilities.c)
 *     Feature_2045735225__private_IsEnabledDeviceUsageNoInline @ 0x1406059EC (Feature_2045735225__private_IsEnabledDeviceUsageNoInline.c)
 *     SepModifyTokenPolicyCounter @ 0x14078FB10 (SepModifyTokenPolicyCounter.c)
 *     SepLogTokenSidManagement @ 0x14078FD30 (SepLogTokenSidManagement.c)
 *     SepRemoveTokenLogonSession @ 0x140793AF8 (SepRemoveTokenLogonSession.c)
 *     SepDereferenceCachedHandlesEntryInternal @ 0x140A05254 (SepDereferenceCachedHandlesEntryInternal.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x140A3B0C0 (SepDereferenceLowBoxNumberEntry.c)
 *     SepDeleteClaimAttributes @ 0x140A71894 (SepDeleteClaimAttributes.c)
 *     SepDeReferenceLogonSession @ 0x140AD7224 (SepDeReferenceLogonSession.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall SepTokenDeleteMethod(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  unsigned int v4; // eax
  volatile signed __int64 *v5; // rdi
  signed __int64 v6; // rax
  bool v7; // cc
  signed __int64 v8; // rax
  _DWORD *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r8
  _QWORD *v13; // rdx
  signed __int64 v14; // rax
  signed __int64 v15; // r8
  bool v16; // zf
  signed __int64 v17; // rtt
  __int64 v18; // rax
  __int64 v19; // rdx
  void *v20; // rcx
  void *v21; // rcx
  __int64 v22; // rcx
  void *v23; // rcx
  void *v24; // rcx
  struct _ERESOURCE *v25; // rcx
  void *v26; // rcx
  __int64 v27; // [rsp+40h] [rbp+8h] BYREF

  if ( SeTokenLeakTracking )
  {
    SepRemoveTokenLogonSession(a1);
    v2 = *(void **)(a1 + 1144);
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
  }
  v3 = *(void **)(a1 + 1096);
  if ( v3 )
  {
    if ( (*(_DWORD *)(a1 + 200) & 0x8000) != 0 )
      SepDeleteClaimAttributes(v3);
    *(_QWORD *)(a1 + 1096) = 0LL;
  }
  if ( SepTokenSidSharingEnabled )
  {
    if ( *(_QWORD *)(a1 + 1120) )
    {
      v4 = *(_DWORD *)(a1 + 208);
      if ( v4 != -1 )
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 152) + 16LL * v4) = 0LL;
        *(_DWORD *)(a1 + 208) = -1;
      }
      ExFreePoolWithTag(*(PVOID *)(a1 + 1120), 0);
      *(_QWORD *)(a1 + 1120) = 0LL;
    }
    v5 = *(volatile signed __int64 **)(a1 + 1128);
    if ( v5 )
    {
      v6 = _InterlockedExchangeAdd64(v5 + 1, 0xFFFFFFFFFFFFFFFFuLL);
      v7 = v6 <= 1;
      v8 = v6 - 1;
      if ( v7 )
      {
        if ( v8 )
          __fastfail(0xEu);
        SepLogTokenSidManagement(5, (__int64)v5, 0LL, a1, 0LL);
        ExFreePoolWithTag((PVOID)v5, 0);
      }
      *(_QWORD *)(a1 + 1128) = 0LL;
    }
    *(_QWORD *)(a1 + 152) = 0LL;
    *(_DWORD *)(a1 + 124) = 0;
  }
  v9 = (_DWORD *)(a1 + 200);
  if ( (*(_DWORD *)(a1 + 200) & 0x1000000) != 0 )
    _InterlockedDecrement(&SepLearningModeTokenCount);
  if ( (unsigned int)Feature_2045735225__private_IsEnabledDeviceUsageNoInline() && (*v9 & 0x10000000) != 0 )
  {
    SepDeReferenceLogonSession(*(_QWORD *)(a1 + 216) + 16LL, *(_QWORD *)(*(_QWORD *)(a1 + 216) + 168LL));
    v9 = (_DWORD *)(a1 + 200);
  }
  if ( (*v9 & 0x20) == 0 )
  {
    v10 = *(_QWORD *)(a1 + 1080);
    if ( v10 )
      SepDereferenceLowBoxNumberEntry(*(_DWORD *)(a1 + 120), v10);
    v11 = *(_QWORD *)(a1 + 1088);
    if ( v11 )
      SepDereferenceCachedHandlesEntryInternal(*(_QWORD *)(a1 + 216) + 96LL, 0, v11, 0LL);
    v12 = *(_QWORD *)(a1 + 1152);
    if ( v12 )
      SepDereferenceCachedHandlesEntryInternal(*(_QWORD *)(a1 + 216) + 96LL, 0, v12, 0LL);
    v13 = *(_QWORD **)(a1 + 216);
    _m_prefetchw(v13 + 4);
    v14 = v13[4];
    v15 = v14 - 1;
    v16 = v14 == 1;
    if ( v14 - 1 <= 0 )
    {
LABEL_35:
      if ( !v16 )
        __fastfail(0xEu);
      v18 = v13[1];
      v19 = v13[21];
      v27 = v18;
      SepDeReferenceLogonSession(&v27, v19);
    }
    else
    {
      while ( 1 )
      {
        v17 = v14;
        v14 = _InterlockedCompareExchange64(v13 + 4, v15, v14);
        if ( v17 == v14 )
          break;
        v15 = v14 - 1;
        v16 = v14 == 1;
        if ( v14 - 1 <= 0 )
          goto LABEL_35;
      }
    }
  }
  v20 = *(void **)(a1 + 1160);
  if ( v20 )
    ObfDereferenceObject(v20);
  v21 = *(void **)(a1 + 1112);
  if ( v21 )
    ObfDereferenceObject(v21);
  if ( *(_BYTE *)(a1 + 119) == 2 )
    SepModifyTokenPolicyCounter(a1 + 88, 0);
  v22 = *(_QWORD *)(a1 + 1136);
  if ( v22 )
    SepDereferenceLuidToIndexEntry(v22);
  AuthzBasepFreeSecurityAttributesList(*(_DWORD **)(a1 + 776));
  ExFreePoolWithTag(*(PVOID *)(a1 + 776), 0);
  v23 = *(void **)(a1 + 176);
  if ( v23 )
    ExFreePoolWithTag(v23, 0);
  if ( *(_QWORD *)(a1 + 792) )
    SepFreeTokenCapabilities(a1);
  v24 = *(void **)(a1 + 784);
  if ( v24 )
    ExFreePoolWithTag(v24, 0);
  v25 = *(struct _ERESOURCE **)(a1 + 48);
  if ( v25 )
  {
    ExDeleteResourceLite(v25);
    ExFreePoolWithTag(*(PVOID *)(a1 + 48), 0);
  }
  v26 = *(void **)(a1 + 1104);
  if ( v26 )
    ExFreePoolWithTag(v26, 0);
}
