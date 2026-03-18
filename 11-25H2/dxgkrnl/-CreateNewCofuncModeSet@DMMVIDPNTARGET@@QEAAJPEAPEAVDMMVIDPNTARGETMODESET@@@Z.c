/*
 * XREFs of ?CreateNewCofuncModeSet@DMMVIDPNTARGET@@QEAAJPEAPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x14001D5C8
 * Callers:
 *     ?CreateNewTargetModeSetImpl@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IW4_DXGK_VIDPN_INTERFACE_VERSION@@PEAPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_DXGK_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x1403AD5E4 (-CreateNewTargetModeSetImpl@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IW4_DXGK_VIDP.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x14001B394 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0DMMVIDPNTARGETMODESET@@IEAA@PEAVDMMVIDPNTARGET@@@Z @ 0x14001CF34 (--0DMMVIDPNTARGETMODESET@@IEAA@PEAVDMMVIDPNTARGET@@@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DMMVIDPNTARGET::CreateNewCofuncModeSet(
        DMMVIDPNTARGET *this,
        struct DMMVIDPNTARGETMODESET **a2,
        __int64 a3,
        __int64 a4)
{
  char *v6; // rsi
  __int64 v7; // r8
  DMMVIDPNTARGETMODESET *Pool2; // rax
  DMMVIDPNTARGETMODESET *v9; // rax
  __int64 v10; // rdi
  __int64 result; // rax
  __int64 v12; // rax
  unsigned int v13; // ebx

  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 853;
  }
  *a2 = 0LL;
  v6 = (char *)this + 112;
  v7 = *((_QWORD *)this + 14);
  if ( v7 )
  {
    WdLogSingleEntry2(2LL, *((unsigned int *)this + 6), v7);
    result = 3223192400LL;
    WdLogGlobalForLineNumber = 862;
  }
  else
  {
    Pool2 = (DMMVIDPNTARGETMODESET *)ExAllocatePool2(256LL, 152LL, 1313891414LL, a4);
    if ( Pool2 && (v9 = DMMVIDPNTARGETMODESET::DMMVIDPNTARGETMODESET(Pool2, this), (v10 = (__int64)v9) != 0) )
    {
      if ( (**((unsigned __int8 (__fastcall ***)(__int64))v9 + 3))((__int64)v9 + 24) )
      {
        auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)this + 14, v10);
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v6 + 96LL));
        v12 = *(_QWORD *)v6;
        *a2 = *(struct DMMVIDPNTARGETMODESET **)v6;
        if ( *(_DWORD *)(v12 + 96) != 2 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 899;
        }
        return 0LL;
      }
      else
      {
        WdLogSingleEntry3(7LL, v10, *((unsigned int *)this + 6), *(int *)(v10 + 40));
        v13 = *(_DWORD *)(v10 + 40);
        WdLogGlobalForLineNumber = 883;
        ReferenceCounted::Release((ReferenceCounted *)(v10 + 88));
        return v13;
      }
    }
    else
    {
      WdLogSingleEntry1(6LL, 152LL);
      result = 3221225495LL;
      WdLogGlobalForLineNumber = 875;
    }
  }
  return result;
}
