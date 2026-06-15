/*
 * XREFs of ?SetStreamChannelVolume@CAudioStream@@QEAAJIMPEAH@Z @ 0x180072A18
 * Callers:
 *     ?SetChannelVolume@CVADServer@@UEAAJIMPEAH@Z @ 0x18010E090 (-SetChannelVolume@CVADServer@@UEAAJIMPEAH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RecalculateVolume@CAudioStream@@QEAAJ_N_J@Z @ 0x180021574 (-RecalculateVolume@CAudioStream@@QEAAJ_N_J@Z.c)
 */

__int64 __fastcall CAudioStream::SetStreamChannelVolume(CAudioStream *this, unsigned int a2, float a3, int *a4)
{
  __int64 v6; // rax
  float v7; // xmm7_4
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( a2 < *((_DWORD *)this + 24) )
  {
    v6 = *((_QWORD *)this + 15);
    v7 = *(float *)(v6 + 4LL * a2);
    *(float *)(v6 + 4LL * a2) = a3;
    CAudioStream::RecalculateVolume(this, 0, 0LL);
    if ( a4 )
      *a4 = v7 == a3;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x328,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
