/*
 * XREFs of PspSiloInitializeSystemRootSymlink @ 0x140763928
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1407632B0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14036CBB0 (RtlCopyUnicodeString.c)
 *     PsGetServerSiloGlobals @ 0x1403D6D00 (PsGetServerSiloGlobals.c)
 *     RtlAppendUnicodeStringToString @ 0x140404430 (RtlAppendUnicodeStringToString.c)
 *     PsAttachSiloToCurrentThread @ 0x14043C9E0 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x140443110 (PsDetachSiloFromCurrentThread.c)
 *     RtlUShortAdd @ 0x140472A24 (RtlUShortAdd.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwCreateSymbolicLinkObject @ 0x14069CA40 (ZwCreateSymbolicLinkObject.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall PspSiloInitializeSystemRootSymlink(struct _LIST_ENTRY *a1)
{
  const UNICODE_STRING *ServerSiloGlobals; // rbx
  NTSTATUS result; // eax
  USHORT v4; // si
  wchar_t *Pool2; // rax
  wchar_t *v6; // rdi
  struct _LIST_ENTRY *v7; // rbx
  int SymbolicLinkObject; // esi
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  int v10; // [rsp+30h] [rbp-30h]
  int v11; // [rsp+34h] [rbp-2Ch]
  __int64 v12; // [rsp+38h] [rbp-28h]
  __int64 *v13; // [rsp+40h] [rbp-20h]
  int v14; // [rsp+48h] [rbp-18h]
  int v15; // [rsp+4Ch] [rbp-14h]
  __int128 v16; // [rsp+50h] [rbp-10h]
  USHORT pusResult; // [rsp+98h] [rbp+38h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp+40h] BYREF

  pusResult = 0;
  v11 = 0;
  v15 = 0;
  Handle = 0LL;
  ServerSiloGlobals = (const UNICODE_STRING *)PsGetServerSiloGlobals((__int64)a1);
  result = RtlUShortAdd(0x14u, ServerSiloGlobals[77].Length, &pusResult);
  if ( result >= 0 )
  {
    v4 = pusResult;
    Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
    v6 = Pool2;
    if ( Pool2 )
    {
      *(_QWORD *)&DestinationString.Length = 0LL;
      DestinationString.MaximumLength = v4;
      DestinationString.Buffer = Pool2;
      RtlCopyUnicodeString(&DestinationString, &PspSystemRootTargetPrefix);
      RtlAppendUnicodeStringToString(&DestinationString, ServerSiloGlobals + 77);
      v10 = 48;
      v13 = &PspSystemRootSymlinkName;
      v12 = 0LL;
      v16 = 0LL;
      v14 = 528;
      v7 = PsAttachSiloToCurrentThread(a1);
      SymbolicLinkObject = ZwCreateSymbolicLinkObject((__int64)&Handle, 983041LL);
      PsDetachSiloFromCurrentThread(v7);
      if ( SymbolicLinkObject >= 0 )
        ZwClose(Handle);
      ExFreePoolWithTag(v6, 0x70537350u);
      return SymbolicLinkObject;
    }
    else
    {
      return -1073741670;
    }
  }
  return result;
}
