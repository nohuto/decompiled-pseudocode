/*
 * XREFs of RtlpClearEnvironmentHashTable @ 0x1800AAF0C
 * Callers:
 *     RtlSetEnvironmentVar @ 0x1800AB3E0 (RtlSetEnvironmentVar.c)
 *     RtlSetCurrentEnvironment @ 0x180115850 (RtlSetCurrentEnvironment.c)
 *     RtlSetEnvironmentStrings @ 0x180115E10 (RtlSetEnvironmentStrings.c)
 * Callees:
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 */

_QWORD *__fastcall RtlpClearEnvironmentHashTable(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD **v4; // rdi
  _QWORD *v5; // rbx
  _QWORD *result; // rax
  __int64 v7; // r8
  _QWORD *i; // rcx

  v4 = (_QWORD **)*((_QWORD *)&RtlpEnvironmentHashTable + 1);
  *((_QWORD *)&xmmword_1801D48F0 + 1) = 0LL;
  v5 = (_QWORD *)*((_QWORD *)&RtlpEnvironmentHashTable + 1);
  LOBYTE(xmmword_1801D48F0) = 0;
  while ( v5 )
  {
    v5 = (_QWORD *)*v5;
    if ( ((unsigned __int8)v5 & 1) != 0 )
      break;
LABEL_7:
    result = v5;
    if ( !v5 )
      return result;
    v7 = (__int64)v5;
    for ( i = v4; (*i & 1) == 0; i = (_QWORD *)*i )
    {
      if ( (_QWORD *)*i == v5 )
      {
        *i = *v5;
        LODWORD(RtlpEnvironmentHashTable) = RtlpEnvironmentHashTable - 1;
        *v5 |= 0x8000000000000002uLL;
        v5 = i;
        goto LABEL_12;
      }
    }
    v7 = 0LL;
LABEL_12:
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7, a4);
  }
  ++v4;
  result = (_QWORD *)*((_QWORD *)&RtlpEnvironmentHashTable + 1);
  while ( (unsigned __int64)v4 < *((_QWORD *)&RtlpEnvironmentHashTable + 1)
                               + 8 * ((unsigned __int64)DWORD1(RtlpEnvironmentHashTable) >> 5) )
  {
    v5 = *v4;
    if ( ((unsigned __int8)*v4 & 1) == 0 )
      goto LABEL_7;
    ++v4;
  }
  return result;
}
