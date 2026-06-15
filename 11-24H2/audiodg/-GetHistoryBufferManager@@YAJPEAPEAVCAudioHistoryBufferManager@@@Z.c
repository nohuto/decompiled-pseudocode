/*
 * XREFs of ?GetHistoryBufferManager@@YAJPEAPEAVCAudioHistoryBufferManager@@@Z @ 0x1400418E0
 * Callers:
 *     ?CreateStream@CStreamInstance@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140005FB0 (-CreateStream@CStreamInstance@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@.c)
 *     ?DestroyStream@CStreamInstance@@UEAAJXZ @ 0x1400294E0 (-DestroyStream@CStreamInstance@@UEAAJXZ.c)
 *     ??1CSubmixImpl@@QEAA@XZ @ 0x14002A48C (--1CSubmixImpl@@QEAA@XZ.c)
 *     ?PopulateAudioHistoryForStreamInternal@@YAJPEAUIStreamInstanceInternal@@_J11H@Z @ 0x140041584 (-PopulateAudioHistoryForStreamInternal@@YAJPEAUIStreamInstanceInternal@@_J11H@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall GetHistoryBufferManager(struct CAudioHistoryBufferManager **a1)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a1 = 0LL;
  if ( InitOnceExecuteOnce(&InitOnce, CreateHistoryBufferManager, 0LL, 0LL) )
  {
    *a1 = qword_1400C57F0;
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
