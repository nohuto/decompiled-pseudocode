/*
 * XREFs of ??$_Destroy_range@V?$allocator@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@YAXPEAUSuperWetStroke@CSuperWetInkManager@@QEAU12@AEAV?$allocator@USuperWetStroke@CSuperWetInkManager@@@0@@Z @ 0x180264680
 * Callers:
 *     ??1CSuperWetInkManager@@QEAA@XZ @ 0x180265368 (--1CSuperWetInkManager@@QEAA@XZ.c)
 *     ??$_Uninitialized_move@PEAUSuperWetStroke@CSuperWetInkManager@@V?$allocator@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@YAPEAUSuperWetStroke@CSuperWetInkManager@@QEAU12@0PEAU12@AEAV?$allocator@USuperWetStroke@CSuperWetInkManager@@@0@@Z @ 0x18026A1DC (--$_Uninitialized_move@PEAUSuperWetStroke@CSuperWetInkManager@@V-$allocator@USuperWetStroke@CSup.c)
 *     ?_Change_array@?$vector@USuperWetStroke@CSuperWetInkManager@@V?$allocator@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@AEAAXQEAUSuperWetStroke@CSuperWetInkManager@@_K1@Z @ 0x18026C88C (-_Change_array@-$vector@USuperWetStroke@CSuperWetInkManager@@V-$allocator@USuperWetStroke@CSuper.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<CSuperWetInkManager::SuperWetStroke>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)(v3 + 8));
      v3 += 104LL;
    }
    while ( v3 != a2 );
  }
}
