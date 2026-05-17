/*
 * XREFs of RtlTraceDatabaseDestroy @ 0x180148280
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrint @ 0x18002FC00 (DbgPrint.c)
 *     RtlDeleteCriticalSection @ 0x18008FEC0 (RtlDeleteCriticalSection.c)
 *     RtlpTraceDatabaseFree @ 0x180148534 (RtlpTraceDatabaseFree.c)
 */

bool __fastcall RtlTraceDatabaseDestroy(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  _QWORD *v5; // rbx
  char v6; // si
  _QWORD *v7; // rdi

  RtlDeleteCriticalSection((__int64 *)(a1 + 48), a2, a3, a4);
  v5 = *(_QWORD **)(a1 + 16);
  if ( !v5 )
    return 1;
  v6 = 0;
  do
  {
    v7 = (_QWORD *)v5[2];
    if ( !v7 )
      v5 -= 24;
    if ( !(unsigned __int8)RtlpTraceDatabaseFree(v5) )
    {
      DbgPrint("Trace database: failed to release segment %p \n", v5);
      v6 = 1;
    }
    v5 = v7;
  }
  while ( v7 );
  return v6 == 0;
}
