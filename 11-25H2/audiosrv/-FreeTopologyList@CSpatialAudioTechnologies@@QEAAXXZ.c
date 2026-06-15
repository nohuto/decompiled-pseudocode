/*
 * XREFs of ?FreeTopologyList@CSpatialAudioTechnologies@@QEAAXXZ @ 0x180087994
 * Callers:
 *     ?CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z @ 0x180090D90 (-CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z.c)
 *     wil::details::lambda_call__lambda_2c1c5ed8eae8d86e74e504b7d79e03ad___::_lambda_call__lambda_2c1c5ed8eae8d86e74e504b7d79e03ad___ @ 0x180132184 (wil--details--lambda_call__lambda_2c1c5ed8eae8d86e74e504b7d79e03ad___--_lambda_call__lambda_2c1c.c)
 *     ?InitializeGlobals@CSpatialProperties@@AEAAJPEBU_tlgProvider_t@@@Z @ 0x180134F04 (-InitializeGlobals@CSpatialProperties@@AEAAJPEBU_tlgProvider_t@@@Z.c)
 *     ?ShutdownGlobals@CSpatialProperties@@AEAAXXZ @ 0x180138290 (-ShutdownGlobals@CSpatialProperties@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSpatialAudioTechnologies::FreeTopologyList(CSpatialAudioTechnologies *this)
{
  unsigned __int8 v1; // cl
  unsigned __int8 i; // bl
  void (__fastcall ***v3)(_QWORD, __int64); // r8

  EnterCriticalSection(&CriticalSection);
  if ( !--dword_1801CF6B8 )
  {
    v1 = g_ListOfSpatialTech[0];
    for ( i = 0; i < v1; ++i )
    {
      v3 = (void (__fastcall ***)(_QWORD, __int64))qword_1801CF648[i];
      if ( v3 )
      {
        (**v3)(qword_1801CF648[i], 1LL);
        v1 = g_ListOfSpatialTech[0];
      }
    }
    g_ListOfSpatialTech[0] = 0;
  }
  LeaveCriticalSection(&CriticalSection);
}
