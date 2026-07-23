/*
 * XREFs of CmpInitGlobalQuotaAllowed @ 0x140C4B100
 * Callers:
 *     CmInitSystem1 @ 0x140C47010 (CmInitSystem1.c)
 * Callees:
 *     <none>
 */

unsigned __int64 CmpInitGlobalQuotaAllowed()
{
  unsigned __int64 v0; // rdx
  char v1; // al
  unsigned __int64 v2; // rcx
  unsigned __int64 result; // rax
  __int64 v4; // rcx
  int v5; // ecx

  CmpSizeOfPagedPoolInBytes = MmSizeOfPagedPoolInBytes;
  v0 = (((unsigned __int64)MmSizeOfPagedPoolInBytes * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL) >> 64) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( CmRegistrySizeLimitLength == 4 && CmRegistrySizeLimitType == 4 && CmRegistrySizeLimit )
  {
    v1 = 1;
  }
  else
  {
    v1 = 0;
    if ( CmRegistrySizeLimitLength == 8 && CmRegistrySizeLimitType == 11 && CmRegistrySizeLimit )
      goto LABEL_10;
  }
  if ( !v1 )
  {
    v0 = MmSizeOfPagedPoolInBytes / 3uLL;
LABEL_11:
    CmpGlobalQuota = v0;
    goto LABEL_13;
  }
LABEL_10:
  CmpQuotaExplicitlySet = 1;
  if ( CmRegistrySizeLimit >= v0 )
    goto LABEL_11;
  CmpGlobalQuota = CmRegistrySizeLimit;
  v0 = CmRegistrySizeLimit;
LABEL_13:
  v2 = 0xFFFFFFFFLL;
  if ( v0 <= 0xFFFFFFFF )
  {
    v2 = v0;
    if ( v0 < 0x1000000 )
    {
      CmpGlobalQuota = 0x1000000LL;
      v2 = 0x1000000LL;
    }
  }
  else
  {
    CmpGlobalQuota = 0xFFFFFFFFLL;
  }
  result = 95 * (v2 / 0x64);
  CmpGlobalQuotaWarning = result;
  if ( CmSystemHiveLimitSize )
  {
    v5 = CmSystemHiveLimitSize << 20;
  }
  else
  {
    LODWORD(v4) = 393216;
    result = *(_QWORD *)(*(_QWORD *)qword_140E300C8 + 18512LL) >> 1;
    if ( result < 0x60000 )
      v4 = *(_QWORD *)(*(_QWORD *)qword_140E300C8 + 18512LL) >> 1;
    v5 = (_DWORD)v4 << 12;
  }
  CmSystemHiveLimitSize = v5;
  return result;
}
