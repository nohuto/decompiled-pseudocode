/*
 * XREFs of ?vCleanupRegionsAndPaths@@YAXK@Z @ 0x140014C24
 * Callers:
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x140015750 (-GrepCloseCurrentProcess@@YAHXZ.c)
 * Callees:
 *     HmgNextOwned @ 0x14001F530 (HmgNextOwned.c)
 *     ?vFreeBlocks@PATH_CORE@@QEAAXXZ @ 0x140024360 (-vFreeBlocks@PATH_CORE@@QEAAXXZ.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1400243B0 (--$FreeIsolatedType@V-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     bDeleteRegion @ 0x14002C420 (bDeleteRegion.c)
 *     HmgLock @ 0x14002FF60 (HmgLock.c)
 *     HmgRemoveObject @ 0x140031C10 (HmgRemoveObject.c)
 *     HmgPentryFromPobj @ 0x140032C30 (HmgPentryFromPobj.c)
 *     ?InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x14003506C (-InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ.c)
 */

void __fastcall vCleanupRegionsAndPaths(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 i; // rcx
  __int64 v4; // rax
  OBJECT *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  unsigned int v10; // esi
  HRGN v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = 0LL;
  v2 = a1;
  for ( i = 0LL; ; i = v10 )
  {
    v10 = HmgNextOwned(i, v2, &v11);
    if ( !v10 )
      break;
    if ( (BYTE2(v11) & 0x1F) == 4 )
    {
      LOBYTE(v9) = 4;
      v4 = HmgLock(v11, v9);
      v5 = (OBJECT *)v4;
      if ( v4 )
      {
        v6 = HmgPentryFromPobj(v4);
        if ( v6 )
          *(_QWORD *)(v6 + 16) = 0LL;
        OBJECT::InterlockedDecrementExclusiveLockCount(v5);
      }
      bDeleteRegion(v11);
    }
    else if ( (BYTE2(v11) & 0x1F) == 7 )
    {
      v7 = HmgRemoveObject((_DWORD)v11, 0, 0, 1, 7, 0LL);
      v8 = v7;
      if ( v7 )
      {
        PATH_CORE::vFreeBlocks((PATH_CORE *)(v7 + 24));
        FreeIsolatedType<NSInstrumentation::CTypeIsolation<81920,320>>(v8);
      }
    }
    v2 = a1;
  }
}
