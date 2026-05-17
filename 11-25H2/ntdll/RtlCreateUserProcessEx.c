/*
 * XREFs of RtlCreateUserProcessEx @ 0x1800FD8A0
 * Callers:
 *     RtlCreateUserProcess @ 0x180138560 (RtlCreateUserProcess.c)
 * Callees:
 *     RtlNormalizeProcessParams @ 0x1800FD960 (RtlNormalizeProcessParams.c)
 *     RtlpCreateUserProcess @ 0x1800FDA44 (RtlpCreateUserProcess.c)
 */

__int64 __fastcall RtlCreateUserProcessEx(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 a5)
{
  int v7; // edi
  __int64 v9; // rax
  int v10; // edx
  int v11; // r9d
  int v12; // ecx
  int v13; // edx
  int v14; // r8d

  v7 = a1;
  if ( !a1 )
    return 3221225485LL;
  if ( !a2 )
    return 3221225485LL;
  v9 = RtlNormalizeProcessParams(a2);
  if ( !v9 )
    return 3221225485LL;
  v10 = 0;
  if ( a3 )
    v10 = 4;
  else
    *(_QWORD *)(v9 + 72) = 0LL;
  v11 = *(_DWORD *)(v9 + 8);
  v12 = v10 | 0x80;
  if ( (v11 & 0x40000) == 0 )
    v12 = v10;
  v13 = v12 | 0x40;
  if ( (v11 & 0x400000) == 0 )
    v13 = v12;
  v14 = v13 | 0x40000;
  if ( (v11 & 0x800000) == 0 )
    v14 = v13;
  return RtlpCreateUserProcess(v7, v9, v14, 1, a4, a5);
}
