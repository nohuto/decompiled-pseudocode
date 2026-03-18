/*
 * XREFs of ?DmmResetOrginalVideoOutputTechnologies@@YAJQEAXI@Z @ 0x1402533DC
 * Callers:
 *     DpiPdoRemovePdo @ 0x1403C99AC (DpiPdoRemovePdo.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B150 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030728 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x140038FF0 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 */

__int64 __fastcall DmmResetOrginalVideoOutputTechnologies(DXGADAPTER *a1, unsigned int a2)
{
  unsigned int v2; // edi
  __int64 v3; // rbp
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rbx
  _DWORD *v9; // rax
  int v10; // ecx
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0;
  v3 = a2;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    WdLogGlobalForLineNumber = 12598;
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 12604;
  }
  v6 = *((_QWORD *)a1 + 390);
  if ( !v6 )
  {
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 12609;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      (__int64)a1,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3223191554LL;
  }
  v7 = *(_QWORD *)(v6 + 104);
  if ( v7 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v11, *(_QWORD *)(v6 + 104));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v7 + 120) + 72LL));
    v8 = *(_QWORD *)(v7 + 120);
    v9 = (_DWORD *)IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v8, v3);
    if ( v9 )
    {
      v10 = v9[22];
      v9[21] = v10;
      v9[20] = v10;
      if ( v8 )
        ReferenceCounted::Release((ReferenceCounted *)(v8 + 64));
    }
    else
    {
      WdLogSingleEntry1(2LL, v3);
      WdLogGlobalForLineNumber = 12643;
      if ( v8 )
        ReferenceCounted::Release((ReferenceCounted *)(v8 + 64));
      v2 = -1071774971;
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v11 + 40));
    return v2;
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    result = 3223192373LL;
    WdLogGlobalForLineNumber = 12623;
  }
  return result;
}
