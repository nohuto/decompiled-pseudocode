/*
 * XREFs of ?GreHidePointerInternal@@YAXPEAUHDEV__@@@Z @ 0x1C001C8BC
 * Callers:
 *     GreHidePointer @ 0x1C00C2AB4 (GreHidePointer.c)
 * Callees:
 *     ?vMovePointer@@YAXPEAUHDEV__@@HHJ@Z @ 0x1C001D32C (-vMovePointer@@YAXPEAUHDEV__@@HHJ@Z.c)
 */

void __fastcall GreHidePointerInternal(HDEV a1)
{
  __int64 v2; // rcx
  __int64 v3; // r14
  __int64 v4; // rax
  _QWORD *v5; // rsi
  int v6; // ebp
  HDEV v7; // rcx

  GreAcquireSemaphore(*((_QWORD *)a1 + 7));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemPointer()", *((_QWORD *)a1 + 7), 4LL);
  v3 = *(_QWORD *)(SGDGetSessionState(v2) + 32);
  if ( ((_DWORD)a1[10] & 0x20000) != 0 )
  {
    v4 = *((_QWORD *)a1 + 221);
    v5 = *(_QWORD **)v4;
    v6 = *(_DWORD *)(v4 + 16);
    do
    {
      v7 = (HDEV)v5[6];
      if ( ((_DWORD)v7[524] & 0x2000) == 0 )
        vMovePointer(v7, -1, -1, *(_DWORD *)(v3 + 8664));
      v5 = (_QWORD *)*v5;
      --v6;
    }
    while ( v6 );
  }
  else
  {
    vMovePointer(a1, -1, -1, *(_DWORD *)(v3 + 8664));
  }
  *((_DWORD *)a1 + 16) = -1;
  *((_DWORD *)a1 + 17) = -1;
  EtwTraceGreLockReleaseSemaphore(L"po.hsemPointer()");
  GreReleaseSemaphoreInternal(*((_QWORD *)a1 + 7));
}
