/*
 * XREFs of ?CacheVidPnToBeComitted@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@IAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x140057CB8
 * Callers:
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE@Z @ 0x1403A9824 (-CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_D.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x140045D68 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x14004A948 (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 *     ?Enqueue@?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x140056FA0 (-Enqueue@-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV-.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1402D0358 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
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
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rdx
  int v15; // ecx
  __int64 v16; // xmm0_8
  __int64 v17; // rax
  __int64 result; // rax
  __int64 v19; // [rsp+30h] [rbp-18h] BYREF
  __int64 (__fastcall ***v20[2])(_QWORD, __int64); // [rsp+38h] [rbp-10h] BYREF

  v19 = 0LL;
  v5 = a3;
  Pool2 = (DMMVIDPN *)ExAllocatePool2(256LL, 320LL, 1313891414LL, a4);
  if ( Pool2 && (v9 = DMMVIDPN::DMMVIDPN(Pool2, a2), (v10 = (__int64)v9) != 0) )
  {
    if ( (**((unsigned __int8 (__fastcall ***)(__int64))v9 + 9))((__int64)v9 + 72) )
    {
      auto_rc<DMMVIDPN>::reset(&v19, v10);
      v20[0] = 0LL;
      v13 = operator new(0x48uLL, 0x4E506456u, 256LL, v12);
      v14 = v13;
      if ( v13 )
      {
        *(_QWORD *)(v13 + 8) = 0LL;
        *(_QWORD *)(v13 + 16) = 0LL;
        v15 = *((_DWORD *)a4 + 2);
        v16 = *(_QWORD *)a4;
        v20[0] = 0LL;
        *(_DWORD *)(v13 + 40) = 1833173016;
        *(_QWORD *)v13 = &VIDPN_MGR::COMMITVIDPNREQUEST::`vftable'{for `QueueElement'};
        *(_QWORD *)(v13 + 24) = &VIDPN_MGR::COMMITVIDPNREQUEST::`vftable'{for `NonReferenceCounted'};
        *(_QWORD *)(v13 + 32) = &VIDPN_MGR::COMMITVIDPNREQUEST::`vftable'{for `SignedWithClassSignature<VIDPN_MGR::COMMITVIDPNREQUEST>'};
        v17 = v19;
        v19 = 0LL;
        *(_QWORD *)(v14 + 48) = v17;
        *(_QWORD *)(v14 + 60) = v16;
        *(_DWORD *)(v14 + 68) = v15;
        *(_DWORD *)(v14 + 56) = v5;
        Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::Enqueue((_QWORD *)this + 24, v14);
        auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>(v20);
        v11 = 0;
      }
      else
      {
        WdLogSingleEntry5(6LL, 72LL, a2, (int)(*(_DWORD *)a4 << 28) >> 28, v5, (int)(*(_DWORD *)a4 << 24) >> 28);
        WdLogGlobalForLineNumber = 218;
        auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>(v20);
        v11 = -1073741801;
      }
    }
    else
    {
      WdLogSingleEntry3(2LL, v10, a2, *(int *)(v10 + 80));
      v11 = *(_DWORD *)(v10 + 80);
      WdLogGlobalForLineNumber = 200;
    }
    auto_rc<DMMVIDPN>::reset(&v19, 0LL);
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
