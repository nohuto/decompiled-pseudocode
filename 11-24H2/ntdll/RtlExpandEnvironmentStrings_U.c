/*
 * XREFs of RtlExpandEnvironmentStrings_U @ 0x180084F70
 * Callers:
 *     RtlpLookupSafeCurDirList @ 0x1801146A8 (RtlpLookupSafeCurDirList.c)
 * Callees:
 *     RtlExpandEnvironmentStrings @ 0x180085010 (RtlExpandEnvironmentStrings.c)
 */

__int64 __fastcall RtlExpandEnvironmentStrings_U(int a1, unsigned __int16 *a2, __int64 a3, _DWORD *a4)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v6; // r8
  __int64 v8; // rdx
  __int64 v9; // r9
  __int64 result; // rax
  int v11; // ecx
  unsigned __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  v4 = *(unsigned __int16 *)(a3 + 2);
  v6 = *a2;
  v8 = *((_QWORD *)a2 + 1);
  v9 = *(_QWORD *)(a3 + 8);
  v12 = 0LL;
  LODWORD(result) = RtlExpandEnvironmentStrings(a1, v8, v6 >> 1, v9, v4 >> 1, (__int64)&v12);
  v11 = v12;
  if ( v12 > 0x7FFF )
  {
    result = 3221225473LL;
    if ( a4 )
      *a4 = 0;
  }
  else
  {
    if ( (int)result >= 0 )
      *(_WORD *)a3 = 2 * (v12 - 1);
    if ( a4 )
      *a4 = 2 * v11;
    return (unsigned int)result;
  }
  return result;
}
