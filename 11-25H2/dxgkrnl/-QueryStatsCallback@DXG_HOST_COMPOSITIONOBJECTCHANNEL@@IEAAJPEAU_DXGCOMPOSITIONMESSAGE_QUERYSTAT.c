/*
 * XREFs of ?QueryStatsCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_QUERYSTATS@@PEAU_DXGCOMPOSITIONMESSAGE_QUERYSTATS_RETURN@@@Z @ 0x1401B4C5C
 * Callers:
 *     ?ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1401B46E0 (-ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?AddRef@DxgkCompositionObject@@QEBAJXZ @ 0x1400379DC (-AddRef@DxgkCompositionObject@@QEBAJXZ.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x14003E990 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXG_HOST_COMPOSITIONOBJECTCHANNEL::QueryStatsCallback(
        DXG_HOST_COMPOSITIONOBJECTCHANNEL *this,
        struct _DXGCOMPOSITIONMESSAGE_QUERYSTATS *a2,
        struct _DXGCOMPOSITIONMESSAGE_QUERYSTATS_RETURN *a3)
{
  unsigned int v6; // ebx
  DxgkCompositionObject *v7; // rsi
  struct DXGPROCESS *Current; // rax
  struct DXGFASTMUTEX *v9; // rax
  DxgkCompositionObject *v10; // rax
  int v11; // eax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  _BYTE v17[16]; // [rsp+20h] [rbp-98h] BYREF
  _OWORD v18[5]; // [rsp+30h] [rbp-88h] BYREF

  v6 = -1073741811;
  v7 = 0LL;
  Current = DXGPROCESS::GetCurrent();
  if ( (*(unsigned int (**)(void))(*((_QWORD *)Current + 11) + 232LL))() )
  {
    v9 = (struct DXGFASTMUTEX *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 48LL))(*((_QWORD *)this + 1));
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, v9, 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
    v10 = (DxgkCompositionObject *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 1) + 72LL))(
                                     *((_QWORD *)this + 1),
                                     *((unsigned int *)a2 + 3),
                                     17LL);
    if ( v10 )
    {
      v7 = v10;
      DxgkCompositionObject::AddRef(v10);
    }
    else
    {
      WdLogSingleEntry1(3LL, -1073741811LL);
      WdLogGlobalForLineNumber = 696;
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v17);
  }
  else
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
    WdLogGlobalForLineNumber = 701;
  }
  if ( v7 )
  {
    memset(v18, 0, sizeof(v18));
    v11 = (*(__int64 (__fastcall **)(_QWORD *, _OWORD *))(*((_QWORD *)v7 + 4) + 48LL))((_QWORD *)v7 + 4, v18);
    v6 = v11;
    if ( v11 < 0 )
    {
      WdLogSingleEntry1(3LL, v11);
      WdLogGlobalForLineNumber = 715;
    }
    else
    {
      v12 = v18[1];
      *((_OWORD *)a3 + 1) = v18[0];
      v13 = v18[2];
      *((_OWORD *)a3 + 2) = v12;
      v14 = v18[3];
      *((_OWORD *)a3 + 3) = v13;
      v15 = v18[4];
      *((_OWORD *)a3 + 4) = v14;
      *((_OWORD *)a3 + 5) = v15;
    }
    DxgkCompositionObject::Release(v7);
  }
  *((_DWORD *)a3 + 1) = v6;
  return v6;
}
