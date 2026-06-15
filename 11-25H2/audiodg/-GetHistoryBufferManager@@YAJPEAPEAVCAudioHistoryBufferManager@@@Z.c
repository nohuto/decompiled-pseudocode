/*
 * XREFs of ?GetHistoryBufferManager@@YAJPEAPEAVCAudioHistoryBufferManager@@@Z @ 0x140041BE0
 * Callers:
 *     ?CreateStream@CStreamInstance@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140005F80 (-CreateStream@CStreamInstance@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@.c)
 *     ?DestroyStream@CStreamInstance@@UEAAJXZ @ 0x1400297E0 (-DestroyStream@CStreamInstance@@UEAAJXZ.c)
 *     ??1CSubmixImpl@@QEAA@XZ @ 0x14002A78C (--1CSubmixImpl@@QEAA@XZ.c)
 *     ?PopulateAudioHistoryForStreamInternal@@YAJPEAUIStreamInstanceInternal@@_J11H@Z @ 0x140041884 (-PopulateAudioHistoryForStreamInternal@@YAJPEAUIStreamInstanceInternal@@_J11H@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall GetHistoryBufferManager(struct CAudioHistoryBufferManager **a1)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a1 = 0LL;
  if ( InitOnceExecuteOnce(&InitOnce, CreateHistoryBufferManager, 0LL, 0LL) )
  {
    *a1 = qword_1400C5830;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x27,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiohistorybuffermanager.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
