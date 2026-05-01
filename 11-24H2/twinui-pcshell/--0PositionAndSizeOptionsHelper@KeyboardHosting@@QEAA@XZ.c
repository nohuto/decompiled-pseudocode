/*
 * XREFs of ??0PositionAndSizeOptionsHelper@KeyboardHosting@@QEAA@XZ @ 0x180485390
 * Callers:
 *     ??0PositionAndSizeOptionsProvider@KeyboardHosting@@QEAA@XZ @ 0x1804853D8 (--0PositionAndSizeOptionsProvider@KeyboardHosting@@QEAA@XZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

KeyboardHosting::PositionAndSizeOptionsHelper *__fastcall KeyboardHosting::PositionAndSizeOptionsHelper::PositionAndSizeOptionsHelper(
        KeyboardHosting::PositionAndSizeOptionsHelper *this)
{
  _QWORD *v2; // rax

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *v2 = v2;
  v2[1] = v2;
  v2[2] = v2;
  *((_WORD *)v2 + 12) = 257;
  *(_QWORD *)this = v2;
  *((_QWORD *)this + 2) = 0LL;
  return this;
}
