/*
 * XREFs of ?SendAndVerifyEndpoints@DWMCursorBroker@@AEAAJPEAUCursorMessage@@@Z @ 0x18007CE9C
 * Callers:
 *     ?OnRasterizationScaleChanged@DWMCursorBroker@@QEAAJPEAVDWMCursor@@I@Z @ 0x18007CE04 (-OnRasterizationScaleChanged@DWMCursorBroker@@QEAAJPEAVDWMCursor@@I@Z.c)
 *     ?ArbitrateCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z @ 0x18007F974 (-ArbitrateCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z.c)
 *     ?OnTargetChanged@DWMCursorBroker@@UEAAJPEAUCursorId@@@Z @ 0x1801C02C0 (-OnTargetChanged@DWMCursorBroker@@UEAAJPEAUCursorId@@@Z.c)
 *     ?UnregisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z @ 0x1801C08A4 (-UnregisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DWMCursorBroker::SendAndVerifyEndpoints(DWMCursorBroker *this, struct CursorMessage *a2)
{
  _QWORD *v3; // rbx
  __int64 v5; // rdi

  v3 = (_QWORD *)((char *)this + 216);
  v5 = 10LL;
  do
  {
    if ( *v3
      && (*(int (__fastcall **)(_QWORD, _QWORD, __int64, struct CursorMessage *, int))(**((_QWORD **)this + 22) + 176LL))(
           *((_QWORD *)this + 22),
           *v3,
           4LL,
           a2,
           64) < 0 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 22) + 168LL))(*((_QWORD *)this + 22), *v3);
      *v3 = 0LL;
    }
    v3 += 3;
    --v5;
  }
  while ( v5 );
  return 0LL;
}
