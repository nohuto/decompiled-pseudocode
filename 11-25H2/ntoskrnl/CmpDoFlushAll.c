/*
 * XREFs of CmpDoFlushAll @ 0x14032401C
 * Callers:
 *     CmReconcileAndValidateAllHives @ 0x1407C86CC (CmReconcileAndValidateAllHives.c)
 *     CmpForceFlushWorker @ 0x140A50B10 (CmpForceFlushWorker.c)
 *     NtFlushKey @ 0x140A73170 (NtFlushKey.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     CmpDereferenceHive @ 0x1408484B4 (CmpDereferenceHive.c)
 *     CmpGetNextHive @ 0x1408484DC (CmpGetNextHive.c)
 *     CmpFlushHive @ 0x140883A5C (CmpFlushHive.c)
 *     CmpGetLastHive @ 0x1409118B0 (CmpGetLastHive.c)
 *     CmpQuitNextHive @ 0x140A5D420 (CmpQuitNextHive.c)
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
