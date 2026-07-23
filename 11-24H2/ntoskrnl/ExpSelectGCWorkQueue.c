/*
 * XREFs of ExpSelectGCWorkQueue @ 0x140658A74
 * Callers:
 *     ExpHpGCTimerCallback @ 0x1403AE280 (ExpHpGCTimerCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpSelectGCWorkQueue(int a1)
{
  unsigned int v1; // r10d
  unsigned __int64 v2; // r8
  __int64 v3; // rax
  unsigned int v4; // ecx

  v1 = 4;
  if ( (unsigned __int64)(100LL * *(_QWORD *)(*(_QWORD *)qword_140E300C8 + 19328LL))
     / *(_QWORD *)(*(_QWORD *)qword_140E300C8 + 19608LL) >= 0x55 )
    return 3;
  v2 = *(_QWORD *)(*(_QWORD *)qword_140E300C8 + 18512LL);
  if ( 100LL * *(_QWORD *)(*(_QWORD *)qword_140E300C8 + 18688LL) / v2 <= 0xF )
  {
    return 3;
  }
  else if ( a1 == 1 )
  {
    v3 = 0LL;
    if ( *(__int64 *)(*(_QWORD *)qword_140E300C8 + 18752LL) >= 0 )
      v3 = *(_QWORD *)(*(_QWORD *)qword_140E300C8 + 18752LL);
    v4 = 4;
    if ( 100 * v3 / v2 <= 0xF )
      return 3;
    return v4;
  }
  return v1;
}
