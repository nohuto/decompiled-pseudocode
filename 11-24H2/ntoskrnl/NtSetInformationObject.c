/*
 * XREFs of NtSetInformationObject @ 0x1409FB980
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     PsGetCurrentProcessSessionId @ 0x140331630 (PsGetCurrentProcessSessionId.c)
 *     PsGetSessionObjectById @ 0x1403493A0 (PsGetSessionObjectById.c)
 *     ObpUnlockDirectory @ 0x1408424A0 (ObpUnlockDirectory.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140853E90 (SeSinglePrivilegeCheck.c)
 *     ObpLockDirectoryExclusive @ 0x1409E4E58 (ObpLockDirectoryExclusive.c)
 *     ObSetHandleAttributes @ 0x1409FBA40 (ObSetHandleAttributes.c)
 */

__int64 __fastcall NtSetInformationObject(HANDLE Handle, int a2, __int16 *a3, int a4)
{
  NTSTATUS v5; // edi
  int v6; // edx
  char v7; // cl
  int v9; // edx
  KPROCESSOR_MODE PreviousMode; // bl
  void *SessionObjectById; // rsi
  PVOID v12; // rbx
  KPROCESSOR_MODE v13; // bl
  PVOID Object; // [rsp+38h] [rbp-40h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+40h] [rbp-38h] BYREF
  __int128 v16; // [rsp+50h] [rbp-28h] BYREF
  __int64 v17; // [rsp+60h] [rbp-18h]
  __int16 v18; // [rsp+88h] [rbp+10h] BYREF

  v18 = 0;
  v5 = -1073741821;
  v6 = a2 - 4;
  if ( v6 )
  {
    v9 = v6 - 1;
    if ( v9 )
    {
      if ( v9 != 1 )
        return (unsigned int)v5;
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
      {
        HandleInformation = 0LL;
        Object = 0LL;
        v5 = ObReferenceObjectByHandle(Handle, 0, ObpDirectoryObjectType, PreviousMode, &Object, &HandleInformation);
        if ( v5 < 0 )
          return (unsigned int)v5;
        PsGetCurrentProcessSessionId();
        SessionObjectById = PsGetSessionObjectById();
        v12 = Object;
        if ( !SessionObjectById )
        {
          v5 = -1073740715;
LABEL_21:
          ObfDereferenceObject(v12);
          return (unsigned int)v5;
        }
        v16 = 0LL;
        v17 = 0LL;
        ObpLockDirectoryExclusive((__int64)&v16, (__int64)Object);
        if ( *((_QWORD *)v12 + 41) )
        {
          v5 = -1073741790;
          ObfDereferenceObject(SessionObjectById);
        }
        else
        {
          *((_QWORD *)v12 + 41) = SessionObjectById;
        }
LABEL_20:
        ObpUnlockDirectory((__int64)&v16);
        goto LABEL_21;
      }
    }
    else
    {
      v13 = KeGetCurrentThread()->PreviousMode;
      if ( SeSinglePrivilegeCheck(SeTcbPrivilege, v13) )
      {
        HandleInformation = 0LL;
        Object = 0LL;
        v5 = ObReferenceObjectByHandle(Handle, 0, ObpDirectoryObjectType, v13, &Object, &HandleInformation);
        if ( v5 < 0 )
          return (unsigned int)v5;
        v16 = 0LL;
        v17 = 0LL;
        v12 = Object;
        ObpLockDirectoryExclusive((__int64)&v16, (__int64)Object);
        *((_DWORD *)v12 + 85) = PsGetCurrentProcessSessionId();
        goto LABEL_20;
      }
    }
    return (unsigned int)-1073741727;
  }
  if ( a4 == 2 )
  {
    v7 = KeGetCurrentThread()->PreviousMode;
    v18 = *a3;
    LOBYTE(a3) = v7;
    return (unsigned int)ObSetHandleAttributes(Handle, &v18, a3);
  }
  return 3221225476LL;
}
