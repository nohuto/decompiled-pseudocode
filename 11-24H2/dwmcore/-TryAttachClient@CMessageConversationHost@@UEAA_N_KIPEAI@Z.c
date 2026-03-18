/*
 * XREFs of ?TryAttachClient@CMessageConversationHost@@UEAA_N_KIPEAI@Z @ 0x1802156B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802412D4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CMessageConversationHost::TryAttachClient(
        CMessageConversationHost *this,
        __int64 a2,
        __int64 a3,
        unsigned int *a4)
{
  unsigned int v5; // edi
  int v6; // ebx
  int v8; // eax
  int v9; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v5 = a3;
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, unsigned int *))(**((_QWORD **)this + 4) + 32LL))(
         *((_QWORD *)this + 4),
         a2,
         a3,
         a4);
  if ( v6 == -2018375658 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 2) + 224LL))(
           *((_QWORD *)this + 2),
           v5,
           0LL);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x14C,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\messageconversationhost.cpp",
        (const char *)(unsigned int)v8,
        v9);
  }
  return v6 == 0;
}
