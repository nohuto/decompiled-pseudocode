/*
 * XREFs of RtlConnectToSm @ 0x18010DBE0
 * Callers:
 *     <none>
 * Callees:
 *     wcslen @ 0x180125A00 (wcslen.c)
 *     NtAlpcConnectPort @ 0x180160FA0 (NtAlpcConnectPort.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __fastcall RtlConnectToSm(const void **a1, __int64 a2, int a3, HANDLE *a4)
{
  size_t v8; // rax
  size_t v10; // rbx
  _UNICODE_STRING PortName; // [rsp+60h] [rbp-A0h] BYREF
  ULONG_PTR BufferLength; // [rsp+70h] [rbp-90h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-88h] BYREF
  _PORT_MESSAGE ConnectionMessage; // [rsp+B0h] [rbp-50h] BYREF
  int v15; // [rsp+D8h] [rbp-28h]
  _WORD v16[122]; // [rsp+DCh] [rbp-24h] BYREF
  _ALPC_PORT_ATTRIBUTES PortAttributes; // [rsp+1D0h] [rbp+D0h] BYREF

  memset_thunk_772440563353939046(&ConnectionMessage, 0, 0x120uLL);
  PortName.Buffer = (wchar_t *)L"\\SmApiPort";
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(_DWORD *)(&PortName.MaximumLength + 1) = 0;
  v8 = 2 * wcslen(L"\\SmApiPort");
  if ( v8 >= 0xFFFE )
    LOWORD(v8) = -4;
  PortName.Length = v8;
  PortName.MaximumLength = v8 + 2;
  memset_thunk_772440563353939046(&PortAttributes, 0, 0x48uLL);
  PortAttributes.Flags = 0x10000;
  PortAttributes.SecurityQos.ImpersonationLevel = SecurityImpersonation;
  *(_WORD *)&PortAttributes.SecurityQos.ContextTrackingMode = 257;
  PortAttributes.MaxMessageLength = 328LL;
  PortAttributes.MaxPoolUsage = 10496LL;
  if ( !a1 )
  {
LABEL_9:
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 512;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ConnectionMessage.MessageId = 0;
    *(_QWORD *)&ConnectionMessage.u1.s1.DataLength = 18612468LL;
    BufferLength = 288LL;
    return NtAlpcConnectPort(
             a4,
             &PortName,
             &ObjectAttributes,
             &PortAttributes,
             0x20000u,
             0LL,
             &ConnectionMessage,
             &BufferLength,
             0LL,
             0LL,
             0LL);
  }
  if ( a2 && a3 )
  {
    if ( *(_WORD *)a1 >= 0xF0u )
      return -1073741811;
    v10 = *(unsigned __int16 *)a1;
    memmove(v16, a1[1], v10);
    v16[v10 >> 1] = 0;
    v15 = a3;
    goto LABEL_9;
  }
  return -1073741776;
}
