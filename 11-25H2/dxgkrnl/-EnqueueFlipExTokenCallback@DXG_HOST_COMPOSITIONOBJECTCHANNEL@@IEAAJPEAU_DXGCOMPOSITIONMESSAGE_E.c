/*
 * XREFs of ?EnqueueFlipExTokenCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_ENQUEUEFLIPEXTOKEN@@PEAU_DXGCOMPOSITIONMESSAGE_ENQUEUEFLIPEXTOKEN_RETURN@@@Z @ 0x1401B3510
 * Callers:
 *     ?ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1401B46E0 (-ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x140021E58 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?AddRef@DxgkCompositionObject@@QEBAJXZ @ 0x1400379DC (-AddRef@DxgkCompositionObject@@QEBAJXZ.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x14003E990 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXG_HOST_COMPOSITIONOBJECTCHANNEL::EnqueueFlipExTokenCallback(
        DXG_HOST_COMPOSITIONOBJECTCHANNEL *this,
        struct _DXGCOMPOSITIONMESSAGE_ENQUEUEFLIPEXTOKEN *a2,
        struct _DXGCOMPOSITIONMESSAGE_ENQUEUEFLIPEXTOKEN_RETURN *a3)
{
  unsigned int v6; // ebx
  DxgkCompositionObject *v7; // rdi
  BOOL v8; // esi
  struct DXGPROCESS *Current; // rax
  struct DXGFASTMUTEX *v10; // rax
  DxgkCompositionObject *v11; // rax
  int v12; // eax
  _BYTE v14[16]; // [rsp+50h] [rbp-38h] BYREF
  _BYTE v15[16]; // [rsp+60h] [rbp-28h] BYREF

  v6 = -1073741811;
  v7 = 0LL;
  v8 = 0;
  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v15);
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    if ( (*((_DWORD *)Current + 102) & 0x800) == 0 )
      v8 = (*(__int64 (**)(void))(*((_QWORD *)Current + 11) + 232LL))() != 0;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 609;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid process context. Returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v15);
  if ( v8 )
  {
    v10 = (struct DXGFASTMUTEX *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 48LL))(*((_QWORD *)this + 1));
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, v10, 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
    v11 = (DxgkCompositionObject *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 1) + 72LL))(
                                     *((_QWORD *)this + 1),
                                     *((unsigned int *)a2 + 3),
                                     17LL);
    if ( v11 )
    {
      v7 = v11;
      DxgkCompositionObject::AddRef(v11);
    }
    else
    {
      WdLogSingleEntry1(3LL, -1073741811LL);
      WdLogGlobalForLineNumber = 636;
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v14);
    if ( v7 )
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD, char *))(*((_QWORD *)v7 + 4) + 40LL))(
              (_QWORD *)v7 + 4,
              *((_QWORD *)a2 + 2),
              *((_QWORD *)a2 + 3),
              (char *)a2 + 32);
      v6 = v12;
      if ( v12 < 0 )
      {
        WdLogSingleEntry1(3LL, v12);
        WdLogGlobalForLineNumber = 652;
      }
      DxgkCompositionObject::Release(v7);
    }
  }
  else
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
    WdLogGlobalForLineNumber = 641;
  }
  *((_DWORD *)a3 + 1) = v6;
  return v6;
}
