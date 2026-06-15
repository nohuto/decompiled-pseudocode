/*
 * XREFs of ?SetSampleRate@CAudioStream@@QEAAJM@Z @ 0x1800CA2C8
 * Callers:
 *     ?SetStreamSampleRate@CVADServer@@UEAAJ_KM@Z @ 0x18010EA00 (-SetStreamSampleRate@CVADServer@@UEAAJ_KM@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAudioStream::SetSampleRate(CAudioStream *this, float a2)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  __int64 v4; // rdx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 26);
  if ( !v2 )
  {
    v3 = -2147024809;
    v4 = 428LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)v3);
    return v3;
  }
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 24LL))(v2);
  v3 = v6;
  if ( v6 == -2005139384 )
  {
    v3 = -2147024809;
LABEL_7:
    v4 = 439LL;
    goto LABEL_3;
  }
  if ( v6 < 0 )
    goto LABEL_7;
  return 0LL;
}
