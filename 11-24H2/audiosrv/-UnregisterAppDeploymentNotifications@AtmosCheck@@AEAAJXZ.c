/*
 * XREFs of ?UnregisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ @ 0x18015F1DC
 * Callers:
 *     ?Uninitialize@AtmosCheck@@QEAAXXZ @ 0x18015EF40 (-Uninitialize@AtmosCheck@@QEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180016CE8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Trace@AtmosCheck@@AEAAXPEBDJ@Z @ 0x180055788 (-Trace@AtmosCheck@@AEAAXPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AtmosCheck::UnregisterAppDeploymentNotifications(AtmosCheck *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  int v3; // edi
  __int64 v4; // rcx
  AtmosCheck *v5; // rcx
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rcx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  v3 = 0;
  if ( *((_QWORD *)this + 18) )
  {
    v4 = *((_QWORD *)this + 6);
    if ( v4 )
    {
      v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 72LL))(v4);
      if ( v3 < 0 )
        goto LABEL_14;
      *((_QWORD *)this + 18) = 0LL;
    }
  }
  if ( *((_QWORD *)this + 19) )
  {
    v7 = *((_QWORD *)this + 6);
    if ( v7 )
    {
      v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 104LL))(v7);
      if ( v3 < 0 )
        goto LABEL_14;
      *((_QWORD *)this + 19) = 0LL;
    }
  }
  if ( *((_QWORD *)this + 20) )
  {
    v8 = *((_QWORD *)this + 6);
    if ( v8 )
    {
      v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 88LL))(v8);
      if ( v3 < 0 )
        goto LABEL_14;
      *((_QWORD *)this + 20) = 0LL;
    }
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)this + 6);
LABEL_14:
  AtmosCheck::Trace(v5, "UnregAppDepNotification result", (unsigned int)v3, v6);
  if ( v2 )
    LeaveCriticalSection(v2);
  return (unsigned int)v3;
}
