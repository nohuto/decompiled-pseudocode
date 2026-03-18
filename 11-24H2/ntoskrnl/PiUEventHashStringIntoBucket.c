/*
 * XREFs of PiUEventHashStringIntoBucket @ 0x14047B794
 * Callers:
 *     PiUEventHandleRegistration @ 0x14085BCBC (PiUEventHandleRegistration.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x1408D2310 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x140A49ED0 (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x140A50330 (PiUEventNotifyDeviceInstanceChange.c)
 * Callees:
 *     wcslen @ 0x1404FFED0 (wcslen.c)
 *     RtlHashUnicodeString @ 0x1409862A0 (RtlHashUnicodeString.c)
 */

__int64 __fastcall PiUEventHashStringIntoBucket(wchar_t *a1)
{
  size_t v1; // rax
  UNICODE_STRING String; // [rsp+20h] [rbp-18h] BYREF
  ULONG HashValue; // [rsp+40h] [rbp+8h] BYREF

  HashValue = 0;
  *(_QWORD *)&String.Length = 0LL;
  String.Buffer = a1;
  if ( a1 )
  {
    v1 = 2 * wcslen(a1);
    if ( v1 >= 0xFFFE )
      LOWORD(v1) = -4;
    String.Length = v1;
    String.MaximumLength = v1 + 2;
  }
  RtlHashUnicodeString(&String, 1u, 0, &HashValue);
  return HashValue % 0xD;
}
