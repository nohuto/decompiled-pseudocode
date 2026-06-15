/*
 * XREFs of ?SetChannelVolume@CServerAudioSessionControl@@UEAAJIMPEBU_GUID@@PEAH@Z @ 0x1800C3F70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateAudioLevel@@YA_NM@Z @ 0x1800A264C (-ValidateAudioLevel@@YA_NM@Z.c)
 *     WPP_SF_Sdg @ 0x1800C320C (WPP_SF_Sdg.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CServerAudioSessionControl::SetChannelVolume(
        CServerAudioSessionControl *this,
        unsigned int a2,
        float a3,
        const struct _GUID *a4,
        int *a5)
{
  __int64 v8; // r8
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sdg(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x20u,
      (__int64)&WPP_ab1375f163c73c4b99e57586ff560771_Traceguids,
      0LL,
      a2,
      a3);
  }
  if ( ValidateAudioLevel(a3) )
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, const struct _GUID *, int *))(**((_QWORD **)this + 9)
                                                                                           + 312LL))(
             *((_QWORD *)this + 9),
             a2,
             v8,
             a4,
             a5);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4A5,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessioncontrol.cpp",
    (const char *)0x80070057LL);
  return 2147942487LL;
}
