/*
 * XREFs of ?CreateComponent@CImmersiveShellCreationBehavior@@UEAAJIAEBU_GUID@@PEAPEAX@Z @ 0x180027370
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CImmersiveShellCreationBehavior::CreateComponent(
        CImmersiveShellCreationBehavior *this,
        unsigned int a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 v6; // rdi
  _UNKNOWN **v8; // rdx
  int v9; // eax
  unsigned __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  int v15; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a4 = 0LL;
  v6 = a2;
  if ( !*((_DWORD *)this + 8) )
    _InterlockedCompareExchange((volatile signed __int32 *)this + 8, GetCurrentThreadId(), 0);
  if ( *((_DWORD *)this + 8) != GetCurrentThreadId() )
  {
    v12 = -2147417842;
    v13 = 863LL;
    goto LABEL_10;
  }
  if ( (unsigned int)v6 >= 0x94 )
  {
    v12 = -2147483637;
    v13 = 864LL;
    goto LABEL_10;
  }
  v8 = &off_18070A020 + 4 * v6;
  v9 = *((_DWORD *)v8 + 2);
  if ( (v9 & 4) != 0 )
  {
    v10 = 40LL;
  }
  else if ( (v9 & 2) != 0 )
  {
    v10 = 48LL;
  }
  else
  {
    v10 = (-(__int64)((v9 & 8) != 0) & 0xFFFFFFFFFFFFFFF8uLL) + 64;
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct _GUID *, void **))(**(_QWORD **)((char *)this + v10)
                                                                                 + 24LL))(
          *(_QWORD *)((char *)this + v10),
          *v8,
          a3,
          a4);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x34F,
      (unsigned int)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellbuilder.cpp",
      (const char *)(unsigned int)v11,
      v15);
    v13 = 865LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (unsigned int)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellbuilder.cpp",
      (const char *)v12,
      v15);
    return v12;
  }
  return 0LL;
}
