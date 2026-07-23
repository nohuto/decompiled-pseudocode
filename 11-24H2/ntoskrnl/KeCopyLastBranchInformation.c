/*
 * XREFs of KeCopyLastBranchInformation @ 0x14042D2F0
 * Callers:
 *     PspGetContext @ 0x140988970 (PspGetContext.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall KeCopyLastBranchInformation(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax

  if ( (*(_BYTE *)(a2 + 368) & 1) != 0 )
  {
    result = *(unsigned int *)(a2 + 256);
    if ( (result & 0x100) == 0 )
    {
LABEL_3:
      *(_OWORD *)(a1 + 1200) = 0LL;
      *(_OWORD *)(a1 + 1216) = 0LL;
      return result;
    }
  }
  else
  {
    result = (unsigned __int64)KeGetCurrentPrcb();
    if ( (*(_DWORD *)(result + 328) & 0x100LL) == 0 )
      goto LABEL_3;
  }
  *(_OWORD *)(a1 + 1200) = *(_OWORD *)(a2 + 272);
  *(_OWORD *)(a1 + 1216) = *(_OWORD *)(a2 + 288);
  if ( (*(_BYTE *)(a2 + 368) & 1) != 0 )
  {
    if ( (*(_QWORD *)(a1 + 1200) & 0x7FFFFFFFFFFFFFFFuLL) > 0x7FFFFFFEFFFFLL )
      *(_QWORD *)(a1 + 1200) = 0LL;
    if ( (*(_QWORD *)(a1 + 1208) & 0x7FFFFFFFFFFFFFFFuLL) > 0x7FFFFFFEFFFFLL )
      *(_QWORD *)(a1 + 1208) = 0LL;
    if ( (*(_QWORD *)(a1 + 1216) & 0x7FFFFFFFFFFFFFFFuLL) > 0x7FFFFFFEFFFFLL )
      *(_QWORD *)(a1 + 1216) = 0LL;
    result = *(_QWORD *)(a1 + 1224) & 0x7FFFFFFFFFFFFFFFLL;
    if ( result > 0x7FFFFFFEFFFFLL )
      *(_QWORD *)(a1 + 1224) = 0LL;
  }
  return result;
}
