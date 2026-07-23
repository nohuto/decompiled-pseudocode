/*
 * XREFs of PiAuCheckClientInteractive @ 0x1407259B4
 * Callers:
 *     PiCMQueryRemove @ 0x140AB672C (PiCMQueryRemove.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x140445040 (RtlSubAuthoritySid.c)
 *     PiAuCheckTokenMembership @ 0x140725A78 (PiAuCheckTokenMembership.c)
 *     RtlValidSid @ 0x14086B530 (RtlValidSid.c)
 *     RtlLengthRequiredSid @ 0x14086B5A0 (RtlLengthRequiredSid.c)
 *     RtlInitializeSid @ 0x1409DE5C0 (RtlInitializeSid.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiAuCheckClientInteractive(_BYTE *a1)
{
  ULONG v2; // eax
  void *Pool2; // rax
  void *v4; // rdi
  NTSTATUS v5; // ebx
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+38h] [rbp+10h] BYREF

  *(_DWORD *)IdentifierAuthority.Value = 0;
  *a1 = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  v2 = RtlLengthRequiredSid(1u);
  Pool2 = (void *)ExAllocatePool2(0x100uLL, v2, 0x20207050u);
  v4 = Pool2;
  if ( Pool2 )
  {
    v5 = RtlInitializeSid(Pool2, &IdentifierAuthority, 1u);
    if ( v5 >= 0 )
    {
      *RtlSubAuthoritySid(v4, 0) = 4;
      if ( RtlValidSid(v4) )
      {
        v5 = PiAuCheckTokenMembership(v4);
        if ( v5 >= 0 )
          *a1 = 0;
      }
      else
      {
        v5 = -1073741595;
      }
    }
    ExFreePoolWithTag(v4, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v5;
}
