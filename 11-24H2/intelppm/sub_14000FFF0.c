/*
 * XREFs of sub_14000FFF0 @ 0x14000FFF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_14000FFF0(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        __int64 a7)
{
  __int64 v8; // rdx
  __int128 *v9; // r9
  void (__fastcall *v10)(__int128 *, __int64, __int128 *); // r10
  void (__fastcall *v11)(__int128 *, _QWORD); // rbx
  __int64 v12; // rdx
  __int64 v14; // rax
  __int128 v16; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+30h] [rbp-18h]

  v17 = 0LL;
  v8 = 88LL * a3;
  v16 = 0LL;
  v9 = (__int128 *)(v8 + a1 + 80);
  v10 = *(void (__fastcall **)(__int128 *, __int64, __int128 *))(v8 + a1 + 112);
  v11 = *(void (__fastcall **)(__int128 *, _QWORD))(v8 + a1 + 72);
  if ( v10 )
  {
    v12 = *(_QWORD *)(v8 + a1 + 104);
    while ( a6 )
    {
      v14 = qword_140019818 + 56LL * *(unsigned int *)(a7 + 4LL * (unsigned int)--a6);
      if ( *(_QWORD *)v14 )
      {
        v10 = *(void (__fastcall **)(__int128 *, __int64, __int128 *))(v14 + 40);
        v9 = (__int128 *)(v14 + 8);
        v11 = *(void (__fastcall **)(__int128 *, _QWORD))v14;
        if ( !v10 )
          goto LABEL_9;
        v12 = *(_QWORD *)(v14 + 32);
      }
      else
      {
        v12 += *(_QWORD *)(v14 + 32);
      }
    }
    v10(v9, a2 + v12, &v16);
    v9 = &v16;
  }
LABEL_9:
  v11(v9, a5);
  return 0LL;
}
