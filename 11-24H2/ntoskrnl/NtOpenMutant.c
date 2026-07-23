/*
 * XREFs of NtOpenMutant @ 0x1409FFA80
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentSilo @ 0x1403FCA20 (PsGetCurrentSilo.c)
 *     ObOpenObjectByName @ 0x1408A38B0 (ObOpenObjectByName.c)
 *     ObOpenObjectByNameEx @ 0x1408A41E0 (ObOpenObjectByNameEx.c)
 */

NTSTATUS __cdecl NtOpenMutant(PHANDLE MutantHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  char PreviousMode; // si
  __int64 v7; // rdx
  POBJECT_TYPE v8; // rbx
  struct _LIST_ENTRY *CurrentSilo; // rax
  NTSTATUS v10; // ecx
  _QWORD v12[5]; // [rsp+40h] [rbp-28h] BYREF

  v12[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)MutantHandle < 0x7FFFFFFF0000LL )
      v7 = (__int64)MutantHandle;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  v8 = ExMutantObjectType;
  CurrentSilo = PsGetCurrentSilo();
  v10 = ObOpenObjectByNameEx(
          (__int64)ObjectAttributes,
          (__int64)v8,
          PreviousMode,
          0LL,
          DesiredAccess,
          0LL,
          (__int64)CurrentSilo,
          v12);
  if ( v10 == -1073741788 && ExCrossVmMutantObjectType )
    v10 = ObOpenObjectByName(
            (int)ObjectAttributes,
            (int)ExCrossVmMutantObjectType,
            PreviousMode,
            0,
            DesiredAccess,
            0LL,
            (__int64)v12);
  if ( v10 >= 0 )
    *MutantHandle = (HANDLE)v12[0];
  return v10;
}
