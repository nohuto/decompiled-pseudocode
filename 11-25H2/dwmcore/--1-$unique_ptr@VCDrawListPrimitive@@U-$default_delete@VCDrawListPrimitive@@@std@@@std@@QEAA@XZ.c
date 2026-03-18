/*
 * XREFs of ??1?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@QEAA@XZ @ 0x1801DC1B0
 * Callers:
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJIPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x180047F70 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJIPEAVCPrimitiveColor@@PEBU_D3DCOLORVAL.c)
 *     ??1CCpuClipAntialiasSink@@UEAA@XZ @ 0x1801DC15C (--1CCpuClipAntialiasSink@@UEAA@XZ.c)
 *     _anonymous_namespace_::State::_State @ 0x180269E5C (_anonymous_namespace_--State--_State.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::unique_ptr<CDrawListPrimitive>::~unique_ptr<CDrawListPrimitive>(
        __int64 (__fastcall ****a1)(_QWORD, __int64))
{
  __int64 (__fastcall ***v1)(_QWORD, __int64); // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (**v1)(v1, 1LL);
  return result;
}
