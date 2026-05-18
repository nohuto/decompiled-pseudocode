/*
 * XREFs of sub_18001BDEC @ 0x18001BDEC
 * Callers:
 *     sub_18001C7B0 @ 0x18001C7B0 (sub_18001C7B0.c)
 * Callees:
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_18001C188 @ 0x18001C188 (sub_18001C188.c)
 *     sub_18001C3DC @ 0x18001C3DC (sub_18001C3DC.c)
 */

// Hidden C++ exception states: #wind=2
int __fastcall sub_18001BDEC(union _RTL_RUN_ONCE *a1, __int64 a2)
{
  int result; // eax
  __int64 v5; // rax
  __int64 v6; // rcx
  union _RTL_RUN_ONCE *v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]
  BOOL fPending; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h]

  fPending = 0;
  result = InitOnceBeginInitialize(a1, 0, &fPending, 0LL);
  if ( !result )
  {
    result = o_abort();
    __debugbreak();
  }
  if ( fPending )
  {
    v7 = a1;
    v8 = 4LL;
    v5 = sub_18001B1F8(24LL);
    v10 = v5;
    if ( v5 )
      v6 = sub_18001C188(v5, *(_QWORD *)(*(_QWORD *)a2 + 8LL), *(unsigned int *)(*(_QWORD *)a2 + 16LL));
    else
      v6 = 0LL;
    **(_QWORD **)a2 = v6;
    LODWORD(v8) = 0;
    return sub_18001C3DC(&v7);
  }
  return result;
}
