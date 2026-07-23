/*
 * XREFs of RtlDoesRequireFunctionOverrideFixups @ 0x14093BDC4
 * Callers:
 *     RtlApplyFunctionOverrideFixupsToImage @ 0x140787BC0 (RtlApplyFunctionOverrideFixupsToImage.c)
 *     MiRelocateImagePfn @ 0x14093B6F8 (MiRelocateImagePfn.c)
 *     MiPerformFixups @ 0x14093BA30 (MiPerformFixups.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x1404F6240 (-terminate@details@gsl@@YAXXZ.c)
 */

bool __fastcall RtlDoesRequireFunctionOverrideFixups(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // eax
  __int64 v4; // r10
  unsigned int v5; // eax
  __int64 v6; // rax

  v2 = *(_DWORD *)(a1 + 32);
  if ( (unsigned int)a2 < v2 || (v3 = *(_DWORD *)(a1 + 36), (unsigned int)a2 > v3) )
  {
    v6 = 0LL;
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 24);
    v5 = v3 - v2 + 1;
    if ( !v4 && v5 || (a2 = (unsigned int)a2 - v2, (unsigned int)a2 >= (unsigned __int64)v5) )
    {
      gsl::details::terminate((gsl::details *)a1, a2);
      __debugbreak();
    }
    v6 = *(_QWORD *)(v4 + 8 * a2);
  }
  return v6 != 0;
}
