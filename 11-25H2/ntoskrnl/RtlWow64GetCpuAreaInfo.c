/*
 * XREFs of RtlWow64GetCpuAreaInfo @ 0x1409EBEDC
 * Callers:
 *     RtlpWalkFrameChain @ 0x140257BE0 (RtlpWalkFrameChain.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1409EBC24 (PspWow64ReadOrWriteThreadCpuArea.c)
 * Callees:
 *     RtlGetExtendedContextLength2 @ 0x14025D850 (RtlGetExtendedContextLength2.c)
 *     RtlpGetLegacyContextLength @ 0x140420F50 (RtlpGetLegacyContextLength.c)
 *     RtlpGetContextFlagsLocation @ 0x140458BC8 (RtlpGetContextFlagsLocation.c)
 *     RtlpRemoveArchDisallowedXStateFeatures @ 0x140466084 (RtlpRemoveArchDisallowedXStateFeatures.c)
 *     RtlpArchContextFlagFromMachine @ 0x1409EC038 (RtlpArchContextFlagFromMachine.c)
 */

__int64 __fastcall RtlWow64GetCpuAreaInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG64 v4; // rdi
  int v7; // eax
  ULONG v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 result; // rax
  ULONG ContextLength; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v14; // [rsp+58h] [rbp+10h] BYREF
  __int64 v15; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0LL;
  *(_QWORD *)(a3 + 24) = a1;
  v14 = 0;
  ContextLength = 0;
  v7 = RtlpArchContextFlagFromMachine(332LL, a2, a3, a4);
  v8 = v7;
  if ( !v7 )
    return 3221225485LL;
  RtlpGetLegacyContextLength(v7, 0LL, (int *)&v14);
  if ( (v8 & 0x10000) != 0 )
  {
    v15 = MEMORY[0xFFFFF780000003D8];
    RtlpRemoveArchDisallowedXStateFeatures(v8, &v15);
    v4 = v15 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (v15 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
      v8 |= 0x10040u;
  }
  RtlGetExtendedContextLength2(v8, &ContextLength, v4);
  v9 = ~(v14 - 1LL) & (a1 + v14 + 3LL);
  v10 = v9 + ContextLength + 7LL;
  *(_QWORD *)a3 = v9;
  *(_QWORD *)(a3 + 8) = v10 & 0xFFFFFFFFFFFFFFF8uLL;
  *(_QWORD *)(a3 + 16) = RtlpGetContextFlagsLocation(v9, v8);
  *(_DWORD *)(a3 + 32) = v8;
  *(_QWORD *)(a3 + 40) = (v11 + 11) & 0xFFFFFFFFFFFFFFFCuLL;
  result = 0LL;
  *(_WORD *)(a3 + 36) = 332;
  return result;
}
