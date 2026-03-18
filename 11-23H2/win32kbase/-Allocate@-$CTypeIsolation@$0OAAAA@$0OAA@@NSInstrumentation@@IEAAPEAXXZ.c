/*
 * XREFs of ?Allocate@?$CTypeIsolation@$0OAAAA@$0OAA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C00D1A34
 * Callers:
 *     ?Allocate@PDEV@@SAPEAV1@H@Z @ 0x1C00C0900 (-Allocate@PDEV@@SAPEAV1@H@Z.c)
 * Callees:
 *     GreEnterCriticalRegionAndAcquirePushLockExclusive @ 0x1C0044300 (GreEnterCriticalRegionAndAcquirePushLockExclusive.c)
 *     GreLeaveCriticalRegionAndReleasePushLockExclusive @ 0x1C00443B0 (GreLeaveCriticalRegionAndReleasePushLockExclusive.c)
 *     RIMLockShared @ 0x1C0096B30 (RIMLockShared.c)
 *     GreLeaveCriticalRegionAndReleasePushLockShared @ 0x1C0096F70 (GreLeaveCriticalRegionAndReleasePushLockShared.c)
 *     ?Allocate@?$CSectionBitmapAllocator@$0OAAAA@$0OAA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C00D1960 (-Allocate@-$CSectionBitmapAllocator@$0OAAAA@$0OAA@@NSInstrumentation@@QEAAPEAXXZ.c)
 *     ?Create@?$CSectionEntry@$0OAAAA@$0OAA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C00D1CE4 (-Create@-$CSectionEntry@$0OAAAA@$0OAA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Destroy@?$CSectionEntry@$0OAAAA@$0OAA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C00D1DBC (-Destroy@-$CSectionEntry@$0OAAAA@$0OAA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 */

PVOID __fastcall NSInstrumentation::CTypeIsolation<917504,3584>::Allocate(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  _QWORD *i; // rsi
  __int64 v5; // r14
  __int64 v6; // rax
  _QWORD *v7; // rsi
  __int64 v8; // rbx
  _QWORD *v9; // rax

  if ( *(_BYTE *)(a1 + 36) )
    return ExAllocateFromPagedLookasideList(*(PPAGED_LOOKASIDE_LIST *)(a1 + 24));
  v2 = *(_QWORD *)(a1 + 16);
  v3 = 0LL;
  RIMLockShared(v2);
  for ( i = *(_QWORD **)a1; i != (_QWORD *)a1; i = (_QWORD *)*i )
  {
    v5 = NSInstrumentation::CSectionBitmapAllocator<917504,3584>::Allocate(i[4]);
    if ( v5 )
    {
      GreLeaveCriticalRegionAndReleasePushLockShared(v2);
      return (PVOID)v5;
    }
  }
  GreLeaveCriticalRegionAndReleasePushLockShared(v2);
  v6 = NSInstrumentation::CSectionEntry<917504,3584>::Create();
  v7 = (_QWORD *)v6;
  if ( v6 )
  {
    v3 = NSInstrumentation::CSectionBitmapAllocator<917504,3584>::Allocate(*(_QWORD *)(v6 + 32));
    if ( v3 )
    {
      v8 = *(_QWORD *)(a1 + 16);
      GreEnterCriticalRegionAndAcquirePushLockExclusive(v8);
      v9 = *(_QWORD **)(a1 + 8);
      if ( *v9 != a1 )
        __fastfail(3u);
      *v7 = a1;
      v7[1] = v9;
      *v9 = v7;
      *(_DWORD *)(a1 + 32) += 224;
      *(_QWORD *)(a1 + 8) = v7;
      GreLeaveCriticalRegionAndReleasePushLockExclusive(v8);
    }
    else
    {
      NSInstrumentation::CSectionEntry<917504,3584>::Destroy(v7);
    }
  }
  return (PVOID)v3;
}
