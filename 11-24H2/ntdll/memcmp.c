/*
 * XREFs of memcmp @ 0x1801676D0
 * Callers:
 *     EtwpInsertRegistration @ 0x18001D8C0 (EtwpInsertRegistration.c)
 *     EtwpFindGuidEntry @ 0x18001DBB0 (EtwpFindGuidEntry.c)
 *     EtwpFindRegistration @ 0x18001E680 (EtwpFindRegistration.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x180020CB0 (RtlpWnfProcessCurrentDescriptor.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x18003A820 (RtlDeriveCapabilitySidsFromName.c)
 *     LdrpFindLoadedDllByMappingLockHeld @ 0x180073ED0 (LdrpFindLoadedDllByMappingLockHeld.c)
 *     RtlpCheckForSameCurdir @ 0x180078040 (RtlpCheckForSameCurdir.c)
 *     RtlPrefixUnicodeString @ 0x18008AA00 (RtlPrefixUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x18008BA40 (RtlEqualUnicodeString.c)
 *     EtwpValidateLoggerInfo @ 0x18008C848 (EtwpValidateLoggerInfo.c)
 *     RtlpCreateWnfNameSubscription @ 0x180099A4C (RtlpCreateWnfNameSubscription.c)
 *     RtlpFindWnfNameSubscription @ 0x180099F00 (RtlpFindWnfNameSubscription.c)
 *     RtlpIsNameInExpressionPrivate @ 0x1800AEFD8 (RtlpIsNameInExpressionPrivate.c)
 *     RtlFindUnicodeSubstring @ 0x1800AF530 (RtlFindUnicodeSubstring.c)
 *     EtwpAddLogHeaderToLogFile @ 0x1800B3D70 (EtwpAddLogHeaderToLogFile.c)
 *     RtlpCheckDynamicTimeZoneInformation @ 0x1800B5CD0 (RtlpCheckDynamicTimeZoneInformation.c)
 *     RtlEqualDomainName @ 0x1800B9C10 (RtlEqualDomainName.c)
 *     RtlpNormalizeAcl @ 0x1800C84D4 (RtlpNormalizeAcl.c)
 *     RtlSidDominates @ 0x1800C88C0 (RtlSidDominates.c)
 *     RtlpGenerateInheritedAce @ 0x1800CC000 (RtlpGenerateInheritedAce.c)
 *     RtlpIsDuplicateAce @ 0x1800CD170 (RtlpIsDuplicateAce.c)
 *     RtlpCompareAces @ 0x1800CE000 (RtlpCompareAces.c)
 *     RtlEqualSid @ 0x1800CE210 (RtlEqualSid.c)
 *     RtlPrefixString @ 0x1800DEAD0 (RtlPrefixString.c)
 *     EtwpRegistrationCompare @ 0x1800E11C0 (EtwpRegistrationCompare.c)
 *     RtlpIsAttributeAceInSacl @ 0x1800E820C (RtlpIsAttributeAceInSacl.c)
 *     RtlpOwnerAcesPresent @ 0x1800E8EB0 (RtlpOwnerAcesPresent.c)
 *     RtlpCompareProtectedPolicyEntry @ 0x1800F3FC0 (RtlpCompareProtectedPolicyEntry.c)
 *     RtlSidHashLookup @ 0x1800F82C0 (RtlSidHashLookup.c)
 *     EtwpInsertGuidEntry @ 0x18010C374 (EtwpInsertGuidEntry.c)
 *     RtlReplaceSidInSd @ 0x180139690 (RtlReplaceSidInSd.c)
 *     RtlpStackDbEntryIsEqual @ 0x18015DA7C (RtlpStackDbEntryIsEqual.c)
 *     RtlpStackDbSegmentComparitor @ 0x18015DB80 (RtlpStackDbSegmentComparitor.c)
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
