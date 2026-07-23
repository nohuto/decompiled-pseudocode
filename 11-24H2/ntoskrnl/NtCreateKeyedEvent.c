/*
 * XREFs of NtCreateKeyedEvent @ 0x1407C5620
 * Callers:
 *     <none>
 * Callees:
 *     ObInsertObjectEx @ 0x140853900 (ObInsertObjectEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ObCreateObjectEx @ 0x1408A4B90 (ObCreateObjectEx.c)
 */

NTSTATUS __cdecl NtCreateKeyedEvent(
        PHANDLE KeyedEventHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG Flags)
{
  PHANDLE v4; // rbx
  NTSTATUS result; // eax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8[5]; // [rsp+60h] [rbp-28h] BYREF

  v4 = KeyedEventHandle;
  v8[0] = 0LL;
  LOBYTE(KeyedEventHandle) = KeGetCurrentThread()->PreviousMode;
  if ( (_BYTE)KeyedEventHandle && ((unsigned __int8)v4 & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  *v4 = 0LL;
  if ( Flags )
    return -1073741582;
  result = ObCreateObjectEx(
             (_DWORD)KeyedEventHandle,
             (_DWORD)ExpKeyedEventObjectType,
             (_DWORD)ObjectAttributes,
             (unsigned __int8)KeyedEventHandle);
  if ( result >= 0 )
  {
    v6 = 8LL;
    v7 = 64LL;
    do
    {
      *(_QWORD *)(v6 - 8) = 0LL;
      *(_QWORD *)(v6 + 8) = v6;
      *(_QWORD *)v6 = v6;
      v6 += 24LL;
      --v7;
    }
    while ( v7 );
    result = ObInsertObjectEx(0LL, 0, 0LL, (__int64)v8);
    if ( result >= 0 )
      *v4 = (HANDLE)v8[0];
  }
  return result;
}
