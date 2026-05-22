/*
 * XREFs of ?Reset@DragRecognizer@@UEAAXPEBVGestureSession@@@Z @ 0x1801B5510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DragRecognizer::Reset(DragRecognizer *this, const struct GestureSession *a2)
{
  __int16 v2; // r8

  *((_BYTE *)this + 30) &= 0xF0u;
  *((_DWORD *)this + 18) = 112;
  *((_QWORD *)this + 8) = 0LL;
  v2 = *((_WORD *)this + 8);
  *((_WORD *)this + 18) = v2;
  *((_WORD *)this + 19) = v2;
  if ( *((_DWORD *)a2 + 5) == 1 )
  {
    *((_WORD *)this + 18) = *((_WORD *)this + 10) + v2;
  }
  else if ( *((_DWORD *)a2 + 5) == 2 )
  {
    *((_WORD *)this + 19) = *((_WORD *)this + 10) + v2;
  }
  *((_DWORD *)this + 8) = 0;
}
