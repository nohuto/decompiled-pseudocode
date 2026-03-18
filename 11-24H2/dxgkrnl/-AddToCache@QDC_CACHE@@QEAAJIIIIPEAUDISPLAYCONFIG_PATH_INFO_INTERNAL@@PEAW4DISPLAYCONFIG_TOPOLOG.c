/*
 * XREFs of ?AddToCache@QDC_CACHE@@QEAAJIIIIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x14031EB28
 * Callers:
 *     ?DxgkLogAndUpdateQDCCacheForDatabaseQuery@@YAJIJIIIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@W4DISPLAYCONFIG_TOPOLOGY_ID@@_K@Z @ 0x1401C46D0 (-DxgkLogAndUpdateQDCCacheForDatabaseQuery@@YAJIJIIIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@W4DISPL.c)
 *     ?QueryDisplayConfigInternal@@YAJ_NIIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x14031CFA0 (-QueryDisplayConfigInternal@@YAJ_NIIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFI.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x140034510 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CompareEntry@QDC_CACHE@@AEAA_NPEAUQDC_CACHE_ENTRY@1@IIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x14031EDF4 (-CompareEntry@QDC_CACHE@@AEAA_NPEAUQDC_CACHE_ENTRY@1@IIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 *     ?FreeAllocationsForEntry@QDC_CACHE@@AEAAXPEAUQDC_CACHE_ENTRY@1@@Z @ 0x14031FB7C (-FreeAllocationsForEntry@QDC_CACHE@@AEAAXPEAUQDC_CACHE_ENTRY@1@@Z.c)
 */

__int64 __fastcall QDC_CACHE::AddToCache(
        QDC_CACHE *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *Src,
        enum DISPLAYCONFIG_TOPOLOGY_ID *a7)
{
  int v7; // r14d
  int v8; // r15d
  __int64 v9; // rsi
  DXGPROCESS *Current; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  QDC_CACHE *v16; // rcx
  unsigned int v17; // eax
  QDC_CACHE *i; // rbx
  __int64 result; // rax
  unsigned int j; // eax
  void *v21; // rax
  unsigned __int64 v22; // rax
  QDC_CACHE *v23; // rcx
  unsigned int v24; // ebx
  QDC_CACHE *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  _BYTE v28[16]; // [rsp+50h] [rbp-28h] BYREF

  v7 = a4;
  v8 = a3;
  v9 = (unsigned int)a2;
  if ( *(_BYTE *)this )
  {
    WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    result = 3221225659LL;
    WdLogGlobalForLineNumber = 446;
  }
  else
  {
    Current = DXGPROCESS::GetCurrent((__int64)this);
    if ( DXGPROCESS::IsRemoteConnection(Current) )
      return 0LL;
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v28, (QDC_CACHE *)((char *)this + 8), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v28);
    if ( !a5 )
    {
LABEL_12:
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v28);
      return 0LL;
    }
    if ( (_DWORD)v9 == *((_DWORD *)this + 158) )
    {
      v16 = (QDC_CACHE *)((char *)this + 56);
      v17 = 0;
      for ( i = (QDC_CACHE *)((char *)this + 56); ; i = (QDC_CACHE *)((char *)i + 32) )
      {
        if ( v17 >= 0x12 )
          goto LABEL_14;
        if ( *(_BYTE *)i && *((_DWORD *)i + 1) == v7 )
          break;
        ++v17;
      }
      if ( !i )
      {
LABEL_14:
        i = v16;
        for ( j = 0; j < 0x12; ++j )
        {
          if ( !*(_BYTE *)i )
          {
            if ( i )
              goto LABEL_18;
            break;
          }
          i = (QDC_CACHE *)((char *)i + 32);
        }
        WdLogNewEntry5_WdTrace(v16, v12, v14, v15);
        WdLogGlobalForLineNumber = 504;
        v24 = -1073741671;
        goto LABEL_28;
      }
      if ( QDC_CACHE::CompareEntry(v16, i, v14, a5, Src) )
        goto LABEL_12;
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 492;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"Paths being added is different to valid cached one",
        492LL,
        0LL,
        0LL,
        0LL,
        0LL);
      QDC_CACHE::FreeAllocationsForEntry(v25, i);
LABEL_18:
      if ( *((_DWORD *)i + 2) != a5 )
        QDC_CACHE::FreeAllocationsForEntry(v16, i);
      v21 = (void *)*((_QWORD *)i + 2);
      if ( !v21 )
      {
        v22 = 216LL * a5;
        if ( !is_mul_ok(a5, 0xD8uLL) )
          v22 = -1LL;
        v21 = (void *)operator new[](v22, 0x43434451u, 256LL);
        *((_QWORD *)i + 2) = v21;
        if ( !v21 )
        {
          QDC_CACHE::FreeAllocationsForEntry(v23, i);
          WdLogSingleEntry0(6LL);
          WdLogGlobalForLineNumber = 527;
          DxgkLogInternalTriageEvent(
            0LL,
            262145LL,
            0xFFFFFFFFLL,
            L"Failed to allocate path or mode arrays for cache",
            527LL,
            0LL,
            0LL,
            0LL,
            0LL);
          v24 = -1073741801;
          goto LABEL_28;
        }
      }
      memmove(v21, Src, 216LL * a5);
      if ( a7 )
        *((_DWORD *)i + 6) = *(_DWORD *)a7;
      *((_DWORD *)i + 7) = v8;
      *((_DWORD *)i + 2) = a5;
      *(_BYTE *)i = 1;
      *((_DWORD *)i + 1) = v7;
      goto LABEL_12;
    }
    v26 = WdLogNewEntry5_WdTrace(v13, v12, v14, v15);
    v27 = *((unsigned int *)this + 158);
    v24 = -1071774921;
    *(_QWORD *)(v26 + 24) = v27;
    *(_QWORD *)(v26 + 32) = v9;
    WdLogGlobalForLineNumber = 475;
LABEL_28:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v28);
    return v24;
  }
  return result;
}
