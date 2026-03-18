/*
 * XREFs of KiWobQosResponseRequired @ 0x140432CA0
 * Callers:
 *     KeApplyWobBamQos @ 0x140306940 (KeApplyWobBamQos.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

bool __fastcall KiWobQosResponseRequired(int a1, int a2)
{
  bool result; // al
  unsigned __int8 v3; // cl
  unsigned __int8 v4; // dl
  int v5; // [rsp+0h] [rbp-18h]
  __int16 v6; // [rsp+4h] [rbp-14h]
  char v7; // [rsp+6h] [rbp-12h]

  v5 = -16645372;
  v6 = 5;
  v7 = 1;
  result = 0;
  if ( a1 != a2 )
  {
    v3 = *((_BYTE *)&v5 + a1);
    if ( v3 == 0xFF )
      return 1;
    v4 = *((_BYTE *)&v5 + a2);
    if ( v3 > v4 || v4 == 0xFF )
      return 1;
  }
  return result;
}
