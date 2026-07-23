/*
 * XREFs of KiFilterBugCheckInfo @ 0x140505AAC
 * Callers:
 *     KeBugCheck2 @ 0x1405AE6F0 (KeBugCheck2.c)
 * Callees:
 *     <none>
 */

__int128 *__fastcall KiFilterBugCheckInfo(_DWORD *a1, __int64 a2)
{
  __int128 *result; // rax
  __int64 v3; // rax

  result = (__int128 *)KeGetCurrentPrcb();
  if ( result == (__int128 *)qword_140E0F2A8 )
  {
    KiBugCheckOriginalData = *(_OWORD *)a2;
    xmmword_140EEFF90 = *(_OWORD *)(a2 + 16);
    qword_140EEFFA0 = *(_QWORD *)(a2 + 32);
    *a1 = 265;
    *(_QWORD *)a2 = 265LL;
    v3 = qword_140E0A720;
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 8) = v3;
    *(_QWORD *)(a2 + 24) = qword_140E0F2B0;
    *(_QWORD *)(a2 + 32) = qword_140E0F2B8;
    result = &KiBugCheckOriginalData;
    qword_140E0F288 = (__int64)&KiBugCheckOriginalData;
    dword_140E0F298 = 40;
    KiHypervisorInitiatedCrashDump = 1;
  }
  return result;
}
