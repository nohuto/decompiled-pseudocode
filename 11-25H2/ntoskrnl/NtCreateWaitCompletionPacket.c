/*
 * XREFs of NtCreateWaitCompletionPacket @ 0x1409FAE20
 * Callers:
 *     <none>
 * Callees:
 *     ObCreateObjectEx @ 0x14085BE20 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1408A05E0 (ObInsertObjectEx.c)
 */

NTSTATUS __cdecl NtCreateWaitCompletionPacket(
        PHANDLE WaitCompletionPacketHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  char PreviousMode; // di
  __int64 v6; // rcx
  NTSTATUS inserted; // ecx
  _BYTE *v8; // rcx
  __int64 v10; // [rsp+20h] [rbp-68h]
  __int64 v11; // [rsp+58h] [rbp-30h] BYREF
  PVOID Object[4]; // [rsp+60h] [rbp-28h] BYREF

  v11 = 0LL;
  Object[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)WaitCompletionPacketHandle < 0x7FFFFFFF0000LL )
      v6 = (__int64)WaitCompletionPacketHandle;
    *(_QWORD *)v6 = *(_QWORD *)v6;
  }
  inserted = ObCreateObjectEx(
               PreviousMode,
               IopWaitCompletionPacketObjectType,
               (int)ObjectAttributes,
               PreviousMode,
               v10,
               112,
               0,
               0,
               Object,
               0LL);
  if ( inserted >= 0 )
  {
    v8 = Object[0];
    *((_QWORD *)Object[0] + 12) = 0LL;
    v8[104] = 0;
    *((_QWORD *)v8 + 11) = 0LL;
    inserted = ObInsertObjectEx(v8, 0LL, DesiredAccess, 0, 0, 0LL, (__int64)&v11);
    if ( inserted >= 0 )
      *WaitCompletionPacketHandle = (HANDLE)v11;
  }
  return inserted;
}
