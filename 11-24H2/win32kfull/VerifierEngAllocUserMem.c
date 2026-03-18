/*
 * XREFs of VerifierEngAllocUserMem @ 0x14032FE30
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x14032FB80 (-VerifierRandomFailure@@YAHK@Z.c)
 */

PVOID __fastcall VerifierEngAllocUserMem(SIZE_T cjMemSize, __int64 ulTag)
{
  ULONG v2; // ebx

  v2 = ulTag;
  if ( (unsigned int)VerifierRandomFailure(cjMemSize, ulTag) )
    return 0LL;
  else
    return EngAllocUserMem(cjMemSize, v2);
}
