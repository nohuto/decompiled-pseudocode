/*
 * XREFs of ?HMFreeUserOrIsolatedType@@YAXGEPEAX@Z @ 0x14001B87C
 * Callers:
 *     HMAllocObjectEx @ 0x140041FF0 (HMAllocObjectEx.c)
 *     HMFreeObject @ 0x1400632F0 (HMFreeObject.c)
 * Callees:
 *     ?Win32FreePoolImpl@@YAXPEAX@Z @ 0x14001BE10 (-Win32FreePoolImpl@@YAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0BKAAA@$0BKA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x14003EB28 (-Free@-$CTypeIsolation@$0BKAAA@$0BKA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x14003ED3C (-Free@-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1400411E0 (-Free@-$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?HMTagToIsolatedType@@YA?AW4UserTypeIsolationCountedType@@E@Z @ 0x140041684 (-HMTagToIsolatedType@@YA-AW4UserTypeIsolationCountedType@@E@Z.c)
 */

void __fastcall HMFreeUserOrIsolatedType(__int64 a1, char a2, void *a3)
{
  int v4; // eax
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx

  if ( (a1 & 0x200) != 0 )
  {
    LOBYTE(a1) = a2;
    v4 = HMTagToIsolatedType(a1) - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        if ( v5 == 1 )
        {
          v6 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState() + 19856) + 24LL);
          if ( v6 )
            NSInstrumentation::CTypeIsolation<81920,160>::Free(v6, a3);
        }
      }
      else
      {
        v7 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState() + 19856) + 16LL);
        if ( v7 )
          NSInstrumentation::CTypeIsolation<106496,416>::Free(v7, a3);
      }
    }
    else
    {
      v8 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState() + 19856) + 8LL);
      if ( v8 )
        NSInstrumentation::CTypeIsolation<40960,160>::Free(v8, a3);
    }
  }
  else if ( a3 )
  {
    Win32FreePoolImpl(a3);
  }
}
