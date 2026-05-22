/*
 * XREFs of ??0RayStabilizer@@QEAA@XZ @ 0x18008FC2C
 * Callers:
 *     ??0MPCInputProviderBase@@QEAA@XZ @ 0x1800844CC (--0MPCInputProviderBase@@QEAA@XZ.c)
 * Callees:
 *     ?CalculateMaximumSize@RayStabilizer@@AEAAXXZ @ 0x18008FC80 (-CalculateMaximumSize@RayStabilizer@@AEAAXXZ.c)
 *     ??$_Alloc_proxy@V?$allocator@U_Container_proxy@std@@@std@@@_Container_base12@std@@QEAAX$$QEAV?$allocator@U_Container_proxy@std@@@1@@Z @ 0x18008FCB8 (--$_Alloc_proxy@V-$allocator@U_Container_proxy@std@@@std@@@_Container_base12@std@@QEAAX$$QEAV-$a.c)
 */

RayStabilizer *__fastcall RayStabilizer::RayStabilizer(RayStabilizer *this)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  std::_Container_base12::_Alloc_proxy<std::allocator<std::_Container_proxy>>(this);
  *((_DWORD *)this + 11) = 1;
  *((_OWORD *)this + 3) = 0LL;
  *((_BYTE *)this + 80) = 0;
  *((_OWORD *)this + 4) = 0LL;
  RayStabilizer::CalculateMaximumSize(this);
  return this;
}
