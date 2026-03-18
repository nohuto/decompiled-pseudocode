/*
 * XREFs of ??2CRectanglesShape@@SAPEAX_K@Z @ 0x1801CD460
 * Callers:
 *     ?GetShapeDataCore@CGeometryGroup@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1802A5D40 (-GetShapeDataCore@CGeometryGroup@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180251704 (--0CThreadContext@@AEAA@XZ.c)
 */

_QWORD *__fastcall CRectanglesShape::operator new()
{
  _DWORD *Value; // rbx
  int v1; // edx
  _QWORD *result; // rax
  HANDLE v3; // rax
  HANDLE ProcessHeap; // rax
  CThreadContext *v5; // rax
  CThreadContext *v6; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    ProcessHeap = GetProcessHeap();
    v5 = (CThreadContext *)HeapAlloc(ProcessHeap, 0, 0x1C0uLL);
    if ( !v5 || (v6 = CThreadContext::CThreadContext(v5), (Value = v6) == 0LL) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x28u, 0LL);
      ModuleFailFastForHRESULT(-2147024882, retaddr);
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, v6);
  }
  v1 = Value[13];
  result = 0LL;
  if ( v1 )
  {
    result = (_QWORD *)*((_QWORD *)Value + 7);
    *((_QWORD *)Value + 7) = *result;
    Value[13] = v1 - 1;
  }
  if ( !result )
  {
    v3 = GetProcessHeap();
    result = HeapAlloc(v3, 0, 0x40uLL);
    if ( !result )
      ModuleFailFastForHRESULT(-2147024882, retaddr);
  }
  return result;
}
