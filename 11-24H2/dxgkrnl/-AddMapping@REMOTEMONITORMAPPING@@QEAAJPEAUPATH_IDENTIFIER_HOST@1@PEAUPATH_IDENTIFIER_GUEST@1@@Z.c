/*
 * XREFs of ?AddMapping@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER_HOST@1@PEAUPATH_IDENTIFIER_GUEST@1@@Z @ 0x1401F3C6C
 * Callers:
 *     DxgkIddHandleSetDisplayConfig @ 0x1404117C0 (DxgkIddHandleSetDisplayConfig.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x140022C10 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?VmBusSendUpdateMonitorMapping@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@I_NI@Z @ 0x14022F268 (-VmBusSendUpdateMonitorMapping@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@I_NI@Z.c)
 */

__int64 __fastcall REMOTEMONITORMAPPING::AddMapping(
        struct _KTHREAD **this,
        struct _LUID *a2,
        struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_GUEST *a3)
{
  __int64 v6; // rax
  _QWORD *v7; // rbx
  __int64 v8; // rsi
  __int128 v9; // xmm0
  DXG_GUEST_GLOBAL_VMBUS *v10; // rcx
  int updated; // eax
  struct _KTHREAD *v13; // rax
  __int64 HighPart; // [rsp+20h] [rbp-58h]
  __int64 v15; // [rsp+28h] [rbp-50h]
  __int64 LowPart; // [rsp+30h] [rbp-48h]
  _BYTE v17[8]; // [rsp+50h] [rbp-28h] BYREF
  DXGPUSHLOCK *v18; // [rsp+58h] [rbp-20h]
  int v19; // [rsp+60h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v17, this + 2, 0);
  DXGPUSHLOCK::AcquireExclusive(v18);
  v19 = 2;
  v6 = operator new(0x30uLL, 0x4B677844u, 256LL);
  v7 = (_QWORD *)v6;
  if ( !v6 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 91;
    DxgkLogInternalTriageEvent(0LL, 262145LL, 0xFFFFFFFFLL, L"Failed to allocate new entry", 91LL, 0LL, 0LL, 0LL, 0LL);
    LODWORD(v8) = -1073741801;
LABEL_7:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v17);
    return (unsigned int)v8;
  }
  *(struct _LUID *)(v6 + 16) = *a2;
  v9 = *(_OWORD *)a3;
  *(_DWORD *)(v6 + 24) = a2[1].LowPart;
  *(_OWORD *)(v6 + 28) = v9;
  v10 = (DXG_GUEST_GLOBAL_VMBUS *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 210);
  if ( !v10 )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v7);
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 103;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"VmBus not connected so cannot redirect",
      103LL,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v8) = -1073741823;
    goto LABEL_7;
  }
  updated = DXG_GUEST_GLOBAL_VMBUS::VmBusSendUpdateMonitorMapping(v10, *a2, a2[1].LowPart, 1, *((_DWORD *)a3 + 3));
  v8 = updated;
  if ( updated < 0 )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v7);
    WdLogSingleEntry4(2LL, a2->HighPart, a2->LowPart, a2[1].LowPart, v8);
    LowPart = a2[1].LowPart;
    v15 = a2->LowPart;
    HighPart = a2->HighPart;
    WdLogGlobalForLineNumber = 112;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Host failed to update monitor mapping for Adapter LUID 0x%08I64x%08I64x, target id 0x%I64x, status 0x%I64x",
      HighPart,
      v15,
      LowPart,
      v8,
      0LL);
    goto LABEL_7;
  }
  v13 = *this;
  if ( *((struct _KTHREAD ***)*this + 1) != this )
    __fastfail(3u);
  *v7 = v13;
  v7[1] = this;
  *((_QWORD *)v13 + 1) = v7;
  *this = (struct _KTHREAD *)v7;
  *((_BYTE *)this + 48) = 1;
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v17);
  return 0LL;
}
