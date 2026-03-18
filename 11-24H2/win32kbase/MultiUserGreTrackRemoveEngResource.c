/*
 * XREFs of MultiUserGreTrackRemoveEngResource @ 0x14001A640
 * Callers:
 *     GreDeleteSemaphore @ 0x14003E0B0 (GreDeleteSemaphore.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$0CA@@@YAXXZ @ 0x14001C4D4 (--$GrepAcquireLockValidate@$0CA@@@YAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$0CA@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001C5BC (--$GreReleaseSemaphoreCommon@$0CA@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140020150 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 */

_QWORD *__fastcall MultiUserGreTrackRemoveEngResource(_QWORD *a1, __int64 a2)
{
  HSEMAPHORE v3; // rbx
  __int64 v4; // rcx
  _QWORD *result; // rax

  v3 = (HSEMAPHORE)(**(_QWORD **)(W32GetSessionState(a1, a2) + 88) + 1720LL);
  GreAcquireSemaphoreInternal(v3);
  GrepAcquireLockValidate<32>();
  v4 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (result = (_QWORD *)a1[1], (_QWORD *)*result != a1) )
    __fastfail(3u);
  *result = v4;
  *(_QWORD *)(v4 + 8) = result;
  if ( v3 )
    return (_QWORD *)GreReleaseSemaphoreCommon<32,void (*)(HSEMAPHORE__ *)>(v4, v3);
  return result;
}
