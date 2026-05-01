/*
 * XREFs of ??1STARTUPAPPINFO@@QEAA@XZ @ 0x1800BAA38
 * Callers:
 *     ??1?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@QEAA@XZ @ 0x1800B8E74 (--1-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@USTARTUPAPPINFO@@@st.c)
 *     ?StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z @ 0x1800B9260 (-StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z.c)
 *     ?CheckForNewStartupAppAdded@StartupFolderNotification@@UEAAX_N@Z @ 0x1800BC950 (-CheckForNewStartupAppAdded@StartupFolderNotification@@UEAAX_N@Z.c)
 *     ?CheckForNewStartupAppAdded@StartupRegKeyNotification@@UEAAX_N@Z @ 0x1801EEFA0 (-CheckForNewStartupAppAdded@StartupRegKeyNotification@@UEAAX_N@Z.c)
 *     ?UpdateNotificationMap@StartupAppMonitor@@SAJUSTARTUPAPPINFO@@@Z @ 0x180299D1C (-UpdateNotificationMap@StartupAppMonitor@@SAJUSTARTUPAPPINFO@@@Z.c)
 *     _StartupAppMonitor::StartupToastNotifier_::_1_::dtor$6 @ 0x1806CFD33 (_StartupAppMonitor--StartupToastNotifier_--_1_--dtor$6.c)
 *     _StartupFolderNotification::CheckForNewStartupAppAdded_::_1_::dtor$18 @ 0x1806D0037 (_StartupFolderNotification--CheckForNewStartupAppAdded_--_1_--dtor$18.c)
 *     _StartupRegKeyNotification::CheckForNewStartupAppAdded_::_1_::dtor$10 @ 0x1806D981F (_StartupRegKeyNotification--CheckForNewStartupAppAdded_--_1_--dtor$10.c)
 *     _StartupAppMonitor::UpdateNotificationMap_::_1_::dtor$0 @ 0x1806DC310 (_StartupAppMonitor--UpdateNotificationMap_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1802DF760 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

void __fastcall STARTUPAPPINFO::~STARTUPAPPINFO(STARTUPAPPINFO *this)
{
  unsigned __int64 v1; // rdx
  void *v3; // rcx
  const struct std::nothrow_t *v4; // rdx
  unsigned __int64 v5; // rdx
  void *v6; // rcx
  const struct std::nothrow_t *v7; // rdx
  unsigned __int64 v8; // rdx
  void *v9; // rcx
  const struct std::nothrow_t *v10; // rdx
  unsigned __int64 v11; // rdx
  void *v12; // rcx
  const struct std::nothrow_t *v13; // rdx
  unsigned __int64 v14; // rdx
  void *v15; // rcx
  const struct std::nothrow_t *v16; // rdx
  unsigned __int64 v17; // [rsp+40h] [rbp+20h] BYREF
  void *v18; // [rsp+48h] [rbp+28h] BYREF

  v1 = *((_QWORD *)this + 22);
  if ( v1 > 7 )
  {
    v3 = (void *)*((_QWORD *)this + 19);
    v4 = (const struct std::nothrow_t *)(2 * v1 + 2);
    v17 = (unsigned __int64)v4;
    v18 = v3;
    if ( (unsigned __int64)v4 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v18, &v17);
      v4 = (const struct std::nothrow_t *)v17;
      v3 = v18;
    }
    operator delete(v3, v4);
  }
  *((_QWORD *)this + 22) = 7LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_WORD *)this + 76) = 0;
  v5 = *((_QWORD *)this + 16);
  if ( v5 > 7 )
  {
    v6 = (void *)*((_QWORD *)this + 13);
    v7 = (const struct std::nothrow_t *)(2 * v5 + 2);
    v17 = (unsigned __int64)v7;
    v18 = v6;
    if ( (unsigned __int64)v7 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v18, &v17);
      v7 = (const struct std::nothrow_t *)v17;
      v6 = v18;
    }
    operator delete(v6, v7);
  }
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 7LL;
  *((_WORD *)this + 52) = 0;
  v8 = *((_QWORD *)this + 12);
  if ( v8 > 7 )
  {
    v9 = (void *)*((_QWORD *)this + 9);
    v10 = (const struct std::nothrow_t *)(2 * v8 + 2);
    v17 = (unsigned __int64)v10;
    v18 = v9;
    if ( (unsigned __int64)v10 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v18, &v17);
      v10 = (const struct std::nothrow_t *)v17;
      v9 = v18;
    }
    operator delete(v9, v10);
  }
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 7LL;
  *((_WORD *)this + 36) = 0;
  v11 = *((_QWORD *)this + 8);
  if ( v11 > 7 )
  {
    v12 = (void *)*((_QWORD *)this + 5);
    v13 = (const struct std::nothrow_t *)(2 * v11 + 2);
    v17 = (unsigned __int64)v13;
    v18 = v12;
    if ( (unsigned __int64)v13 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v18, &v17);
      v13 = (const struct std::nothrow_t *)v17;
      v12 = v18;
    }
    operator delete(v12, v13);
  }
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 7LL;
  *((_WORD *)this + 20) = 0;
  v14 = *((_QWORD *)this + 4);
  if ( v14 > 7 )
  {
    v15 = (void *)*((_QWORD *)this + 1);
    v16 = (const struct std::nothrow_t *)(2 * v14 + 2);
    v17 = (unsigned __int64)v16;
    v18 = v15;
    if ( (unsigned __int64)v16 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v18, &v17);
      v16 = (const struct std::nothrow_t *)v17;
      v15 = v18;
    }
    operator delete(v15, v16);
  }
  *((_QWORD *)this + 4) = 7LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_WORD *)this + 4) = 0;
}
