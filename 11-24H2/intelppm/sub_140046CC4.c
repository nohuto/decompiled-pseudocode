/*
 * XREFs of sub_140046CC4 @ 0x140046CC4
 * Callers:
 *     sub_140041578 @ 0x140041578 (sub_140041578.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_140029F8C @ 0x140029F8C (sub_140029F8C.c)
 *     sub_14002D930 @ 0x14002D930 (sub_14002D930.c)
 *     sub_14003ED1C @ 0x14003ED1C (sub_14003ED1C.c)
 */

__int64 __fastcall sub_140046CC4(_QWORD *a1)
{
  _QWORD *v1; // rdi
  __int64 v3; // rax
  int v4; // ebp
  __int64 v5; // rdx
  struct _DEVICE_OBJECT *v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // r14

  v1 = a1 + 26;
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(qword_140019120 + 2504))(qword_140019128, a1[26], 0LL);
  v3 = a1[35];
  v4 = -1073741823;
  if ( (v3 & 0x7F070) != 0 )
  {
    v4 = sub_14003ED1C((__int64)a1, a1 + 66);
    if ( v4 >= 0 )
      goto LABEL_8;
    a1[35] &= 0xFFFFFFFFFFF80F8FuLL;
    v8 = a1 + 26;
    v3 = a1[35];
  }
  else
  {
    v8 = v1;
  }
  if ( (v3 & 7) != 0 )
  {
    v4 = sub_14002D930((__int64)a1);
    v1 = v8;
    if ( v4 < 0 )
    {
      a1[35] &= 0xFFFFFFFFFFFFFFF8uLL;
      goto LABEL_9;
    }
LABEL_8:
    v4 = 0;
    sub_140029F8C((int *)a1[66], v5, v6, v7);
  }
LABEL_9:
  (*(void (__fastcall **)(__int64, _QWORD))(qword_140019120 + 2512))(qword_140019128, *v1);
  return (unsigned int)v4;
}
