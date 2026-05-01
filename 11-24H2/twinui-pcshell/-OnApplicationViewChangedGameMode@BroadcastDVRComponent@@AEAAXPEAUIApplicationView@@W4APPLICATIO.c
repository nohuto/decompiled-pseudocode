/*
 * XREFs of ?OnApplicationViewChangedGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x180226B94
 * Callers:
 *     ?OnApplicationViewChangedTask@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x18005A714 (-OnApplicationViewChangedTask@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VI.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActiveAppInfo@@@Z @ 0x1800A6FF0 (-EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActive.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall BroadcastDVRComponent::OnApplicationViewChangedGameMode(
        __int64 a1,
        struct IApplicationView *a2,
        int a3)
{
  __int64 *v6; // rdx
  __int64 *v7; // rax
  __int64 *v8; // rcx
  __int64 v9; // rax
  std::_Ref_count_base *v10; // rdi

  if ( a2 )
    (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( a3 == 7 || !a3 )
  {
    v6 = *(__int64 **)(a1 + 264);
    v7 = (__int64 *)v6[1];
    v8 = v6;
    while ( !*((_BYTE *)v7 + 25) )
    {
      if ( v7[4] >= (unsigned __int64)a2 )
      {
        v8 = v7;
        v7 = (__int64 *)*v7;
      }
      else
      {
        v7 = (__int64 *)v7[2];
      }
    }
    if ( !*((_BYTE *)v8 + 25) && (unsigned __int64)a2 >= v8[4] && v8 != v6 )
    {
      v9 = v8[6];
      if ( v9 )
        _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
      v10 = (std::_Ref_count_base *)v8[6];
      BroadcastDVRComponent::EvaluateAppForGameMode((HSTRING **)a1, a2, (HWND *)v8[5]);
      if ( v10 )
        std::_Ref_count_base::_Decref(v10);
    }
  }
  if ( a2 )
    (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 16LL))(a2);
}
