/*
 * XREFs of ?UpdateCursorOwnerAndNotifyTargets@CursorProcessor@@AEAAXKK@Z @ 0x180148298
 * Callers:
 *     ?CheckAndUpdateCursorOwnerForContext@CursorProcessor@@AEAA_NPEAVInputContext@@K@Z @ 0x1801478CC (-CheckAndUpdateCursorOwnerForContext@CursorProcessor@@AEAA_NPEAVInputContext@@K@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CursorProcessorUpdateCursorOwner@Cursor@InputTraceLogging@@SAXUCursorId@@KK@Z @ 0x180147B9C (-CursorProcessorUpdateCursorOwner@Cursor@InputTraceLogging@@SAXUCursorId@@KK@Z.c)
 *     ?GenerateCursorOwnerMessage@CursorProcessor@@AEAAXKUCursorId@@_N@Z @ 0x180147DA4 (-GenerateCursorOwnerMessage@CursorProcessor@@AEAAXKUCursorId@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CursorProcessor::UpdateCursorOwnerAndNotifyTargets(
        CursorProcessor *this,
        unsigned int a2,
        unsigned int a3,
        __int64 a4)
{
  int v6; // eax
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = 0LL;
  LOBYTE(a4) = 1;
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(**((_QWORD **)this + 13) + 72LL))(
         *((_QWORD *)this + 13),
         a3,
         1LL,
         a4);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x7F,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\cursor\\system\\lib\\cursorprocessor.cpp",
      (const char *)(unsigned int)v6,
      (int)&v11);
  v7 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *))(**((_QWORD **)this + 13) + 32LL))(
         *((_QWORD *)this + 13),
         &v11);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x80,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\cursor\\system\\lib\\cursorprocessor.cpp",
      (const char *)(unsigned int)v7,
      (int)&v11);
  CursorProcessor::GenerateCursorOwnerMessage(v8, *((_DWORD *)this + 29), v11, 0);
  CursorProcessor::GenerateCursorOwnerMessage(v9, a2, v11, 1);
  InputTraceLogging::Cursor::CursorProcessorUpdateCursorOwner(v11, *((_DWORD *)this + 29), a2);
}
