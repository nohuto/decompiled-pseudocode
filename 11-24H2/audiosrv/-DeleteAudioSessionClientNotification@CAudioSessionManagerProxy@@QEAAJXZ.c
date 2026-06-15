/*
 * XREFs of ?DeleteAudioSessionClientNotification@CAudioSessionManagerProxy@@QEAAJXZ @ 0x1800C63D0
 * Callers:
 *     ??1CAudioSessionManagerProxy@@QEAA@XZ @ 0x1800A2E98 (--1CAudioSessionManagerProxy@@QEAA@XZ.c)
 *     AudioSessionManagerDeleteAudioSessionClientNotification @ 0x1800C6FC0 (AudioSessionManagerDeleteAudioSessionClientNotification.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAudioSessionManagerProxy::DeleteAudioSessionClientNotification(CAudioSessionManagerProxy *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)this + 96LL) + 24LL))(
         *(_QWORD *)(*(_QWORD *)this + 96LL),
         *((_QWORD *)this + 1));
  v3 = v2;
  if ( v2 >= 0 )
  {
    *((_BYTE *)this + 16) = 0;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
}
