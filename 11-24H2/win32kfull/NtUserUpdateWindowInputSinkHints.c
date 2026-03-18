/*
 * XREFs of NtUserUpdateWindowInputSinkHints @ 0x1401DF110
 * Callers:
 *     <none>
 * Callees:
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     RtlCopyFromUser @ 0x14026E428 (RtlCopyFromUser.c)
 */

__int64 __fastcall NtUserUpdateWindowInputSinkHints(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r14d
  __int64 v5; // rbx
  int v6; // esi
  unsigned int i; // edi
  __int128 v9; // [rsp+40h] [rbp-28h] BYREF
  __int128 v10; // [rsp+50h] [rbp-18h]

  v3 = a2;
  v5 = 0LL;
  v6 = 0;
  if ( (unsigned int)UserUnsafeIsCurrentProcessDwm(a1, a2, a3) )
  {
    for ( i = 0; i < v3; ++i )
    {
      v10 = 0LL;
      v9 = 0LL;
      RtlCopyFromUser(&v9, (void *)(a1 + 16LL * i), 0x10uLL);
      v10 = v9;
    }
  }
  else
  {
    v6 = -1073741790;
  }
  LOBYTE(v5) = v6 >= 0;
  return v5;
}
