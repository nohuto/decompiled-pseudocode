/*
 * XREFs of DisplayFilter @ 0x140539DF0
 * Callers:
 *     <none>
 * Callees:
 *     DisplayBootBitmap @ 0x140539C2C (DisplayBootBitmap.c)
 */

int __fastcall DisplayFilter(unsigned __int8 **a1, __int64 a2, _BYTE *a3)
{
  __int64 *v3; // rax

  if ( byte_140E0F370 )
    goto LABEL_6;
  a3 = *a1;
  a2 = (unsigned int)**a1 - 46;
  if ( **a1 == 46 )
    a2 = (unsigned __int8)a3[1];
  if ( (_DWORD)a2 )
  {
LABEL_6:
    LOBYTE(a1) = 1;
    byte_140E0F370 = 1;
    qword_140E65D48 = 0LL;
    LODWORD(v3) = DisplayBootBitmap((__int64)a1, a2, (__int64)a3, 0LL);
  }
  else
  {
    v3 = &qword_140020668;
    *a1 = (unsigned __int8 *)&qword_140020668;
  }
  return (int)v3;
}
