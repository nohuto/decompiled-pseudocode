/*
 * XREFs of KiInitializeSharedReadyQueue @ 0x1405B342C
 * Callers:
 *     KiInitPrcb @ 0x140B46260 (KiInitPrcb.c)
 * Callees:
 *     Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline @ 0x1404EFFC4 (Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

void (__fastcall *__fastcall KiInitializeSharedReadyQueue(__int64 a1, __int64 a2))(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v5; // rcx
  void (__fastcall *result)(__int64, __int64); // rax

  v2 = (_QWORD *)(a1 + 64);
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v5 = 32LL;
  do
  {
    v2[1] = v2;
    *v2 = v2;
    v2 += 2;
    --v5;
  }
  while ( v5 );
  memset_0((void *)(a1 + 576), 63, 0x40uLL);
  *(_BYTE *)(a1 + 704) = 1;
  *(_BYTE *)(a1 + 705) = *(_BYTE *)(a2 + 209);
  *(_BYTE *)(a1 + 706) = 1;
  *(_BYTE *)(a1 + 708) = 1;
  *(_WORD *)(a1 + 710) = *(unsigned __int8 *)(a2 + 208);
  *(_QWORD *)(a1 + 712) = *(_QWORD *)(a2 + 200);
  if ( (unsigned int)Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline() )
    *(_QWORD *)(a1 + 720) = *(_QWORD *)(a2 + 192);
  *(_QWORD *)(a1 + 856) = 0LL;
  result = KiSoftParkElectionDpcRoutine;
  *(_QWORD *)(a1 + 816) = 0LL;
  *(_QWORD *)(a1 + 824) = KiSoftParkElectionDpcRoutine;
  *(_DWORD *)(a1 + 800) = 275;
  *(_QWORD *)(a1 + 832) = a1;
  return result;
}
