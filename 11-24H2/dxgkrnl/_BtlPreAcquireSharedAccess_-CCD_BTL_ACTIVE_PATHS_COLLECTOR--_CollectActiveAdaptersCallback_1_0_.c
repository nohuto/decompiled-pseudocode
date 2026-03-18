/*
 * XREFs of _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_1_0_ @ 0x14039F650
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14000BE00 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14000EEA0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140024690 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030E28 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1400345B4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x1400384F0 (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x140040B88 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x14004575C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x14004F168 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkIsMSBDDFallbackEnabled @ 0x14007E72C (DxgkIsMSBDDFallbackEnabled.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x140316B60 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z @ 0x14039FC08 (-_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z.c)
 */

__int64 __fastcall BtlPreAcquireSharedAccess__CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_1_0_(
        DXGADAPTER *this,
        CCD_BTL_ACTIVE_PATHS_COLLECTOR *a2)
{
  unsigned int v3; // edi
  __int64 v5; // rax
  VIDPN_MGR *v7; // rbx
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  VIDPN_MGR *v15; // rsi
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v17; // r14
  struct DMMVIDPN *v18; // rbx
  int v19; // esi
  __int64 v20; // rbx
  struct DXGADAPTER *ContainingAdapter; // rax
  _QWORD *v22; // rax
  struct DMMVIDPN *v23; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v24; // [rsp+38h] [rbp-C8h] BYREF
  const struct DMMVIDPN *v25; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v27[8]; // [rsp+50h] [rbp-B0h] BYREF
  DXGADAPTER *v28; // [rsp+58h] [rbp-A8h]
  char v29; // [rsp+60h] [rbp-A0h]
  _BYTE v30[144]; // [rsp+70h] [rbp-90h] BYREF

  v28 = this;
  v3 = 0;
  v29 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v27);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v27);
  v5 = *((_QWORD *)this + 390);
  if ( !v5 || !*(_QWORD *)(v5 + 432) || *((_DWORD *)this + 50) != 1 )
    goto LABEL_2;
  v7 = *(VIDPN_MGR **)(*((_QWORD *)this + 390) + 104LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v26, (__int64)v7);
  ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(v7);
  v25 = ClientCommittedVidPnRef;
  if ( !ClientCommittedVidPnRef || !*((_QWORD *)ClientCommittedVidPnRef + 17) )
  {
    auto_rc<DMMVIDPN const>::reset((__int64 *)&v25, 0LL);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v26 + 40));
LABEL_2:
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v27);
    return 0LL;
  }
  auto_rc<DMMVIDPN const>::reset((__int64 *)&v25, 0LL);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v26 + 40));
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v30, this, 0LL);
  v9 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v30, 0LL);
  if ( v9 < 0 )
  {
    if ( v9 == -1073741130 )
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v10, v12, v13);
      v22[3] = this;
      v22[4] = *((int *)this + 104);
      v22[5] = *((unsigned int *)this + 103);
      v22[6] = a2;
      WdLogGlobalForLineNumber = 60;
    }
    else
    {
      v3 = v9;
    }
  }
  else if ( !DXGADAPTER::IsBddFallbackDriver(this) || DxgkIsMSBDDFallbackEnabled() )
  {
    v14 = *((_QWORD *)this + 390);
    if ( v14 )
    {
      v15 = *(VIDPN_MGR **)(v14 + 104);
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v24, (__int64)v15);
      v23 = 0LL;
      ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(
                                                 v15,
                                                 (__int64 *)&v23);
      v17 = ClientVidPnFromLastClientCommitedVidPn;
      if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
      {
        v20 = *((unsigned int *)VIDPN_MGR::GetContainingAdapter(v15) + 103);
        ContainingAdapter = VIDPN_MGR::GetContainingAdapter(v15);
        WdLogSingleEntry5(2LL, v17, v15, *(_QWORD *)(*(_QWORD *)a2 + 64LL), *((int *)ContainingAdapter + 104), v20);
        WdLogGlobalForLineNumber = 677;
        if ( v23 )
          ReferenceCounted::Release((struct DMMVIDPN *)((char *)v23 + 24));
        DXGFASTMUTEX::Release((struct _KTHREAD **)(v24 + 40));
        v3 = v17;
      }
      else
      {
        v18 = v23;
        v19 = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPn(a2, v23, 1);
        if ( v19 < 0 )
        {
          auto_rc<DMMVIDPN>::reset((__int64 *)&v23, 0LL);
        }
        else if ( v18 )
        {
          ReferenceCounted::Release((struct DMMVIDPN *)((char *)v18 + 24));
        }
        DXGFASTMUTEX::Release((struct _KTHREAD **)(v24 + 40));
        v3 = v19;
      }
    }
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v30);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v27);
  return v3;
}
