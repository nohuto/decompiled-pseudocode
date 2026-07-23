/*
 * XREFs of PiUEventInitClientRegistrationContext @ 0x140967DB0
 * Callers:
 *     PiUEventHandleRegistration @ 0x14096747C (PiUEventHandleRegistration.c)
 * Callees:
 *     RtlLengthSid @ 0x140458B00 (RtlLengthSid.c)
 *     KeInitializeGuardedMutex @ 0x14045E320 (KeInitializeGuardedMutex.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x14046C970 (RtlDeriveCapabilitySidsFromName.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwCreateWnfStateName @ 0x14069CBC0 (ZwCreateWnfStateName.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     RtlpAddKnownAce @ 0x14092B1E0 (RtlpAddKnownAce.c)
 *     RtlCreateAcl @ 0x140968260 (RtlCreateAcl.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

_WNF_STATE_NAME *PiUEventInitClientRegistrationContext()
{
  ACL *v0; // rbx
  _WNF_STATE_NAME *Pool2; // rax
  _WNF_STATE_NAME *v2; // rdi
  struct _FAST_MUTEX *v3; // rax
  PSID v4; // rsi
  ULONG v5; // ebx
  ULONG v6; // ebx
  ULONG v7; // ebx
  ULONG v8; // ebx
  ULONG v9; // esi
  ACL *v10; // rax
  void *v11; // rcx
  UNICODE_STRING UnicodeString; // [rsp+48h] [rbp-69h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+58h] [rbp-59h] BYREF
  ACL *v15; // [rsp+78h] [rbp-39h]
  unsigned __int8 CapabilitySid[48]; // [rsp+80h] [rbp-31h] BYREF
  char CapabilityGroupSid[48]; // [rsp+B0h] [rbp-1h] BYREF

  *(_QWORD *)&UnicodeString.Length = 2752552LL;
  v15 = 0LL;
  UnicodeString.Buffer = L"lpacPnpNotifications";
  v0 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  Pool2 = (_WNF_STATE_NAME *)ExAllocatePool2(0x100uLL);
  v2 = Pool2;
  if ( Pool2 )
  {
    memset_0(Pool2, 0, 0x90uLL);
    v3 = (struct _FAST_MUTEX *)ExAllocatePool2(0x40uLL);
    v2[2] = (_WNF_STATE_NAME)v3;
    if ( v3 )
    {
      KeInitializeGuardedMutex(v3);
      v2[15] = (_WNF_STATE_NAME)&v2[14];
      v2[14] = (_WNF_STATE_NAME)&v2[14];
      v2[13] = (_WNF_STATE_NAME)&v2[12];
      v2[12] = (_WNF_STATE_NAME)&v2[12];
      v2[16].Data[1] = 4;
      LOBYTE(v2[17].Data[1]) = 1;
      if ( RtlDeriveCapabilitySidsFromName(&UnicodeString, CapabilityGroupSid, CapabilitySid) >= 0 )
      {
        v4 = SeLocalSystemSid;
        LOBYTE(SecurityDescriptor[0]) = 1;
        if ( (SWORD1(SecurityDescriptor[0]) & 0x8000u) == 0 )
        {
          *((_QWORD *)&SecurityDescriptor[0] + 1) = 0LL;
          if ( SeLocalSystemSid )
            *((_QWORD *)&SecurityDescriptor[0] + 1) = SeLocalSystemSid;
          WORD1(SecurityDescriptor[0]) |= 1u;
          v5 = RtlLengthSid(SeLowMandatorySid);
          v6 = RtlLengthSid(SeAllAppPackagesSid) + v5;
          v7 = RtlLengthSid(SeWorldSid) + v6;
          v8 = RtlLengthSid(v4) + v7;
          v9 = v8 + RtlLengthSid(CapabilitySid) + 48;
          v10 = (ACL *)ExAllocatePool2(0x100uLL);
          v0 = v10;
          if ( v10 )
          {
            if ( RtlCreateAcl(v10, v9, 2u) >= 0
              && (int)RtlpAddKnownAce(v0, 2u, 2, 0x10000000, (unsigned __int8 *)SeLocalSystemSid, 0) >= 0
              && (int)RtlpAddKnownAce(v0, 2u, 2, 1, (unsigned __int8 *)SeWorldSid, 0) >= 0
              && (int)RtlpAddKnownAce(v0, 2u, 2, 1, (unsigned __int8 *)SeAllAppPackagesSid, 0) >= 0
              && (int)RtlpAddKnownAce(v0, 2u, 2, 1, (unsigned __int8 *)SeLowMandatorySid, 0) >= 0
              && (int)RtlpAddKnownAce(v0, 2u, 2, 1, CapabilitySid, 0) >= 0
              && LOBYTE(SecurityDescriptor[0]) == 1
              && (SWORD1(SecurityDescriptor[0]) & 0x8000u) == 0 )
            {
              v15 = v0;
              WORD1(SecurityDescriptor[0]) = WORD1(SecurityDescriptor[0]) & 0xFFF3 | 4;
              if ( ZwCreateWnfStateName(
                     v2 + 11,
                     WnfTemporaryStateName,
                     WnfDataScopeMachine,
                     0,
                     0LL,
                     4u,
                     SecurityDescriptor) >= 0 )
                goto LABEL_20;
            }
          }
        }
      }
    }
    v11 = (void *)v2[2];
    if ( v11 )
      ExFreePoolWithTag(v11, 0x59706E50u);
    ExFreePoolWithTag(v2, 0x59706E50u);
    v2 = 0LL;
    if ( v0 )
LABEL_20:
      ExFreePoolWithTag(v0, 0x59706E50u);
  }
  return v2;
}
