/*
 * XREFs of memcmp @ 0x180165A90
 * Callers:
 *     RtlDeriveCapabilitySidsFromName @ 0x18001AAA0 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlpCreateWnfNameSubscription @ 0x18002E89C (RtlpCreateWnfNameSubscription.c)
 *     RtlpFindWnfNameSubscription @ 0x18002ED50 (RtlpFindWnfNameSubscription.c)
 *     EtwpInsertRegistration @ 0x18004A2C0 (EtwpInsertRegistration.c)
 *     EtwpFindGuidEntry @ 0x18004A5B0 (EtwpFindGuidEntry.c)
 *     EtwpFindRegistration @ 0x18004B080 (EtwpFindRegistration.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x18004D6B0 (RtlpWnfProcessCurrentDescriptor.c)
 *     RtlpIsNameInExpressionPrivate @ 0x18007B878 (RtlpIsNameInExpressionPrivate.c)
 *     RtlFindUnicodeSubstring @ 0x18007BDD0 (RtlFindUnicodeSubstring.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180080610 (EtwpAddLogHeaderToLogFile.c)
 *     RtlpCheckDynamicTimeZoneInformation @ 0x180082570 (RtlpCheckDynamicTimeZoneInformation.c)
 *     LdrpFindLoadedDllByMappingLockHeld @ 0x1800907B0 (LdrpFindLoadedDllByMappingLockHeld.c)
 *     RtlpCheckForSameCurdir @ 0x180094920 (RtlpCheckForSameCurdir.c)
 *     RtlPrefixUnicodeString @ 0x1800A64C0 (RtlPrefixUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x1800A7500 (RtlEqualUnicodeString.c)
 *     EtwpValidateLoggerInfo @ 0x1800A8308 (EtwpValidateLoggerInfo.c)
 *     RtlEqualDomainName @ 0x1800B19D0 (RtlEqualDomainName.c)
 *     RtlpNormalizeAcl @ 0x1800C0094 (RtlpNormalizeAcl.c)
 *     RtlSidDominates @ 0x1800C0480 (RtlSidDominates.c)
 *     RtlpGenerateInheritedAce @ 0x1800C3BC0 (RtlpGenerateInheritedAce.c)
 *     RtlpIsDuplicateAce @ 0x1800C4D30 (RtlpIsDuplicateAce.c)
 *     RtlpCompareAces @ 0x1800C5BC0 (RtlpCompareAces.c)
 *     RtlEqualSid @ 0x1800C5DD0 (RtlEqualSid.c)
 *     RtlPrefixString @ 0x1800D9C40 (RtlPrefixString.c)
 *     EtwpRegistrationCompare @ 0x1800DC710 (EtwpRegistrationCompare.c)
 *     RtlpIsAttributeAceInSacl @ 0x1800E2F1C (RtlpIsAttributeAceInSacl.c)
 *     RtlpOwnerAcesPresent @ 0x1800E45A0 (RtlpOwnerAcesPresent.c)
 *     RtlpCompareProtectedPolicyEntry @ 0x1800EE6D0 (RtlpCompareProtectedPolicyEntry.c)
 *     RtlSidHashLookup @ 0x1800F2E30 (RtlSidHashLookup.c)
 *     EtwpInsertGuidEntry @ 0x180106D44 (EtwpInsertGuidEntry.c)
 *     RtlReplaceSidInSd @ 0x1801378C0 (RtlReplaceSidInSd.c)
 *     RtlpStackDbEntryIsEqual @ 0x18015BE3C (RtlpStackDbEntryIsEqual.c)
 *     RtlpStackDbSegmentComparitor @ 0x18015BF40 (RtlpStackDbSegmentComparitor.c)
 * Callees:
 *     <none>
 */

int __cdecl memcmp(const void *Buf1, const void *Buf2, size_t Size)
{
  signed __int64 v3; // rdx
  bool v4; // cf
  size_t v6; // r9
  unsigned __int64 v7; // rax
  size_t v8; // r9

  v3 = (_BYTE *)Buf2 - (_BYTE *)Buf1;
  if ( Size < 8 )
    goto LABEL_6;
  for ( ; ((unsigned __int8)Buf1 & 7) != 0; --Size )
  {
    v4 = *(_BYTE *)Buf1 < *((_BYTE *)Buf1 + v3);
    if ( *(_BYTE *)Buf1 != *((_BYTE *)Buf1 + v3) )
      return -v4 - (v4 - 1);
    Buf1 = (char *)Buf1 + 1;
  }
  if ( !(Size >> 3) )
  {
LABEL_6:
    if ( !Size )
      return 0;
    while ( 1 )
    {
      v4 = *(_BYTE *)Buf1 < *((_BYTE *)Buf1 + v3);
      if ( *(_BYTE *)Buf1 != *((_BYTE *)Buf1 + v3) )
        break;
      Buf1 = (char *)Buf1 + 1;
      if ( !--Size )
        return 0;
    }
    return -v4 - (v4 - 1);
  }
  v6 = Size >> 5;
  if ( Size >> 5 )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)Buf1;
      if ( *(_QWORD *)Buf1 != *(_QWORD *)((char *)Buf1 + v3) )
        break;
      v7 = *((_QWORD *)Buf1 + 1);
      if ( v7 != *(_QWORD *)((char *)Buf1 + v3 + 8) )
        goto LABEL_24;
      v7 = *((_QWORD *)Buf1 + 2);
      if ( v7 != *(_QWORD *)((char *)Buf1 + v3 + 16) )
        goto LABEL_23;
      v7 = *((_QWORD *)Buf1 + 3);
      if ( v7 != *(_QWORD *)((char *)Buf1 + v3 + 24) )
      {
        Buf1 = (char *)Buf1 + 8;
LABEL_23:
        Buf1 = (char *)Buf1 + 8;
LABEL_24:
        Buf1 = (char *)Buf1 + 8;
        break;
      }
      Buf1 = (char *)Buf1 + 32;
      if ( !--v6 )
      {
        Size &= 0x1Fu;
        goto LABEL_18;
      }
    }
  }
  else
  {
LABEL_18:
    v8 = Size >> 3;
    if ( !(Size >> 3) )
      goto LABEL_6;
    while ( 1 )
    {
      v7 = *(_QWORD *)Buf1;
      if ( *(_QWORD *)Buf1 != *(_QWORD *)((char *)Buf1 + v3) )
        break;
      Buf1 = (char *)Buf1 + 8;
      if ( !--v8 )
      {
        Size &= 7u;
        goto LABEL_6;
      }
    }
  }
  v4 = _byteswap_uint64(v7) < _byteswap_uint64(*(_QWORD *)((char *)Buf1 + v3));
  return -v4 - (v4 - 1);
}
