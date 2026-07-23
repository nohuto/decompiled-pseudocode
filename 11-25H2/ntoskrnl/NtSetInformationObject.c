/*
 * XREFs of NtSetInformationObject @ 0x1409FE700
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     PsGetSessionObjectById @ 0x1403D6D20 (PsGetSessionObjectById.c)
 *     PsGetCurrentProcessSessionId @ 0x140425EC0 (PsGetCurrentProcessSessionId.c)
 *     ObpUnlockDirectory @ 0x140845F60 (ObpUnlockDirectory.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     ObSetHandleAttributes @ 0x1409FE7C0 (ObSetHandleAttributes.c)
 *     ObpLockDirectoryExclusive @ 0x140A08AA0 (ObpLockDirectoryExclusive.c)
 */

NTSTATUS __cdecl NtSetInformationObject(
        HANDLE Handle,
        OBJECT_INFORMATION_CLASS ObjectInformationClass,
        PVOID ObjectInformation,
        ULONG ObjectInformationLength)
{
  int v5; // edi
  __int32 v6; // edx
  char v7; // cl
  __int32 v9; // edx
  KPROCESSOR_MODE PreviousMode; // bl
  void *SessionObjectById; // rsi
  __int64 v12; // r8
  PVOID v13; // rbx
  KPROCESSOR_MODE v14; // bl
  __int64 v15; // r8
  PVOID Object; // [rsp+38h] [rbp-40h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+40h] [rbp-38h] BYREF
  __int128 v18; // [rsp+50h] [rbp-28h] BYREF
  __int64 v19; // [rsp+60h] [rbp-18h]
  __int16 v20; // [rsp+88h] [rbp+10h] BYREF

  v20 = 0;
  v5 = -1073741821;
  v6 = ObjectInformationClass - 4;
  if ( v6 )
  {
    v9 = v6 - 1;
    if ( v9 )
    {
      if ( v9 != 1 )
        return v5;
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
      {
        HandleInformation = 0LL;
        Object = 0LL;
        v5 = ObReferenceObjectByHandle(Handle, 0, ObpDirectoryObjectType, PreviousMode, &Object, &HandleInformation);
        if ( v5 < 0 )
          return v5;
        PsGetCurrentProcessSessionId();
        SessionObjectById = PsGetSessionObjectById();
        v13 = Object;
        if ( !SessionObjectById )
        {
          v5 = -1073740715;
LABEL_21:
          ObfDereferenceObject(v13);
          return v5;
        }
        v18 = 0LL;
        v19 = 0LL;
        ObpLockDirectoryExclusive(&v18, Object, v12);
        if ( *((_QWORD *)v13 + 41) )
        {
          v5 = -1073741790;
          ObfDereferenceObject(SessionObjectById);
        }
        else
        {
          *((_QWORD *)v13 + 41) = SessionObjectById;
        }
LABEL_20:
        ObpUnlockDirectory((__int64)&v18);
        goto LABEL_21;
      }
    }
    else
    {
      v14 = KeGetCurrentThread()->PreviousMode;
      if ( SeSinglePrivilegeCheck(SeTcbPrivilege, v14) )
      {
        HandleInformation = 0LL;
        Object = 0LL;
        v5 = ObReferenceObjectByHandle(Handle, 0, ObpDirectoryObjectType, v14, &Object, &HandleInformation);
        if ( v5 < 0 )
          return v5;
        v18 = 0LL;
        v19 = 0LL;
        v13 = Object;
        ObpLockDirectoryExclusive(&v18, Object, v15);
        *((_DWORD *)v13 + 85) = PsGetCurrentProcessSessionId();
        goto LABEL_20;
      }
    }
    return -1073741727;
  }
  if ( ObjectInformationLength == 2 )
  {
    v7 = KeGetCurrentThread()->PreviousMode;
    v20 = *(_WORD *)ObjectInformation;
    LOBYTE(ObjectInformation) = v7;
    return ObSetHandleAttributes(Handle, &v20, ObjectInformation);
  }
  return -1073741820;
}
