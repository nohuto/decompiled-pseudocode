/*
 * XREFs of CmpBlockTwoHiveWrites @ 0x1408E2704
 * Callers:
 *     CmSaveMergedKeys @ 0x1407CE550 (CmSaveMergedKeys.c)
 *     CmpVirtualPathPresent @ 0x1407DC414 (CmpVirtualPathPresent.c)
 *     CmpVirtualBranchIsReplicated @ 0x1408E2144 (CmpVirtualBranchIsReplicated.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     CmpDereferenceHive @ 0x140840680 (CmpDereferenceHive.c)
 *     CmpReferenceHive @ 0x140840940 (CmpReferenceHive.c)
 *     CmpGetNextActiveHive @ 0x1408E280C (CmpGetNextActiveHive.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140BBBA98 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140BBBAB4 (HvLockHiveFlusherExclusive.c)
 */

__int64 __fastcall CmpBlockTwoHiveWrites(struct _EX_RUNDOWN_REF *a1, volatile signed __int32 *a2, char a3)
{
  char v3; // r14
  char v4; // bp
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 NextActiveHive; // rax
  struct _EX_RUNDOWN_REF *v10; // rbx
  volatile signed __int32 *v12; // rcx

  v3 = 0;
  v4 = 0;
  for ( i = 0LL; ; i = v10 )
  {
    NextActiveHive = CmpGetNextActiveHive(i);
    v10 = (struct _EX_RUNDOWN_REF *)NextActiveHive;
    if ( !NextActiveHive )
      break;
    if ( a1 == (struct _EX_RUNDOWN_REF *)NextActiveHive || a2 == (volatile signed __int32 *)NextActiveHive )
    {
      if ( a3 )
        CmpReferenceHive(NextActiveHive);
      HvLockHiveFlusherExclusive(v10);
      if ( a1 == v10 )
        v3 = 1;
      else
        v4 = 1;
      if ( (!a1 || v3 == 1) && (!a2 || v4 == 1) )
      {
        ExReleaseRundownProtection_0(v10 + 205);
        break;
      }
    }
  }
  if ( a1 && !v3 )
  {
    if ( v4 != 1 )
      return 3221225524LL;
    HvUnlockHiveFlusherExclusive(a2);
    if ( !a3 )
      return 3221225524LL;
    v12 = a2;
    goto LABEL_27;
  }
  if ( !a2 || v4 )
    return 0LL;
  if ( v3 == 1 )
  {
    HvUnlockHiveFlusherExclusive(a1);
    if ( a3 )
    {
      v12 = (volatile signed __int32 *)a1;
LABEL_27:
      CmpDereferenceHive(v12);
    }
  }
  return 3221225524LL;
}
