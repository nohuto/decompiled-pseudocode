/*
 * XREFs of ?RegisterResources@CStreamInstance@@UEAAJPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140043AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CStreamInstance::RegisterResources(
        CStreamInstance *this,
        struct IAudioStreamingResourceRegistration *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_QWORD *)this + 23) )
    return 0LL;
  if ( (unsigned __int64)(*((_QWORD *)this + 17) - 1LL) > 0xFFFFFFFFFFFFFFFDuLL )
    return 0LL;
  v3 = (*(__int64 (__fastcall **)(struct IAudioStreamingResourceRegistration *))(*(_QWORD *)a2 + 24LL))(a2);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x102,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
