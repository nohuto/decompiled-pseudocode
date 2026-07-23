/*
 * XREFs of NtCreateMutant @ 0x1409F51C0
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeMutantEx @ 0x140449AE8 (KeInitializeMutantEx.c)
 *     ObCreateObjectEx @ 0x14085BE20 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1408A05E0 (ObInsertObjectEx.c)
 */

NTSTATUS __cdecl NtCreateMutant(
        PHANDLE MutantHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        BOOLEAN InitialOwner)
{
  char PreviousMode; // di
  __int64 v8; // rcx
  NTSTATUS inserted; // ecx
  __int64 v11; // [rsp+20h] [rbp-48h]
  PVOID Object; // [rsp+50h] [rbp-18h] BYREF
  __int64 v13; // [rsp+58h] [rbp-10h] BYREF

  v13 = 0LL;
  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v8 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)MutantHandle < 0x7FFFFFFF0000LL )
      v8 = (__int64)MutantHandle;
    *(_QWORD *)v8 = *(_QWORD *)v8;
  }
  inserted = ObCreateObjectEx(
               PreviousMode,
               ExMutantObjectType,
               (int)ObjectAttributes,
               PreviousMode,
               v11,
               56,
               0,
               0,
               &Object,
               0LL);
  if ( inserted >= 0 )
  {
    KeInitializeMutantEx((__int64)Object, InitialOwner, ExpForceEnableMutantAutoboost != 0);
    inserted = ObInsertObjectEx((char *)Object, 0LL, DesiredAccess, 0, 0, 0LL, (__int64)&v13);
    LODWORD(Object) = inserted;
    if ( inserted >= 0 )
      *MutantHandle = (HANDLE)v13;
  }
  return inserted;
}
