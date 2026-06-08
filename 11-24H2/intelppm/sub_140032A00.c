/*
 * XREFs of sub_140032A00 @ 0x140032A00
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003D28 @ 0x140003D28 (sub_140003D28.c)
 */

_UNKNOWN **__fastcall sub_140032A00(__int64 a1, struct _IO_WORKITEM *a2)
{
  _UNKNOWN **result; // rax

  if ( a2 )
    IoFreeWorkItem(a2);
  result = &off_140018058;
  if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
  {
    LOBYTE(a2) = 3;
    return (_UNKNOWN **)sub_140003D28(off_140018050->DeviceExtension, (_DWORD)a2, 3, 89, (__int64)&unk_140012FE8);
  }
  return result;
}
