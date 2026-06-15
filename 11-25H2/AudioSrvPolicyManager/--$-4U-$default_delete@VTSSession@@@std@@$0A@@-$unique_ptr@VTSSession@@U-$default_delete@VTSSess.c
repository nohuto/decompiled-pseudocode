/*
 * XREFs of ??$?4U?$default_delete@VTSSession@@@std@@$0A@@?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18003F224
 * Callers:
 *     ?Create@TSSession@@SAJKAEAV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@Z @ 0x18004069C (-Create@TSSession@@SAJKAEAV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@std@@@Z.c)
 * Callees:
 *     ??R?$default_delete@VTSSession@@@std@@QEBAXPEAVTSSession@@@Z @ 0x18004066C (--R-$default_delete@VTSSession@@@std@@QEBAXPEAVTSSession@@@Z.c)
 */

__int64 *__fastcall std::unique_ptr<TSSession>::operator=<std::default_delete<TSSession>,0>(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // rdx

  v2 = *a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v2;
  if ( v4 )
    std::default_delete<TSSession>::operator()();
  return a1;
}
