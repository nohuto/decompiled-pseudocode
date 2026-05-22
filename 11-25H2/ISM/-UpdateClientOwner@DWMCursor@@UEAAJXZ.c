/*
 * XREFs of ?UpdateClientOwner@DWMCursor@@UEAAJXZ @ 0x1801C1530
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateClientOwner@Cursor@InputTraceLogging@@SAXUCursorId@@@Z @ 0x1801C14C0 (-UpdateClientOwner@Cursor@InputTraceLogging@@SAXUCursorId@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DWMCursor::UpdateClientOwner(DWMCursor *this)
{
  bool v2; // zf
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = dword_180247C64 == -1;
  v3 = ++dword_180247C64;
  if ( v2 )
  {
    v3 = 1;
    dword_180247C64 = 1;
  }
  *((_DWORD *)this + 11) = v3;
  v4 = *(_QWORD *)(*((_QWORD *)this + 20) + 248LL) + 8LL;
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 232LL))(v4);
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 80);
    if ( v6 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 88LL))(v6, *((_QWORD *)this + 5));
      v8 = v7;
      if ( v7 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x187,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                   "systemcursorcontroller2.cpp",
          (const char *)(unsigned int)v7);
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xA3,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
          (const char *)v8);
      }
    }
  }
  InputTraceLogging::Cursor::UpdateClientOwner(*((_QWORD *)this + 5));
  return 0LL;
}
