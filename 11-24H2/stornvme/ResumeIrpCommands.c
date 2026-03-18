/*
 * XREFs of ResumeIrpCommands @ 0x14002D47C
 * Callers:
 *     NVMeControllerReset @ 0x14001D564 (NVMeControllerReset.c)
 *     NVMeControllerPanicResetActionWorkItem @ 0x140027150 (NVMeControllerPanicResetActionWorkItem.c)
 *     NVMeReenumerateNameSpaceCancelMerge @ 0x14002A1A8 (NVMeReenumerateNameSpaceCancelMerge.c)
 *     NVMeReenumerateNameSpaceRescan @ 0x14002AC14 (NVMeReenumerateNameSpaceRescan.c)
 * Callees:
 *     ProcessPendingIoCommands @ 0x140014BB0 (ProcessPendingIoCommands.c)
 */

__int64 __fastcall ResumeIrpCommands(__int64 a1)
{
  unsigned int v2; // edi
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 56) & 0x800000) == 0 )
  {
    v2 = 0;
    if ( !*(_BYTE *)(a1 + 20) )
    {
      if ( *(_WORD *)(a1 + 330) )
      {
        do
        {
          ProcessPendingIoCommands(a1, *(_QWORD *)(a1 + 936) + 208LL * v2, 0LL, 0LL);
          result = *(unsigned __int16 *)(a1 + 330);
          ++v2;
        }
        while ( v2 < (unsigned int)result );
      }
    }
  }
  return result;
}
