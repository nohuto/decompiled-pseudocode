/*
 * XREFs of ?EndInertia@CInertiaManager@@QEAA_NXZ @ 0x14020ED30
 * Callers:
 *     xxxProcessKeyEvent @ 0x1400FB6E0 (xxxProcessKeyEvent.c)
 * Callees:
 *     RIMGetVirtualDesktopPhysicalSize @ 0x140053BB0 (RIMGetVirtualDesktopPhysicalSize.c)
 *     ?GetUnionRegion@Mouse@InputConfig@@SA?AUCInputSpaceRegion@@XZ @ 0x140053C20 (-GetUnionRegion@Mouse@InputConfig@@SA-AUCInputSpaceRegion@@XZ.c)
 *     ?QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z @ 0x1400D9E50 (-QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z.c)
 *     ?InvalidateInertiaInfo@CInertiaManager@@QEAA_N_K0@Z @ 0x1400DA524 (-InvalidateInertiaInfo@CInertiaManager@@QEAA_N_K0@Z.c)
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x14014D108 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 *     ConvertPointCoordinates @ 0x1401584C4 (ConvertPointCoordinates.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

char __fastcall CInertiaManager::EndInertia(CInertiaManager *this)
{
  __int64 v2; // rbx
  __int64 *Inertia; // rdi
  CInertiaManager *v4; // rcx
  struct tagPOINT v6; // [rsp+30h] [rbp-328h] BYREF
  __int128 v7; // [rsp+40h] [rbp-318h] BYREF
  __int128 v8; // [rsp+50h] [rbp-308h] BYREF
  _BYTE v9[16]; // [rsp+60h] [rbp-2F8h] BYREF
  _OWORD v10[45]; // [rsp+70h] [rbp-2E8h] BYREF

  v2 = *(_QWORD *)(W32GetUserSessionState(this) + 19240);
  Inertia = (__int64 *)CInertiaManager::QueryInertia((__int64)this, v2, 15);
  if ( Inertia
    && (v6 = 0LL,
        v7 = *(_OWORD *)RIMGetVirtualDesktopPhysicalSize((__int64)v9),
        v8 = *InputConfig::Mouse::GetUnionRegion(v10),
        (unsigned int)ConvertPointCoordinates(v2, (int *)&v8, (int *)&v7, &v6))
    && CInertiaManager::PostInertiaMessage(v4, 0x23Cu, (CInertiaManager *)((char *)this + 8), (struct tagPOINT)v2, v6) )
  {
    return CInertiaManager::InvalidateInertiaInfo(this, *Inertia, Inertia[1]);
  }
  else
  {
    return 0;
  }
}
