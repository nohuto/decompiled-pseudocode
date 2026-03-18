/*
 * XREFs of ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ @ 0x180097160
 * Callers:
 *     ?UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180053BD0 (-UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV-$TMilRect_@MUD2D_RECT_F@@U.c)
 *     ?EndWalk@SubTreeContext@CPreComputeContext@@AEAAXJ@Z @ 0x180096BA0 (-EndWalk@SubTreeContext@CPreComputeContext@@AEAAXJ@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18012B970 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180251704 (--0CThreadContext@@AEAA@XZ.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

void CThreadContext::UnregisterGraphWalkRoot(void)
{
  _QWORD *Value; // rdi
  __int64 v1; // rax
  unsigned __int64 *v2; // rbx
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // r9
  __int64 v5; // rcx
  HANDLE ProcessHeap; // rax
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rsi
  CThreadContext *v9; // rax
  CThreadContext *v10; // rax
  HANDLE v11; // rax

  Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    v9 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
    if ( !v9 || (v10 = CThreadContext::CThreadContext(v9), (Value = v10) == 0LL) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x28u, 0LL);
      return;
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, v10);
  }
  v1 = Value[4];
  v2 = (unsigned __int64 *)(v1 & 0xFFFFFFFFFFFFFFFCuLL);
  v3 = v1 & 1;
  if ( (v1 & 2) != 0 )
  {
    v3 = *v2;
    v4 = *v2 - 1;
  }
  else
  {
    v4 = v3 - 1;
  }
  if ( v4 < v3 )
  {
    v5 = v3 - v4;
    if ( v3 - v4 > 1 )
      v5 = 1LL;
    if ( v3 == v5 )
    {
      if ( v3 > 1 )
      {
        if ( v2 )
        {
          ProcessHeap = GetProcessHeap();
          HeapFree(ProcessHeap, 0, v2);
        }
      }
      Value[4] = 0LL;
    }
    else
    {
      v7 = v3 - v5;
      if ( v7 == 1 )
      {
        v8 = v2[(v5 & (v4 - 1)) + 2];
        if ( v2 )
        {
          v11 = GetProcessHeap();
          HeapFree(v11, 0, v2);
        }
        Value[4] = v8 | 1;
      }
      else
      {
        if ( v4 < v7 )
          memmove_0(&v2[v4 + 2], &v2[v4 + 2 + v5], 8 * (v7 - v4));
        *v2 = v7;
      }
    }
  }
}
