/*
 * XREFs of LogFwpRegisterWorker @ 0x140BA4B90
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwOpenKey @ 0x14069B380 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x14069B4E0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x14069BD40 (ZwSetValueKey.c)
 */

int LogFwpRegisterWorker()
{
  int result; // eax
  NTSTATUS v1; // eax
  HANDLE v2; // rcx
  int v3; // ebx
  HANDLE KeyHandle; // [rsp+40h] [rbp+7h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp+Fh] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp+1Fh] BYREF
  int Data; // [rsp+A8h] [rbp+6Fh] BYREF
  ULONG Disposition; // [rsp+B0h] [rbp+77h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp+7Fh] BYREF

  Disposition = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  Handle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\REGISTRY\\MACHINE\\SYSTEM\\CurrentControlSet\\Control");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"BGFX");
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v1 = ZwCreateKey(&Handle, 0x20019u, &ObjectAttributes, 0, 0LL, 1u, &Disposition);
    v2 = KeyHandle;
    if ( v1 >= 0 )
    {
      v3 = dword_140EEF8F0;
      ZwClose(KeyHandle);
      RtlInitUnicodeString(&DestinationString, L"Resume");
      Data = (v3 & 0x100000) != 0;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"Width");
      Data = qword_140EEF8D0;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"Height");
      Data = HIDWORD(qword_140EEF8D0);
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"BPP");
      Data = dword_140EEF894;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"LogoSize");
      Data = Size;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"ProgressFrames");
      Data = dword_140EEF8EC;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"ProgressMemory");
      Data = dword_140EEFDB0;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"ProgressProlog");
      Data = 1000000 * qword_140EEF8C8 / qword_140E0EE68;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"ProgressLow");
      Data = 1000000 * qword_140E0EE70 / qword_140E0EE68;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"ProgressHigh");
      Data = 1000000 * qword_140EEF898 / qword_140E0EE68;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      if ( qword_140EEFDC0 )
      {
        RtlInitUnicodeString(&DestinationString, L"ResidentSize");
        Data = *(_DWORD *)qword_140EEFDC0;
        ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      }
      RtlInitUnicodeString(&DestinationString, L"ProgressTotal");
      Data = 1000000 * qword_140EEF880 / qword_140E0EE68;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"ProgressManual");
      Data = 1000000 * qword_140EEF870 / qword_140E0EE68;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"FadeProlog");
      Data = 1000000 * qword_140EEF8F8 / qword_140E0EE68;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"FadeOverlap");
      Data = dword_140EEF8E8;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"FadeIo");
      Data = dword_140EEF900;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"FadeCpu");
      Data = dword_140EEF890;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"FadeFrames");
      Data = dword_140EEF8B0;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"FadeMemory");
      Data = dword_140EEFDAC;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"FadeLow");
      Data = 1000000 * qword_140E0EE78 / qword_140E0EE68;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"FadeHigh");
      Data = 1000000 * qword_140EEF8A8 / qword_140E0EE68;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"FadeTotal");
      Data = 1000000 * qword_140EEF878 / qword_140E0EE68;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"AnimationTotal");
      Data = 1000000 * qword_140EEF868 / qword_140E0EE68;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"CompressBitmaps");
      Data = 1000000 * qword_140E64BF8 / qword_140E0EE68;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      v2 = Handle;
    }
    return ZwClose(v2);
  }
  return result;
}
