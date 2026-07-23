/*
 * XREFs of SleepstudyHelper_GetPdoFriendlyName @ 0x140A189C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlUnicodeStringCopy @ 0x1403D20F0 (RtlUnicodeStringCopy.c)
 *     CmpFreeTransientPoolWithTag @ 0x140438B90 (CmpFreeTransientPoolWithTag.c)
 *     SshpGenerateDeviceFriendlyName @ 0x140A195D4 (SshpGenerateDeviceFriendlyName.c)
 */

__int64 __fastcall SleepstudyHelper_GetPdoFriendlyName(struct _DEVICE_OBJECT *a1, UNICODE_STRING *a2)
{
  NTSTATUS DeviceFriendlyName; // ebx
  UNICODE_STRING SourceString; // [rsp+20h] [rbp-18h] BYREF

  SourceString = 0LL;
  if ( a1 && a2 )
  {
    DeviceFriendlyName = SshpGenerateDeviceFriendlyName(a1);
    if ( DeviceFriendlyName >= 0 )
      DeviceFriendlyName = RtlUnicodeStringCopy(a2, &SourceString);
  }
  else
  {
    DeviceFriendlyName = -1073741811;
  }
  if ( SourceString.Buffer )
    CmpFreeTransientPoolWithTag(SourceString.Buffer, 0x6C687373u);
  return (unsigned int)DeviceFriendlyName;
}
