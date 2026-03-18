/*
 * XREFs of KiFilterBugCheckInfo @ 0x1405081EC
 * Callers:
 *     KeBugCheck2 @ 0x1405B1780 (KeBugCheck2.c)
 * Callees:
 *     <none>
 */

__int128 *__fastcall KiFilterBugCheckInfo(_DWORD *a1, __int64 a2)
{
  __int128 *result; // rax
  __int64 v3; // rax

  result = (__int128 *)KeGetCurrentPrcb();
  if ( result == (__int128 *)qword_140E0F1E8 )
  {
    KiBugCheckOriginalData = *(_OWORD *)a2;
    xmmword_140EEFD50 = *(_OWORD *)(a2 + 16);
    qword_140EEFD60 = *(_QWORD *)(a2 + 32);
    *a1 = 265;
    *(_QWORD *)a2 = 265LL;
    v3 = qword_140E0A6A0;
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 8) = v3;
    *(_QWORD *)(a2 + 24) = qword_140E0F1F0;
    *(_QWORD *)(a2 + 32) = qword_140E0F1F8;
    result = &KiBugCheckOriginalData;
    qword_140E0F1C8 = (__int64)&KiBugCheckOriginalData;
    dword_140E0F1D8 = 40;
    KiHypervisorInitiatedCrashDump = 1;
  }
  return result;
}
