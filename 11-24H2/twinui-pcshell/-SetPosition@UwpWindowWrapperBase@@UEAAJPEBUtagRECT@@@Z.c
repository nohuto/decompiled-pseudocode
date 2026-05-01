/*
 * XREFs of ?SetPosition@UwpWindowWrapperBase@@UEAAJPEBUtagRECT@@@Z @ 0x1800429D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180042F80 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UwpWindowWrapperBase::SetPosition(UwpWindowWrapperBase *this, const struct tagRECT *a2)
{
  DWORD CurrentThreadId; // esi
  HRESULT ApartmentType; // eax
  unsigned int v4; // edi
  _OWORD *v5; // rax
  _OWORD *v6; // rbx
  int v7; // edi
  const char *v8; // r9
  __int64 result; // rax
  __int128 v10; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  APTTYPE pAptType; // [rsp+60h] [rbp+8h] BYREF
  const struct tagRECT *v13; // [rsp+68h] [rbp+10h] BYREF
  char *v14; // [rsp+70h] [rbp+18h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+78h] [rbp+20h] BYREF

  v13 = a2;
  *(_QWORD *)&v10 = &v13;
  *((_QWORD *)&v10 + 1) = this;
  CurrentThreadId = GetCurrentThreadId();
  pAptType = APTTYPE_STA;
  pAptQualifier = APTTYPEQUALIFIER_NONE;
  ApartmentType = CoGetApartmentType(&pAptType, &pAptQualifier);
  try
  {
    if ( ApartmentType < 0 || pAptType == APTTYPE_STA || pAptType == APTTYPE_MAINSTA )
      v4 = 0;
    else
      v4 = 4;
    LODWORD(v14) = 0;
    v5 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v6 = v5;
    if ( v5 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(v5);
      v6[1] = v10;
      *(_QWORD *)v6 = &off_18070D408;
      *((_QWORD *)v6 + 4) = &v14;
    }
    else
    {
      v6 = 0LL;
    }
    v7 = SHTaskPoolQueueTask(v4, 32LL, CurrentThreadId);
    if ( v6 )
      (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v6 + 16LL))(v6);
    if ( v7 >= 0 )
      v7 = (int)v14;
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xE3,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
        (const char *)(unsigned int)v7,
        (int)v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xE7,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v8);
  }
  return result;
}
