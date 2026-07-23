/*
 * XREFs of CmpPostApcRunDown @ 0x1407D24A0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     DbgPrint @ 0x140274290 (DbgPrint.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     CmpFreeSubordinatePost @ 0x14086D3B4 (CmpFreeSubordinatePost.c)
 *     CmpFreePostBlock @ 0x14086EA70 (CmpFreePostBlock.c)
 */

__int64 __fastcall CmpPostApcRunDown(__int64 a1)
{
  unsigned __int8 CurrentIrql; // r14
  char v3; // si
  _QWORD *v4; // rdi
  _QWORD *v5; // rdx
  _KPROCESS *Process; // rax
  __int16 v7; // ax
  char v8; // al
  __int64 v9; // rax
  _QWORD *v10; // rdx
  struct _KEVENT *v11; // rcx
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  v3 = 1;
  __writecr8(1uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 1);
  v4 = *(_QWORD **)(a1 + 72);
  v5 = (_QWORD *)v4[8];
  if ( (_QWORD *)v5[13] == v5 + 13 )
  {
    DbgPrint("IoStatusBlock pointing onto itself AsyncUser = %p\n", v5);
    if ( (_BYTE)KdDebuggerEnabled )
    {
      if ( !(_BYTE)KdDebuggerNotPresent )
        __debugbreak();
    }
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( !Process[1].ReadyTime
    || ((v7 = WORD2(Process[3].PerProcessorCycleTimes), v7 == 332) || v7 == 452 ? (v8 = 1) : (v8 = 0), !v8) )
  {
    v3 = 0;
  }
  **(_DWORD **)(v4[8] + 104LL) = 267;
  v9 = v4[8];
  if ( v3 )
    *(_DWORD *)(*(_QWORD *)(v9 + 104) + 4LL) = 0;
  else
    *(_QWORD *)(*(_QWORD *)(v9 + 104) + 8LL) = 0LL;
  v10 = (_QWORD *)v4[8];
  if ( (_QWORD *)v10[13] == v10 + 13 )
  {
    DbgPrint("IoStatusBlock pointing onto itself AsyncUser = %p\n", v10);
    if ( (_BYTE)KdDebuggerEnabled )
    {
      if ( !(_BYTE)KdDebuggerNotPresent )
        __debugbreak();
    }
  }
  v11 = *(struct _KEVENT **)(v4[8] + 8LL);
  if ( v11 )
  {
    KeSetEvent(v11, 0, 0);
    ObfDereferenceObject(*(PVOID *)(v4[8] + 8LL));
  }
  v12 = v4[2];
  v13 = (_QWORD *)v4[3];
  if ( *(_QWORD **)(v12 + 8) != v4 + 2 || (_QWORD *)*v13 != v4 + 2 )
    __fastfail(3u);
  *v13 = v12;
  *(_QWORD *)(v12 + 8) = v13;
  CmpFreeSubordinatePost(v4);
  CmpFreePostBlock(v4);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
