/*
 * XREFs of ?Free@?$CThreadLocalObjectCache@V?$CCachableStorage@VCDrawListPrimitive4@@$0BA@@PrimitiveStorage@@VCDrawListPrimitive4@@@@SAXPEAX@Z @ 0x1801D5054
 * Callers:
 *     ??_E?$CCachableStorage@VCDrawListPrimitive4@@$0BA@@PrimitiveStorage@@UEAAPEAXI@Z @ 0x1801D5020 (--_E-$CCachableStorage@VCDrawListPrimitive4@@$0BA@@PrimitiveStorage@@UEAAPEAXI@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x1802467D8 (--0CThreadContext@@AEAA@XZ.c)
 */

int __fastcall CThreadLocalObjectCache<PrimitiveStorage::CCachableStorage<CDrawListPrimitive4,16>,CDrawListPrimitive4>::Free(
        _QWORD *lpMem)
{
  _DWORD *Value; // rbx
  __int64 v3; // rax
  HANDLE ProcessHeap; // rax
  CThreadContext *v5; // rax
  CThreadContext *v6; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    v5 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
    if ( !v5 || (v6 = CThreadContext::CThreadContext(v5), (Value = v6) == 0LL) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x28u, 0LL);
      ModuleFailFastForHRESULT(-2147024882, retaddr);
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, v6);
  }
  LODWORD(v3) = Value[60];
  if ( Value[61] < (unsigned int)v3 )
  {
    v3 = *((_QWORD *)Value + 31);
    *lpMem = v3;
    ++Value[61];
    *((_QWORD *)Value + 31) = lpMem;
  }
  else if ( lpMem )
  {
    ProcessHeap = GetProcessHeap();
    LODWORD(v3) = HeapFree(ProcessHeap, 0, lpMem);
  }
  return v3;
}
