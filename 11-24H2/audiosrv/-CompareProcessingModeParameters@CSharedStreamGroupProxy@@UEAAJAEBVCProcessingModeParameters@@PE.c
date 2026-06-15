/*
 * XREFs of ?CompareProcessingModeParameters@CSharedStreamGroupProxy@@UEAAJAEBVCProcessingModeParameters@@PEAW4PMP_MATCH_TYPE@@@Z @ 0x180060E00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CompareStreamingEffectsOverrideProcessingModeParameters@CSharedStreamGroupProxy@@IEAAJAEBVCProcessingModeParameters@@PEAW4PMP_MATCH_TYPE@@@Z @ 0x180060EE4 (-CompareStreamingEffectsOverrideProcessingModeParameters@CSharedStreamGroupProxy@@IEAAJAEBVCProc.c)
 *     ?CompareAECProcessingModeParameters@CSharedStreamGroupProxy@@IEAAJAEBVCProcessingModeParameters@@PEAW4PMP_MATCH_TYPE@@@Z @ 0x180061268 (-CompareAECProcessingModeParameters@CSharedStreamGroupProxy@@IEAAJAEBVCProcessingModeParameters@.c)
 *     _lambda_a8a3ec141be49a0429a3d190c13e56dc_::_lambda_a8a3ec141be49a0429a3d190c13e56dc_ @ 0x1800B4E3C (_lambda_a8a3ec141be49a0429a3d190c13e56dc_--_lambda_a8a3ec141be49a0429a3d190c13e56dc_.c)
 *     wil::scope_exit__lambda_b69ea153785b6672bcf93b875c697000___ @ 0x1800C0960 (wil--scope_exit__lambda_b69ea153785b6672bcf93b875c697000___.c)
 *     wil::details::lambda_call__lambda_b69ea153785b6672bcf93b875c697000___::_lambda_call__lambda_b69ea153785b6672bcf93b875c697000___ @ 0x1800F3DFC (wil--details--lambda_call__lambda_b69ea153785b6672bcf93b875c697000___--_lambda_call__lambda_b69e.c)
 */

__int64 __fastcall CSharedStreamGroupProxy::CompareProcessingModeParameters(
        CSharedStreamGroupProxy *this,
        const struct CProcessingModeParameters *a2,
        enum PMP_MATCH_TYPE *a3)
{
  CSharedStreamGroupProxy *v5; // rsi
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // edx
  __int64 v10; // rdx
  _BYTE v11[16]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v12[32]; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  int v14; // [rsp+70h] [rbp+20h] BYREF
  enum PMP_MATCH_TYPE *v15; // [rsp+80h] [rbp+30h] BYREF

  v15 = a3;
  *(_DWORD *)a3 = 1;
  if ( !*((_QWORD *)this + 223) )
    return 0LL;
  v5 = (CSharedStreamGroupProxy *)((char *)this - 8);
  v6 = lambda_a8a3ec141be49a0429a3d190c13e56dc_::_lambda_a8a3ec141be49a0429a3d190c13e56dc_(v11, (char *)this - 8, &v15);
  wil::scope_exit__lambda_b69ea153785b6672bcf93b875c697000___(v12, v6);
  v14 = 0;
  v7 = CSharedStreamGroupProxy::CompareAECProcessingModeParameters(v5, a2, (enum PMP_MATCH_TYPE *)&v14);
  v8 = v7;
  if ( v7 < 0 )
  {
    v10 = 2038LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_9;
  }
  v9 = v14;
  if ( v14 != 1 )
  {
    *(_DWORD *)v15 = v14;
    if ( !v9 )
      goto LABEL_8;
  }
  v14 = 0;
  v7 = CSharedStreamGroupProxy::CompareStreamingEffectsOverrideProcessingModeParameters(
         v5,
         a2,
         (enum PMP_MATCH_TYPE *)&v14);
  v8 = v7;
  if ( v7 < 0 )
  {
    v10 = 2046LL;
    goto LABEL_14;
  }
  if ( v14 != 1 )
    *(_DWORD *)v15 = v14;
LABEL_8:
  v8 = 0;
LABEL_9:
  wil::details::lambda_call__lambda_b69ea153785b6672bcf93b875c697000___::_lambda_call__lambda_b69ea153785b6672bcf93b875c697000___(v12);
  return v8;
}
