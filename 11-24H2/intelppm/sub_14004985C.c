/*
 * XREFs of sub_14004985C @ 0x14004985C
 * Callers:
 *     sub_140049798 @ 0x140049798 (sub_140049798.c)
 * Callees:
 *     sub_140008FEC @ 0x140008FEC (sub_140008FEC.c)
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 *     sub_14002CDD0 @ 0x14002CDD0 (sub_14002CDD0.c)
 */

_QWORD *sub_14004985C()
{
  int **v0; // rcx
  _QWORD *result; // rax
  _QWORD *v2; // rbx
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+28h] [rbp-30h] BYREF
  __int64 v7; // [rsp+30h] [rbp-28h] BYREF
  int v8; // [rsp+38h] [rbp-20h]

  v0 = &off_1400179C8;
  while ( 1 )
  {
    result = sub_140008FEC(v0);
    v2 = result;
    if ( !result )
      break;
    v6 = 0LL;
    v5 = 0LL;
    v7 = 0LL;
    v8 = 0;
    if ( *((_BYTE *)result + 29) || *((_BYTE *)result + 30) )
    {
      v3 = -1073741275;
    }
    else
    {
      v3 = ((__int64 (__fastcall *)(_QWORD, bool, __int64 *, __int64 *, __int64))RtlQueryFeatureConfiguration)(
             *((unsigned int *)result + 6),
             (unsigned __int8)(*((_BYTE *)result + 28) - 2) > 1u,
             &v6,
             &v7,
             v5);
      if ( v3 == -2147483614 )
      {
        v5 = 518LL;
        v4 = 518LL;
        do
        {
          *(_QWORD *)*v2 = v4;
          result = sub_140008FEC(v2 + 7);
          v2 = result;
        }
        while ( result );
        return result;
      }
    }
    sub_14002CDD0(v3, (__int64)&v7, &v5);
    v0 = (int **)(v2 + 7);
    *(_QWORD *)*v2 = v5;
  }
  return result;
}
