/*
 * XREFs of ?ResolvePendingConnections@CPipeInstance@@QEAAJ_K0W4PIPE_CONNECTION_RESOLUTION_OPTIONS@@@Z @ 0x14002F7C8
 * Callers:
 *     ?AddPipeToMixSplitConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x14002DFF0 (-AddPipeToMixSplitConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?AddPipeToMixSplitConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14002ED00 (-AddPipeToMixSplitConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z @ 0x1400582F8 (-ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z.c)
 *     ?AddPipeToLoopbackConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x140064520 (-AddPipeToLoopbackConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?AddPipeToLoopbackConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x14006E7E0 (-AddPipeToLoopbackConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400089C8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetHandle@CConnectionInstance@@QEAAJ_K@Z @ 0x14002F93C (-SetHandle@CConnectionInstance@@QEAAJ_K@Z.c)
 */

__int64 __fastcall CPipeInstance::ResolvePendingConnections(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // rbx
  int v6; // eax
  CConnectionInstance *v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = *(_QWORD *)(a1 + 256);
  while ( v5 )
  {
    v7 = *(CConnectionInstance **)(v5 + 16);
    v5 = *(_QWORD *)(v5 + 8);
    if ( *((_QWORD *)v7 + 1) == a2 )
    {
      v6 = CConnectionInstance::SetHandle(v7, a3);
      if ( v6 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1203,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
          (const char *)(unsigned int)v6);
    }
  }
  return 0LL;
}
