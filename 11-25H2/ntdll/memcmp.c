/*
 * XREFs of memcmp @ 0x180168C50
 * Callers:
 *     RtlpCreateWnfNameSubscription @ 0x1800050BC (RtlpCreateWnfNameSubscription.c)
 *     RtlpFindWnfNameSubscription @ 0x180005570 (RtlpFindWnfNameSubscription.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x180042680 (RtlpWnfProcessCurrentDescriptor.c)
 *     EtwpFindRegistration @ 0x1800448E0 (EtwpFindRegistration.c)
 *     EtwpInsertRegistration @ 0x180045AB0 (EtwpInsertRegistration.c)
 *     EtwpFindGuidEntry @ 0x180045DA0 (EtwpFindGuidEntry.c)
 *     RtlpGenerateInheritedAce @ 0x180064180 (RtlpGenerateInheritedAce.c)
 *     RtlpIsDuplicateAce @ 0x1800652F0 (RtlpIsDuplicateAce.c)
 *     RtlpIsNameInExpressionPrivate @ 0x180068918 (RtlpIsNameInExpressionPrivate.c)
 *     RtlFindUnicodeSubstring @ 0x180068EF0 (RtlFindUnicodeSubstring.c)
 *     LdrpFindLoadedDllByMappingLockHeld @ 0x18006E750 (LdrpFindLoadedDllByMappingLockHeld.c)
 *     EtwpAddLogHeaderToLogFile @ 0x1800824C0 (EtwpAddLogHeaderToLogFile.c)
 *     RtlpCompareAces @ 0x180084C50 (RtlpCompareAces.c)
 *     RtlEqualSid @ 0x180084E60 (RtlEqualSid.c)
 *     RtlpCheckDynamicTimeZoneInformation @ 0x180085300 (RtlpCheckDynamicTimeZoneInformation.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x18008E210 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlpCheckForSameCurdir @ 0x1800A1460 (RtlpCheckForSameCurdir.c)
 *     RtlPrefixUnicodeString @ 0x1800B3990 (RtlPrefixUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x1800B49D0 (RtlEqualUnicodeString.c)
 *     EtwpValidateLoggerInfo @ 0x1800B54F8 (EtwpValidateLoggerInfo.c)
 *     RtlEqualDomainName @ 0x1800BEC70 (RtlEqualDomainName.c)
 *     RtlPrefixString @ 0x1800DCAB0 (RtlPrefixString.c)
 *     RtlSidDominates @ 0x1800DD780 (RtlSidDominates.c)
 *     EtwpRegistrationCompare @ 0x1800DE560 (EtwpRegistrationCompare.c)
 *     RtlpNormalizeAcl @ 0x1800E8044 (RtlpNormalizeAcl.c)
 *     RtlpIsAttributeAceInSacl @ 0x1800E994C (RtlpIsAttributeAceInSacl.c)
 *     RtlpOwnerAcesPresent @ 0x1800EA220 (RtlpOwnerAcesPresent.c)
 *     RtlpCompareProtectedPolicyEntry @ 0x1800F5C70 (RtlpCompareProtectedPolicyEntry.c)
 *     RtlSidHashLookup @ 0x1800F9E50 (RtlSidHashLookup.c)
 *     EtwpInsertGuidEntry @ 0x18010E48C (EtwpInsertGuidEntry.c)
 *     RtlReplaceSidInSd @ 0x18013AE00 (RtlReplaceSidInSd.c)
 *     RtlpStackDbEntryIsEqual @ 0x18015EF40 (RtlpStackDbEntryIsEqual.c)
 *     RtlpStackDbSegmentComparitor @ 0x18015F044 (RtlpStackDbSegmentComparitor.c)
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
