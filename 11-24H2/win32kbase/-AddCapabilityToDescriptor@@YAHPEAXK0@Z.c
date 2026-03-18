/*
 * XREFs of ?AddCapabilityToDescriptor@@YAHPEAXK0@Z @ 0x14012485C
 * Callers:
 *     ?UserSetWindowMessageCapability@@YAHPEAUHWND__@@IPEAXH@Z @ 0x140123F20 (-UserSetWindowMessageCapability@@YAHPEAUHWND__@@IPEAXH@Z.c)
 *     ?UserSetUserObjectCapability@@YAHPEAXK0H@Z @ 0x1401646C0 (-UserSetUserObjectCapability@@YAHPEAXK0H@Z.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 */

__int64 __fastcall AddCapabilityToDescriptor(PSECURITY_DESCRIPTOR SecurityDescriptor, ACCESS_MASK AccessMask, PSID Sid)
{
  ULONG v6; // eax
  ULONG v7; // esi
  struct _ACL *v8; // rax
  struct _ACL *v9; // rbx
  unsigned __int8 DaclDefaulted[4]; // [rsp+30h] [rbp-20h] BYREF
  ULONG AceListLength; // [rsp+34h] [rbp-1Ch] BYREF
  PACL Dacl; // [rsp+38h] [rbp-18h] BYREF
  PVOID Ace; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int8 DaclPresent; // [rsp+88h] [rbp+38h] BYREF

  AceListLength = 0;
  Dacl = 0LL;
  Ace = 0LL;
  DaclPresent = 0;
  DaclDefaulted[0] = 0;
  if ( RtlGetDaclSecurityDescriptor(SecurityDescriptor, &DaclPresent, &Dacl, DaclDefaulted) >= 0 )
  {
    if ( DaclPresent )
    {
      if ( Dacl )
      {
        v6 = RtlLengthSid(Sid);
        v7 = v6 + Dacl->AclSize + 8;
        v8 = (struct _ACL *)Win32AllocPoolZInitImpl(256LL, v7, 0x65737355u);
        v9 = v8;
        if ( v8 )
        {
          if ( RtlCreateAcl(v8, v7, Dacl->AclRevision) >= 0
            && RtlAddAccessAllowedAceEx(v9, v9->AclRevision, 0, AccessMask, Sid) >= 0
            && RtlGetAce(Dacl, 0, &Ace) >= 0
            && (int)RtlGetAcesBufferSize(Dacl, &AceListLength) >= 0
            && RtlAddAce(v9, 2u, 1u, Ace, AceListLength) >= 0
            && RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v9, 0) >= 0 )
          {
            GreDeleteFastMutex((char *)Dacl);
            return 1LL;
          }
          GreDeleteFastMutex((char *)v9);
        }
      }
    }
  }
  return 0LL;
}
