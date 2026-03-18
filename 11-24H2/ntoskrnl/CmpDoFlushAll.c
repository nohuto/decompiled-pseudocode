/*
 * XREFs of CmpDoFlushAll @ 0x14024528C
 * Callers:
 *     CmReconcileAndValidateAllHives @ 0x1407D7E5C (CmReconcileAndValidateAllHives.c)
 *     CmpForceFlushWorker @ 0x140A52FE0 (CmpForceFlushWorker.c)
 *     NtFlushKey @ 0x140A74F60 (NtFlushKey.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     CmpGetNextHive @ 0x14084425C (CmpGetNextHive.c)
 *     CmpDereferenceHive @ 0x1408443C0 (CmpDereferenceHive.c)
 *     CmpGetLastHive @ 0x14092EBCC (CmpGetLastHive.c)
 *     CmpFlushHive @ 0x14097D2B4 (CmpFlushHive.c)
 *     CmpQuitNextHive @ 0x140A5EBA0 (CmpQuitNextHive.c)
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
        if ( ExAcquireRundownProtection(NextHive + 205) )
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
