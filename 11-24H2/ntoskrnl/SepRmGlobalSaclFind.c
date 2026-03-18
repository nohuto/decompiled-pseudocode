/*
 * XREFs of SepRmGlobalSaclFind @ 0x140889F14
 * Callers:
 *     SepExamineGlobalSaclEx @ 0x140462D6C (SepExamineGlobalSaclEx.c)
 *     SeAuditingFileOrGlobalEvents @ 0x140791E20 (SeAuditingFileOrGlobalEvents.c)
 *     SepRmGlobalSaclSetWrkr @ 0x1407947B0 (SepRmGlobalSaclSetWrkr.c)
 *     NtSetSecurityObject @ 0x14087A070 (NtSetSecurityObject.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     SepRmAcquireGlobalSaclReadLock @ 0x140462E24 (SepRmAcquireGlobalSaclReadLock.c)
 *     RtlCompareUnicodeStrings @ 0x140888920 (RtlCompareUnicodeStrings.c)
 */

__int64 __fastcall SepRmGlobalSaclFind(__int64 **a1, __int64 **a2, PCWCH *a3, char a4)
{
  char v4; // bp
  unsigned int v8; // esi
  __int64 v10; // rax

  v4 = 0;
  v8 = -1073741772;
  if ( SepRmGlobalSaclHead )
  {
    if ( a4 )
    {
      SepRmAcquireGlobalSaclReadLock();
      v4 = 1;
    }
    v10 = SepRmGlobalSaclHead;
    *a1 = (__int64 *)SepRmGlobalSaclHead;
    if ( a2 )
      *a2 = 0LL;
    while ( v10 )
    {
      if ( !RtlCompareUnicodeStrings(
              a3[1],
              (unsigned __int64)*(unsigned __int16 *)a3 >> 1,
              *(PCWCH *)(v10 + 16),
              (unsigned __int64)*(unsigned __int16 *)(v10 + 8) >> 1,
              0) )
      {
        v8 = 0;
        goto LABEL_13;
      }
      if ( a2 )
        *a2 = *a1;
      v10 = **a1;
      *a1 = (__int64 *)v10;
    }
    if ( a2 )
      *a2 = 0LL;
LABEL_13:
    if ( v4 )
    {
      ExReleaseResourceLite(&SepRmGlobalSaclLock);
      KeLeaveCriticalRegion();
    }
  }
  return v8;
}
