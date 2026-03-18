/*
 * XREFs of ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x14000D610
 * Callers:
 *     HmgIsObjectOwnedByW32Pid @ 0x14000D598 (HmgIsObjectOwnedByW32Pid.c)
 *     ?SetCachedDpiScaleValue@DC@@QEAAXJ@Z @ 0x14000D8C0 (-SetCachedDpiScaleValue@DC@@QEAAXJ@Z.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1400150B4 (-vCleanupDCs@@YAXK@Z.c)
 *     ?GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ @ 0x140034BE0 (-GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ.c)
 *     ?vReleaseRao@DC@@QEAAXXZ @ 0x140035740 (-vReleaseRao@DC@@QEAAXXZ.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1401211B0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x140174090 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT_FAST_OPT@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVLFONT@@@Z @ 0x1401C1A94 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT_FAST_OPT@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVLFONT@@@Z.c)
 *     ?ReportOverflow@OBJECT@@QEAAXK@Z @ 0x1401C1EE0 (-ReportOverflow@OBJECT@@QEAAXK@Z.c)
 *     HmgPentryFromPobjFast @ 0x1401C23C0 (HmgPentryFromPobjFast.c)
 *     ?vUpdate_VisRectFastOpt@DC@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@AEBVRustAutoHotpatchLockSH@@PEAVREGION@@@Z @ 0x1401C2EF0 (-vUpdate_VisRectFastOpt@DC@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@AEBVRustAutoHotpatchLockSH@@PEAVR.c)
 *     ?vReleaseRaoFastOpt@DC@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401C33A0 (-vReleaseRaoFastOpt@DC@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?FreeDCAttributesFastOpt@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVDC@@@Z @ 0x1401C577C (-FreeDCAttributesFastOpt@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVDC@@@Z.c)
 * Callees:
 *     <none>
 */

struct _ENTRY *__fastcall GdiHandleManager::GetEntryFromObject(GdiHandleManager *this, struct OBJECT *a2)
{
  unsigned int v4; // eax
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // r11d
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // r9
  unsigned int v11; // r8d
  __int64 v12; // r11
  unsigned int v13; // ecx
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // r11
  unsigned int v17; // esi
  __int64 v18; // r11
  __int64 v19; // rcx
  __int64 v20; // r10
  unsigned int v21; // r8d
  __int64 v22; // r11
  struct OBJECT *v23; // rdx

  v4 = (unsigned __int16)*(_DWORD *)a2 | (*(_DWORD *)a2 >> 8) & 0xFF0000;
  if ( v4 >= 0x10000 )
  {
    v5 = (unsigned __int16)*(_DWORD *)a2;
    if ( *(_DWORD *)this <= 0x10000u )
    {
      v4 = (unsigned __int16)*(_DWORD *)a2;
    }
    else
    {
      v6 = *((_QWORD *)this + 2);
      v7 = *(_DWORD *)(v6 + 2056);
      if ( (unsigned __int16)*(_DWORD *)a2 >= v7 + ((*(unsigned __int16 *)(v6 + 2) + 0xFFFF) << 16) )
      {
        v9 = 0LL;
      }
      else
      {
        if ( (unsigned __int16)*(_DWORD *)a2 >= v7 )
        {
          v8 = *(_QWORD *)(v6 + 8LL * ((((unsigned __int16)*(_DWORD *)a2 - v7) >> 16) + 1) + 8);
          v5 = -65536 * (((unsigned __int16)v4 - v7) >> 16) - v7 + (unsigned __int16)v4;
        }
        else
        {
          v8 = *(_QWORD *)(v6 + 8);
        }
        v9 = 0LL;
        if ( (unsigned int)v5 < *(_DWORD *)(v8 + 20) )
          v9 = *(_QWORD *)v8 + 24 * v5;
      }
      if ( *(unsigned __int8 *)(v9 + 13) == HIWORD(v4) )
        v4 = (unsigned __int16)*(_DWORD *)a2;
    }
  }
  v10 = *((_QWORD *)this + 2);
  v11 = *(_DWORD *)(v10 + 2056);
  if ( v4 >= v11 + ((*(unsigned __int16 *)(v10 + 2) + 0xFFFF) << 16) )
  {
    v14 = 0LL;
  }
  else
  {
    if ( v4 >= v11 )
    {
      v12 = *(_QWORD *)(v10 + 8LL * (((v4 - v11) >> 16) + 1) + 8);
      v13 = v4 + -65536 * ((v4 - v11) >> 16) - v11;
    }
    else
    {
      v12 = *(_QWORD *)(v10 + 8);
      v13 = v4;
    }
    v14 = 0LL;
    if ( v13 < *(_DWORD *)(v12 + 20)
      && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v12 + 24) + 8 * ((unsigned __int64)v13 >> 8))
                   + 16LL * (unsigned __int8)v13
                   + 8) )
    {
      v14 = *(_QWORD *)v12 + 24LL * v13;
    }
  }
  if ( v4 >= 0x10000 )
  {
    v15 = (unsigned __int16)v4;
    if ( *(_DWORD *)this <= 0x10000u )
    {
      v4 = (unsigned __int16)v4;
    }
    else
    {
      v16 = *((_QWORD *)this + 2);
      v17 = *(_DWORD *)(v16 + 2056);
      if ( (unsigned __int16)v4 >= v17 + ((*(unsigned __int16 *)(v16 + 2) + 0xFFFF) << 16) )
      {
        v19 = 0LL;
      }
      else
      {
        if ( (unsigned __int16)v4 >= v17 )
        {
          v18 = *(_QWORD *)(v16 + 8LL * ((((unsigned __int16)v4 - v17) >> 16) + 1) + 8);
          v15 = -65536 * (((unsigned __int16)v4 - v17) >> 16) - v17 + (unsigned __int16)v4;
        }
        else
        {
          v18 = *(_QWORD *)(v16 + 8);
        }
        v19 = 0LL;
        if ( (unsigned int)v15 < *(_DWORD *)(v18 + 20) )
          v19 = *(_QWORD *)v18 + 24 * v15;
      }
      if ( *(unsigned __int8 *)(v19 + 13) == HIWORD(v4) )
        v4 = (unsigned __int16)v4;
    }
  }
  v20 = *((_QWORD *)this + 2);
  v21 = *(_DWORD *)(v20 + 2056);
  if ( v4 >= v21 + ((*(unsigned __int16 *)(v20 + 2) + 0xFFFF) << 16)
    || (v4 >= v21
      ? (v22 = *(_QWORD *)(v20 + 8LL * (((v4 - v21) >> 16) + 1) + 8), v4 += -65536 * ((v4 - v21) >> 16) - v21)
      : (v22 = *(_QWORD *)(v20 + 8)),
        v4 >= *(_DWORD *)(v22 + 20)) )
  {
    v23 = 0LL;
  }
  else
  {
    v23 = *(struct OBJECT **)(*(_QWORD *)(**(_QWORD **)(v22 + 24) + 8 * ((unsigned __int64)v4 >> 8))
                            + 16LL * (unsigned __int8)v4
                            + 8);
  }
  if ( v23 != a2 )
    return 0LL;
  return (struct _ENTRY *)v14;
}
