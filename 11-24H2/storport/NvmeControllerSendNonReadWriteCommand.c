/*
 * XREFs of NvmeControllerSendNonReadWriteCommand @ 0x140129D10
 * Callers:
 *     NvmeControllerProcessCommand @ 0x140129520 (NvmeControllerProcessCommand.c)
 *     NvmeControllerProcessPendingCommand @ 0x1401297E0 (NvmeControllerProcessPendingCommand.c)
 * Callees:
 *     NvmeControllerWaitForOutstandingIoComplete @ 0x1400F5D14 (NvmeControllerWaitForOutstandingIoComplete.c)
 *     NvmeControllerSubmitCommandToSQ @ 0x140129E50 (NvmeControllerSubmitCommandToSQ.c)
 */

__int64 __fastcall NvmeControllerSendNonReadWriteCommand(
        __int64 a1,
        _DWORD *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5)
{
  int v7; // esi
  int v8; // ebx

  v7 = (int)a2;
  v8 = a1;
  if ( *(_BYTE *)(a1 + 1228) )
    return 3221225486LL;
  if ( (a2[12] & 4) != 0 && (*(_DWORD *)(*(_QWORD *)a2 + 4256LL) & 0x4000) != 0 )
    return 0LL;
  if ( (a2[12] & 2) != 0 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 1288) + 48LL) |= 0x10u;
    return 3221225488LL;
  }
  else
  {
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 4256LL) & 1) != 0 )
    {
      a4 = *(_QWORD *)(a1 + 712);
    }
    else if ( !a5 )
    {
      if ( (*(_BYTE *)(a1 + 136) & 2) != 0 )
        a4 = *(_QWORD *)(a1 + 728) + 192LL * a3;
      else
        a4 = 192LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 872) + 2LL * a3) + *(_QWORD *)(a1 + 728) - 192LL;
    }
    *(_WORD *)(*(_QWORD *)a2 + 4252LL) = *(_WORD *)(a4 + 136);
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 4256LL) & 0x100) != 0 )
    {
      _interlockedbittestandset((volatile signed __int32 *)(a1 + 948), 1u);
      NvmeControllerWaitForOutstandingIoComplete(a1, 0);
    }
    return NvmeControllerSubmitCommandToSQ(v8, v7, a4, a3, a5);
  }
}
