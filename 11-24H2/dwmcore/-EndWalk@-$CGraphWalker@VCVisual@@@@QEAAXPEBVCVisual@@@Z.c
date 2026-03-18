/*
 * XREFs of ?EndWalk@?$CGraphWalker@VCVisual@@@@QEAAXPEBVCVisual@@@Z @ 0x1801ADD20
 * Callers:
 *     ??$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCInputSinkContext@@W4WalkReason@@@Z @ 0x18007BC84 (--$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCInputSinkContex.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x1802467D8 (--0CThreadContext@@AEAA@XZ.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

void __fastcall CGraphWalker<CVisual>::EndWalk(__int64 a1, __int64 a2)
{
  int v3; // r14d
  _QWORD *Value; // rsi
  unsigned __int64 v5; // rdi
  unsigned __int64 *v6; // rbx
  unsigned __int64 v7; // r9
  __int64 v8; // rcx
  int v9; // eax
  HANDLE v10; // rax
  unsigned __int64 v11; // rdi
  __int64 v12; // rbx
  HANDLE v13; // rax
  LPVOID v14; // rsi
  unsigned __int64 v15; // rdi
  HANDLE ProcessHeap; // rax
  CThreadContext *v17; // rax
  CThreadContext *v18; // rax
  void *v19; // rdi
  HANDLE v20; // rax

  v3 = -2147024882;
  if ( a2 )
  {
    Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
    if ( !Value )
    {
      ProcessHeap = GetProcessHeap();
      v17 = (CThreadContext *)HeapAlloc(ProcessHeap, 0, 0x1C0uLL);
      if ( !v17 || (v18 = CThreadContext::CThreadContext(v17), (Value = v18) == 0LL) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x28u, 0LL);
        goto LABEL_13;
      }
      TlsSetValue(CThreadContext::s_dwTlsIndex, v18);
    }
    v5 = Value[4] & 1LL;
    v6 = (unsigned __int64 *)(Value[4] & 0xFFFFFFFFFFFFFFFCuLL);
    if ( (Value[4] & 2) != 0 )
    {
      v5 = *v6;
      v7 = *v6 - 1;
    }
    else
    {
      v7 = v5 - 1;
    }
    if ( v7 < v5 )
    {
      v8 = v5 - v7;
      if ( v5 - v7 > 1 )
        v8 = 1LL;
      if ( v5 == v8 )
      {
        if ( v5 > 1 && v6 )
        {
          v10 = GetProcessHeap();
          HeapFree(v10, 0, v6);
        }
        Value[4] = 0LL;
      }
      else
      {
        v11 = v5 - v8;
        if ( v11 == 1 )
        {
          v15 = v6[(v8 & (v7 - 1)) + 2];
          operator delete((void *)(Value[4] & 0xFFFFFFFFFFFFFFFCuLL));
          Value[4] = v15 | 1;
        }
        else
        {
          if ( v7 < v11 )
            memmove_0(&v6[v7 + 2], &v6[v7 + 2 + v8], 8 * (v11 - v7));
          *v6 = v11;
        }
      }
    }
  }
LABEL_13:
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 40) = 0;
  v9 = *(_DWORD *)(a1 + 48);
  if ( v9 != 10 )
  {
    *(_DWORD *)(a1 + 48) = v9 + 1;
    return;
  }
  v12 = 64LL;
  if ( *(_DWORD *)(a1 + 52) > 0x40u )
    v12 = *(unsigned int *)(a1 + 52);
  if ( (unsigned __int64)(3 * v12) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0x10Eu, 0LL);
LABEL_23:
    *(_QWORD *)(a1 + 48) = 0LL;
    return;
  }
  if ( (unsigned int)(3 * v12) > *(_DWORD *)(a1 + 44) )
    goto LABEL_23;
  if ( !(_DWORD)v12 || 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v12 <= 0x10 )
  {
    v3 = -2147024809;
    goto LABEL_29;
  }
  v13 = GetProcessHeap();
  v14 = HeapAlloc(v13, 0, 16LL * (unsigned int)v12);
  if ( !v14 )
  {
LABEL_29:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3, 0x11Eu, 0LL);
    goto LABEL_23;
  }
  v19 = *(void **)(a1 + 32);
  if ( v19 )
  {
    v20 = GetProcessHeap();
    HeapFree(v20, 0, v19);
  }
  *(_QWORD *)(a1 + 32) = v14;
  *(_DWORD *)(a1 + 44) = v12;
  *(_QWORD *)(a1 + 48) = 0LL;
}
