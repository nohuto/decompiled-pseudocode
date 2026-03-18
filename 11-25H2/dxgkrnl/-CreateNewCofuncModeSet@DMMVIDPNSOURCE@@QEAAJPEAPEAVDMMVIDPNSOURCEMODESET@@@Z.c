/*
 * XREFs of ?CreateNewCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x14001E5F8
 * Callers:
 *     ?CreateNewSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_DXGK_VIDPNSOURCEMODESET_INTERFACE@@@Z @ 0x1403C05D0 (-CreateNewSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_H.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x14001B358 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0DMMVIDPNSOURCEMODESET@@IEAA@PEAVDMMVIDPNSOURCE@@@Z @ 0x14001D118 (--0DMMVIDPNSOURCEMODESET@@IEAA@PEAVDMMVIDPNSOURCE@@@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DMMVIDPNSOURCE::CreateNewCofuncModeSet(
        DMMVIDPNSOURCE *this,
        struct DMMVIDPNSOURCEMODESET **a2,
        __int64 a3,
        __int64 a4)
{
  char *v6; // rsi
  __int64 v7; // r8
  DMMVIDPNSOURCEMODESET *Pool2; // rax
  __int64 result; // rax
  DMMVIDPNSOURCEMODESET *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  unsigned int v13; // ebx

  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 837;
  }
  *a2 = 0LL;
  v6 = (char *)this + 120;
  v7 = *((_QWORD *)this + 15);
  if ( v7 )
  {
    WdLogSingleEntry2(2LL, *((unsigned int *)this + 6), v7);
    result = 3223192400LL;
    WdLogGlobalForLineNumber = 846;
  }
  else
  {
    Pool2 = (DMMVIDPNSOURCEMODESET *)ExAllocatePool2(256LL, 152LL, 1313891414LL, a4);
    if ( Pool2 && (v10 = DMMVIDPNSOURCEMODESET::DMMVIDPNSOURCEMODESET(Pool2, this), (v11 = (__int64)v10) != 0) )
    {
      if ( (**((unsigned __int8 (__fastcall ***)(__int64))v10 + 3))((__int64)v10 + 24) )
      {
        auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)this + 15, v11);
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v6 + 96LL));
        v12 = *(_QWORD *)v6;
        *a2 = *(struct DMMVIDPNSOURCEMODESET **)v6;
        if ( *(_DWORD *)(v12 + 96) != 2 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 883;
        }
        return 0LL;
      }
      else
      {
        WdLogSingleEntry3(7LL, v11, *((unsigned int *)this + 6), *(int *)(v11 + 40));
        v13 = *(_DWORD *)(v11 + 40);
        WdLogGlobalForLineNumber = 867;
        ReferenceCounted::Release((ReferenceCounted *)(v11 + 88));
        return v13;
      }
    }
    else
    {
      WdLogSingleEntry1(6LL, 152LL);
      result = 3221225495LL;
      WdLogGlobalForLineNumber = 859;
    }
  }
  return result;
}
