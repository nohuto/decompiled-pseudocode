/*
 * XREFs of PopReadSimulatedArchitecturalClasses @ 0x140C32F84
 * Callers:
 *     PopDetectSimulatedHeteroProcessors @ 0x140C32AD8 (PopDetectSimulatedHeteroProcessors.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x1406A79F0 (ZwEnumerateKey.c)
 *     RtlUnicodeStringToInteger @ 0x14097E410 (RtlUnicodeStringToInteger.c)
 *     PopReadLegacySimulatedArchitecturalClasses @ 0x140C32E38 (PopReadLegacySimulatedArchitecturalClasses.c)
 *     PopReadSimulatedProcessorClass @ 0x140C33678 (PopReadSimulatedProcessorClass.c)
 */

char __fastcall PopReadSimulatedArchitecturalClasses(__int64 a1, unsigned int a2)
{
  char LegacySimulatedArchitecturalClasses; // si
  char v5; // r14
  HANDLE v6; // rcx
  ULONG v7; // edi
  ULONG Value; // [rsp+38h] [rbp-79h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-71h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-69h] BYREF
  ULONG ResultLength; // [rsp+50h] [rbp-61h] BYREF
  UNICODE_STRING String; // [rsp+58h] [rbp-59h] BYREF
  _QWORD v14[2]; // [rsp+68h] [rbp-49h] BYREF
  OBJECT_ATTRIBUTES v15; // [rsp+78h] [rbp-39h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-9h] BYREF
  __int128 KeyInformation; // [rsp+D8h] [rbp+27h] BYREF
  __int64 v18; // [rsp+E8h] [rbp+37h] BYREF

  Value = 0;
  ResultLength = 0;
  memset(&v15.Attributes + 1, 0, 20);
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  Handle = 0LL;
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  v15.RootDirectory = 0LL;
  v18 = 0LL;
  LegacySimulatedArchitecturalClasses = 0;
  *(_QWORD *)&v15.Length = 48LL;
  v5 = 0;
  v14[1] = L"\\Registry\\MACHINE\\SYSTEM\\CurrentControlSet\\Control\\Session Manager\\Kernel\\KGroups";
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v14;
  ObjectAttributes.Attributes = 576;
  v15.Attributes = 576;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  v15.ObjectName = &String;
  String = 0LL;
  v14[0] = 10748066LL;
  KeyInformation = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    v6 = KeyHandle;
    v7 = 0;
    v15.RootDirectory = KeyHandle;
    while ( ZwEnumerateKey(v6, v7, KeyBasicInformation, &KeyInformation, 0x18u, &ResultLength) >= 0 )
    {
      String.Buffer = (wchar_t *)&v18;
      String.Length = WORD6(KeyInformation);
      String.MaximumLength = 4;
      if ( RtlUnicodeStringToInteger(&String, 0xAu, &Value) >= 0
        && Value < 0x20
        && ZwOpenKey(&Handle, 0x20019u, &v15) >= 0 )
      {
        LegacySimulatedArchitecturalClasses = PopReadLegacySimulatedArchitecturalClasses(a1, Value, Handle, a2);
        if ( !LegacySimulatedArchitecturalClasses )
          LegacySimulatedArchitecturalClasses = PopReadSimulatedProcessorClass(a1, Value, Handle, a2);
      }
      ++v7;
      if ( Handle )
      {
        ZwClose(Handle);
        Handle = 0LL;
      }
      v5 |= LegacySimulatedArchitecturalClasses;
      if ( v5 )
      {
        if ( !a1 )
          break;
      }
      v6 = KeyHandle;
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v5;
}
