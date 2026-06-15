/*
 * XREFs of ?UpdateStreamPriority@CAudioStream@@QEAAJXZ @ 0x18000E840
 * Callers:
 *     ?StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x18000CEA0 (-StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NMIPEAM_J@Z @ 0x18000F2C8 (-SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NMIPEAM_J@Z.c)
 *     ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x18007BAA0 (-AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180089300 (-StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioStream::UpdateStreamPriority(CAudioStream *this)
{
  int v2; // esi
  char v3; // bp
  __int64 v4; // rdi
  int v5; // edx
  unsigned int v6; // edi
  unsigned int v7; // esi
  __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  int v13; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 120LL))(*((_QWORD *)this + 9));
  v3 = *((_BYTE *)this + 256);
  v4 = *((unsigned int *)this + 106);
  if ( (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 64LL))((char *)this + 8) )
    v5 = dword_18018BFE0[v4];
  else
    v5 = dword_18018BF80[v4];
  v6 = (v3 == 0) + 2 * (v5 + (v2 != 0 ? 0x10 : 0));
  v7 = *((_DWORD *)this + 65);
  if ( v6 == v7 )
    return 0LL;
  *((_DWORD *)this + 65) = v6;
  v8 = *((_QWORD *)this + 1);
  v15 = 0LL;
  v9 = (*(__int64 (__fastcall **)(char *, __int64 *))(v8 + 120))((char *)this + 8, &v15);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2CE,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)(unsigned int)v9,
      v13);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v15);
  }
  else
  {
    v11 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v15 + 232LL))(v15, 1LL, v6, v7);
    v10 = v11;
    if ( v11 >= 0 )
    {
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D0,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)(unsigned int)v11,
      v13);
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  return v10;
}
