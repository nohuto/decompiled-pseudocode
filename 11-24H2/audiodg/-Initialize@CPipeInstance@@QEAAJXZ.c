/*
 * XREFs of ?Initialize@CPipeInstance@@QEAAJXZ @ 0x14000FF08
 * Callers:
 *     ?CreateStream@CStreamInstance@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140005FB0 (-CreateStream@CStreamInstance@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@.c)
 *     ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@PEAUIAudioGraphCallback@@@Z @ 0x140026310 (-Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@PEAUIAudioGraphCallback@@@Z.c)
 *     ?Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@@Z @ 0x140041E84 (-Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMA.c)
 *     ?CreateBridgeStreamToTargetStreamGroup@CStreamInstance@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140049140 (-CreateBridgeStreamToTargetStreamGroup@CStreamInstance@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUI.c)
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14004F3D0 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FixupStreamPipe@CPipeInstance@@AEAAJXZ @ 0x14000FFF8 (-FixupStreamPipe@CPipeInstance@@AEAAJXZ.c)
 *     ?RemoveDummyProcessNodes@CPipeInstance@@AEAAXXZ @ 0x1400104D0 (-RemoveDummyProcessNodes@CPipeInstance@@AEAAXXZ.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x140010750 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x1400116C8 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 */

__int64 __fastcall CPipeInstance::Initialize(CPipeInstance *this)
{
  int v1; // eax
  int v3; // edi
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_DWORD *)this + 84);
  if ( v1 == 2 )
  {
    v3 = CPipeInstance::ResolveFormatConflictsLeftRight(this);
    if ( v3 >= 0 )
      goto LABEL_8;
    v7 = 2499LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  if ( v1 == 1 )
  {
    v3 = CPipeInstance::ResolveFormatConflictsRightLeft(this);
    if ( v3 < 0 )
    {
      v7 = 2503LL;
      goto LABEL_13;
    }
    goto LABEL_8;
  }
  if ( (*(_QWORD *)this || *((_DWORD *)this + 2))
    && (*((_DWORD *)this + 28) == 3 || *((_DWORD *)this + 34) || (*((_BYTE *)this + 140) & 8) != 0) )
  {
    v3 = CPipeInstance::ResolveFormatConflictsLeftRight(this);
    if ( v3 >= 0 )
      goto LABEL_8;
    v7 = 2522LL;
    goto LABEL_13;
  }
  v3 = CPipeInstance::ResolveFormatConflictsRightLeft(this);
  if ( v3 < 0 )
  {
    v7 = 2529LL;
    goto LABEL_13;
  }
LABEL_8:
  CPipeInstance::RemoveDummyProcessNodes(this);
  v4 = CPipeInstance::FixupStreamPipe(this);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x9E9,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
