/*
 * XREFs of ??0CFlipAwayFence@@AEAA@PEAU_LIST_ENTRY@@IAEBUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@@Z @ 0x140099E2C
 * Callers:
 *     ?Create@CFlipAwayFence@@SAJPEAU_LIST_ENTRY@@IAEBUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@PEAPEAV1@@Z @ 0x140099F20 (-Create@CFlipAwayFence@@SAJPEAU_LIST_ENTRY@@IAEBUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@PEAPEAV1.c)
 * Callees:
 *     DxgkGetWin32kImportTable @ 0x14000CC5C (DxgkGetWin32kImportTable.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

CFlipAwayFence *__fastcall CFlipAwayFence::CFlipAwayFence(
        CFlipAwayFence *this,
        struct _LIST_ENTRY *a2,
        int a3,
        const struct tagCOMPOSITION_TARGET_FLIP_AWAY_FENCE *a4)
{
  __int64 v5; // rax
  struct _LIST_ENTRY *Flink; // rax
  __int64 Win32kImportTable; // rax

  *((_DWORD *)this + 4) = a3;
  *(_QWORD *)((char *)this + 20) = *(_QWORD *)a4;
  v5 = *((_QWORD *)a4 + 2);
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 4) = v5;
  Flink = a2->Flink;
  if ( a2->Flink->Blink != a2 )
    __fastfail(3u);
  *(_QWORD *)this = Flink;
  *((_QWORD *)this + 1) = a2;
  Flink->Blink = (struct _LIST_ENTRY *)this;
  a2->Flink = (struct _LIST_ENTRY *)this;
  Win32kImportTable = DxgkGetWin32kImportTable();
  (*(void (__fastcall **)(_QWORD, _QWORD))(Win32kImportTable + 400))(
    *((_QWORD *)this + 4),
    *(_QWORD *)((char *)this + 20));
  return this;
}
