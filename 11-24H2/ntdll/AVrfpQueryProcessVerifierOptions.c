/*
 * XREFs of AVrfpQueryProcessVerifierOptions @ 0x18002A024
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180028C60 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     RtlpCommitQueryDebugInfo @ 0x18002B900 (RtlpCommitQueryDebugInfo.c)
 *     RtlpDeCommitQueryDebugInfo @ 0x18011CF2C (RtlpDeCommitQueryDebugInfo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AVrfpQueryProcessVerifierOptions(__int64 a1)
{
  int v2; // r10d
  unsigned int *DebugInfo; // rax
  unsigned int *v4; // rbx
  unsigned int v5; // ecx
  unsigned int v7; // [rsp+38h] [rbp+10h] BYREF
  unsigned int v8; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0;
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x2000100) == 0 )
    return 0LL;
  v2 = ((__int64 (__fastcall *)(_QWORD, unsigned int *, _QWORD))qword_1801CB628)(0LL, &v7, 0LL);
  if ( v2 == -1073741820 )
  {
    DebugInfo = (unsigned int *)RtlpCommitQueryDebugInfo(a1, v7);
    v4 = DebugInfo;
    if ( DebugInfo )
    {
      v5 = v7;
      v8 = v7;
      DebugInfo[1] = 0;
      *DebugInfo = v5;
      v2 = ((__int64 (__fastcall *)(_QWORD, unsigned int *, unsigned int *))qword_1801CB628)(0LL, &v8, DebugInfo);
      if ( v2 < 0 )
        RtlpDeCommitQueryDebugInfo(a1, v4, v7);
      else
        *(_QWORD *)(a1 + 144) = v4;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v2;
}
