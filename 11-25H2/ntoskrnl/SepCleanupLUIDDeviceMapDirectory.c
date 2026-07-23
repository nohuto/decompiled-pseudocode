/*
 * XREFs of SepCleanupLUIDDeviceMapDirectory @ 0x140A7E994
 * Callers:
 *     SepDeReferenceLogonSession @ 0x1409A78B8 (SepDeReferenceLogonSession.c)
 *     SepDeleteLogonSessionTrack @ 0x140A62490 (SepDeleteLogonSessionTrack.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     ObReferenceObjectSafeWithTag @ 0x140299100 (ObReferenceObjectSafeWithTag.c)
 *     KeStackAttachProcess @ 0x140348CD0 (KeStackAttachProcess.c)
 *     PsAttachSiloToCurrentThread @ 0x14043C9E0 (PsAttachSiloToCurrentThread.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     PsDetachSiloFromCurrentThread @ 0x140443110 (PsDetachSiloFromCurrentThread.c)
 *     PsGetServerSiloServiceSessionId @ 0x1404565D0 (PsGetServerSiloServiceSessionId.c)
 *     wcscmp @ 0x1404FD6A0 (wcscmp.c)
 *     swprintf_s @ 0x1405006D0 (swprintf_s.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x14069BC40 (ZwOpenDirectoryObject.c)
 *     ZwMakeTemporaryObject @ 0x14069D460 (ZwMakeTemporaryObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x14069D840 (ZwOpenSymbolicLinkObject.c)
 *     ZwQueryDirectoryObject @ 0x14069DB00 (ZwQueryDirectoryObject.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepCleanupLUIDDeviceMapDirectory(_DWORD *a1, struct _LIST_ENTRY *a2)
{
  UNICODE_STRING *v4; // rbx
  unsigned int v5; // r14d
  _KPROCESS *Process; // rdi
  char v7; // r12
  unsigned int ServerSiloServiceSessionId; // eax
  struct _LIST_ENTRY *v9; // rsi
  NTSTATUS v10; // edi
  HANDLE *Pool2; // r15
  BOOLEAN RestartScan; // r13
  __int64 v13; // rdi
  NTSTATUS v14; // esi
  int v15; // eax
  unsigned int v16; // r14d
  HANDLE *v18; // rsi
  HANDLE *v19; // rsi
  ULONG Length; // [rsp+40h] [rbp-C0h]
  ULONG ReturnLength; // [rsp+44h] [rbp-BCh] BYREF
  HANDLE DirectoryHandle; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE LinkHandle; // [rsp+50h] [rbp-B0h] BYREF
  ULONG Context; // [rsp+58h] [rbp-A8h] BYREF
  struct _LIST_ENTRY *v25; // [rsp+60h] [rbp-A0h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+A8h] [rbp-58h] BYREF
  wchar_t Dst[64]; // [rsp+E0h] [rbp-20h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  LinkHandle = 0LL;
  v4 = 0LL;
  Context = 0;
  v5 = 100;
  ReturnLength = 0;
  DirectoryHandle = 0LL;
  Length = 0;
  DestinationString = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  if ( !a1 )
    return 3221225485LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v7 = ObReferenceObjectSafeWithTag((__int64)Process, 0x4D526553u);
  if ( v7 )
    ObfDereferenceObjectWithTag(Process, 0x4D526553u);
  else
    KeStackAttachProcess(PsInitialSystemProcess, &ApcState);
  ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId((__int64)a2);
  swprintf_s(Dst, 0x40uLL, L"\\Sessions\\%d\\DosDevices\\%08x-%08x", ServerSiloServiceSessionId, a1[1], *a1);
  RtlInitUnicodeString(&DestinationString, Dst);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 576;
  v25 = PsAttachSiloToCurrentThread(a2);
  v9 = v25;
  v10 = ZwOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes);
  if ( v10 < 0 )
  {
    PsDetachSiloFromCurrentThread(v9);
    if ( !v7 )
      KiUnstackDetachProcess((__int64)&ApcState, 0LL);
    return (unsigned int)v10;
  }
  else
  {
LABEL_5:
    Pool2 = (HANDLE *)ExAllocatePool2(0x100uLL);
    if ( Pool2 )
    {
      RestartScan = 1;
      v13 = 0LL;
      while ( 1 )
      {
        v14 = ZwQueryDirectoryObject(DirectoryHandle, v4, Length, 1u, RestartScan, &Context, &ReturnLength);
        if ( v14 == -1073741789 )
        {
          Length = ReturnLength;
          if ( v4 )
            ExFreePoolWithTag(v4, 0);
          v4 = (UNICODE_STRING *)ExAllocatePool2(0x100uLL);
          if ( !v4 )
            break;
        }
        v15 = v14;
        if ( v14 != -1073741789 )
        {
LABEL_9:
          RestartScan = 0;
          if ( v14 < 0 )
          {
            v16 = 0;
            if ( v14 != -2147483622 )
              v16 = v15;
            if ( (_DWORD)v13 )
            {
              v18 = Pool2;
              do
              {
                ZwClose(*v18++);
                --v13;
              }
              while ( v13 );
            }
            ExFreePoolWithTag(Pool2, 0);
            if ( v4 )
              ExFreePoolWithTag(v4, 0);
            if ( DirectoryHandle )
              ZwClose(DirectoryHandle);
            PsDetachSiloFromCurrentThread(v25);
            if ( !v7 )
              KiUnstackDetachProcess((__int64)&ApcState, 0LL);
            return v16;
          }
          if ( !wcscmp(v4[1].Buffer, L"SymbolicLink") )
          {
            if ( (unsigned int)v13 >= v5 )
            {
              if ( (_DWORD)v13 )
              {
                v19 = Pool2;
                do
                {
                  ZwClose(*v19++);
                  --v13;
                }
                while ( v13 );
              }
              v5 += 20;
              ExFreePoolWithTag(Pool2, 0);
              goto LABEL_5;
            }
            ObjectAttributes.RootDirectory = DirectoryHandle;
            ObjectAttributes.Length = 48;
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            ObjectAttributes.ObjectName = v4;
            if ( ZwOpenSymbolicLinkObject(&LinkHandle, 0xF0001u, &ObjectAttributes) >= 0 )
            {
              if ( ZwMakeTemporaryObject(LinkHandle) < 0 )
              {
                ZwClose(LinkHandle);
              }
              else
              {
                Pool2[v13] = LinkHandle;
                v13 = (unsigned int)(v13 + 1);
              }
            }
          }
        }
      }
      v15 = -1073741670;
      v14 = -1073741670;
      goto LABEL_9;
    }
    ZwClose(DirectoryHandle);
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
    PsDetachSiloFromCurrentThread(v25);
    if ( !v7 )
      KiUnstackDetachProcess((__int64)&ApcState, 0LL);
    return 3221225495LL;
  }
}
