/*
 * XREFs of ??2CKeyframeAnimation@@SAPEAX_K@Z @ 0x1801F2D3C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800DB07C (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 */

LPVOID __fastcall CKeyframeAnimation::operator new()
{
  HANDLE ProcessHeap; // rax
  LPVOID result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  ProcessHeap = GetProcessHeap();
  result = HeapAlloc(ProcessHeap, 8u, 0x220uLL);
  if ( !result )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  return result;
}
