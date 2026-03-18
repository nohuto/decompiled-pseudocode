/*
 * XREFs of NtFilterToken @ 0x1409970E0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     ObInsertObjectEx @ 0x1408A05E0 (ObInsertObjectEx.c)
 *     SeCaptureSidAndAttributesArray @ 0x1408A38E0 (SeCaptureSidAndAttributesArray.c)
 *     SepFinalizeTokenAcls @ 0x1408A4398 (SepFinalizeTokenAcls.c)
 *     SeCaptureLuidAndAttributesArray @ 0x140933B38 (SeCaptureLuidAndAttributesArray.c)
 *     SeReleaseLuidAndAttributesArray @ 0x140997ED8 (SeReleaseLuidAndAttributesArray.c)
 *     SepFilterToken @ 0x140997EFC (SepFilterToken.c)
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
  char PreviousMode; // si
  __int64 v8; // rcx
  NTSTATUS inserted; // edi
  ULONG v10; // ecx
  int Object; // [rsp+20h] [rbp-C8h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-C0h]
  __int64 v14; // [rsp+30h] [rbp-B8h]
  ULONG GroupCount; // [rsp+68h] [rbp-80h]
  ULONG v16; // [rsp+6Ch] [rbp-7Ch]
  unsigned int v17; // [rsp+70h] [rbp-78h] BYREF
  ULONG PrivilegeCount; // [rsp+74h] [rbp-74h]
  PVOID v19; // [rsp+78h] [rbp-70h] BYREF
  _DWORD *v20; // [rsp+80h] [rbp-68h] BYREF
  ULONG v21; // [rsp+88h] [rbp-60h]
  unsigned int v22; // [rsp+8Ch] [rbp-5Ch] BYREF
  __int64 v23; // [rsp+90h] [rbp-58h] BYREF
  PVOID v24; // [rsp+98h] [rbp-50h] BYREF
  __int64 v25; // [rsp+A0h] [rbp-48h] BYREF
  __int64 v26; // [rsp+A8h] [rbp-40h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v27; // [rsp+B0h] [rbp-38h] BYREF
  __int64 v28; // [rsp+B8h] [rbp-30h] BYREF
  ULONG v30; // [rsp+F8h] [rbp+10h]

  v30 = Flags;
  v19 = 0LL;
  v16 = 0;
  v20 = 0LL;
  v17 = 0;
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
    inserted = SeCaptureSidAndAttributesArray(
                 (char *)SidsToDisable->Groups,
                 GroupCount,
                 PreviousMode,
                 0LL,
                 0,
                 (__int64)HandleInformation,
                 v14,
                 (PVOID *)&v25,
                 &v22);
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
                   PrivilegeCount,
                   PreviousMode,
                   (__int64)PrivilegesToDelete,
                   Object,
                   (int)HandleInformation,
                   v14,
                   &v26,
                   &v23);
    }
    if ( inserted >= 0 && RestrictedSids )
    {
      if ( ((unsigned __int8)RestrictedSids & 3) != 0 )
        goto LABEL_12;
      v16 = RestrictedSids->GroupCount;
      inserted = SeCaptureSidAndAttributesArray(
                   (char *)RestrictedSids->Groups,
                   RestrictedSids->GroupCount,
                   PreviousMode,
                   0LL,
                   0,
                   (__int64)HandleInformation,
                   v14,
                   (PVOID *)&v20,
                   &v17);
    }
  }
  if ( inserted >= 0 )
  {
    *(_QWORD *)&Flags = 0LL;
    while ( Flags < v16 )
    {
      if ( v20[4 * Flags + 2] )
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
                   v16,
                   (__int64)v20,
                   v17,
                   (__int64)&v19);
      if ( inserted >= 0 )
      {
        inserted = ObInsertObjectEx((char *)v19, 0LL, v27.GrantedAccess, 1, 0, 0LL, (__int64)&v28);
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
