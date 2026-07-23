/*
 * XREFs of PiCreateDriverRedirectedStateKey @ 0x1409B2E6C
 * Callers:
 *     PiCreateServiceStateKey @ 0x1409B2CD0 (PiCreateServiceStateKey.c)
 *     IopInitializeBootDrivers @ 0x140C0D35C (IopInitializeBootDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x14045CBF0 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     PiCreateServiceKeyUnderPath @ 0x14071386C (PiCreateServiceKeyUnderPath.c)
 *     RtlGetPersistedStateLocation @ 0x1409B3D60 (RtlGetPersistedStateLocation.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140B62CB0 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCreateDriverRedirectedStateKey(UNICODE_STRING *CreateOptions, ULONG a2, _QWORD *a3)
{
  void *v4; // rdi
  NTSTATUS PersistedStateLocation; // eax
  __int64 v7; // r8
  int inited; // ebx
  ULONG BufferLengthIn; // ebx
  WCHAR *TargetPath; // r14
  NTSTATUS v12; // eax
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  void *v14; // [rsp+80h] [rbp+30h] BYREF
  ULONG BufferLengthOut; // [rsp+88h] [rbp+38h] BYREF

  BufferLengthOut = a2;
  v4 = 0LL;
  v14 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( !CreateOptions || !CreateOptions->Buffer || CreateOptions->Length < 2u || !a3 )
  {
    inited = -1073741811;
    goto LABEL_8;
  }
  BufferLengthOut = 0;
  PersistedStateLocation = RtlGetPersistedStateLocation(
                             L"DriverStatePath",
                             0LL,
                             0LL,
                             LocationTypeRegistry,
                             0LL,
                             0,
                             &BufferLengthOut);
  inited = PersistedStateLocation;
  if ( PersistedStateLocation >= 0 )
  {
    inited = -1073741823;
    goto LABEL_8;
  }
  if ( PersistedStateLocation != -2147483643 )
    goto LABEL_7;
  BufferLengthIn = BufferLengthOut;
  TargetPath = (WCHAR *)ExAllocatePool2(0x100uLL);
  if ( !TargetPath )
  {
    inited = -1073741670;
    goto LABEL_8;
  }
  v12 = RtlGetPersistedStateLocation(
          L"DriverStatePath",
          0LL,
          0LL,
          LocationTypeRegistry,
          TargetPath,
          BufferLengthIn,
          &BufferLengthOut);
  inited = v12;
  if ( v12 == -1073741772 )
  {
    inited = -1073741595;
LABEL_23:
    ExFreePoolWithTag(TargetPath, 0);
LABEL_7:
    if ( inited < 0 )
      goto LABEL_8;
    goto LABEL_17;
  }
  if ( v12 < 0 )
    goto LABEL_23;
  inited = RtlInitUnicodeStringEx(&DestinationString, TargetPath);
  if ( inited < 0 )
    goto LABEL_23;
LABEL_17:
  inited = PiCreateServiceKeyUnderPath(CreateOptions, &DestinationString, v7, &v14);
  if ( inited < 0 )
    v4 = v14;
  else
    *a3 = v14;
LABEL_8:
  if ( DestinationString.Buffer )
  {
    ExFreePool(DestinationString.Buffer);
    DestinationString = 0LL;
  }
  if ( v4 )
    ZwClose(v4);
  return (unsigned int)inited;
}
