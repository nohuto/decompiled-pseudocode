/*
 * XREFs of ?SetIntegerProperty@CInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1402300C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Shrink@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_K@Z @ 0x140103310 (-Shrink@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_K@Z.c)
 */

__int64 __fastcall DirectComposition::CInkMarshaler::SetIntegerProperty(
        DirectComposition::CInkMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        unsigned int a4,
        bool *a5)
{
  __int64 result; // rax
  unsigned __int64 v7; // rdx

  *a5 = 0;
  if ( a3 != 4 )
    return 3221225485LL;
  result = DirectComposition::CDCompDynamicArrayBase::Shrink(
             (DirectComposition::CInkMarshaler *)((char *)this + 112),
             a4);
  if ( (int)result >= 0 )
  {
    v7 = *((unsigned int *)this + 38);
    if ( v7 >= *((_QWORD *)this + 17) )
      LODWORD(v7) = *((_QWORD *)this + 17);
    *((_DWORD *)this + 4) &= ~0x80u;
    *((_DWORD *)this + 38) = v7;
    *a5 = 1;
  }
  return result;
}
