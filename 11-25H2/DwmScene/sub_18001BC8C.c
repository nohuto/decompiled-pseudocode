/*
 * XREFs of sub_18001BC8C @ 0x18001BC8C
 * Callers:
 *     sub_18001C650 @ 0x18001C650 (sub_18001C650.c)
 * Callees:
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_18001C028 @ 0x18001C028 (sub_18001C028.c)
 *     sub_18001C27C @ 0x18001C27C (sub_18001C27C.c)
 */

// Hidden C++ exception states: #wind=2
int __fastcall sub_18001BC8C(union _RTL_RUN_ONCE *a1, __int64 a2)
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
    v5 = sub_18001B098(24LL);
    v10 = v5;
    if ( v5 )
      v6 = sub_18001C028(v5, *(_QWORD *)(*(_QWORD *)a2 + 8LL), *(unsigned int *)(*(_QWORD *)a2 + 16LL));
    else
      v6 = 0LL;
    **(_QWORD **)a2 = v6;
    LODWORD(v8) = 0;
    return sub_18001C27C(&v7);
  }
  return result;
}
