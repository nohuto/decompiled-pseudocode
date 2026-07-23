/*
 * XREFs of RtlOwnerAcesPresent @ 0x1403F7250
 * Callers:
 *     SepAccessCheckAndAuditAlarm @ 0x14092B360 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     memcmp @ 0x1406B4C10 (memcmp.c)
 */

BOOLEAN __cdecl RtlOwnerAcesPresent(PACL pAcl)
{
  _WORD *SeOwnerRightsSid; // rbp
  PACL v2; // rbx
  unsigned int AceCount; // esi
  unsigned int i; // edi
  UCHAR AclRevision; // cl
  USHORT *p_AceCount; // rcx

  SeOwnerRightsSid = SeExports->SeOwnerRightsSid;
  if ( pAcl )
  {
    v2 = pAcl + 1;
    AceCount = pAcl->AceCount;
    for ( i = 0; ; ++i )
    {
      if ( i >= AceCount )
        return 0;
      if ( (v2->Sbz1 & 8) != 0 )
        goto LABEL_14;
      AclRevision = v2->AclRevision;
      if ( (unsigned __int8)(v2->AclRevision - 5) <= 3u || (unsigned __int8)(AclRevision - 11) <= 1u )
      {
LABEL_19:
        p_AceCount = (USHORT *)((char *)&v2[2 * (*(_DWORD *)&v2[1].AclRevision & 1)]
                              + ((8LL * (*(_DWORD *)&v2[1].AclRevision & 2)) | 0xC));
        goto LABEL_11;
      }
      if ( AclRevision >= 0xFu )
        break;
      if ( AclRevision == 4 )
      {
        p_AceCount = &v2[1].AceCount;
        goto LABEL_11;
      }
      if ( AclRevision >= 0xBu )
        goto LABEL_21;
LABEL_10:
      p_AceCount = (USHORT *)&v2[1];
LABEL_11:
      if ( p_AceCount
        && *p_AceCount == *SeOwnerRightsSid
        && !memcmp(p_AceCount, SeOwnerRightsSid, 4 * ((unsigned __int64)*p_AceCount >> 8) + 8) )
      {
        return 1;
      }
LABEL_14:
      v2 = (PACL)((char *)v2 + v2->AclSize);
    }
    if ( AclRevision <= 0x10u )
      goto LABEL_19;
LABEL_21:
    if ( (unsigned __int8)(AclRevision - 13) > 1u )
      goto LABEL_14;
    goto LABEL_10;
  }
  return 0;
}
