/*
 * XREFs of ?SetVolume@CServerAudioSessionControl@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x180073720
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateAudioLevel@@YA_NM@Z @ 0x1800A264C (-ValidateAudioLevel@@YA_NM@Z.c)
 *     WPP_SF_SSg @ 0x1800C5284 (WPP_SF_SSg.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CServerAudioSessionControl::SetVolume(
        CServerAudioSessionControl *this,
        float a2,
        const struct _GUID *a3,
        int *a4)
{
  int v4; // edx
  __int64 v8; // rdx
  double v10; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v10 = a2;
    WPP_SF_SSg(*((_QWORD *)WPP_GLOBAL_Control + 2), v4, (_DWORD)a3, 0, 0LL, SLOBYTE(v10));
  }
  if ( ValidateAudioLevel(a2) )
    return (*(__int64 (__fastcall **)(_QWORD, __int64, const struct _GUID *, int *))(**((_QWORD **)this + 9) + 280LL))(
             *((_QWORD *)this + 9),
             v8,
             a3,
             a4);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3EF,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessioncontrol.cpp",
    (const char *)0x80070057LL);
  return 2147942487LL;
}
