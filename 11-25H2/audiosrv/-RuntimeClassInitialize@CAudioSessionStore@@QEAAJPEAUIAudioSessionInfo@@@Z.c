/*
 * XREFs of ?RuntimeClassInitialize@CAudioSessionStore@@QEAAJPEAUIAudioSessionInfo@@@Z @ 0x18001FFDC
 * Callers:
 *     ??$MakeAndInitialize@VCAudioSessionStore@@UIAudioSessionStore@@AEAPEAUIAudioSessionInfo@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioSessionStore@@AEAPEAUIAudioSessionInfo@@@Z @ 0x18002328C (--$MakeAndInitialize@VCAudioSessionStore@@UIAudioSessionStore@@AEAPEAUIAudioSessionInfo@@@Detail.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z @ 0x180020B2C (--$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x180060E88 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x180065D1C (--0last_error_context@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSessionStore::RuntimeClassInitialize(CAudioSessionStore *this, struct IAudioSessionInfo *a2)
{
  _QWORD *v4; // rsi
  void *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // rdx
  __int64 result; // rax
  __int64 (__fastcall *v12)(struct IAudioPolicyManager *, struct IAudioSessionInfo *, char *); // rsi
  __int64 v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v15; // [rsp+30h] [rbp+8h] BYREF

  v4 = (_QWORD *)((char *)this + 48);
  v5 = (void *)*((_QWORD *)this + 6);
  if ( v5 )
  {
    wil::last_error_context::last_error_context((wil::last_error_context *)&v15);
    CoTaskMemFree(v5);
    wil::last_error_context::~last_error_context((wil::last_error_context *)&v15);
  }
  *v4 = 0LL;
  v6 = (*(__int64 (__fastcall **)(struct IAudioSessionInfo *))(*(_QWORD *)a2 + 64LL))(a2);
  v9 = _AllocString<CTCoAllocPolicy>(v8, v7, v6, v4);
  if ( v9 < 0 )
  {
    v10 = 2128LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)(unsigned int)v9);
    return (unsigned int)v9;
  }
  v12 = *(__int64 (__fastcall **)(struct IAudioPolicyManager *, struct IAudioSessionInfo *, char *))(*(_QWORD *)g_PolicyManager + 400LL);
  v13 = *((_QWORD *)this + 7);
  *((_QWORD *)this + 7) = 0LL;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  result = v12(g_PolicyManager, a2, (char *)this + 56);
  v9 = result;
  if ( (int)result >= 0 )
    return 0LL;
  if ( (_DWORD)result != -2147024894 && (_DWORD)result != -2147024891 && (_DWORD)result != -2147467263 )
  {
    v10 = 2129LL;
    goto LABEL_5;
  }
  return result;
}
