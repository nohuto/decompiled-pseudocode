/*
 * XREFs of ?DmmGetTargetUsage@@YA?AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@IPEA_N@Z @ 0x1403087EC
 * Callers:
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1403085C0 (DxgkIsVirtualizationDisabledForTarget.c)
 *     ?DmmIsTargetNonStandard@@YA_NPEAVDXGADAPTER@@I@Z @ 0x1403092E4 (-DmmIsTargetNonStandard@@YA_NPEAVDXGADAPTER@@I@Z.c)
 *     ?ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1403B00D8 (-ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_D.c)
 *     DxgkGetAdapterDeviceDesc @ 0x140412B00 (DxgkGetAdapterDeviceDesc.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14000BE00 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140024690 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030E28 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1400369D0 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 */

__int64 __fastcall DmmGetTargetUsage(__int64 a1, int a2, _BYTE *a3)
{
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  unsigned int v10; // edi
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF

  if ( !*(_QWORD *)(a1 + 3120) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 15051;
  }
  if ( a3 )
    *a3 = 0;
  v6 = *(_QWORD *)(a1 + 3120);
  v7 = *(_QWORD *)(v6 + 104);
  if ( v7 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v12, *(_QWORD *)(v6 + 104));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v7 + 120) + 72LL));
    v8 = *(_QWORD *)(v7 + 120);
    TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v8, a2);
    if ( TargetById )
    {
      if ( a3 )
        *a3 = *((_BYTE *)TargetById + 96);
      v10 = *((_DWORD *)TargetById + 23);
      if ( v8 )
        ReferenceCounted::Release((ReferenceCounted *)(v8 + 64));
    }
    else
    {
      if ( v8 )
        ReferenceCounted::Release((ReferenceCounted *)(v8 + 64));
      v10 = 0;
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v12 + 40));
    return v10;
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 15065;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Fail to get VidPnMgr on adapter 0x%I64x!",
      a1,
      0LL,
      0LL,
      0LL,
      0LL);
    return 0LL;
  }
}
