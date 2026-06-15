/*
 * XREFs of ?remove@?$forward_list@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA@AEBVWeakRef@WRL@Microsoft@@@Z @ 0x180073444
 * Callers:
 *     ?UnregisterFromAudioRenderEndpointChangeNotifications@CAudioRenderEndpointChangeDelegator@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z @ 0x1800733E0 (-UnregisterFromAudioRenderEndpointChangeNotifications@CAudioRenderEndpointChangeDelegator@@UEAAJ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A54 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180025844 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::forward_list<Microsoft::WRL::WeakRef>::remove(__int64 **a1, _QWORD *a2)
{
  __int64 *v2; // rdi
  __int64 *v3; // rax
  __int64 *v4; // r8
  __int64 *v5; // rbx
  __int64 *v6; // [rsp+28h] [rbp-20h] BYREF
  __int64 **v7; // [rsp+30h] [rbp-18h]

  v2 = 0LL;
  v7 = &v6;
  v3 = *a1;
  v6 = 0LL;
  if ( v3 )
  {
    do
    {
      if ( v3[1] == *a2 )
      {
        v4 = *a1;
        v3 = (__int64 *)**a1;
        *v4 = 0LL;
        *a1 = v3;
        *v7 = v4;
        v7 = (__int64 **)v4;
      }
      else
      {
        a1 = (__int64 **)v3;
        v3 = (__int64 *)*v3;
      }
    }
    while ( v3 );
    v2 = v6;
  }
  if ( v2 )
  {
    do
    {
      v5 = (__int64 *)*v2;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v2 + 1);
      std::_Deallocate<16,0>((char *)v2, (const struct std::nothrow_t *)0x10);
      v2 = v5;
    }
    while ( v5 );
  }
}
