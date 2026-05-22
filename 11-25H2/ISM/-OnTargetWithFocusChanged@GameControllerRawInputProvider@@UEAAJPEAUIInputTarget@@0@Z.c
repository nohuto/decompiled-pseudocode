/*
 * XREFs of ?OnTargetWithFocusChanged@GameControllerRawInputProvider@@UEAAJPEAUIInputTarget@@0@Z @ 0x180066880
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateFocusPids@GameControllerRawInputProvider@@AEAAJXZ @ 0x1800669F8 (-UpdateFocusPids@GameControllerRawInputProvider@@AEAAJXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GameControllerRawInputProvider::OnTargetWithFocusChanged(
        RTL_SRWLOCK *this,
        struct IInputTarget *a2,
        __int64 (__fastcall ***a3)(struct IInputTarget *, GUID *, __int64 *))
{
  RTL_SRWLOCK *v5; // rdi
  __int64 (__fastcall **v6)(struct IInputTarget *, GUID *, __int64 *); // rax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int updated; // eax
  int savedregs; // [rsp+20h] [rbp+0h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  int v14; // [rsp+40h] [rbp+20h] BYREF
  int v15; // [rsp+50h] [rbp+30h] BYREF
  __int64 v16; // [rsp+58h] [rbp+38h] BYREF

  v5 = this + 8;
  AcquireSRWLockExclusive(this + 8);
  if ( a3 )
  {
    v14 = 0;
    v15 = 0;
    v6 = *a3;
    v16 = 0LL;
    v7 = (*v6)((struct IInputTarget *)a3, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, &v16);
    if ( v7 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x102,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerra"
                      "winputprovider.cpp",
        (const char *)(unsigned int)v7,
        savedregs);
    v8 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v16 + 32LL))(v16, &v14);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x103,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerra"
                      "winputprovider.cpp",
        (const char *)(unsigned int)v8,
        savedregs);
    v9 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v16 + 72LL))(v16, &v15);
    if ( v9 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x104,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerra"
                      "winputprovider.cpp",
        (const char *)(unsigned int)v9,
        savedregs);
    if ( v15 )
    {
      HIDWORD(this[19].Ptr) = v14;
    }
    else
    {
      HIDWORD(this[18].Ptr) = v14;
      HIDWORD(this[19].Ptr) = 0;
    }
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  else
  {
    HIDWORD(this[18].Ptr) = 0;
    HIDWORD(this[19].Ptr) = 0;
  }
  updated = GameControllerRawInputProvider::UpdateFocusPids((GameControllerRawInputProvider *)&this[-1]);
  if ( updated < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x120,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerrawi"
                    "nputprovider.cpp",
      (const char *)(unsigned int)updated,
      savedregs);
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
  return 0LL;
}
