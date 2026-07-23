/*
 * XREFs of PiAuAllocateAndInitializeSid @ 0x140725930
 * Callers:
 *     PiAuCreateStandardSecurityObject @ 0x140C26530 (PiAuCreateStandardSecurityObject.c)
 *     PiAuCreateUserSids @ 0x140C26A4C (PiAuCreateUserSids.c)
 * Callees:
 *     RtlLengthRequiredSid @ 0x14086B5A0 (RtlLengthRequiredSid.c)
 *     RtlInitializeSid @ 0x1409DE5C0 (RtlInitializeSid.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiAuAllocateAndInitializeSid(PVOID *a1, _SID_IDENTIFIER_AUTHORITY *a2, ULONG a3)
{
  UCHAR v4; // bl
  ULONG v6; // eax
  void *Pool2; // rax
  NTSTATUS v8; // ebx

  v4 = a3;
  v6 = RtlLengthRequiredSid(a3);
  Pool2 = (void *)ExAllocatePool2(0x100uLL, v6, 0x20207050u);
  *a1 = Pool2;
  if ( Pool2 )
  {
    v8 = RtlInitializeSid(Pool2, a2, v4);
    if ( v8 >= 0 )
      return (unsigned int)v8;
  }
  else
  {
    v8 = -1073741670;
  }
  if ( *a1 )
  {
    ExFreePoolWithTag(*a1, 0);
    *a1 = 0LL;
  }
  return (unsigned int)v8;
}
