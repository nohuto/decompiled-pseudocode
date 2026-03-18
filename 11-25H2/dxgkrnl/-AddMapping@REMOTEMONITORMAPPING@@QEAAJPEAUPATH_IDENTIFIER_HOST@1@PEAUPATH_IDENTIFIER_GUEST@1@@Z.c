/*
 * XREFs of ?AddMapping@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER_HOST@1@PEAUPATH_IDENTIFIER_GUEST@1@@Z @ 0x1401EE2C8
 * Callers:
 *     DxgkIddHandleSetDisplayConfig @ 0x140414B30 (DxgkIddHandleSetDisplayConfig.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x140013BA0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?VmBusSendUpdateMonitorMapping@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@I_NI@Z @ 0x14022897C (-VmBusSendUpdateMonitorMapping@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@I_NI@Z.c)
 */

__int64 __fastcall REMOTEMONITORMAPPING::AddMapping(
        struct _KTHREAD **this,
        struct _LUID *a2,
        struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_GUEST *a3)
{
  __int64 v6; // r9
  __int64 v7; // rax
  _QWORD *v8; // rbx
  __int64 v9; // rsi
  __int128 v10; // xmm0
  DXG_GUEST_GLOBAL_VMBUS *v11; // rcx
  int updated; // eax
  struct _KTHREAD *v14; // rax
  __int64 HighPart; // [rsp+20h] [rbp-58h]
  __int64 v16; // [rsp+28h] [rbp-50h]
  __int64 LowPart; // [rsp+30h] [rbp-48h]
  _BYTE v18[8]; // [rsp+50h] [rbp-28h] BYREF
  DXGPUSHLOCK *v19; // [rsp+58h] [rbp-20h]
  int v20; // [rsp+60h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v18, this + 2, 0);
  DXGPUSHLOCK::AcquireExclusive(v19);
  v20 = 2;
  v7 = operator new(0x30uLL, 0x4B677844u, 256LL, v6);
  v8 = (_QWORD *)v7;
  if ( !v7 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 92;
    DxgkLogInternalTriageEvent(0LL, 262145, 0xFFFFFFFFLL, L"Failed to allocate new entry", 92LL, 0LL, 0LL, 0LL, 0LL);
    LODWORD(v9) = -1073741801;
LABEL_7:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v18);
    return (unsigned int)v9;
  }
  *(struct _LUID *)(v7 + 16) = *a2;
  v10 = *(_OWORD *)a3;
  *(_DWORD *)(v7 + 24) = a2[1].LowPart;
  *(_OWORD *)(v7 + 28) = v10;
  v11 = (DXG_GUEST_GLOBAL_VMBUS *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 206);
  if ( !v11 )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v8);
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 104;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"VmBus not connected so cannot redirect",
      104LL,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v9) = -1073741823;
    goto LABEL_7;
  }
  updated = DXG_GUEST_GLOBAL_VMBUS::VmBusSendUpdateMonitorMapping(v11, *a2, a2[1].LowPart, 1, *((_DWORD *)a3 + 3));
  v9 = updated;
  if ( updated < 0 )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v8);
    WdLogSingleEntry4(2LL, a2->HighPart, a2->LowPart, a2[1].LowPart, v9);
    LowPart = a2[1].LowPart;
    v16 = a2->LowPart;
    HighPart = a2->HighPart;
    WdLogGlobalForLineNumber = 113;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Host failed to update monitor mapping for Adapter LUID 0x%08I64x%08I64x, target id 0x%I64x, status 0x%I64x",
      HighPart,
      v16,
      LowPart,
      v9,
      0LL);
    goto LABEL_7;
  }
  v14 = *this;
  if ( *((struct _KTHREAD ***)*this + 1) != this )
    __fastfail(3u);
  *v8 = v14;
  v8[1] = this;
  *((_QWORD *)v14 + 1) = v8;
  *this = (struct _KTHREAD *)v8;
  *((_BYTE *)this + 48) = 1;
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v18);
  return 0LL;
}
