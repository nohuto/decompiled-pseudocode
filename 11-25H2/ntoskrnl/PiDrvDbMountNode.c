/*
 * XREFs of PiDrvDbMountNode @ 0x140AB7FE4
 * Callers:
 *     PiPnpRtlObjectActionCallback @ 0x1408CBF70 (PiPnpRtlObjectActionCallback.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140404370 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x140404430 (RtlAppendUnicodeStringToString.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     PiDrvDbFindNode @ 0x1404F5634 (PiDrvDbFindNode.c)
 *     PiDrvDbQueryHiveFileName @ 0x14072B8FC (PiDrvDbQueryHiveFileName.c)
 *     PiDrvDbRegisterNode @ 0x14072C178 (PiDrvDbRegisterNode.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140B62CB0 (ExFreePool.c)
 */

__int64 __fastcall PiDrvDbMountNode(PCWSTR Source)
{
  int appended; // ebx
  wchar_t *Buffer; // rdi
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-30h] BYREF
  UNICODE_STRING Sourcea; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING v7; // [rsp+50h] [rbp-10h] BYREF
  __int64 v8; // [rsp+88h] [rbp+28h] BYREF

  Sourcea = 0LL;
  v8 = 0LL;
  DestinationString = 0LL;
  v7 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&v7, 0LL);
  RtlInitUnicodeString(&Sourcea, Source);
  if ( (int)PiDrvDbFindNode(&Sourcea, &v8) >= 0 )
  {
    appended = (*(_DWORD *)(v8 + 64) & 1) != 0 ? -1073741790 : 0x40000000;
LABEL_3:
    Buffer = DestinationString.Buffer;
    goto LABEL_4;
  }
  DestinationString.Length = 0;
  DestinationString.MaximumLength = Sourcea.Length + 38;
  DestinationString.Buffer = (wchar_t *)ExAllocatePool2(0x100uLL);
  Buffer = DestinationString.Buffer;
  if ( DestinationString.Buffer )
  {
    appended = RtlAppendUnicodeToString(&DestinationString, L"\\REGISTRY\\MACHINE\\");
    if ( appended < 0 )
      goto LABEL_3;
    appended = RtlAppendUnicodeStringToString(&DestinationString, &Sourcea);
    if ( appended < 0 )
      goto LABEL_3;
    appended = PiDrvDbQueryHiveFileName((__int64)&DestinationString, &v7);
    if ( appended < 0 )
      goto LABEL_3;
    Buffer = DestinationString.Buffer;
    appended = PiDrvDbRegisterNode(Source, 24, 0, DestinationString.Buffer, v7.Buffer);
  }
  else
  {
    appended = -1073741670;
  }
LABEL_4:
  if ( Buffer )
    ExFreePool(Buffer);
  if ( v7.Buffer )
    ExFreePool(v7.Buffer);
  return (unsigned int)appended;
}
