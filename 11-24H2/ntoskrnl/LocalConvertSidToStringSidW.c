/*
 * XREFs of LocalConvertSidToStringSidW @ 0x140866440
 * Callers:
 *     SeConvertSidToStringSid @ 0x1404ADCC0 (SeConvertSidToStringSid.c)
 *     LocalConvertAclToString @ 0x140864F2C (LocalConvertAclToString.c)
 *     LocalGetStringForSid @ 0x140A66038 (LocalGetStringForSid.c)
 * Callees:
 *     RtlStringCbCopyNW @ 0x1403CC204 (RtlStringCbCopyNW.c)
 *     SddlpAlloc @ 0x140867ED4 (SddlpAlloc.c)
 *     RtlConvertSidToUnicodeString @ 0x140869960 (RtlConvertSidToUnicodeString.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 */

NTSTATUS __fastcall LocalConvertSidToStringSidW(PSID Sid, wchar_t **a2)
{
  NTSTATUS result; // eax
  __int64 Length; // rdi
  wchar_t *v5; // rax
  void *v6; // r11
  UNICODE_STRING v7; // [rsp+20h] [rbp-18h] BYREF

  v7 = 0LL;
  if ( !Sid || !a2 )
    return -1073741811;
  result = RtlConvertSidToUnicodeString(&v7, Sid, 1u);
  if ( result >= 0 )
  {
    Length = v7.Length;
    v5 = (wchar_t *)SddlpAlloc(v7.Length + 2LL);
    *a2 = v5;
    if ( v5 )
    {
      result = RtlStringCbCopyNW(v5, Length + 2, v7.Buffer, (unsigned int)Length);
      if ( result >= 0 )
      {
        if ( v6 )
          ExFreePool(v6);
        return 0;
      }
    }
    else
    {
      if ( v7.Buffer )
        ExFreePool(v7.Buffer);
      return -1073741801;
    }
  }
  return result;
}
