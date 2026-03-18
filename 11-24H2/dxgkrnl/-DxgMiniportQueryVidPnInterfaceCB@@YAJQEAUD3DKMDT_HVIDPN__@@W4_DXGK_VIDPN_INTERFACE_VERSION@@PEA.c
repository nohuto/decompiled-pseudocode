/*
 * XREFs of ?DxgMiniportQueryVidPnInterfaceCB@@YAJQEAUD3DKMDT_HVIDPN__@@W4_DXGK_VIDPN_INTERFACE_VERSION@@PEAPEBU_DXGK_VIDPN_INTERFACE@@@Z @ 0x140388BF0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140024690 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030E28 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x140040B88 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 */

__int64 __fastcall DxgMiniportQueryVidPnInterfaceCB(
        struct D3DKMDT_HVIDPN__ *const a1,
        enum _DXGK_VIDPN_INTERFACE_VERSION a2,
        const struct _DXGK_VIDPN_INTERFACE **a3)
{
  __int64 v5; // rsi
  VIDPN_MGR *v6; // rbx
  const struct _DXGK_VIDPN_INTERFACE *v7; // rax
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // r8
  struct DXGADAPTER *ContainingAdapter; // rax
  int v17; // [rsp+30h] [rbp-20h] BYREF
  __int64 v18; // [rsp+38h] [rbp-18h]
  char v19; // [rsp+40h] [rbp-10h]
  __int64 v20; // [rsp+70h] [rbp+20h] BYREF

  v17 = -1;
  v18 = 0LL;
  v5 = a2;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v19 = 1;
    v17 = 7056;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, (__int64)a3, 7056);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v17, 7056);
  if ( a3 )
  {
    *a3 = 0LL;
    if ( a1 && *((_DWORD *)a1 + 16) == 1833172997 )
    {
      v6 = (VIDPN_MGR *)*((_QWORD *)a1 + 6);
      if ( KeGetCurrentIrql() )
      {
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v20, (__int64)v6);
        ContainingAdapter = VIDPN_MGR::GetContainingAdapter(v6);
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)ContainingAdapter + 27) + 64LL) + 40LL) + 28LL) >= 0x2003u )
        {
          WdLogSingleEntry5(0LL, 275LL, 20LL, ContainingAdapter, 0LL, 0LL);
          WdLogGlobalForLineNumber = 4609;
        }
        DXGFASTMUTEX::Release((struct _KTHREAD **)(v20 + 40));
      }
      if ( (_DWORD)v5 == 1 )
      {
        v7 = (const struct _DXGK_VIDPN_INTERFACE *)*((_QWORD *)v6 + 51);
      }
      else
      {
        if ( (_DWORD)v5 != 2 )
        {
          *a3 = 0LL;
          WdLogSingleEntry1(3LL, v5);
          WdLogGlobalForLineNumber = 1543;
          v8 = -1073741637;
          goto LABEL_10;
        }
        v7 = (const struct _DXGK_VIDPN_INTERFACE *)*((_QWORD *)v6 + 52);
      }
      v8 = 0;
      *a3 = v7;
LABEL_10:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
      if ( v19 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v9, (__int64)&EventProfilerExit, v10, v17);
      }
      return v8;
    }
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 4589;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
    if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit, v15, v17);
    return 3223192323LL;
  }
  else
  {
    WdLogSingleEntry3(2LL, 0LL, v5, a1);
    WdLogGlobalForLineNumber = 4574;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
    if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit, v13, v17);
    return 3221225485LL;
  }
}
