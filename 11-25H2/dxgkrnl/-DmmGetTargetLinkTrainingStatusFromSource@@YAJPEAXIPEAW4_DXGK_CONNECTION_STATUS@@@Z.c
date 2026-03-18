/*
 * XREFs of ?DmmGetTargetLinkTrainingStatusFromSource@@YAJPEAXIPEAW4_DXGK_CONNECTION_STATUS@@@Z @ 0x14038EA48
 * Callers:
 *     DxgkCheckMonitorPowerState @ 0x14040F790 (DxgkCheckMonitorPowerState.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030728 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x140034684 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 */

__int64 __fastcall DmmGetTargetLinkTrainingStatusFromSource(
        _QWORD *a1,
        unsigned int a2,
        enum _DXGK_CONNECTION_STATUS *a3)
{
  __int64 v4; // rbx
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rsi
  _QWORD *v9; // rdi
  _QWORD *v10; // rdx
  __int64 v11; // rbp
  _QWORD *v12; // rcx
  _QWORD *v13; // r9
  unsigned int v14; // r14d
  __int64 v15; // rcx
  __int64 v16; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  unsigned int v20; // ebx
  __int64 v21; // rax
  __int64 v22; // [rsp+60h] [rbp+8h] BYREF
  __int64 v23; // [rsp+78h] [rbp+20h] BYREF

  v4 = a2;
  v6 = *(_QWORD *)(a1[390] + 104LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v23, v6);
  v7 = *(_QWORD *)(v6 + 128);
  if ( !v7 )
  {
    v22 = 0LL;
LABEL_27:
    v20 = -1071774884;
    WdLogSingleEntry2(2LL, a1, -1071774884LL);
    WdLogGlobalForLineNumber = 4549;
LABEL_19:
    auto_rc<DMMVIDPN const>::reset(&v22, 0LL);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v23 + 40));
    return v20;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v7 + 32));
  v8 = *(_QWORD *)(v6 + 128);
  v22 = v8;
  if ( !v8 )
    goto LABEL_27;
  v9 = (_QWORD *)(v8 + 120);
  v10 = *(_QWORD **)(v8 + 120);
  v11 = v8 + 96;
  if ( v10 == (_QWORD *)(v8 + 120) )
    v12 = 0LL;
  else
    v12 = v10 - 1;
  v13 = v10 - 1;
  while ( 1 )
  {
    if ( !v12 )
    {
      if ( v10 == v9 || v10 == (_QWORD *)8 )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL, v10, 0LL, v13) + 24) = v11;
        WdLogGlobalForLineNumber = 195;
      }
      else
      {
        v21 = WdLogNewEntry5_WdTrace(0LL, v10, 0LL, v13);
        *(_QWORD *)(v21 + 24) = v4;
        *(_QWORD *)(v21 + 32) = v11;
        WdLogGlobalForLineNumber = 187;
      }
      WdLogSingleEntry3(2LL, v4, a1, -1071774919LL);
      WdLogGlobalForLineNumber = 4565;
      auto_rc<DMMVIDPN const>::reset(&v22, 0LL);
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v23 + 40));
      return 3223192377LL;
    }
    if ( *(_DWORD *)(v12[11] + 24LL) == (_DWORD)v4 )
      break;
    v18 = (_QWORD *)v12[1];
    v12 = v18 - 1;
    if ( v18 == v9 )
      v12 = 0LL;
  }
  v14 = *(_DWORD *)(v12[12] + 24LL);
  if ( (_QWORD *)*v9 == v9 || (v15 = *v9 - 8LL, *v9 == 8LL) )
  {
LABEL_18:
    WdLogSingleEntry1(2LL, v14);
    WdLogGlobalForLineNumber = 4575;
    v20 = -1071774971;
    goto LABEL_19;
  }
  while ( 1 )
  {
    v16 = *(_QWORD *)(v15 + 96);
    if ( *(_DWORD *)(v16 + 24) == v14 )
      break;
    v19 = *(_QWORD **)(v15 + 8);
    v15 = (__int64)(v19 - 1);
    if ( v19 == v9 )
      v15 = 0LL;
    if ( !v15 )
      goto LABEL_18;
  }
  *(_DWORD *)a3 = (unsigned __int8)*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 96) + 536LL) + 168LL);
  ReferenceCounted::Release((ReferenceCounted *)(v8 + 24));
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v23 + 40));
  return 0LL;
}
