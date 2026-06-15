/*
 * XREFs of AudioServerPopulateAudioHistoryForStream @ 0x180111160
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x18005292C (--0SetActivityIdFromVadServer@@QEAA@PEAX@Z.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ?PopulateAudioHistoryForStream@CVADServer@@UEAAJ_J00@Z @ 0x18010D450 (-PopulateAudioHistoryForStream@CVADServer@@UEAAJ_J00@Z.c)
 */

__int64 __fastcall AudioServerPopulateAudioHistoryForStream(
        struct _RTL_CRITICAL_SECTION *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  _BYTE v11[16]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v12[16]; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  SetActivityIdFromVadServer::SetActivityIdFromVadServer((SetActivityIdFromVadServer *)v11, this);
  v8 = CVADServer::PopulateAudioHistoryForStream(this, *(_QWORD *)(a2 + 544), a3, a4);
  v9 = v8;
  if ( v8 >= 0 )
    v9 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x12AB,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v8);
  EtwEventActivityIdControl(4LL, v12);
  return v9;
}
