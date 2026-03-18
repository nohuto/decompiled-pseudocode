/*
 * XREFs of PiUEventHashStringIntoBucket @ 0x14047AB18
 * Callers:
 *     PiUEventNotifyTargetDeviceChange @ 0x1408CFCE0 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventHandleRegistration @ 0x14096747C (PiUEventHandleRegistration.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x140A45D84 (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x140A4CCA0 (PiUEventNotifyDeviceInstanceChange.c)
 * Callees:
 *     wcslen @ 0x1404FD750 (wcslen.c)
 *     RtlHashUnicodeString @ 0x1409823A0 (RtlHashUnicodeString.c)
 */

__int64 __fastcall PiUEventHashStringIntoBucket(wchar_t *a1)
{
  size_t v2; // rax
  UNICODE_STRING String; // [rsp+20h] [rbp-18h] BYREF
  ULONG HashValue; // [rsp+40h] [rbp+8h] BYREF

  HashValue = 0;
  *(_QWORD *)&String.Length = 0LL;
  String.Buffer = a1;
  if ( a1 )
  {
    v2 = 2 * wcslen(a1);
    if ( v2 >= 0xFFFE )
      LOWORD(v2) = -4;
    String.Length = v2;
    String.MaximumLength = v2 + 2;
  }
  RtlHashUnicodeString(&String, 1u, 0, &HashValue);
  return HashValue % 0xD;
}
