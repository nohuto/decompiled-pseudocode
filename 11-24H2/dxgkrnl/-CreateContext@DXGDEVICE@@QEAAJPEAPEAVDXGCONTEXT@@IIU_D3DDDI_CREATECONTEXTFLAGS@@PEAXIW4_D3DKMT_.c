/*
 * XREFs of ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1402CFA78
 * Callers:
 *     DxgkCreateLightweightDeviceAndContext @ 0x1401ABF08 (DxgkCreateLightweightDeviceAndContext.c)
 *     DxgkCreateContext @ 0x1401B8760 (DxgkCreateContext.c)
 *     ?DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z @ 0x1402D17A0 (-DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1403FD47C (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAP.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140022D5C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x14002BEA0 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ??_GDXGCONTEXT@@QEAAPEAXI@Z @ 0x140034964 (--_GDXGCONTEXT@@QEAAPEAXI@Z.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z @ 0x140035AC0 (--2-$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1402CF0E0 (-DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1402CFD80 (-Initialize@DXGCONTEXT@@QEAAJPEAXI@Z.c)
 *     ??0DXGCONTEXT@@QEAA@PEAVDXGDEVICE@@IIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@E@Z @ 0x1402D1554 (--0DXGCONTEXT@@QEAA@PEAVDXGDEVICE@@IIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@E@Z.c)
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
        unsigned __int8 a9)
{
  __int64 v13; // rcx
  DXGCONTEXT *v14; // rax
  unsigned int v15; // r9d
  DXGCONTEXT *v16; // rax
  struct DXGCONTEXT *v17; // rbx
  int v18; // edi
  struct DXGCONTEXT **v20; // rax
  __int64 v21; // rcx
  _BYTE v22[32]; // [rsp+50h] [rbp-38h] BYREF

  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1885;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"ppContext != NULL", 1885LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !*((_BYTE *)this + 72) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1886;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"IsDeviceLockExclusiveOwner()", 1886LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*((ADAPTER_RENDER **)this + 2)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1887;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"GetRenderCore()->IsCoreResourceSharedOwner()",
      1887LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGPROCESS::GetCurrent(v13) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1893;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pProcess != NULL", 1893LL, 0LL, 0LL, 0LL, 0LL);
  }
  *a2 = 0LL;
  v14 = (DXGCONTEXT *)DXGQUOTAALLOCATOR<256,1265072196>::operator new(496LL);
  if ( !v14 )
    goto LABEL_19;
  v15 = 1;
  if ( a4 )
    v15 = a4;
  v16 = DXGCONTEXT::DXGCONTEXT(v14, this, a3, v15, a5, a8, a9);
  v17 = v16;
  if ( v16 )
  {
    v18 = DXGCONTEXT::Initialize(v16, a6, a7);
    if ( v18 >= 0 )
    {
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v22, (struct _KTHREAD **)this + 50);
      v20 = (struct DXGCONTEXT **)((char *)this + 496);
      v21 = *((_QWORD *)this + 62);
      if ( *(DXGDEVICE **)(v21 + 8) != (DXGDEVICE *)((char *)this + 496) )
        __fastfail(3u);
      *(_QWORD *)v17 = v21;
      *((_QWORD *)v17 + 1) = v20;
      *(_QWORD *)(v21 + 8) = v17;
      *v20 = v17;
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v22);
      *a2 = v17;
      _InterlockedIncrement64((volatile signed __int64 *)this + 8);
    }
    else
    {
      DXGCONTEXT::DestroyContext(v17, 0LL);
      DXGCONTEXT::`scalar deleting destructor'(v17);
    }
  }
  else
  {
LABEL_19:
    v18 = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    WdLogGlobalForLineNumber = 1922;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Out of memory allocating DXGCONTEXT class, returning 0x%I64x",
      -1073741801LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v18;
}
