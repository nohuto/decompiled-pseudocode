/*
 * XREFs of RtlpClearEnvironmentHashTable @ 0x1800AAF0C
 * Callers:
 *     RtlSetEnvironmentVar @ 0x1800AB3E0 (RtlSetEnvironmentVar.c)
 *     RtlSetCurrentEnvironment @ 0x180115850 (RtlSetCurrentEnvironment.c)
 *     RtlSetEnvironmentStrings @ 0x180115E10 (RtlSetEnvironmentStrings.c)
 * Callees:
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 */

_QWORD *RtlpClearEnvironmentHashTable()
{
  _QWORD **v0; // rdi
  _QWORD *v1; // rbx
  _QWORD *result; // rax
  void *v3; // r8
  _QWORD *i; // rcx

  v0 = (_QWORD **)*((_QWORD *)&RtlpEnvironmentHashTable + 1);
  *((_QWORD *)&xmmword_1801D48F0 + 1) = 0LL;
  v1 = (_QWORD *)*((_QWORD *)&RtlpEnvironmentHashTable + 1);
  LOBYTE(xmmword_1801D48F0) = 0;
  while ( v1 )
  {
    v1 = (_QWORD *)*v1;
    if ( ((unsigned __int8)v1 & 1) != 0 )
      break;
LABEL_7:
    result = v1;
    if ( !v1 )
      return result;
    v3 = v1;
    for ( i = v0; (*i & 1) == 0; i = (_QWORD *)*i )
    {
      if ( (_QWORD *)*i == v1 )
      {
        *i = *v1;
        LODWORD(RtlpEnvironmentHashTable) = RtlpEnvironmentHashTable - 1;
        *v1 |= 0x8000000000000002uLL;
        v1 = i;
        goto LABEL_12;
      }
    }
    v3 = 0LL;
LABEL_12:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
  }
  ++v0;
  result = (_QWORD *)*((_QWORD *)&RtlpEnvironmentHashTable + 1);
  while ( (unsigned __int64)v0 < *((_QWORD *)&RtlpEnvironmentHashTable + 1)
                               + 8 * ((unsigned __int64)DWORD1(RtlpEnvironmentHashTable) >> 5) )
  {
    v1 = *v0;
    if ( ((unsigned __int8)*v0 & 1) == 0 )
      goto LABEL_7;
    ++v0;
  }
  return result;
}
