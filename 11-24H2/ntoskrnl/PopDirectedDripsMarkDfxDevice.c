/*
 * XREFs of PopDirectedDripsMarkDfxDevice @ 0x140A913C4
 * Callers:
 *     PopDirectedDripsBuildBroadcastTreeFull @ 0x140764520 (PopDirectedDripsBuildBroadcastTreeFull.c)
 * Callees:
 *     PopDirectedDripsVisitDevice @ 0x1406F760C (PopDirectedDripsVisitDevice.c)
 *     PopDirectedDripsInsertQueueDevice @ 0x1407649D8 (PopDirectedDripsInsertQueueDevice.c)
 */

unsigned __int64 __fastcall PopDirectedDripsMarkDfxDevice(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 result; // rax
  __int64 v9; // r8
  bool v10; // bp
  __int16 v11; // cx
  _QWORD **v12; // rsi
  _QWORD *j; // rdi
  __int64 v14; // rbx
  _QWORD *i; // rdi

  *(_DWORD *)(a3 + 32) |= 0x10000u;
  PopDirectedDripsVisitDevice(a2, a3, a4, 1u);
  result = *(unsigned int *)(a3 + 32);
  v9 = *(_QWORD *)(a3 - 648);
  v10 = 0;
  if ( (result & 4) == 0 )
  {
    if ( !v9
      || (v11 = _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 864), 0, 0),
          result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(v9 + 864), 0, 0),
          v10 = (result & 0x400) != 0,
          (v11 & 0x200) == 0) )
    {
      for ( i = *(_QWORD **)(a3 - 720); i; i = (_QWORD *)*i )
      {
        PopDirectedDripsVisitDevice(a2, (__int64)(i + 91), a4, 2u);
        result = (unsigned __int64)PopDirectedDripsInsertQueueDevice(a1, i + 91);
      }
    }
    if ( !v10 )
    {
      v12 = (_QWORD **)(a3 - 552);
      for ( j = *v12; j != v12; j = (_QWORD *)*j )
      {
        v14 = *(j - 1);
        PopDirectedDripsVisitDevice(a2, v14 + 568, a4, 3u);
        result = (unsigned __int64)PopDirectedDripsInsertQueueDevice(a1, (_QWORD *)(v14 + 568));
      }
    }
  }
  return result;
}
