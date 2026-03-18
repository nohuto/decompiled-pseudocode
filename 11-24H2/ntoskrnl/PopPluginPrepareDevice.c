/*
 * XREFs of PopPluginPrepareDevice @ 0x14048E5E0
 * Callers:
 *     PoFxPrepareDevice @ 0x14048E428 (PoFxPrepareDevice.c)
 * Callees:
 *     PopFxBugCheck @ 0x140377108 (PopFxBugCheck.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall PopPluginPrepareDevice(ULONG_PTR BugCheckParameter3, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  char v5; // bl
  __int128 *v7; // rdi
  unsigned int v8; // esi
  __int64 v9; // rax
  __int128 v11; // [rsp+20h] [rbp-38h] BYREF
  __int128 v12; // [rsp+30h] [rbp-28h] BYREF
  __int128 v13; // [rsp+40h] [rbp-18h]

  v4 = *(_QWORD *)(BugCheckParameter3 + 96);
  v5 = 0;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  if ( v4 )
  {
    if ( (*(_DWORD *)(BugCheckParameter3 + 24) & 0x8000000) != 0 )
    {
      v7 = &v12;
      *(_QWORD *)&v13 = *(_QWORD *)(a2 + 32);
      v8 = 144;
      v9 = *(_QWORD *)(a2 + 16);
      *(_QWORD *)&v12 = a2 + 128;
      *((_QWORD *)&v13 + 1) = *(_QWORD *)(v9 + 32);
    }
    else
    {
      *(_QWORD *)&v11 = a2 + 128;
      v7 = &v11;
      v8 = 1;
    }
    if ( !(unsigned __int8)guard_dispatch_icall_no_overrides(v8, v7, v4, a4) )
      PopFxBugCheck(0x605uLL, v8, BugCheckParameter3, 0LL);
    return *((_BYTE *)v7 + 8);
  }
  return v5;
}
