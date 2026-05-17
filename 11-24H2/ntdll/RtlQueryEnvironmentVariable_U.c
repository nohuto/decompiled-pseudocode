/*
 * XREFs of RtlQueryEnvironmentVariable_U @ 0x180084F00
 * Callers:
 *     RtlpLookupSafeCurDirList @ 0x1801146A8 (RtlpLookupSafeCurDirList.c)
 * Callees:
 *     RtlQueryEnvironmentVariable @ 0x1800851D0 (RtlQueryEnvironmentVariable.c)
 */

__int64 __fastcall RtlQueryEnvironmentVariable_U(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  __int64 result; // rax
  __int16 v6; // cx
  unsigned __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  v3 = *(unsigned __int16 *)(a3 + 2);
  v7 = 0LL;
  result = RtlQueryEnvironmentVariable(
             a1,
             *((_QWORD *)a2 + 1),
             (unsigned __int64)*a2 >> 1,
             *(_QWORD *)(a3 + 8),
             v3 >> 1,
             &v7);
  v6 = v7;
  if ( v7 > 0x7FFF )
    return 3221225495LL;
  if ( (_DWORD)result == -1073741789 )
    v6 = v7 - 1;
  *(_WORD *)a3 = 2 * v6;
  return result;
}
