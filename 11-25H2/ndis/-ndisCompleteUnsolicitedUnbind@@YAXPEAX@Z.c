/*
 * XREFs of ?ndisCompleteUnsolicitedUnbind@@YAXPEAX@Z @ 0x14015D2A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_Ld @ 0x140072CB0 (WPP_RECORDER_SF_Ld.c)
 *     WPP_RECORDER_SF_Zq @ 0x140074520 (WPP_RECORDER_SF_Zq.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x14015D9B0 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140162770 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 */

void __fastcall ndisCompleteUnsolicitedUnbind(_QWORD *a1)
{
  __int64 v1; // rdi
  _DWORD *v3; // rbx
  int v4; // edx
  bool v5; // cf

  v1 = a1[2];
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v1 + 5144, 0LL);
  v3 = (_DWORD *)a1[107];
  v4 = v3[8];
  v3[8] = v4 | 0x10;
  if ( !v4 || !*(_QWORD *)v3 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
      WPP_RECORDER_SF_Ld(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5u,
        0x1Cu,
        0xEu,
        (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
        v4,
        v4 | 0x10);
    v5 = (unsigned __int8)byte_140126C63 < 4u;
    *(_BYTE *)(*(_QWORD *)v3 + 5224LL) = 1;
    if ( !v5 && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Zq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        *(_QWORD *)(*(_QWORD *)(a1[107] + 80LL) + 24LL),
        0x1Cu,
        0xEu,
        (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
        *(unsigned __int16 **)(*(_QWORD *)(a1[107] + 80LL) + 24LL),
        *(_QWORD *)a1[107]);
  }
  Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(v1 + 5120));
  Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(v1 + 5120), RunSynchronous, 0);
}
