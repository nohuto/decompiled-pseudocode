/*
 * XREFs of MiSetPfnSlist @ 0x1404352D0
 * Callers:
 *     MiReplenishPageSlist @ 0x1404F1A70 (MiReplenishPageSlist.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiSetPfnSlist(__int64 a1, int a2)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 result; // rax

  v2 = ((__int64)a2 << 12) ^ (*(_QWORD *)(a1 + 16) ^ ((__int64)a2 << 12)) & 0xFFFFFFFFFFFF0FFFuLL;
  if ( v2 )
  {
    if ( qword_140E2DCC0 )
    {
      if ( (v2 & 0x10) != 0 )
        LODWORD(v2) = v2 & 0xFFFFFFEF;
      else
        LODWORD(v2) = ~(_DWORD)qword_140E2DCC0 & v2;
    }
  }
  else
  {
    LODWORD(v2) = 0;
  }
  result = (unsigned int)v2 | 0xFFFFFFFE00000000uLL;
  if ( qword_140E2DCC0 )
  {
    if ( (qword_140E2DCC0 & result) != 0 )
      result = (unsigned int)v2 | 0xFFFFFFFE00000010uLL;
    else
      result = qword_140E2DCC0 | (unsigned int)v2 | 0xFFFFFFFE00000000uLL;
  }
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
