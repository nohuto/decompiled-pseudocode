/*
 * XREFs of sub_140035020 @ 0x140035020
 * Callers:
 *     sub_140041578 @ 0x140041578 (sub_140041578.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_140035020(_QWORD *a1)
{
  void (__fastcall *v1)(_QWORD, _QWORD); // rax
  void (__fastcall *v3)(_QWORD); // rax

  v1 = (void (__fastcall *)(_QWORD, _QWORD))a1[22];
  if ( v1 )
    v1(a1[1], sub_140003690);
  v3 = (void (__fastcall *)(_QWORD))a1[15];
  if ( v3 )
    v3(a1[13]);
  return 0LL;
}
