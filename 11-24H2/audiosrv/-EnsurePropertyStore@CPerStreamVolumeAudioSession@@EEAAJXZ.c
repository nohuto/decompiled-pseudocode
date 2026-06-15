/*
 * XREFs of ?EnsurePropertyStore@CPerStreamVolumeAudioSession@@EEAAJXZ @ 0x1800C15F0
 * Callers:
 *     ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x1800776E0 (-CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z.c)
 * Callees:
 *     ?LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180009C2C (-LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryOpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJPEAPEAUIPropertyStore@@@Z @ 0x18006DBD8 (-TryOpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJPEAPEAUIPropertyStore@@@Z.c)
 *     ?Log_IfFailedWithExpected@in1diag3@details@wil@@YAJPEAXIPEBDJIZZ @ 0x1800C23D0 (-Log_IfFailedWithExpected@in1diag3@details@wil@@YAJPEAXIPEBDJIZZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPerStreamVolumeAudioSession::EnsurePropertyStore(CPerStreamVolumeAudioSession *this)
{
  _QWORD *v2; // rdi
  unsigned int v3; // eax
  int SessionConfiguration; // eax
  unsigned int v5; // ebx
  int v7; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( !*((_BYTE *)this + 920) )
    return 0LL;
  v2 = (_QWORD *)((char *)this + 928);
  if ( *((_QWORD *)this + 116) )
    return 0LL;
  *v2 = 0LL;
  v3 = CPerStreamVolumeAudioSession::TryOpenSessionPropertyStore(
         (const void **)this,
         (struct IPropertyStore **)this + 116);
  v7 = -2147024891;
  if ( wil::details::in1diag3::Log_IfFailedWithExpected(
         retaddr,
         (void *)0xFB6,
         (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
         (const char *)v3,
         2,
         0x80070002,
         v7) < 0 )
    return 0LL;
  if ( !*v2 )
    return 0LL;
  SessionConfiguration = CPerStreamVolumeAudioSession::LoadSessionConfiguration(this);
  v5 = SessionConfiguration;
  if ( SessionConfiguration >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xFBA,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
    (const char *)(unsigned int)SessionConfiguration);
  return v5;
}
