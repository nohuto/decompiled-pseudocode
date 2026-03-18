/*
 * XREFs of ?UpdateAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAX_K@Z @ 0x140120D9C
 * Callers:
 *     ?ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x140070688 (-ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 * Callees:
 *     ?Release@CAnimationTimeList@DirectComposition@@QEAAKXZ @ 0x140080F30 (-Release@CAnimationTimeList@DirectComposition@@QEAAKXZ.c)
 *     ?CalculateAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAXPEAVCAnimationTimeList@2@_KPEA_KPEA_NPEA_J2@Z @ 0x140120E40 (-CalculateAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAXPEAVCAnimationTimeList@.c)
 */

void __fastcall DirectComposition::CAnimationMarshaler::UpdateAnimationTimeState(
        DirectComposition::CAnimationMarshaler *this,
        unsigned __int64 a2)
{
  __int64 v3; // rax
  DirectComposition::CAnimationTimeList *v4; // rcx
  bool v5; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0;
  DirectComposition::CAnimationMarshaler::CalculateAnimationTimeState(
    this,
    *((struct DirectComposition::CAnimationTimeList **)this + 9),
    a2,
    (unsigned __int64 *)this + 14,
    &v5,
    (__int64 *)this + 26,
    (unsigned __int64 *)this + 27);
  v3 = *((_QWORD *)this + 10);
  *((_BYTE *)this + 200) = *((_BYTE *)this + 200) & 0xFB | (4 * v5);
  v4 = (DirectComposition::CAnimationTimeList *)*((_QWORD *)this + 9);
  if ( v4 == (DirectComposition::CAnimationTimeList *)v3 )
  {
    *(_QWORD *)(v3 + 8) = 0LL;
    *(_QWORD *)(v3 + 16) = 0LL;
    *(_DWORD *)(v3 + 24) = 0;
    *(_QWORD *)(v3 + 32) = 0LL;
    *(_QWORD *)(v3 + 40) = 0LL;
    *(_BYTE *)(v3 + 28) = 0;
    *((_DWORD *)this + 8) &= 0xFFFF3FFF;
  }
  else
  {
    *((_QWORD *)this + 9) = *((_QWORD *)v4 + 2);
    DirectComposition::CAnimationTimeList::Release(v4);
  }
}
