/*
 * XREFs of NtOpenKeyedEvent @ 0x1407B2B50
 * Callers:
 *     <none>
 * Callees:
 *     ObOpenObjectByName @ 0x14085AA70 (ObOpenObjectByName.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtOpenKeyedEvent(
        PHANDLE KeyedEventHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  int v3; // r10d
  NTSTATUS result; // eax
  void *v6; // [rsp+88h] [rbp+20h] BYREF

  v3 = (int)ObjectAttributes;
  v6 = 0LL;
  LOBYTE(ObjectAttributes) = KeGetCurrentThread()->PreviousMode;
  if ( (_BYTE)ObjectAttributes && ((unsigned __int8)KeyedEventHandle & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  *KeyedEventHandle = 0LL;
  result = ObOpenObjectByName(
             v3,
             (_DWORD)ExpKeyedEventObjectType,
             (_DWORD)ObjectAttributes,
             0,
             DesiredAccess,
             0LL,
             (__int64)&v6);
  if ( result >= 0 )
    *KeyedEventHandle = v6;
  return result;
}
