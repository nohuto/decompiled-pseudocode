/*
 * XREFs of RtlWow64GetCpuAreaInfo @ 0x1409E0A10
 * Callers:
 *     RtlpWalkFrameChain @ 0x140233800 (RtlpWalkFrameChain.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x140ACFCF8 (PspWow64ReadOrWriteThreadCpuArea.c)
 * Callees:
 *     RtlGetExtendedContextLength2 @ 0x1402354D0 (RtlGetExtendedContextLength2.c)
 *     RtlpGetContextFlagsLocation @ 0x14044E574 (RtlpGetContextFlagsLocation.c)
 *     RtlpRemoveArchDisallowedXStateFeatures @ 0x14045B69C (RtlpRemoveArchDisallowedXStateFeatures.c)
 *     RtlpGetLegacyContextLength @ 0x1404E7220 (RtlpGetLegacyContextLength.c)
 *     RtlpArchContextFlagFromMachine @ 0x1409E0B6C (RtlpArchContextFlagFromMachine.c)
 */

__int64 __fastcall RtlWow64GetCpuAreaInfo(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // rdi
  int v6; // eax
  ULONG v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 result; // rax
  ULONG ContextLength; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v13; // [rsp+58h] [rbp+10h] BYREF
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF

  v3 = 0LL;
  *(_QWORD *)(a3 + 24) = a1;
  v13 = 0;
  ContextLength = 0;
  v6 = RtlpArchContextFlagFromMachine(332LL);
  v7 = v6;
  if ( !v6 )
    return 3221225485LL;
  RtlpGetLegacyContextLength(v6, 0LL, &v13);
  if ( (v7 & 0x10000) != 0 )
  {
    v14 = MEMORY[0xFFFFF780000003D8];
    RtlpRemoveArchDisallowedXStateFeatures(v7, &v14);
    v3 = v14 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (v14 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
      v7 |= 0x10040u;
  }
  RtlGetExtendedContextLength2(v7, &ContextLength, v3);
  v8 = ~(v13 - 1LL) & (a1 + v13 + 3LL);
  v9 = v8 + ContextLength + 7LL;
  *(_QWORD *)a3 = v8;
  *(_QWORD *)(a3 + 8) = v9 & 0xFFFFFFFFFFFFFFF8uLL;
  *(_QWORD *)(a3 + 16) = RtlpGetContextFlagsLocation(v8, v7);
  *(_DWORD *)(a3 + 32) = v7;
  *(_QWORD *)(a3 + 40) = (v10 + 11) & 0xFFFFFFFFFFFFFFFCuLL;
  result = 0LL;
  *(_WORD *)(a3 + 36) = 332;
  return result;
}
