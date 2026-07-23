/*
 * XREFs of CmpDoFlushAll @ 0x14020DA6C
 * Callers:
 *     CmReconcileAndValidateAllHives @ 0x1407D83B0 (CmReconcileAndValidateAllHives.c)
 *     CmpForceFlushWorker @ 0x140A4AFD0 (CmpForceFlushWorker.c)
 *     NtFlushKey @ 0x140A6F280 (NtFlushKey.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     CmpGetNextHive @ 0x14084051C (CmpGetNextHive.c)
 *     CmpDereferenceHive @ 0x140840680 (CmpDereferenceHive.c)
 *     CmpGetLastHive @ 0x140930D0C (CmpGetLastHive.c)
 *     CmpFlushHive @ 0x140965AC4 (CmpFlushHive.c)
 *     CmpQuitNextHive @ 0x140A56D90 (CmpQuitNextHive.c)
 */

void __fastcall CmpDoFlushAll(unsigned int a1)
{
  __int64 LastHive; // rdi
  struct _EX_RUNDOWN_REF *i; // rcx
  struct _EX_RUNDOWN_REF *NextHive; // rax
  struct _EX_RUNDOWN_REF *v5; // rbx

  if ( !BYTE1(NlsMbOemCodePageTag) )
  {
    LastHive = CmpGetLastHive();
    if ( LastHive )
    {
      for ( i = 0LL; ; i = v5 )
      {
        NextHive = (struct _EX_RUNDOWN_REF *)CmpGetNextHive(i);
        v5 = NextHive;
        if ( !NextHive )
          break;
        if ( ExAcquireRundownProtection_0(NextHive + 205) )
        {
          if ( (v5[20].Count & 2) == 0 )
            CmpFlushHive(v5, a1);
          ExReleaseRundownProtection_0(v5 + 205);
        }
        if ( v5 == (struct _EX_RUNDOWN_REF *)LastHive )
          break;
      }
      CmpQuitNextHive(v5);
      CmpDereferenceHive(LastHive);
    }
  }
}
