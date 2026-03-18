/*
 * XREFs of ??2CD2DSharedBuffer@@KAPEAX_K@Z @ 0x1801FBC7C
 * Callers:
 *     ?CreateFromHeap@CD2DSharedBuffer@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x1802D2088 (-CreateFromHeap@CD2DSharedBuffer@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 *     ?CreateFromSharedSection@CD2DSharedBuffer@@SAJPEBXIPEAVCSharedSection@@PEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x1802D215C (-CreateFromSharedSection@CD2DSharedBuffer@@SAJPEBXIPEAVCSharedSection@@PEAPEAUID2D1PrivateCompos.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 */

LPVOID __fastcall CD2DSharedBuffer::operator new()
{
  HANDLE ProcessHeap; // rax
  LPVOID result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  ProcessHeap = GetProcessHeap();
  result = HeapAlloc(ProcessHeap, 8u, 0x28uLL);
  if ( !result )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  return result;
}
