/*
 * XREFs of PiAuCheckClientInteractive @ 0x140727E24
 * Callers:
 *     PiCMQueryRemove @ 0x140ABB70C (PiCMQueryRemove.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x14044FDD0 (RtlSubAuthoritySid.c)
 *     PiAuCheckTokenMembership @ 0x140727EE8 (PiAuCheckTokenMembership.c)
 *     RtlValidSid @ 0x140866F20 (RtlValidSid.c)
 *     RtlLengthRequiredSid @ 0x140867110 (RtlLengthRequiredSid.c)
 *     RtlInitializeSid @ 0x1409E3B60 (RtlInitializeSid.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiAuCheckClientInteractive(_BYTE *a1)
{
  void *Pool2; // rax
  void *v3; // rdi
  NTSTATUS v4; // ebx
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+38h] [rbp+10h] BYREF

  *(_DWORD *)IdentifierAuthority.Value = 0;
  *a1 = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  RtlLengthRequiredSid(1u);
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  v3 = Pool2;
  if ( Pool2 )
  {
    v4 = RtlInitializeSid(Pool2, &IdentifierAuthority, 1u);
    if ( v4 >= 0 )
    {
      *RtlSubAuthoritySid(v3, 0) = 4;
      if ( RtlValidSid(v3) )
      {
        v4 = PiAuCheckTokenMembership(v3);
        if ( v4 >= 0 )
          *a1 = 0;
      }
      else
      {
        v4 = -1073741595;
      }
    }
    ExFreePoolWithTag(v3, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v4;
}
