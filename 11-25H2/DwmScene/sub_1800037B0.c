/*
 * XREFs of sub_1800037B0 @ 0x1800037B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Large_mode_engaged@?$_String_val@U?$_Simple_types@D@std@@@std@@QEBA_NXZ @ 0x18001199C (-_Large_mode_engaged@-$_String_val@U-$_Simple_types@D@std@@@std@@QEBA_NXZ.c)
 */

__int64 sub_1800037B0()
{
  char v0; // al
  _BYTE *v1; // rdx
  unsigned int v2; // ecx
  int v3; // r8d
  __int64 result; // rax

  v0 = std::_String_val<std::_Simple_types<char>>::_Large_mode_engaged(&qword_1801C3F80);
  v2 = 0;
  if ( v0 )
    v1 = (_BYTE *)qword_1801C3F80;
  if ( v1 )
  {
    v3 = 5381;
    while ( *v1 )
      v3 = (char)*v1++ + 33 * v3;
    v2 = v3;
  }
  result = v2;
  qword_1801C3FA0 = v2;
  return result;
}
