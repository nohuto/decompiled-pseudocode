/*
 * XREFs of ExpPartitionCreateThreadIfNecessary @ 0x140225B30
 * Callers:
 *     ExpTryQueueWorkItem @ 0x1403AB6FC (ExpTryQueueWorkItem.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 */

int __fastcall ExpPartitionCreateThreadIfNecessary(__int64 a1, unsigned __int16 *a2, _DWORD *a3)
{
  int v3; // r9d
  _QWORD *v4; // rax

  v3 = a3[178];
  LODWORD(v4) = (2 * a3[179]) >> 1;
  if ( v3 < (int)v4
    || v3 < a3[180] && (v4 = a3 + 2, (_QWORD *)*v4 == v4) && (a3[1] || (LODWORD(v4) = a3[179], (int)v4 < 0)) )
  {
    LODWORD(v4) = KeSetEvent((PRKEVENT)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *a2) + 16LL), 0, 0);
  }
  return (int)v4;
}
