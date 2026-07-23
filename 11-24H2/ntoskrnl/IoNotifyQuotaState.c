/*
 * XREFs of IoNotifyQuotaState @ 0x1404913C0
 * Callers:
 *     <none>
 * Callees:
 *     IopFindDiskIoAttribution @ 0x14020D650 (IopFindDiskIoAttribution.c)
 *     IoDiskIoAttributionDereference @ 0x14020D960 (IoDiskIoAttributionDereference.c)
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x14031DCB0 (ObReferenceObjectSafeWithTag.c)
 *     PsIoRateControlOverQuotaNotify @ 0x14049148C (PsIoRateControlOverQuotaNotify.c)
 */

__int64 __fastcall IoNotifyQuotaState(unsigned __int64 a1, int a2, int a3, int a4, int a5)
{
  struct _EX_RUNDOWN_REF *DiskIoAttribution; // rax
  unsigned int v9; // ebx
  struct _EX_RUNDOWN_REF *v10; // rdi
  void *Ptr; // rsi

  DiskIoAttribution = (struct _EX_RUNDOWN_REF *)IopFindDiskIoAttribution(a1);
  v9 = 0;
  v10 = DiskIoAttribution;
  if ( DiskIoAttribution )
  {
    if ( ExAcquireRundownProtection_0(DiskIoAttribution + 21) )
    {
      Ptr = v10[20].Ptr;
      if ( ObReferenceObjectSafeWithTag((__int64)Ptr, 0x746C6644u) )
      {
        PsIoRateControlOverQuotaNotify((_DWORD)Ptr, a2, a3, a4, a5);
        ObfDereferenceObjectWithTag(Ptr, 0x746C6644u);
      }
      else
      {
        v9 = -1073741431;
      }
      ExReleaseRundownProtection_0(v10 + 21);
    }
    else
    {
      v9 = -1073741431;
    }
    IoDiskIoAttributionDereference((__int64)v10);
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v9;
}
