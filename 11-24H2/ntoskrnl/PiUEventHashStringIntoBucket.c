/*
 * XREFs of PiUEventHashStringIntoBucket @ 0x140477414
 * Callers:
 *     PiUEventHandleRegistration @ 0x140857A2C (PiUEventHandleRegistration.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x1408CFD00 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x140A40BF0 (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x140A470E0 (PiUEventNotifyDeviceInstanceChange.c)
 * Callees:
 *     wcslen @ 0x1404FD790 (wcslen.c)
 *     RtlHashUnicodeString @ 0x14096EAB0 (RtlHashUnicodeString.c)
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
