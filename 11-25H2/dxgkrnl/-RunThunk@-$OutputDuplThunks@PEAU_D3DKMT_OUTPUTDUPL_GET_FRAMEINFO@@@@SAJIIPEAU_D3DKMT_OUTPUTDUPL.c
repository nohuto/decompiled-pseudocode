/*
 * XREFs of ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x140302B10
 * Callers:
 *     DxgkOutputDuplGetFrameInfo @ 0x140302940 (DxgkOutputDuplGetFrameInfo.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x140023190 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x140301A0C (-RunForAdapter@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO@@@@SAJPEAVDXGADAPTER@@_NI.c)
 */

__int64 __fastcall OutputDuplThunks<_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO *>::RunThunk(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 (__fastcall *a4)(struct OUTPUTDUPL_MGR *, __int64))
{
  unsigned int v7; // ebp
  struct DXGPROCESS *Current; // rax
  __int64 v9; // rdx
  unsigned int v10; // ebx
  struct DXGADAPTER *v12; // [rsp+50h] [rbp-28h] BYREF
  DXGADAPTER *v13; // [rsp+58h] [rbp-20h] BYREF

  v7 = a1;
  Current = DXGPROCESS::GetCurrent(a1);
  if ( Current )
  {
    v12 = 0LL;
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v13, v7, Current, &v12, 1);
    v10 = OutputDuplThunks<_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO *>::RunForAdapter(v12, v9, a2, a3, a4);
    if ( v13 )
      DXGADAPTER::ReleaseReference(v13);
    return v10;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 45;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Invalid process context.", 45LL, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
}
