/*
 * XREFs of ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1403364E8
 * Callers:
 *     DxgkCreateLightweightDeviceAndContext @ 0x1401A9A08 (DxgkCreateLightweightDeviceAndContext.c)
 *     DxgkCreateContext @ 0x1401B61B0 (DxgkCreateContext.c)
 *     ?DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z @ 0x140338218 (-DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x14040373C (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAP.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400136BC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x14002B720 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ??_GDXGCONTEXT@@QEAAPEAXI@Z @ 0x140034A34 (--_GDXGCONTEXT@@QEAAPEAXI@Z.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z @ 0x140035C88 (--2-$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x140335B54 (-DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1403367F0 (-Initialize@DXGCONTEXT@@QEAAJPEAXI@Z.c)
 *     ??0DXGCONTEXT@@QEAA@PEAVDXGDEVICE@@IIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@E@Z @ 0x140337FCC (--0DXGCONTEXT@@QEAA@PEAVDXGDEVICE@@IIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@E@Z.c)
 */

__int64 __fastcall DXGDEVICE::CreateContext(
        DXGDEVICE *this,
        struct DXGCONTEXT **a2,
        unsigned int a3,
        unsigned int a4,
        struct _D3DDDI_CREATECONTEXTFLAGS a5,
        void *a6,
        unsigned int a7,
        enum _D3DKMT_CLIENTHINT a8,
        char a9)
{
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  DXGCONTEXT *v17; // rax
  unsigned int v18; // r9d
  DXGCONTEXT *v19; // rax
  struct DXGCONTEXT *v20; // rbx
  int v21; // edi
  struct DXGCONTEXT **v23; // rax
  __int64 v24; // rcx
  _BYTE v25[32]; // [rsp+50h] [rbp-38h] BYREF

  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1833;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"ppContext != NULL", 1833LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !*((_BYTE *)this + 72) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1834;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"IsDeviceLockExclusiveOwner()", 1834LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*((ADAPTER_RENDER **)this + 2)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1835;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"GetRenderCore()->IsCoreResourceSharedOwner()",
      1835LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGPROCESS::GetCurrent(v13) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1841;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pProcess != NULL", 1841LL, 0LL, 0LL, 0LL, 0LL);
  }
  *a2 = 0LL;
  v17 = (DXGCONTEXT *)DXGQUOTAALLOCATOR<256,1265072196>::operator new(496LL, v14, v15, v16);
  if ( !v17 )
    goto LABEL_19;
  v18 = 1;
  if ( a4 )
    v18 = a4;
  v19 = DXGCONTEXT::DXGCONTEXT(v17, this, a3, v18, a5, a8, a9);
  v20 = v19;
  if ( v19 )
  {
    v21 = DXGCONTEXT::Initialize(v19, a6, a7);
    if ( v21 >= 0 )
    {
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v25, (struct _KTHREAD **)this + 50);
      v23 = (struct DXGCONTEXT **)((char *)this + 496);
      v24 = *((_QWORD *)this + 62);
      if ( *(DXGDEVICE **)(v24 + 8) != (DXGDEVICE *)((char *)this + 496) )
        __fastfail(3u);
      *(_QWORD *)v20 = v24;
      *((_QWORD *)v20 + 1) = v23;
      *(_QWORD *)(v24 + 8) = v20;
      *v23 = v20;
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v25);
      *a2 = v20;
      _InterlockedIncrement64((volatile signed __int64 *)this + 8);
    }
    else
    {
      DXGCONTEXT::DestroyContext(v20, 0LL);
      DXGCONTEXT::`scalar deleting destructor'(v20);
    }
  }
  else
  {
LABEL_19:
    v21 = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    WdLogGlobalForLineNumber = 1870;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Out of memory allocating DXGCONTEXT class, returning 0x%I64x",
      -1073741801LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v21;
}
