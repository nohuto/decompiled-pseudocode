/*
 * XREFs of ?InitializeSystemServer@CMessageConversationHost@@AEAAJPEAI@Z @ 0x18021B4F0
 * Callers:
 *     ?Initialize@CMessageConversationHost@@IEAAJXZ @ 0x1802AF020 (-Initialize@CMessageConversationHost@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x18021B6A8 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x18021B6CC (--0last_error_context@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMessageConversationHost::InitializeSystemServer(CMessageConversationHost *this, unsigned int *a2)
{
  HLOCAL v4; // rbx
  signed int LastError; // eax
  signed int v6; // ebx
  int v7; // eax
  __int64 *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned int v12; // [rsp+20h] [rbp-50h]
  __int64 v13; // [rsp+60h] [rbp-10h] BYREF
  int v14; // [rsp+68h] [rbp-8h]
  HLOCAL hMem; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v16; // [rsp+A8h] [rbp+38h] BYREF

  hMem = 0LL;
  v16 = 0LL;
  SetLastError(0);
  v4 = hMem;
  if ( hMem )
  {
    wil::last_error_context::last_error_context((wil::last_error_context *)&v13);
    LocalFree(v4);
    wil::last_error_context::~last_error_context((wil::last_error_context *)&v13);
  }
  hMem = 0LL;
  if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(
         L"D:(A;;0x01;;;WD)(A;;0x01;;;AC)(A;;0x01;;;S-1-15-3-1024-1502825166-1963708345-2616377461-2562897074-4192028372-3"
          "968301570-1997628692-1435953622)",
         1u,
         &hMem,
         0LL) )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, HLOCAL, __int64 *))(**((_QWORD **)this + 2) + 64LL))(
           *((_QWORD *)this + 2),
           hMem,
           &v16);
    v6 = v7;
    if ( v7 < 0 )
    {
      v12 = 131;
    }
    else
    {
      v13 = 0LL;
      v8 = (__int64 *)*((_QWORD *)this + 2);
      v9 = *v8;
      v14 = 1;
      v7 = (*(__int64 (__fastcall **)(__int64 *, const wchar_t *, __int64, __int64 *, int, int, int, CMessageConversationHost *, unsigned int *, char *))(v9 + 304))(
             v8,
             L"System\\CompositionEngine",
             v16,
             &v13,
             1,
             1,
             1,
             this,
             a2,
             (char *)this + 24);
      v6 = v7;
      if ( v7 >= 0 )
        goto LABEL_14;
      v12 = 142;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, v12, 0LL);
  }
  else
  {
    LastError = GetLastError();
    v6 = LastError;
    if ( LastError > 0 )
      v6 = (unsigned __int16)LastError | 0x80070000;
    if ( v6 >= 0 )
      v6 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x7Fu, 0LL);
  }
LABEL_14:
  v10 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  if ( hMem )
    LocalFree(hMem);
  return (unsigned int)v6;
}
