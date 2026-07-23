/*
 * XREFs of KiReselectIdealProcessorAfterAffinityChange @ 0x1403A1D94
 * Callers:
 *     KiComputeThreadAffinity @ 0x1402A9724 (KiComputeThreadAffinity.c)
 * Callees:
 *     KeSelectIdealProcessor @ 0x1403A10AC (KeSelectIdealProcessor.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall KiReselectIdealProcessorAfterAffinityChange(__int64 a1, __int64 a2, __int64 a3, _WORD *a4)
{
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  _QWORD v9[3]; // [rsp+20h] [rbp-28h] BYREF

  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 544) + 184LL);
  v9[0] = *(_QWORD *)(a3 + 36464);
  v6 = *(unsigned __int16 *)(a2 + 8);
  v9[1] = *(_QWORD *)(*(_QWORD *)(a3 + 192) + 128LL);
  if ( (unsigned __int16)v6 >= *(_WORD *)(v5 + 208) )
    v7 = 0LL;
  else
    v7 = *(_QWORD *)(v5 + 8 * v6 + 216);
  v9[2] = v7;
  return KeSelectIdealProcessor(a2, a4, (__int64)v9, 3u);
}
