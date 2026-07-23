/*
 * XREFs of KiTpWriteBreakpoint @ 0x1405C6D4C
 * Callers:
 *     KiTpHandleTrap @ 0x1404F4C00 (KiTpHandleTrap.c)
 *     KeSetTracepoint @ 0x14073B5D0 (KeSetTracepoint.c)
 * Callees:
 *     KiTpWriteMemory @ 0x1405C6DC8 (KiTpWriteMemory.c)
 *     MmWriteSystemImageTracepoint @ 0x14067EDF0 (MmWriteSystemImageTracepoint.c)
 */

__int64 __fastcall KiTpWriteBreakpoint(__int64 a1, __int64 a2)
{
  char v2; // al
  _BYTE *v3; // rbx
  __int64 result; // rax
  __int64 v5; // r8
  __int64 v6; // r10
  int *v7; // r9
  int v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = a2;
  LOBYTE(a2) = *(_BYTE *)(a1 + 50);
  if ( (_BYTE)a2 || !VslVsmEnabled )
  {
    v5 = *(_QWORD *)(a1 + 8);
    v6 = *(_QWORD *)(a1 + 16);
    if ( v2 )
    {
      v8 = 204;
      v7 = &v8;
    }
    else
    {
      v7 = (int *)(a1 + 51);
    }
    return KiTpWriteMemory(v6, a2, v5, v7);
  }
  else
  {
    v3 = (_BYTE *)(a1 + 49);
    result = MmWriteSystemImageTracepoint(*(_QWORD *)(a1 + 8));
    if ( !*v3 && (int)result >= 0 )
      *v3 = 1;
  }
  return result;
}
