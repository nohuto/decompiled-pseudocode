/*
 * XREFs of ?AddStream@CProcessSubmixProxy@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x180054A9C
 * Callers:
 *     ?OnConnectedToStream@CProcessSubmixProxy@@IEAAXPEAUIAudioStreamInfo@@@Z @ 0x180025FE0 (-OnConnectedToStream@CProcessSubmixProxy@@IEAAXPEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAUIAudioStreamInfo@@@?$vector@PEAUIAudioStreamInfo@@V?$allocator@PEAUIAudioStreamInfo@@@std@@@std@@AEAAPEAPEAUIAudioStreamInfo@@QEAPEAU2@AEBQEAU2@@Z @ 0x180054BD0 (--$_Emplace_reallocate@AEBQEAUIAudioStreamInfo@@@-$vector@PEAUIAudioStreamInfo@@V-$allocator@PEA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CProcessSubmixProxy::AddStream(CProcessSubmixProxy *this, struct IAudioStreamInfo *a2)
{
  struct IAudioStreamInfo *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  struct IAudioStreamInfo **v5; // rdx
  __int64 v6; // rax
  _QWORD *v7; // rbx
  __int64 (__fastcall *v8)(_QWORD *, _QWORD, _QWORD, __int64); // rsi
  unsigned int v9; // eax
  int v10; // eax
  const char *v11; // r9
  unsigned int v12; // ebx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  _QWORD *v15; // [rsp+50h] [rbp+8h] BYREF
  struct IAudioStreamInfo *v16; // [rsp+58h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+60h] [rbp+18h]

  v16 = a2;
  v2 = a2;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 136);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
  try
  {
    v17 = v4;
    v5 = (struct IAudioStreamInfo **)*((_QWORD *)this + 23);
    if ( v5 == *((struct IAudioStreamInfo ***)this + 24) )
    {
      std::vector<IAudioStreamInfo *>::_Emplace_reallocate<IAudioStreamInfo * const &>((char *)this + 176, v5, &v16);
      v2 = v16;
    }
    else
    {
      *v5 = v2;
      *((_QWORD *)this + 23) += 8LL;
    }
    if ( v4 )
      LeaveCriticalSection(v4);
    v6 = *((_QWORD *)this + 1);
    v15 = 0LL;
    (*(void (__fastcall **)(char *, _QWORD **))(v6 + 64))((char *)this + 8, &v15);
    v7 = v15;
    v8 = *(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD, __int64))(*v15 + 232LL);
    v9 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)v2 + 72LL))(v2);
    v10 = v8(v7, 0LL, v9, 0xFFFFFFFFLL);
    v12 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE99,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v10);
      if ( v15 )
        (*(void (__fastcall **)(_QWORD *, _QWORD))(*v15 + 16LL))(v15, *v15);
      result = v12;
    }
    else
    {
      if ( v15 )
        (*(void (__fastcall **)(_QWORD *))(*v15 + 16LL))(v15);
      result = 0LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xE9D,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
                           v11);
  }
  return result;
}
