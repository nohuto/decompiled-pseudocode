/*
 * XREFs of ?SwitchMux@DISPLAY_MUX_DEVICE@@QEAAJW4MUX_GPU_CHILD@@@Z @ 0x140087CBC
 * Callers:
 *     ?SwitchMux@DISPLAY_MUX_PAIRING@@QEAAJU_LUID@@I@Z @ 0x140087E04 (-SwitchMux@DISPLAY_MUX_PAIRING@@QEAAJU_LUID@@I@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DISPLAY_MUX_DEVICE::SwitchMux(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbx
  __int64 result; // rax
  int v5; // esi

  v3 = a2;
  if ( a2 == *(_DWORD *)(a1 + 72) )
  {
    WdLogSingleEntry1(2LL, a2);
    result = 3221225505LL;
    WdLogGlobalForLineNumber = 1530;
  }
  else
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 152))(*(_QWORD *)(a1 + 112), a2);
    if ( v5 >= 0 )
    {
      *(_DWORD *)(a1 + 72) = v3;
      WdLogSingleEntry1(4LL, v3);
      WdLogGlobalForLineNumber = 1540;
    }
    return (unsigned int)v5;
  }
  return result;
}
