/*
 * XREFs of NtFilterToken @ 0x140983A70
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ObInsertObjectEx @ 0x140853900 (ObInsertObjectEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     SepFinalizeTokenAcls @ 0x1408E6CA0 (SepFinalizeTokenAcls.c)
 *     SeCaptureLuidAndAttributesArray @ 0x140984EB8 (SeCaptureLuidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x140985730 (SeCaptureSidAndAttributesArray.c)
 *     SeReleaseLuidAndAttributesArray @ 0x140985BF8 (SeReleaseLuidAndAttributesArray.c)
 *     SepFilterToken @ 0x140985C1C (SepFilterToken.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtFilterToken(
        HANDLE ExistingTokenHandle,
        ULONG Flags,
        PTOKEN_GROUPS SidsToDisable,
        PTOKEN_PRIVILEGES PrivilegesToDelete,
        PTOKEN_GROUPS RestrictedSids,
        PHANDLE NewTokenHandle)
{
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v8; // rcx
  NTSTATUS inserted; // edi
  ULONG v10; // ecx
  SID_AND_ATTRIBUTES *Groups; // rcx
  int Object; // [rsp+20h] [rbp-C8h]
  int HandleInformation; // [rsp+28h] [rbp-C0h]
  int v15; // [rsp+30h] [rbp-B8h]
  ULONG GroupCount; // [rsp+68h] [rbp-80h]
  ULONG v17; // [rsp+6Ch] [rbp-7Ch]
  ULONG PrivilegeCount; // [rsp+74h] [rbp-74h]
  PVOID v19; // [rsp+78h] [rbp-70h] BYREF
  __int64 v20; // [rsp+80h] [rbp-68h]
  ULONG v21; // [rsp+88h] [rbp-60h]
  int v22; // [rsp+8Ch] [rbp-5Ch]
  __int64 v23; // [rsp+90h] [rbp-58h] BYREF
  PVOID v24; // [rsp+98h] [rbp-50h] BYREF
  __int64 v25; // [rsp+A0h] [rbp-48h]
  __int64 v26; // [rsp+A8h] [rbp-40h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v27; // [rsp+B0h] [rbp-38h] BYREF
  __int64 v28; // [rsp+B8h] [rbp-30h] BYREF
  ULONG v30; // [rsp+F8h] [rbp+10h]

  v30 = Flags;
  v19 = 0LL;
  v17 = 0;
  v20 = 0LL;
  GroupCount = 0;
  v25 = 0LL;
  v22 = 0;
  PrivilegeCount = 0;
  v26 = 0LL;
  LODWORD(v23) = 0;
  v28 = 0LL;
  v27 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v8 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)NewTokenHandle < 0x7FFFFFFF0000LL )
    v8 = (__int64)NewTokenHandle;
  *(_QWORD *)v8 = *(_QWORD *)v8;
  if ( SidsToDisable )
  {
    if ( ((unsigned __int8)SidsToDisable & 3) != 0 )
LABEL_12:
      ExRaiseDatatypeMisalignment();
    GroupCount = SidsToDisable->GroupCount;
    v10 = 0;
    v21 = 0;
    while ( v10 < GroupCount )
    {
      *(&SidsToDisable->GroupCount + 4 * ++v10) = 0;
      v21 = v10;
    }
    Groups = SidsToDisable->Groups;
    Object = 0;
    LOBYTE(SidsToDisable) = PreviousMode;
    inserted = SeCaptureSidAndAttributesArray(Groups, GroupCount, SidsToDisable, 0LL);
  }
  else
  {
    inserted = 0;
  }
  if ( inserted >= 0 )
  {
    if ( PrivilegesToDelete )
    {
      if ( ((unsigned __int8)PrivilegesToDelete & 3) != 0 )
        goto LABEL_12;
      PrivilegeCount = PrivilegesToDelete->PrivilegeCount;
      inserted = SeCaptureLuidAndAttributesArray(
                   PrivilegesToDelete->Privileges,
                   Object,
                   HandleInformation,
                   v15,
                   (__int64)&v26,
                   (__int64)&v23);
    }
    if ( inserted >= 0 && RestrictedSids )
    {
      if ( ((unsigned __int8)RestrictedSids & 3) != 0 )
        goto LABEL_12;
      v17 = RestrictedSids->GroupCount;
      LOBYTE(SidsToDisable) = PreviousMode;
      inserted = SeCaptureSidAndAttributesArray(RestrictedSids->Groups, RestrictedSids->GroupCount, SidsToDisable, 0LL);
    }
  }
  if ( inserted >= 0 )
  {
    *(_QWORD *)&Flags = 0LL;
    while ( Flags < v17 )
    {
      if ( *(_DWORD *)(v20 + 16LL * Flags + 8) )
      {
        inserted = -1073741811;
        goto LABEL_30;
      }
      *(_QWORD *)&Flags = Flags + 1;
    }
    v24 = 0LL;
    inserted = ObReferenceObjectByHandle(
                 ExistingTokenHandle,
                 2u,
                 (POBJECT_TYPE)SeTokenObjectType,
                 PreviousMode,
                 &v24,
                 &v27);
    if ( inserted >= 0 )
    {
      v19 = 0LL;
      LOBYTE(Flags) = PreviousMode;
      inserted = SepFilterToken(
                   (_DWORD)v24,
                   Flags,
                   v30,
                   GroupCount,
                   v25,
                   PrivilegeCount,
                   v26,
                   v17,
                   v20,
                   0,
                   (__int64)&v19);
      if ( inserted >= 0 )
      {
        inserted = ObInsertObjectEx((struct _FILE_OBJECT *)v19, 0LL, v27.GrantedAccess, 1, 0, 0LL, (__int64)&v28);
        if ( inserted >= 0 )
        {
          SepFinalizeTokenAcls(v19);
          ObfDereferenceObject(v19);
        }
      }
      ObfDereferenceObject(v24);
      if ( inserted >= 0 )
        *NewTokenHandle = (HANDLE)v28;
    }
  }
LABEL_30:
  if ( v25 )
  {
    LOBYTE(Flags) = PreviousMode;
    SeReleaseLuidAndAttributesArray(v25, *(_QWORD *)&Flags);
  }
  if ( v26 )
  {
    LOBYTE(Flags) = PreviousMode;
    SeReleaseLuidAndAttributesArray(v26, *(_QWORD *)&Flags);
  }
  if ( v20 )
  {
    LOBYTE(Flags) = PreviousMode;
    SeReleaseLuidAndAttributesArray(v20, *(_QWORD *)&Flags);
  }
  return inserted;
}
