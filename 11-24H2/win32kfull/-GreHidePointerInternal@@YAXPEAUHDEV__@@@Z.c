/*
 * XREFs of ?GreHidePointerInternal@@YAXPEAUHDEV__@@@Z @ 0x1402073C4
 * Callers:
 *     GreHidePointer @ 0x14002A43C (GreHidePointer.c)
 * Callees:
 *     ?vMovePointer@@YAXPEAUHDEV__@@HHJ@Z @ 0x140022D88 (-vMovePointer@@YAXPEAUHDEV__@@HHJ@Z.c)
 *     ??$GrepAcquireLockValidate@$03@@YAXXZ @ 0x1400230C4 (--$GrepAcquireLockValidate@$03@@YAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140029210 (--$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

void __fastcall GreHidePointerInternal(_QWORD *a1)
{
  HSEMAPHORE v1; // rbx
  __int64 v3; // rdx
  int v4; // ecx
  __int64 v5; // r15
  __int64 v6; // rax
  _QWORD *v7; // r14
  int v8; // ebp
  _DWORD *v9; // rcx

  v1 = (HSEMAPHORE)a1[7];
  GreAcquireSemaphoreInternal(v1);
  GrepAcquireLockValidate<4>();
  v5 = *(_QWORD *)(W32GetSessionState(v4, v3) + 96);
  if ( (a1[5] & 0x20000) != 0 )
  {
    v6 = a1[223];
    v7 = *(_QWORD **)v6;
    v8 = *(_DWORD *)(v6 + 16);
    do
    {
      v9 = (_DWORD *)v7[6];
      if ( (v9[528] & 0x2000) == 0 )
        vMovePointer(v9, 0xFFFFFFFFLL, 0xFFFFFFFFLL, *(_DWORD *)(v5 + 64));
      v7 = (_QWORD *)*v7;
      --v8;
    }
    while ( v8 );
  }
  else
  {
    vMovePointer(a1, 0xFFFFFFFFLL, 0xFFFFFFFFLL, *(_DWORD *)(v5 + 64));
  }
  *((_DWORD *)a1 + 16) = -1;
  *((_DWORD *)a1 + 17) = -1;
  if ( v1 )
    GreReleaseSemaphoreCommon<4,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      (__int64)v1);
}
