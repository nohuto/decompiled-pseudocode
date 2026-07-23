/*
 * XREFs of DbgUiConnectToDbg @ 0x180112E30
 * Callers:
 *     <none>
 * Callees:
 *     NtCreateDebugObject @ 0x1801615A0 (NtCreateDebugObject.c)
 */

NTSTATUS DbgUiConnectToDbg(void)
{
  NTSTATUS v0; // ecx
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-38h] BYREF

  v0 = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  if ( !NtCurrentTeb()->DbgSsReserved[1] )
  {
    memset(&ObjectAttributes.RootDirectory, 0, 20);
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.Length = 48;
    return NtCreateDebugObject(&NtCurrentTeb()->DbgSsReserved[1], 0x1F000Fu, &ObjectAttributes, 1u);
  }
  return v0;
}
