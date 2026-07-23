/*
 * XREFs of WheapAddErrorSource @ 0x14065A358
 * Callers:
 *     WheaAddErrorSource @ 0x1407C6DE0 (WheaAddErrorSource.c)
 *     WheapInitializeErrorSourceTable @ 0x140C46948 (WheapInitializeErrorSourceTable.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 */

LONG __fastcall WheapAddErrorSource(__int64 a1, __int64 a2)
{
  __int64 *v3; // rax

  KeWaitForSingleObject(&stru_140EEEF30, Executive, 0, 0, 0LL);
  *(_DWORD *)(a2 + 124) = dword_140EEEF18;
  v3 = (__int64 *)qword_140EEEF28;
  if ( *(__int64 **)qword_140EEEF28 != &qword_140EEEF20 )
    __fastfail(3u);
  *(_QWORD *)a2 = &qword_140EEEF20;
  *(_QWORD *)(a2 + 8) = v3;
  *v3 = a2;
  qword_140EEEF28 = a2;
  _InterlockedIncrement(&dword_140EEEF14);
  _InterlockedIncrement(&dword_140EEEF18);
  return KeSetEvent(&stru_140EEEF30, 0, 0);
}
