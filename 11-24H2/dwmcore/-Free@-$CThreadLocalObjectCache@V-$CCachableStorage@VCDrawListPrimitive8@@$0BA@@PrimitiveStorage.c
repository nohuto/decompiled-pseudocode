/*
 * XREFs of ?Free@?$CThreadLocalObjectCache@V?$CCachableStorage@VCDrawListPrimitive8@@$0BA@@PrimitiveStorage@@VCDrawListPrimitive8@@@@SAXPEAX@Z @ 0x1801E1724
 * Callers:
 *     ??_E?$CCachableStorage@VCDrawListPrimitive8@@$0BA@@PrimitiveStorage@@UEAAPEAXI@Z @ 0x1801E16F0 (--_E-$CCachableStorage@VCDrawListPrimitive8@@$0BA@@PrimitiveStorage@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x180018090 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 */

int __fastcall CThreadLocalObjectCache<PrimitiveStorage::CCachableStorage<CDrawListPrimitive8,16>,CDrawListPrimitive8>::Free(
        _QWORD *a1)
{
  int Current; // eax
  struct CThreadContext *v3; // rcx
  __int64 v4; // rax
  HANDLE ProcessHeap; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]
  struct CThreadContext *v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0LL;
  Current = CThreadContext::GetCurrent(&v8);
  if ( Current < 0 )
    ModuleFailFastForHRESULT(Current, retaddr);
  v3 = v8;
  LODWORD(v4) = *((_DWORD *)v8 + 64);
  if ( *((_DWORD *)v8 + 65) < (unsigned int)v4 )
  {
    v4 = *((_QWORD *)v8 + 33);
    *a1 = v4;
    ++*((_DWORD *)v3 + 65);
    *((_QWORD *)v3 + 33) = a1;
  }
  else if ( a1 )
  {
    ProcessHeap = GetProcessHeap();
    LODWORD(v4) = HeapFree(ProcessHeap, 0, a1);
  }
  return v4;
}
