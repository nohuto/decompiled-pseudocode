/*
 * XREFs of PopBootLoaderTraceProcess @ 0x140751AFC
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B667DC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     BapdWriteEtwEvents @ 0x1404A4884 (BapdWriteEtwEvents.c)
 *     BapdRecordFirmwareBootStats @ 0x140B60CB0 (BapdRecordFirmwareBootStats.c)
 */

void PopBootLoaderTraceProcess()
{
  ULONG_PTR v0; // rbx
  __int64 v1; // rax
  _DWORD *v2; // rax
  unsigned int v3; // r8d

  v0 = BugCheckParameter4;
  if ( BugCheckParameter4 )
  {
    BapdRecordFirmwareBootStats(0LL);
    v1 = *(_QWORD *)(v0 + 232);
    if ( v1 )
    {
      v2 = *(_DWORD **)(v1 + 32);
      if ( *v2 == 1281517896 )
      {
        v3 = v2[3];
        if ( v3 )
          BapdWriteEtwEvents((ULONGLONG)&ExpBootEnvironmentInformation, (unsigned __int64)v2 + (unsigned int)v2[2], v3);
      }
    }
  }
}
