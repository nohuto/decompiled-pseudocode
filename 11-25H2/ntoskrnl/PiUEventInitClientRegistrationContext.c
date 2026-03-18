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

_QWORD *PiUEventInitClientRegistrationContext()
{
  ACL *v0; // rbx
  _QWORD *Pool2; // rax
  _QWORD *v2; // rdi
  struct _FAST_MUTEX *v3; // rax
  PSID v4; // rsi
  ULONG v5; // ebx
  ULONG v6; // ebx
  ULONG v7; // ebx
  ULONG v8; // ebx
  ULONG v9; // esi
  ACL *v10; // rax
  void *v11; // rcx
  UNICODE_STRING String2; // [rsp+48h] [rbp-69h] BYREF
  __int128 v14; // [rsp+58h] [rbp-59h]
  __int128 v15; // [rsp+68h] [rbp-49h]
  ACL *v16; // [rsp+78h] [rbp-39h]
  _OWORD Sid[3]; // [rsp+80h] [rbp-31h] BYREF
  __int128 v18[3]; // [rsp+B0h] [rbp-1h] BYREF

  *(_QWORD *)&String2.Length = 2752552LL;
  v16 = 0LL;
  String2.Buffer = L"lpacPnpNotifications";
  v0 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
  v2 = Pool2;
  if ( Pool2 )
  {
    memset_0(Pool2, 0, 0x90uLL);
    v3 = (struct _FAST_MUTEX *)ExAllocatePool2(0x40uLL);
    v2[2] = v3;
    if ( v3 )
    {
      KeInitializeGuardedMutex(v3);
      v2[15] = v2 + 14;
      v2[14] = v2 + 14;
      v2[13] = v2 + 12;
      v2[12] = v2 + 12;
      *((_DWORD *)v2 + 33) = 4;
      *((_BYTE *)v2 + 140) = 1;
      if ( RtlDeriveCapabilitySidsFromName(&String2, v18, Sid) >= 0 )
      {
        v4 = SeLocalSystemSid;
        LOBYTE(v14) = 1;
        if ( (SWORD1(v14) & 0x8000u) == 0 )
        {
          *((_QWORD *)&v14 + 1) = 0LL;
          if ( SeLocalSystemSid )
            *((_QWORD *)&v14 + 1) = SeLocalSystemSid;
          WORD1(v14) |= 1u;
          v5 = RtlLengthSid(SeLowMandatorySid);
          v6 = RtlLengthSid(SeAllAppPackagesSid) + v5;
          v7 = RtlLengthSid(SeWorldSid) + v6;
          v8 = RtlLengthSid(v4) + v7;
          v9 = v8 + RtlLengthSid(Sid) + 48;
          v10 = (ACL *)ExAllocatePool2(0x100uLL);
          v0 = v10;
          if ( v10 )
          {
            if ( RtlCreateAcl(v10, v9, 2u) >= 0
              && (int)RtlpAddKnownAce((__int64)v0, 2u, 2, 0x10000000, (unsigned __int8 *)SeLocalSystemSid, 0) >= 0
              && (int)RtlpAddKnownAce((__int64)v0, 2u, 2, 1, (unsigned __int8 *)SeWorldSid, 0) >= 0
              && (int)RtlpAddKnownAce((__int64)v0, 2u, 2, 1, (unsigned __int8 *)SeAllAppPackagesSid, 0) >= 0
              && (int)RtlpAddKnownAce((__int64)v0, 2u, 2, 1, (unsigned __int8 *)SeLowMandatorySid, 0) >= 0
              && (int)RtlpAddKnownAce((__int64)v0, 2u, 2, 1, (unsigned __int8 *)Sid, 0) >= 0
              && (_BYTE)v14 == 1
              && (SWORD1(v14) & 0x8000u) == 0 )
            {
              v16 = v0;
              WORD1(v14) = WORD1(v14) & 0xFFF3 | 4;
              if ( (int)ZwCreateWnfStateName((__int64)(v2 + 11), 3LL) >= 0 )
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
