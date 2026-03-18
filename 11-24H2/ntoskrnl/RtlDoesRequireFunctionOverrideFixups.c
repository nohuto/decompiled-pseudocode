/*
 * XREFs of RtlDoesRequireFunctionOverrideFixups @ 0x140958E74
 * Callers:
 *     RtlApplyFunctionOverrideFixupsToImage @ 0x140787C90 (RtlApplyFunctionOverrideFixupsToImage.c)
 *     MiRelocateImagePfn @ 0x1409587A8 (MiRelocateImagePfn.c)
 *     MiPerformFixups @ 0x140958AE0 (MiPerformFixups.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x1404F8960 (-terminate@details@gsl@@YAXXZ.c)
 */

bool __fastcall RtlDoesRequireFunctionOverrideFixups(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned int v3; // eax
  __int64 v4; // r10
  unsigned int v5; // eax
  __int64 v6; // rax

  v2 = *(unsigned int *)(a1 + 32);
  if ( (unsigned int)a2 < (unsigned int)v2 || (v3 = *(_DWORD *)(a1 + 36), (unsigned int)a2 > v3) )
  {
    v6 = 0LL;
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 24);
    v5 = v3 - v2 + 1;
    if ( !v4 && v5 || (a2 = (unsigned int)(a2 - v2), (unsigned int)a2 >= (unsigned __int64)v5) )
    {
      gsl::details::terminate((gsl::details *)a1, a2, v2, v5);
      __debugbreak();
    }
    v6 = *(_QWORD *)(v4 + 8 * a2);
  }
  return v6 != 0;
}
