/*
 * XREFs of SeGetTokenDeviceMap @ 0x14097F108
 * Callers:
 *     ObpLookupObjectName @ 0x14085CB70 (ObpLookupObjectName.c)
 *     ObpReferenceCurrentDeviceMap @ 0x14097EE00 (ObpReferenceCurrentDeviceMap.c)
 *     ObpSetCurrentProcessDeviceMap @ 0x14097F450 (ObpSetCurrentProcessDeviceMap.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     KeLeaveGuardedRegion @ 0x140320910 (KeLeaveGuardedRegion.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     PsGetServerSiloGlobals @ 0x1403D6D00 (PsGetServerSiloGlobals.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     PsGetServerSiloServiceSessionId @ 0x1404565D0 (PsGetServerSiloServiceSessionId.c)
 *     swprintf_s @ 0x1405006D0 (swprintf_s.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwCreateDirectoryObject @ 0x14069C6C0 (ZwCreateDirectoryObject.c)
 *     ZwCreateSymbolicLinkObject @ 0x14069CA40 (ZwCreateSymbolicLinkObject.c)
 *     ObpDeleteDeviceMap @ 0x140738634 (ObpDeleteDeviceMap.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByPointer @ 0x140857EB0 (ObOpenObjectByPointer.c)
 *     ObDereferenceDeviceMap @ 0x14097F5CC (ObDereferenceDeviceMap.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall SeGetTokenDeviceMap(__int64 a1, _QWORD *a2)
{
  char *v2; // r12
  __int64 v4; // r15
  __int64 v5; // rax
  NTSTATUS result; // eax
  unsigned int ServerSiloServiceSessionId; // eax
  void *v8; // r13
  NTSTATUS v9; // esi
  PVOID v10; // r14
  __int64 v11; // rax
  __int64 Pool2; // rax
  char *v13; // rbx
  char *ServerSiloGlobals; // rax
  struct _KTHREAD *CurrentThread; // rcx
  _QWORD *v16; // r13
  volatile signed __int32 *v17; // rsi
  __int64 *v18; // rax
  __int64 *v19; // r14
  PVOID v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  HANDLE DirectoryHandle; // [rsp+40h] [rbp-C0h] BYREF
  PVOID Object; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE LinkHandle; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  _QWORD *v28; // [rsp+98h] [rbp-68h]
  UNICODE_STRING v29; // [rsp+A0h] [rbp-60h] BYREF
  wchar_t Dst[64]; // [rsp+B0h] [rbp-50h] BYREF

  v2 = 0LL;
  v28 = a2;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DirectoryHandle = 0LL;
  LinkHandle = 0LL;
  *a2 = 0LL;
  DestinationString = 0LL;
  v29 = 0LL;
  if ( !a1 )
    return -1073741811;
  if ( (*(_DWORD *)(a1 + 200) & 0x20) != 0 )
    return -1073741729;
  v4 = *(_QWORD *)(a1 + 216);
  if ( !v4 )
    return -1073741729;
  v5 = *(_QWORD *)(v4 + 40);
  if ( v5 )
  {
    *a2 = v5;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 240), 1uLL) <= 0 )
      __fastfail(0xEu);
    return 0;
  }
  else
  {
    ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(*(_QWORD *)(v4 + 160));
    swprintf_s(
      Dst,
      0x40uLL,
      L"\\Sessions\\%d\\DosDevices\\%08x-%08x",
      ServerSiloServiceSessionId,
      *(_DWORD *)(a1 + 28),
      *(_DWORD *)(a1 + 24));
    RtlInitUnicodeString(&DestinationString, Dst);
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 704;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ZwCreateDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes);
    if ( result >= 0 )
    {
      v8 = *(void **)(v4 + 160);
      Object = 0LL;
      v9 = ObReferenceObjectByHandle(DirectoryHandle, 2u, ObpDirectoryObjectType, 0, &Object, 0LL);
      if ( v9 >= 0 )
      {
        v10 = Object;
        if ( (*((_DWORD *)Object + 84) & 4) != 0 )
        {
          ObfDereferenceObject(Object);
          v9 = -1073741811;
        }
        else
        {
          Pool2 = ExAllocatePool2(0x100uLL);
          v13 = (char *)Pool2;
          if ( Pool2 )
          {
            *(_QWORD *)Pool2 = v10;
            *(_QWORD *)(Pool2 + 240) = 1LL;
            v9 = ObOpenObjectByPointer(v10, 0x200u, 0LL, 0xF000Fu, ObpDirectoryObjectType, 0, (PHANDLE)(Pool2 + 248));
            if ( v9 >= 0 )
            {
              if ( v8 )
              {
                ObfReferenceObjectWithTag(v8, 0x6D44624Fu);
                *((_QWORD *)v13 + 2) = v8;
              }
              ServerSiloGlobals = (char *)PsGetServerSiloGlobals((__int64)v8);
              CurrentThread = KeGetCurrentThread();
              v16 = ServerSiloGlobals;
              --CurrentThread->SpecialApcDisable;
              v17 = (volatile signed __int32 *)(ServerSiloGlobals + 120);
              v18 = KeAbPreAcquire((__int64)(ServerSiloGlobals + 120), 0LL);
              v19 = v18;
              if ( _interlockedbittestandset64(v17, 0LL) )
                ExfAcquirePushLockExclusiveEx(v16 + 15, v18, (__int64)(v16 + 15));
              if ( v19 )
                *((_BYTE *)v19 + 10) = 1;
              v20 = Object;
              v21 = *((_QWORD *)Object + 38);
              if ( v21 )
              {
                v2 = v13;
                v13 = (char *)*((_QWORD *)Object + 38);
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v21 + 240), 1uLL) <= 0 )
                  __fastfail(0xEu);
              }
              else
              {
                *((_QWORD *)Object + 38) = v13;
                v22 = *v16 & 0xFFFFFFFFFFFFFFF0uLL;
                if ( v20 != *(PVOID *)v22 )
                {
                  *((_QWORD *)v13 + 1) = *(_QWORD *)v22;
                  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v22 + 240), 1uLL) <= 0 )
                    __fastfail(0xEu);
                  *((_QWORD *)v13 + 3) = v22;
                }
              }
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v17, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock(v16 + 15);
              KeAbPostRelease((ULONG_PTR)(v16 + 15));
              KeLeaveGuardedRegion();
              if ( v2 )
              {
                --*((_QWORD *)v2 + 30);
                ObpDeleteDeviceMap(v2);
              }
              RtlInitUnicodeString(&v29, L"Global");
              RtlInitUnicodeString(&DestinationString, L"\\Global??");
              ObjectAttributes.RootDirectory = DirectoryHandle;
              ObjectAttributes.Length = 48;
              ObjectAttributes.ObjectName = &v29;
              ObjectAttributes.Attributes = 720;
              *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
              v9 = ZwCreateSymbolicLinkObject(&LinkHandle, 0xF0001u, &ObjectAttributes, &DestinationString);
              if ( v9 < 0 )
              {
                ObDereferenceDeviceMap(v13);
              }
              else
              {
                ZwClose(LinkHandle);
                if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 40), (signed __int64)v13, 0LL) )
                  ObDereferenceDeviceMap(v13);
                v11 = *(_QWORD *)(v4 + 40);
                *v28 = v11;
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 240), 1uLL) <= 0 )
                  __fastfail(0xEu);
              }
            }
            else
            {
              ObfDereferenceObject(v10);
              ExFreePoolWithTag(v13, 0x6D44624Fu);
            }
          }
          else
          {
            ObfDereferenceObject(v10);
            v9 = -1073741670;
          }
        }
      }
      ZwClose(DirectoryHandle);
      return v9;
    }
  }
  return result;
}
