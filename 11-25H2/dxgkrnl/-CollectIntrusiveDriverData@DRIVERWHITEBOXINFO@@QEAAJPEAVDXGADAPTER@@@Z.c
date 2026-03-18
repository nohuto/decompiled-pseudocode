/*
 * XREFs of ?CollectIntrusiveDriverData@DRIVERWHITEBOXINFO@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1401BCEB0
 * Callers:
 *     ?AddDriverWhiteboxInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJXZ @ 0x1401BC1A0 (-AddDriverWhiteboxInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B150 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030728 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x14003EB9C (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140058B34 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     ?DdiGetDisplayStateIntrusive@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETDISPLAYSTATE_INTRUSIVE@@@Z @ 0x1401A3910 (-DdiGetDisplayStateIntrusive@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETDISPLAYSTATE_INTRUSIVE@@@Z.c)
 */

__int64 __fastcall DRIVERWHITEBOXINFO::CollectIntrusiveDriverData(DRIVERWHITEBOXINFO *this, ADAPTER_DISPLAY **a2)
{
  __int64 v4; // rbx
  __int64 v5; // r9
  _QWORD *v6; // rbx
  unsigned int v7; // edi
  _QWORD *v8; // rdx
  const struct DMMVIDEOPRESENTTARGET *i; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  char *v12; // rdx
  int DisplayStateIntrusive; // esi
  __int64 v14; // rax
  char *v15; // rcx
  ADAPTER_DISPLAY *v16; // rcx
  _DWORD v18[2]; // [rsp+50h] [rbp-38h] BYREF
  char *v19; // [rsp+58h] [rbp-30h]
  __int64 v20; // [rsp+98h] [rbp+10h] BYREF
  __int64 v21; // [rsp+A0h] [rbp+18h] BYREF

  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1594;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pDisplayAdapter != nullptr", 1594LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)a2) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1595;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"pDisplayAdapter->IsCoreResourceSharedOwner()",
      1595LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v4 = *((_QWORD *)a2[390] + 13);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v21, v4);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v4 + 120) + 72LL));
  v6 = *(_QWORD **)(v4 + 120);
  v7 = 0;
  v8 = (_QWORD *)v6[3];
  if ( v8 != v6 + 3 )
  {
    for ( i = (const struct DMMVIDEOPRESENTTARGET *)(v8 - 1);
          i;
          i = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v6, i) )
    {
      if ( v7 >= 4 )
        break;
      if ( *((_QWORD *)i + 14) )
      {
        v10 = 264LL * v7++;
        *(_DWORD *)((char *)this + v10 + 228) = *((_DWORD *)i + 6);
        *(_DWORD *)((char *)this + v10 + 472) = -1;
        *(_DWORD *)((char *)this + v10 + 476) = -1;
      }
    }
  }
  v20 = operator new[](8 * v7, 0x4B677844u, 256LL, v5);
  v12 = (char *)v20;
  if ( v20 )
  {
    if ( v7 )
    {
      v14 = 0LL;
      v11 = v7;
      v15 = (char *)this + 228;
      do
      {
        *(_QWORD *)&v12[v14] = v15;
        v15 += 264;
        v14 += 8LL;
        --v11;
      }
      while ( v11 );
    }
    v16 = a2[390];
    v19 = v12;
    v18[0] = v7;
    v18[1] = 264;
    DisplayStateIntrusive = ADAPTER_DISPLAY::DdiGetDisplayStateIntrusive(
                              v16,
                              (struct _DXGKARG_GETDISPLAYSTATE_INTRUSIVE *)v18,
                              v11);
    if ( DisplayStateIntrusive >= 0 )
      *((_DWORD *)this + 321) = v7;
    wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset((void **)&v20);
    if ( v6 )
      ReferenceCounted::Release((ReferenceCounted *)(v6 + 8));
  }
  else
  {
    WdLogSingleEntry1(6LL, 8 * v7);
    WdLogGlobalForLineNumber = 1634;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Out of memory allocating black screen intrusive data (size 0x%I64x)",
      8 * v7,
      0LL,
      0LL,
      0LL,
      0LL);
    wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset((void **)&v20);
    if ( v6 )
      ReferenceCounted::Release((ReferenceCounted *)(v6 + 8));
    DisplayStateIntrusive = -1073741801;
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v21 + 40));
  return (unsigned int)DisplayStateIntrusive;
}
