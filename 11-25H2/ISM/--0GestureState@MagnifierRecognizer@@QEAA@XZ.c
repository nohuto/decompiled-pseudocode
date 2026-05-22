/*
 * XREFs of ??0GestureState@MagnifierRecognizer@@QEAA@XZ @ 0x1801A5B2C
 * Callers:
 *     ??0DeviceState@MagnifierProcessor@@QEAA@XZ @ 0x1801A5A8C (--0DeviceState@MagnifierProcessor@@QEAA@XZ.c)
 *     ?Reset@MagnifierRecognizer@@QEAAXAEBUThresholds@1@@Z @ 0x1801A6F10 (-Reset@MagnifierRecognizer@@QEAAXAEBUThresholds@1@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180017AF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0EI@@std@@YA_K_K@Z @ 0x18007067C (--$_Get_size_of_n@$0EI@@std@@YA_K_K@Z.c)
 */

MagnifierRecognizer::GestureState *__fastcall MagnifierRecognizer::GestureState::GestureState(
        MagnifierRecognizer::GestureState *this)
{
  _QWORD *v1; // rbx
  size_t size_of; // rax
  _QWORD *v4; // rax

  v1 = (_QWORD *)((char *)this + 16);
  *(_DWORD *)this = 0;
  *(_QWORD *)((char *)this + 4) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  size_of = std::_Get_size_of_n<72>(1uLL);
  v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *v4 = v4;
  v4[1] = v4;
  v4[2] = v4;
  *((_WORD *)v4 + 12) = 257;
  *v1 = v4;
  return this;
}
