/*
 * XREFs of ?DmmSetTemporaryVideoOutputTechnology@@YAJQEAXIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x140253570
 * Callers:
 *     DpiPdoAddPdo @ 0x1403C8AA0 (DpiPdoAddPdo.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B150 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030728 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x140038FF0 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 */

__int64 __fastcall DmmSetTemporaryVideoOutputTechnology(
        DXGADAPTER *a1,
        unsigned int a2,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY a3,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY a4)
{
  unsigned int v4; // edi
  __int64 v5; // r15
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // [rsp+70h] [rbp+8h] BYREF

  v4 = 0;
  v5 = a2;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    WdLogGlobalForLineNumber = 12498;
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 12504;
  }
  v10 = *((_QWORD *)a1 + 390);
  if ( !v10 )
  {
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 12509;
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
  v11 = *(_QWORD *)(v10 + 104);
  if ( v11 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v14, *(_QWORD *)(v10 + 104));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v11 + 120) + 72LL));
    v12 = *(_QWORD *)(v11 + 120);
    v13 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v12, v5);
    if ( v13 )
    {
      if ( a3 != D3DKMDT_VOT_UNINITIALIZED )
        *(_DWORD *)(v13 + 80) = a3;
      if ( a4 != D3DKMDT_VOT_UNINITIALIZED )
        *(_DWORD *)(v13 + 84) = a4;
      if ( v12 )
        ReferenceCounted::Release((ReferenceCounted *)(v12 + 64));
    }
    else
    {
      WdLogSingleEntry1(2LL, v5);
      WdLogGlobalForLineNumber = 12543;
      if ( v12 )
        ReferenceCounted::Release((ReferenceCounted *)(v12 + 64));
      v4 = -1071774971;
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v14 + 40));
    return v4;
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    result = 3223192373LL;
    WdLogGlobalForLineNumber = 12523;
  }
  return result;
}
