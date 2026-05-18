/*
 * XREFs of ??1CKstBase@@QEAA@XZ @ 0x1800100AC
 * Callers:
 *     DwmpShutdownWinlogonMouseThread @ 0x18000E420 (DwmpShutdownWinlogonMouseThread.c)
 *     DwmpStartWinlogonMouseThread @ 0x18000E530 (DwmpStartWinlogonMouseThread.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180009DE4 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Stop@CKstBase@@QEAAXXZ @ 0x180010C48 (-Stop@CKstBase@@QEAAXXZ.c)
 */

void __fastcall CKstBase::~CKstBase(CKstBase *this)
{
  void *v2; // rcx
  const char *v3; // r9
  void *v4; // rcx
  const char *v5; // r9
  char *v6; // rcx
  void *v7; // rcx
  const char *v8; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)this = &CKstBase::`vftable';
  CKstBase::Stop(this);
  v2 = (void *)*((_QWORD *)this + 5);
  if ( v2 && !CloseHandle(v2) )
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x9DD,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
      v3);
  v4 = (void *)*((_QWORD *)this + 4);
  if ( v4 && !CloseHandle(v4) )
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x9DD,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
      v5);
  v6 = (char *)*((_QWORD *)this + 2);
  if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v6);
  v7 = (void *)*((_QWORD *)this + 1);
  if ( v7 )
  {
    if ( !CloseHandle(v7) )
      wil::details::in1diag3::_FailFast_GetLastError(
        retaddr,
        (void *)0x9DD,
        (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
        v8);
  }
}
