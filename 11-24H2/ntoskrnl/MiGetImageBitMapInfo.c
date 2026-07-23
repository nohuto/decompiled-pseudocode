/*
 * XREFs of MiGetImageBitMapInfo @ 0x14046F440
 * Callers:
 *     MiSelectImageBase @ 0x140AEB020 (MiSelectImageBase.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetImageBitMapInfo(int a1, _QWORD *a2, _QWORD *a3, __int64 *a4)
{
  __int64 result; // rax

  a2[1] = 0LL;
  if ( a1 == 1 )
  {
    *a3 = 2013265920LL;
    result = (__int64)&qword_140E2D800;
    *a2 = &qword_140E2D800;
    if ( a4 )
    {
      result = qword_140E2D810;
LABEL_6:
      *a4 = result;
    }
  }
  else
  {
    if ( a1 == 2 )
    {
      *a2 = &unk_140E2D7A8;
      result = (__int64)&qword_140E2D800;
      a2[1] = &qword_140E2D800;
    }
    else
    {
      if ( a1 != 3 )
      {
        *a2 = &qword_140E2D770;
        result = 0x7FFFFFFF0000LL;
        *a3 = 0x7FFFFFFF0000LL;
        if ( !a4 )
          return result;
        result = qword_140E2D780;
        goto LABEL_6;
      }
      result = (__int64)&unk_140E2D7A8;
      *a2 = &unk_140E2D7A8;
    }
    *a3 = 2013265920LL;
    if ( a4 )
    {
      result = qword_140E2D7E8;
      goto LABEL_6;
    }
  }
  return result;
}
