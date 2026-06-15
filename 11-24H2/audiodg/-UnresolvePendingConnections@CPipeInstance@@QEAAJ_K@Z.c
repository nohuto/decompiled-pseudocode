/*
 * XREFs of ?UnresolvePendingConnections@CPipeInstance@@QEAAJ_K@Z @ 0x14002F5C0
 * Callers:
 *     ?RemovePipeFromMixSplitConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x14002DE60 (-RemovePipeFromMixSplitConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?RemovePipeInternal@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_K@Z @ 0x14002F53C (-RemovePipeInternal@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_K@Z.c)
 *     ?DeleteExistingFormatConverter@CSubmixImpl@@IEAAJXZ @ 0x140045AD4 (-DeleteExistingFormatConverter@CSubmixImpl@@IEAAJXZ.c)
 *     ?DisconnectFromRightPipe@CStreamInstance@@UEAAJ_K@Z @ 0x14006E470 (-DisconnectFromRightPipe@CStreamInstance@@UEAAJ_K@Z.c)
 *     ?DisconnectFromRightPipe@CSubmixImpl@@UEAAJ_K@Z @ 0x14006E850 (-DisconnectFromRightPipe@CSubmixImpl@@UEAAJ_K@Z.c)
 *     ?RemovePipeFromLoopbackConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x14006EAC0 (-RemovePipeFromLoopbackConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400089F8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPipeInstance::UnresolvePendingConnections(CPipeInstance *this, __int64 a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (_QWORD *)*((_QWORD *)this + 31);
  while ( v3 )
  {
    v4 = v3[2];
    v3 = (_QWORD *)*v3;
    if ( *(_QWORD *)(v4 + 8) == a2 )
    {
      v5 = *(_QWORD *)(v4 + 64);
      if ( *(_QWORD *)(v4 + 8) > 0xFFFFFFFFFFFFFFFDuLL || v5 > 0xFFFFFFFFFFFFFFFDuLL )
        *(_QWORD *)(v4 + 8) = v5;
      else
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1235,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
          (const char *)0x80070006LL);
    }
  }
  return 0LL;
}
