/*
 * XREFs of sub_18001E904 @ 0x18001E904
 * Callers:
 *     sub_18001E898 @ 0x18001E898 (sub_18001E898.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *__fastcall sub_18001E904(_QWORD *a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx

  *a1 = 0LL;
  a1[1] = 0LL;
  v8 = a2[1];
  if ( v8 )
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
  *a1 = *a2;
  a1[1] = a2[1];
  a1[2] = 0LL;
  a1[3] = 0LL;
  v9 = a3[1];
  if ( v9 )
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
  a1[2] = *a3;
  a1[3] = a3[1];
  a1[4] = 0LL;
  a1[5] = 0LL;
  v10 = a4[1];
  if ( v10 )
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
  a1[4] = *a4;
  a1[5] = a4[1];
  (**(void (__fastcall ***)(_QWORD))*a1)(*a1);
  v11 = a2[1];
  if ( v11 )
    sub_18001050C(v11);
  v12 = a3[1];
  if ( v12 )
    sub_18001050C(v12);
  v13 = a4[1];
  if ( v13 )
    sub_18001050C(v13);
  return a1;
}
