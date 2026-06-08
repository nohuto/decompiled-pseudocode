/*
 * XREFs of HviGetEnlightenmentInformation @ 0x14000D488
 * Callers:
 *     ProcLibGlobalInit @ 0x140043530 (ProcLibGlobalInit.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x14000D564 (HviIsHypervisorMicrosoftCompatible.c)
 */

__int64 HviGetEnlightenmentInformation()
{
  __int64 result; // rax
  _DWORD *v1; // r10

  result = HviIsHypervisorMicrosoftCompatible();
  if ( (_BYTE)result )
  {
    _RAX = 1073741828LL;
    __asm { cpuid }
    *v1 = result;
    v1[1] = _RBX;
    v1[2] = _RCX;
    v1[3] = _RDX;
  }
  else
  {
    *(_QWORD *)v1 = 0LL;
    *((_QWORD *)v1 + 1) = 0LL;
  }
  return result;
}
