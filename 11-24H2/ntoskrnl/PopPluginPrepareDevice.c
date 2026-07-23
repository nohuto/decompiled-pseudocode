/*
 * XREFs of PopPluginPrepareDevice @ 0x140488A18
 * Callers:
 *     PoFxPrepareDevice @ 0x140488860 (PoFxPrepareDevice.c)
 * Callees:
 *     PopFxBugCheck @ 0x1403A9948 (PopFxBugCheck.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall PopPluginPrepareDevice(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  __int64 v2; // r8
  char v3; // bl
  __int128 *v5; // rdi
  unsigned int v6; // esi
  __int64 v7; // rax
  __int128 v9; // [rsp+20h] [rbp-38h] BYREF
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF
  __int128 v11; // [rsp+40h] [rbp-18h]

  v2 = *(_QWORD *)(BugCheckParameter3 + 96);
  v3 = 0;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  if ( v2 )
  {
    if ( (*(_DWORD *)(BugCheckParameter3 + 24) & 0x8000000) != 0 )
    {
      v5 = &v10;
      *(_QWORD *)&v11 = *(_QWORD *)(a2 + 32);
      v6 = 144;
      v7 = *(_QWORD *)(a2 + 16);
      *(_QWORD *)&v10 = a2 + 128;
      *((_QWORD *)&v11 + 1) = *(_QWORD *)(v7 + 32);
    }
    else
    {
      *(_QWORD *)&v9 = a2 + 128;
      v5 = &v9;
      v6 = 1;
    }
    if ( !(unsigned __int8)guard_dispatch_icall_no_overrides(v6, v5) )
      PopFxBugCheck(0x605uLL, v6, BugCheckParameter3, 0LL);
    return *((_BYTE *)v5 + 8);
  }
  return v3;
}
