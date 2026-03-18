/*
 * XREFs of ?CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z @ 0x140383F4C
 * Callers:
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x140382BE0 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x14004A948 (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1403845FC (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR_CLASSFACTORY::CreateVidPnMgr(
        struct ADAPTER_DISPLAY *const a1,
        struct VIDPN_MGR **a2,
        __int64 a3,
        __int64 a4)
{
  VIDPN_MGR *v6; // rax
  VIDPN_MGR *v7; // rbx
  __int64 result; // rax
  unsigned int v9; // ebx
  VIDPN_MGR *v10; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 56;
  }
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 57;
  }
  v6 = (VIDPN_MGR *)operator new(0x238uLL, 0x4E506456u, 64LL, a4);
  if ( v6 )
    v7 = VIDPN_MGR::VIDPN_MGR(v6, a1);
  else
    v7 = 0LL;
  v10 = v7;
  if ( v7 )
  {
    if ( (**((unsigned __int8 (__fastcall ***)(__int64))v7 + 11))((__int64)v7 + 88) )
    {
      v10 = 0LL;
      *a2 = v7;
      v9 = 0;
    }
    else
    {
      WdLogSingleEntry3(7LL, v7, a1, *((int *)v7 + 24));
      v9 = *((_DWORD *)v7 + 24);
      WdLogGlobalForLineNumber = 80;
    }
    auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))&v10);
    return v9;
  }
  else
  {
    WdLogSingleEntry1(6LL, a1);
    result = 3221225495LL;
    WdLogGlobalForLineNumber = 72;
  }
  return result;
}
