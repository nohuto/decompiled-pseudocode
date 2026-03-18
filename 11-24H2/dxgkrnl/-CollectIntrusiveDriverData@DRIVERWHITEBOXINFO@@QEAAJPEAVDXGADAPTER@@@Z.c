/*
 * XREFs of ?CollectIntrusiveDriverData@DRIVERWHITEBOXINFO@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1401BF860
 * Callers:
 *     ?AddDriverWhiteboxInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJXZ @ 0x1401BEB20 (-AddDriverWhiteboxInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14000BE00 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140023358 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140024690 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B8F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030E28 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x14003E58C (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?DdiGetDisplayStateIntrusive@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETDISPLAYSTATE_INTRUSIVE@@@Z @ 0x1401A5E2C (-DdiGetDisplayStateIntrusive@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETDISPLAYSTATE_INTRUSIVE@@@Z.c)
 */

__int64 __fastcall DRIVERWHITEBOXINFO::CollectIntrusiveDriverData(DRIVERWHITEBOXINFO *this, ADAPTER_DISPLAY **a2)
{
  __int64 v4; // rbx
  _QWORD *v5; // rbx
  unsigned int v6; // edi
  _QWORD *v7; // rdx
  const struct DMMVIDEOPRESENTTARGET *i; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  char *v11; // rdx
  int DisplayStateIntrusive; // esi
  __int64 v13; // rax
  char *v14; // rcx
  ADAPTER_DISPLAY *v15; // rcx
  _DWORD v17[2]; // [rsp+50h] [rbp-38h] BYREF
  char *v18; // [rsp+58h] [rbp-30h]
  __int64 v19; // [rsp+98h] [rbp+10h] BYREF
  __int64 v20; // [rsp+A0h] [rbp+18h] BYREF

  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1594;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pDisplayAdapter != nullptr", 1594LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)a2) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1595;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"pDisplayAdapter->IsCoreResourceSharedOwner()",
      1595LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v4 = *((_QWORD *)a2[390] + 13);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v20, v4);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v4 + 120) + 72LL));
  v5 = *(_QWORD **)(v4 + 120);
  v6 = 0;
  v7 = (_QWORD *)v5[3];
  if ( v7 != v5 + 3 )
  {
    for ( i = (const struct DMMVIDEOPRESENTTARGET *)(v7 - 1);
          i;
          i = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v5, i) )
    {
      if ( v6 >= 4 )
        break;
      if ( *((_QWORD *)i + 14) )
      {
        v9 = 264LL * v6++;
        *(_DWORD *)((char *)this + v9 + 228) = *((_DWORD *)i + 6);
        *(_DWORD *)((char *)this + v9 + 472) = -1;
        *(_DWORD *)((char *)this + v9 + 476) = -1;
      }
    }
  }
  v19 = operator new[](8 * v6, 0x4B677844u, 256LL);
  v11 = (char *)v19;
  if ( v19 )
  {
    if ( v6 )
    {
      v13 = 0LL;
      v10 = v6;
      v14 = (char *)this + 228;
      do
      {
        *(_QWORD *)&v11[v13] = v14;
        v14 += 264;
        v13 += 8LL;
        --v10;
      }
      while ( v10 );
    }
    v15 = a2[390];
    v18 = v11;
    v17[0] = v6;
    v17[1] = 264;
    DisplayStateIntrusive = ADAPTER_DISPLAY::DdiGetDisplayStateIntrusive(
                              v15,
                              (struct _DXGKARG_GETDISPLAYSTATE_INTRUSIVE *)v17,
                              v10);
    if ( DisplayStateIntrusive >= 0 )
      *((_DWORD *)this + 321) = v6;
    wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset((void **)&v19);
    if ( v5 )
      ReferenceCounted::Release((ReferenceCounted *)(v5 + 8));
  }
  else
  {
    WdLogSingleEntry1(6LL, 8 * v6);
    WdLogGlobalForLineNumber = 1634;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Out of memory allocating black screen intrusive data (size 0x%I64x)",
      8 * v6,
      0LL,
      0LL,
      0LL,
      0LL);
    wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset((void **)&v19);
    if ( v5 )
      ReferenceCounted::Release((ReferenceCounted *)(v5 + 8));
    DisplayStateIntrusive = -1073741801;
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v20 + 40));
  return (unsigned int)DisplayStateIntrusive;
}
