/*
 * XREFs of _MPCInputRouter::Initialize3DComponents_::_1_::dtor$4 @ 0x1801D6A95
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIResizeAreaClientProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x180061490 (--1-$ComPtr@UIResizeAreaClientProxy@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall MPCInputRouter::Initialize3DComponents_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 160) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 160) &= ~1u;
    Microsoft::WRL::ComPtr<IResizeAreaClientProxy>::~ComPtr<IResizeAreaClientProxy>((__int64 *)(a2 + 64));
  }
}
