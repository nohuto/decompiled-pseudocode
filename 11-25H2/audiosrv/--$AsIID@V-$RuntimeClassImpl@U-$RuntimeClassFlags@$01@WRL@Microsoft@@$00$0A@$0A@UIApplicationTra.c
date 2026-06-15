/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationTracker@@UIHostedApplicationTracker@@UIFastRundown@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationTracker@@UIHostedApplicationTracker@@UIFastRundown@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180070FA4
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationTracker@@UIHostedApplicationTracker@@UIFastRundown@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800833A0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicat.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationTracker,IHostedApplicationTracker,IFastRundown>>(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  int v4; // ebx

  *a3 = 0LL;
  if ( *a2
    || a2[1] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    || a2[2] != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || a2[3] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    if ( *a2 == -1715052124
      && a2[1] == *(_DWORD *)&GUID_99c661a4_f1ad_4e9a_9bf4_bd4e327ed9a4.Data2
      && a2[2] == *(_DWORD *)GUID_99c661a4_f1ad_4e9a_9bf4_bd4e327ed9a4.Data4
      && a2[3] == *(_DWORD *)&GUID_99c661a4_f1ad_4e9a_9bf4_bd4e327ed9a4.Data4[4]
      || (a1 += 8LL, *a2 == 903565125)
      && a2[1] == *(_DWORD *)&GUID_35db4f45_796a_4051_ae98_d798f0c563e4.Data2
      && a2[2] == *(_DWORD *)GUID_35db4f45_796a_4051_ae98_d798f0c563e4.Data4
      && a2[3] == *(_DWORD *)&GUID_35db4f45_796a_4051_ae98_d798f0c563e4.Data4[4] )
    {
      *a3 = a1;
      v4 = 0;
    }
    else
    {
      v3 = a1 + 8;
      if ( *a2 == 64
        && a2[1] == *(_DWORD *)&GUID_00000040_0000_0000_c000_000000000046.Data2
        && a2[2] == *(_DWORD *)GUID_00000040_0000_0000_c000_000000000046.Data4
        && a2[3] == *(_DWORD *)&GUID_00000040_0000_0000_c000_000000000046.Data4[4] )
      {
        *a3 = v3;
        v4 = 0;
      }
      else
      {
        v4 = -2147467262;
      }
      if ( v4 < 0 )
        return (unsigned int)v4;
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
    return (unsigned int)v4;
  }
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return 0LL;
}
