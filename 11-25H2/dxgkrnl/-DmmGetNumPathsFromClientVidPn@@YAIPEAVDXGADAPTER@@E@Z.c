/*
 * XREFs of ?DmmGetNumPathsFromClientVidPn@@YAIPEAVDXGADAPTER@@E@Z @ 0x140251DE0
 * Callers:
 *     ?CalcActivePathDisplayConfigBufferSizeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1401BFDF0 (-CalcActivePathDisplayConfigBufferSizeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030728 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x140034684 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x140038864 (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 */

__int64 __fastcall DmmGetNumPathsFromClientVidPn(struct DXGADAPTER *a1, char a2)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  VIDPN_MGR *v6; // rdi
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  unsigned int v8; // edx
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // rax
  unsigned int v12; // ecx
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF
  __int64 v14; // [rsp+40h] [rbp+18h] BYREF

  v2 = *((_QWORD *)a1 + 390);
  v3 = 0;
  if ( !v2 )
  {
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 15839;
    return 0LL;
  }
  v6 = *(VIDPN_MGR **)(v2 + 104);
  if ( !v6 )
  {
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 15847;
    return 0LL;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v14, (__int64)v6);
  v13 = 0LL;
  ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(v6);
  auto_rc<DMMVIDPN const>::reset(&v13, (__int64)ClientCommittedVidPnRef);
  if ( v13 )
  {
    if ( a2 )
    {
      v8 = 0;
      v9 = *(_QWORD *)(v13 + 120);
      if ( v9 != v13 + 120 )
      {
        v10 = v9 - 8;
        while ( v10 )
        {
          v11 = *(_QWORD *)(v10 + 8);
          v12 = v8 + 1;
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 96) + 96LL) + 92LL) )
            v12 = v8;
          v8 = v12;
          v10 = v11 - 8;
          if ( v11 == v13 + 120 )
            v10 = 0LL;
        }
      }
      v3 = v8;
    }
    else
    {
      v3 = *(_DWORD *)(v13 + 136);
    }
  }
  auto_rc<DMMVIDPN const>::reset(&v13, 0LL);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v14 + 40));
  return v3;
}
