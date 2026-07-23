/*
 * XREFs of MiGetBaseNameFromImageFileName @ 0x1404C6CE4
 * Callers:
 *     MiCreateSectionForDriver @ 0x140A1199C (MiCreateSectionForDriver.c)
 *     MiGenerateSystemImageNames @ 0x140ABA72C (MiGenerateSystemImageNames.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetBaseNameFromImageFileName(unsigned __int16 *a1, __int64 a2)
{
  unsigned __int16 *v2; // rax
  unsigned __int16 *v3; // r9
  unsigned __int16 *i; // rax
  unsigned __int16 *v5; // r8

  v2 = a1;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_DWORD *)a2 = 0;
  LODWORD(a1) = *a1;
  if ( (_WORD)a1 )
  {
    v3 = (unsigned __int16 *)*((_QWORD *)v2 + 1);
    if ( *v3 == 92 )
    {
      a1 = &v3[(unsigned __int64)(unsigned int)a1 >> 1];
      for ( i = a1; ; --i )
      {
        v5 = i - 1;
        if ( *(i - 1) == 92 )
          break;
        if ( v5 == v3 )
          return 3221225711LL;
      }
      LOWORD(a1) = 2 * (a1 - i);
      *(_WORD *)a2 = (_WORD)a1;
    }
    else
    {
      *(_WORD *)a2 = (_WORD)a1;
      i = (unsigned __int16 *)*((_QWORD *)v2 + 1);
    }
    *(_QWORD *)(a2 + 8) = i;
    *(_WORD *)(a2 + 2) = (_WORD)a1;
  }
  return 0LL;
}
