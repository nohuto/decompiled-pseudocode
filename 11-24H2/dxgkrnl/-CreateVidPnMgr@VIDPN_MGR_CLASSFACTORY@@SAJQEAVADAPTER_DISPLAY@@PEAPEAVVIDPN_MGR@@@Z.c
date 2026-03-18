/*
 * XREFs of ?CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z @ 0x14036B344
 * Callers:
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x140369FB0 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x14004A0CC (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x14036B9EC (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR_CLASSFACTORY::CreateVidPnMgr(struct ADAPTER_DISPLAY *const a1, struct VIDPN_MGR **a2)
{
  VIDPN_MGR *v4; // rax
  VIDPN_MGR *v5; // rbx
  __int64 result; // rax
  unsigned int v7; // ebx
  VIDPN_MGR *v8; // [rsp+30h] [rbp+8h] BYREF

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
  v4 = (VIDPN_MGR *)operator new(0x238uLL, 0x4E506456u, 64LL);
  if ( v4 )
    v5 = VIDPN_MGR::VIDPN_MGR(v4, a1);
  else
    v5 = 0LL;
  v8 = v5;
  if ( v5 )
  {
    if ( (**((unsigned __int8 (__fastcall ***)(__int64))v5 + 11))((__int64)v5 + 88) )
    {
      v8 = 0LL;
      *a2 = v5;
      v7 = 0;
    }
    else
    {
      WdLogSingleEntry3(7LL, v5, a1, *((int *)v5 + 24));
      v7 = *((_DWORD *)v5 + 24);
      WdLogGlobalForLineNumber = 80;
    }
    auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))&v8);
    return v7;
  }
  else
  {
    WdLogSingleEntry1(6LL, a1);
    result = 3221225495LL;
    WdLogGlobalForLineNumber = 72;
  }
  return result;
}
