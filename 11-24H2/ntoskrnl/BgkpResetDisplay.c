/*
 * XREFs of BgkpResetDisplay @ 0x14058D350
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall BgkpResetDisplay(char a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v5; // rcx

  *a3 = 0LL;
  if ( !a1 || dword_140E3EE58 == 2 )
    return 3221225659LL;
  if ( !qword_140E65EB8 )
    return 3221225473LL;
  guard_dispatch_icall_no_overrides(80LL, 50LL);
  LOBYTE(v5) = 1;
  VidResetDisplay(v5);
  *(_WORD *)(a2 + 1) = 0;
  *(_BYTE *)(a2 + 3) = 0;
  *(_QWORD *)(a2 + 20) = 0LL;
  *(_DWORD *)(a2 + 28) = 0;
  *(_DWORD *)(a2 + 8) = 640;
  *(_DWORD *)(a2 + 12) = 640;
  *(_QWORD *)(a2 + 32) = BgkpVgaBltRoutine;
  result = 0LL;
  *(_BYTE *)a2 = 0;
  *(_DWORD *)(a2 + 4) = 480;
  *(_DWORD *)(a2 + 16) = 1;
  return result;
}
