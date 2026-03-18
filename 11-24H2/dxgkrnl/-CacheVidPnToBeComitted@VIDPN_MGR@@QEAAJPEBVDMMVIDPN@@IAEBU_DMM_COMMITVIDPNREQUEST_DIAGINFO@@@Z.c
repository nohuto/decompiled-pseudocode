/*
 * XREFs of ?CacheVidPnToBeComitted@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@IAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x1400577A0
 * Callers:
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE@Z @ 0x140310544 (-CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_D.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x14004575C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x14004A0CC (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 *     ?Enqueue@?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x140056850 (-Enqueue@-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV-.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x140316E98 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::CacheVidPnToBeComitted(
        VIDPN_MGR *this,
        const struct DMMVIDPN *a2,
        unsigned int a3,
        const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *a4)
{
  __int64 v5; // rbp
  DMMVIDPN *Pool2; // rax
  DMMVIDPN *v9; // rax
  __int64 v10; // rbx
  unsigned int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // rdx
  int v14; // ecx
  __int64 v15; // xmm0_8
  __int64 v16; // rax
  __int64 result; // rax
  __int64 v18; // [rsp+30h] [rbp-18h] BYREF
  __int64 (__fastcall ***v19[2])(_QWORD, __int64); // [rsp+38h] [rbp-10h] BYREF

  v18 = 0LL;
  v5 = a3;
  Pool2 = (DMMVIDPN *)ExAllocatePool2(256LL, 320LL, 1313891414LL);
  if ( Pool2 && (v9 = DMMVIDPN::DMMVIDPN(Pool2, a2), (v10 = (__int64)v9) != 0) )
  {
    if ( (**((unsigned __int8 (__fastcall ***)(__int64))v9 + 9))((__int64)v9 + 72) )
    {
      auto_rc<DMMVIDPN>::reset(&v18, v10);
      v19[0] = 0LL;
      v12 = operator new(0x48uLL, 0x4E506456u, 256LL);
      v13 = v12;
      if ( v12 )
      {
        *(_QWORD *)(v12 + 8) = 0LL;
        *(_QWORD *)(v12 + 16) = 0LL;
        v14 = *((_DWORD *)a4 + 2);
        v15 = *(_QWORD *)a4;
        v19[0] = 0LL;
        *(_DWORD *)(v12 + 40) = 1833173016;
        *(_QWORD *)v12 = &VIDPN_MGR::COMMITVIDPNREQUEST::`vftable'{for `QueueElement'};
        *(_QWORD *)(v12 + 24) = &VIDPN_MGR::COMMITVIDPNREQUEST::`vftable'{for `NonReferenceCounted'};
        *(_QWORD *)(v12 + 32) = &VIDPN_MGR::COMMITVIDPNREQUEST::`vftable'{for `SignedWithClassSignature<VIDPN_MGR::COMMITVIDPNREQUEST>'};
        v16 = v18;
        v18 = 0LL;
        *(_QWORD *)(v13 + 48) = v16;
        *(_QWORD *)(v13 + 60) = v15;
        *(_DWORD *)(v13 + 68) = v14;
        *(_DWORD *)(v13 + 56) = v5;
        Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::Enqueue((_QWORD *)this + 24, v13);
        auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>(v19);
        v11 = 0;
      }
      else
      {
        WdLogSingleEntry5(6LL, 72LL, a2, (int)(*(_DWORD *)a4 << 28) >> 28, v5, (int)(*(_DWORD *)a4 << 24) >> 28);
        WdLogGlobalForLineNumber = 218;
        auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>(v19);
        v11 = -1073741801;
      }
    }
    else
    {
      WdLogSingleEntry3(2LL, v10, a2, *(int *)(v10 + 80));
      v11 = *(_DWORD *)(v10 + 80);
      WdLogGlobalForLineNumber = 200;
    }
    auto_rc<DMMVIDPN>::reset(&v18, 0LL);
    return v11;
  }
  else
  {
    WdLogSingleEntry2(6LL, 320LL, a2);
    result = 3221225495LL;
    WdLogGlobalForLineNumber = 190;
  }
  return result;
}
