/*
 * XREFs of ?AcquireTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1403BBB3C
 * Callers:
 *     DxgkDispMgrTargetOperation @ 0x14041A8C0 (DxgkDispMgrTargetOperation.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Add@?$Set@VDXGTARGETENTRY@@@@QEAAEQEAVDXGTARGETENTRY@@@Z @ 0x140050988 (-Add@-$Set@VDXGTARGETENTRY@@@@QEAAEQEAVDXGTARGETENTRY@@@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1403BBF58 (-ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_D.c)
 */

__int64 __fastcall DXGDISPLAYMANAGEROBJECT::AcquireTargetOwnership(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5)
{
  __int64 v5; // rbp
  __int64 v8; // rax
  __int64 v9; // r9
  void (__fastcall ***v10)(_QWORD, __int64); // rdi
  int v11; // r14d
  _BYTE v13[16]; // [rsp+50h] [rbp-28h] BYREF
  int v14; // [rsp+8Ch] [rbp+14h]

  v14 = HIDWORD(a2);
  v5 = a3;
  if ( *(_QWORD *)(a1 + 72) )
  {
    v8 = operator new(0x28uLL, 0x4B677844u, 256LL, a4);
    v10 = (void (__fastcall ***)(_QWORD, __int64))v8;
    if ( v8 )
    {
      LOBYTE(v9) = 1;
      *(_QWORD *)(v8 + 8) = 0LL;
      *(_QWORD *)(v8 + 16) = 0LL;
      *(_QWORD *)v8 = &SetElement::`vftable';
      *(_QWORD *)(v8 + 24) = a2;
      *(_DWORD *)(v8 + 32) = v5;
      v11 = DXGDISPLAYMANAGEROBJECT::ExchangeTargetOwnershipDmm(v8, a1, 0LL, v9, a5);
      if ( v11 < 0 )
      {
        (**v10)(v10, 1LL);
        WdLogSingleEntry3(2LL, v5, v14, (unsigned int)a2);
        WdLogGlobalForLineNumber = 129;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Failed to assigned display manager object to target 0x%I64x on adapter 0x%I64x-%I64x",
          v5,
          v14,
          (unsigned int)a2,
          0LL,
          0LL);
        return (unsigned int)v11;
      }
      else
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (struct DXGFASTMUTEX *const)(a1 + 16), 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
        if ( !Set<DXGTARGETENTRY>::Add(a1 + 80, (__int64)v10) )
          (**v10)(v10, 1LL);
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v13);
        return 0LL;
      }
    }
    else
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 121;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        0xFFFFFFFFLL,
        L"Failed to allocate DXGTARGETENTRY",
        121LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225495LL;
    }
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 114;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"DispMgr object called after being invalidated.",
      114LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 2147483685LL;
  }
}
