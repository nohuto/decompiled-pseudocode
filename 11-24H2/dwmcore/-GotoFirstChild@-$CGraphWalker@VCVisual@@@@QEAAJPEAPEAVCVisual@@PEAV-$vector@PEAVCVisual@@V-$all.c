/*
 * XREFs of ?GotoFirstChild@?$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@PEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@Z @ 0x18017B5C0
 * Callers:
 *     ??$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCInputSinkContext@@W4WalkReason@@@Z @ 0x18007BC84 (--$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCInputSinkContex.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x1802DF6D4 (memcpy_0.c)
 */

__int64 __fastcall CGraphWalker<CVisual>::GotoFirstChild(__int64 a1, unsigned __int64 **a2)
{
  __int64 v2; // rax
  __int64 v5; // rdi
  unsigned int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // r9
  __int64 v12; // r8
  unsigned __int64 v13; // rcx
  unsigned __int64 *v14; // rax
  unsigned __int64 v15; // r10
  __int64 result; // rax
  unsigned int v17; // ebp
  __int64 v18; // rdx
  unsigned int v19; // ebx
  unsigned int v20; // r14d
  HANDLE ProcessHeap; // rax
  void *v22; // rax
  void *v23; // r15
  void *v24; // r14
  HANDLE v25; // rax
  __int128 v26; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = *(_QWORD *)(a1 + 8);
  *a2 = 0LL;
  v5 = *(_QWORD *)(v2 + 80);
  if ( (v5 & 2) != 0 )
    v5 = *(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v5) = v5 & 1;
  if ( !(_DWORD)v5 )
    return 1LL;
  *(_QWORD *)&v26 = *(_QWORD *)(a1 + 16);
  v6 = *(_DWORD *)(a1 + 24);
  v7 = *(unsigned int *)(a1 + 40);
  *((_QWORD *)&v26 + 1) = v6;
  v8 = *(unsigned int *)(a1 + 44);
  if ( (_DWORD)v7 != (_DWORD)v8 )
    goto LABEL_5;
  v17 = 2 * v8;
  if ( (unsigned __int64)(2 * v8) > 0xFFFFFFFF )
  {
    v18 = 98LL;
LABEL_25:
    v19 = -2147024362;
LABEL_26:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
      (const char *)v19);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x83,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
      (const char *)v19);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x87u, 0LL);
    return v19;
  }
  if ( v17 <= 0x40 )
    v17 = 64;
  v20 = 16 * v7;
  if ( (unsigned __int64)(16 * v7) > 0xFFFFFFFF )
  {
    v18 = 101LL;
    goto LABEL_25;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v17 <= 0x10 )
  {
    v19 = -2147024809;
    goto LABEL_34;
  }
  ProcessHeap = GetProcessHeap();
  v22 = HeapAlloc(ProcessHeap, 0, 16LL * v17);
  v23 = v22;
  if ( !v22 )
  {
    v19 = -2147024882;
LABEL_34:
    v18 = 104LL;
    goto LABEL_26;
  }
  memcpy_0(v22, *(const void **)(a1 + 32), v20);
  v24 = *(void **)(a1 + 32);
  if ( v24 )
  {
    v25 = GetProcessHeap();
    HeapFree(v25, 0, v24);
  }
  *(_QWORD *)(a1 + 32) = v23;
  *(_DWORD *)(a1 + 44) = v17;
LABEL_5:
  *(_OWORD *)(*(_QWORD *)(a1 + 32) + 16LL * (unsigned int)(*(_DWORD *)(a1 + 40))++) = v26;
  v9 = *(_DWORD *)(a1 + 52);
  if ( v9 <= *(_DWORD *)(a1 + 40) )
    v9 = *(_DWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 52) = v9;
  if ( *(_DWORD *)(a1 + 28) == 1 )
    v10 = 0;
  else
    v10 = v5 - 1;
  *(_DWORD *)(a1 + 24) = v10;
  v11 = *(_QWORD *)(a1 + 8);
  v12 = *(_QWORD *)(v11 + 80) & 2LL;
  v13 = *(_QWORD *)(v11 + 80) & 1LL;
  v14 = (unsigned __int64 *)(*(_QWORD *)(v11 + 80) & 0xFFFFFFFFFFFFFFFCuLL);
  if ( v12 )
    v15 = *v14;
  else
    v15 = *(_QWORD *)(v11 + 80) & 1LL;
  if ( v15 <= v10 )
    goto LABEL_17;
  if ( v12 )
    v13 = *v14;
  if ( v10 >= v13 )
  {
LABEL_17:
    v14 = 0LL;
  }
  else if ( v13 != 1 )
  {
    v14 = (unsigned __int64 *)v14[v10 + 2];
  }
  ++*(_DWORD *)(a1 + 4);
  *(_QWORD *)(a1 + 8) = v14;
  *a2 = v14;
  result = 0LL;
  *(_QWORD *)(a1 + 16) = v11;
  return result;
}
