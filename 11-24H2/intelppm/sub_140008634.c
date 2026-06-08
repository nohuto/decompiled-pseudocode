/*
 * XREFs of sub_140008634 @ 0x140008634
 * Callers:
 *     DriverEntry @ 0x140008600 (DriverEntry.c)
 * Callees:
 *     sub_1400085BC @ 0x1400085BC (sub_1400085BC.c)
 *     sub_1400087F4 @ 0x1400087F4 (sub_1400087F4.c)
 *     sub_140008A58 @ 0x140008A58 (sub_140008A58.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_1400495E4 @ 0x1400495E4 (sub_1400495E4.c)
 */

__int64 __fastcall sub_140008634(PDEVICE_OBJECT DeviceObject, const UNICODE_STRING *a2)
{
  __int64 result; // rax
  int v4; // ebx
  int v5; // eax
  void *v6; // [rsp+30h] [rbp-28h] BYREF
  int v7; // [rsp+38h] [rbp-20h]
  _QWORD v8[3]; // [rsp+3Ch] [rbp-1Ch] BYREF

  if ( !DeviceObject )
    return sub_1400495E4(0LL);
  *(_DWORD *)&DestinationString.Length = 34078720;
  DestinationString.Buffer = (PWSTR)&unk_140018F10;
  RtlCopyUnicodeString(&DestinationString, a2);
  result = WdfVersionBind(DeviceObject, &DestinationString, &unk_140018C50, &qword_140019128);
  if ( (int)result >= 0 )
  {
    v4 = sub_1400087F4();
    if ( v4 < 0 || (v4 = sub_140008A58(), v4 < 0) )
    {
LABEL_10:
      sub_1400085BC();
      return (unsigned int)v4;
    }
    v5 = sub_1400495E4(DeviceObject);
    v4 = v5;
    if ( v5 < 0 )
    {
      DbgPrintEx(0x4Du, 0, "DriverEntry failed 0x%x for driver %wZ\n", (unsigned int)v5, &DestinationString);
      if ( off_140018E58 != &unk_140018E40 )
      {
        memset(v8, 0, 12);
        v6 = &unk_140014028;
        v7 = 24;
        if ( (int)WdfLdrQueryInterface(&v6) >= 0 )
          (*(void (__fastcall **)(void *, __int64))((char *)v8 + 4))(&unk_140018C50, qword_140019128);
      }
      goto LABEL_10;
    }
    if ( *(_BYTE *)(qword_140019128 + 48) )
    {
      if ( DeviceObject->Queue.Wcb.DeviceRoutine )
        qword_140019118 = (__int64)DeviceObject->Queue.Wcb.DeviceRoutine;
      DeviceObject->Queue.Wcb.DeviceRoutine = (PDRIVER_CONTROL)sub_1400087C0;
    }
    return 0LL;
  }
  return result;
}
