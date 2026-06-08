/*
 * XREFs of sub_1400310F0 @ 0x1400310F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_14002A228 @ 0x14002A228 (sub_14002A228.c)
 */

__int64 sub_1400310F0()
{
  unsigned int v0; // ebx
  __int64 *v1; // rdi
  int v2; // eax

  v0 = 0;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(qword_140019120 + 2504))(qword_140019128, qword_140019798, 0LL);
  v1 = (__int64 *)qword_1400197A0;
  while ( v1 != &qword_1400197A0 )
  {
    v2 = sub_14002A228((__int64)v1);
    v1 = (__int64 *)*v1;
    if ( v2 < 0 )
      v0 = v2;
  }
  (*(void (__fastcall **)(__int64, __int64))(qword_140019120 + 2512))(qword_140019128, qword_140019798);
  return v0;
}
