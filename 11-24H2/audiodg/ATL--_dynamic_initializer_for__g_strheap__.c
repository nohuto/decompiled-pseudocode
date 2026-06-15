/*
 * XREFs of ATL::_dynamic_initializer_for__g_strheap__ @ 0x140002990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int ATL::_dynamic_initializer_for__g_strheap__()
{
  HANDLE ProcessHeap; // rax

  ProcessHeap = GetProcessHeap();
  byte_1400C47D8 = 0;
  ATL::g_strheap = &ATL::CWin32Heap::`vftable';
  qword_1400C47D0 = (__int64)ProcessHeap;
  return atexit((void (__cdecl *)())ATL::_dynamic_atexit_destructor_for__g_strheap__);
}
