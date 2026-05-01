/*
 * XREFs of ?OnImmersiveShellThreadStart@CImmersiveShellCreationBehavior@@UEAAJXZ @ 0x18018A1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateThread@CImmersiveShellCreationBehavior@@AEAAJXZ @ 0x18018A500 (-ValidateThread@CImmersiveShellCreationBehavior@@AEAAJXZ.c)
 *     ??$make_unique_nothrow@VCThreadRefHost@@A6AJPEAJPEAPEAUIUnknown@@@Z@wil@@YA?AV?$unique_ptr@VCThreadRefHost@@U?$default_delete@VCThreadRefHost@@@wistd@@@wistd@@A6AJPEAJPEAPEAUIUnknown@@@Z@Z @ 0x18018A550 (--$make_unique_nothrow@VCThreadRefHost@@A6AJPEAJPEAPEAUIUnknown@@@Z@wil@@YA-AV-$unique_ptr@VCThr.c)
 *     IsOleInitializePresent @ 0x1802D6F54 (IsOleInitializePresent.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CImmersiveShellCreationBehavior::OnImmersiveShellThreadStart(CImmersiveShellCreationBehavior *this)
{
  HRESULT v2; // edi
  __int64 *unique; // rax
  __int64 v4; // rdx
  void (__fastcall ***v5)(_QWORD, __int64); // rcx
  void (__fastcall ***v6)(_QWORD, __int64); // rcx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void (__fastcall ***v10)(_QWORD, __int64); // [rsp+30h] [rbp+8h] BYREF

  v2 = CImmersiveShellCreationBehavior::ValidateThread((CImmersiveShellCreationBehavior *)((char *)this - 32));
  if ( v2 < 0 )
  {
    v8 = 795LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellbuilder.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  if ( !*((_BYTE *)this + 16) && (unsigned __int8)IsOleInitializePresent() )
  {
    v2 = OleInitialize(0LL);
    if ( v2 < 0 )
    {
      v8 = 802LL;
      goto LABEL_12;
    }
    *((_BYTE *)this + 16) = 1;
  }
  if ( *((_QWORD *)this + 3) )
    return 0LL;
  unique = (__int64 *)wil::make_unique_nothrow<CThreadRefHost,long (&)(long *,IUnknown * *)>(&v10);
  v4 = *unique;
  *unique = 0LL;
  v5 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = v4;
  if ( v5 )
    (**v5)(v5, 1LL);
  v6 = v10;
  v10 = 0LL;
  if ( v6 )
    (**v6)(v6, 1LL);
  if ( *((_QWORD *)this + 3) )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x32E,
    (int)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellbuilder.cpp",
    (const char *)0x8007000ELL);
  return 2147942414LL;
}
