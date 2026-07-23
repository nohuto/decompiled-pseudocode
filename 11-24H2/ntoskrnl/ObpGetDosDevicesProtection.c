/*
 * XREFs of ObpGetDosDevicesProtection @ 0x14074190C
 * Callers:
 *     ObpCreateDosDevicesDirectory @ 0x14074168C (ObpCreateDosDevicesDirectory.c)
 * Callees:
 *     RtlGetAce @ 0x140404120 (RtlGetAce.c)
 *     RtlLengthSid @ 0x14044B2D0 (RtlLengthSid.c)
 *     RtlCreateAcl @ 0x140858810 (RtlCreateAcl.c)
 *     RtlpAddKnownAce @ 0x140911480 (RtlpAddKnownAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1409DFF30 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1409E16D0 (RtlCreateSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall ObpGetDosDevicesProtection(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  ULONG v2; // ebx
  ULONG v3; // ebx
  ULONG v4; // esi
  ULONG v5; // esi
  ACL *v6; // rax
  ACL *v7; // rbx
  ULONG v8; // edx
  ULONG v9; // ebx
  ULONG v10; // esi
  ACL *Pool2; // rax
  PVOID Ace; // [rsp+48h] [rbp+10h] BYREF

  Ace = 0LL;
  RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( (ObpProtectionMode & 1) == 0 )
  {
    v9 = RtlLengthSid(SeWorldSid);
    v10 = RtlLengthSid(SeLocalSystemSid) + 44 + 2 * v9;
    Pool2 = (ACL *)ExAllocatePool2(0x100uLL, v10, 0x6C636144u);
    v7 = Pool2;
    if ( Pool2 )
    {
      RtlCreateAcl(Pool2, v10, 2u);
      RtlpAddKnownAce((int)v7, 2, 0, -536870912, SeWorldSid, 0);
      RtlpAddKnownAce((int)v7, 2, 0, 0x10000000, SeLocalSystemSid, 0);
      RtlpAddKnownAce((int)v7, 2, 0, 0x10000000, SeWorldSid, 0);
      v8 = 2;
      goto LABEL_7;
    }
    return 3221225495LL;
  }
  v2 = RtlLengthSid(SeLocalSystemSid);
  v3 = RtlLengthSid(SeWorldSid) + v2;
  v4 = RtlLengthSid(SeCreatorOwnerSid) + 80 + 2 * v3;
  v5 = RtlLengthSid(SeAliasAdminsSid) + v4;
  v6 = (ACL *)ExAllocatePool2(0x100uLL, v5, 0x6C636144u);
  v7 = v6;
  if ( !v6 )
    return 3221225495LL;
  RtlCreateAcl(v6, v5, 2u);
  RtlpAddKnownAce((int)v7, 2, 0, -1610612736, SeWorldSid, 0);
  RtlpAddKnownAce((int)v7, 2, 0, 0x10000000, SeLocalSystemSid, 0);
  RtlpAddKnownAce((int)v7, 2, 0, 0x20000000, SeWorldSid, 0);
  RtlGetAce(v7, 2u, &Ace);
  *((_BYTE *)Ace + 1) |= 0xBu;
  RtlpAddKnownAce((int)v7, 2, 0, 0x10000000, SeAliasAdminsSid, 0);
  RtlGetAce(v7, 3u, &Ace);
  *((_BYTE *)Ace + 1) |= 0xBu;
  RtlpAddKnownAce((int)v7, 2, 0, 0x10000000, SeLocalSystemSid, 0);
  RtlGetAce(v7, 4u, &Ace);
  *((_BYTE *)Ace + 1) |= 0xBu;
  RtlpAddKnownAce((int)v7, 2, 0, 0x10000000, SeCreatorOwnerSid, 0);
  v8 = 5;
LABEL_7:
  RtlGetAce(v7, v8, &Ace);
  *((_BYTE *)Ace + 1) |= 0xBu;
  RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v7, 0);
  return 0LL;
}
