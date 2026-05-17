/*
 * XREFs of EtwEnumerateProcessRegGuids @ 0x18015BD50
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180010280 (RtlReleaseSRWLockShared.c)
 *     EtwpGetNextRegistration @ 0x18008BFF0 (EtwpGetNextRegistration.c)
 */

__int64 __fastcall EtwEnumerateProcessRegGuids(__int64 a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  _DWORD *v3; // r14
  unsigned int v5; // edi
  unsigned int v6; // ebx
  __int64 result; // rax
  unsigned __int64 NextRegistration; // rcx
  unsigned int v9; // r9d
  unsigned int i; // eax

  v3 = (_DWORD *)a3;
  v5 = (unsigned int)a2 >> 4;
  v6 = 0;
  if ( !a1 && (_DWORD)a2 )
    return 87LL;
  NextRegistration = 0LL;
LABEL_5:
  while ( 1 )
  {
    NextRegistration = EtwpGetNextRegistration(NextRegistration, a2, a3);
    if ( !NextRegistration )
      break;
    v9 = v6;
    if ( v6 >= v5 )
      v9 = v5;
    for ( i = 0; i < v9; ++i )
    {
      a3 = 16LL * i;
      a2 = (volatile signed __int32 **)(*(_QWORD *)(NextRegistration + 32) - *(_QWORD *)(a3 + a1));
      if ( !a2 )
        a2 = (volatile signed __int32 **)(*(_QWORD *)(NextRegistration + 40) - *(_QWORD *)(a3 + a1 + 8));
      if ( !a2 )
        goto LABEL_5;
    }
    if ( v6 < v5 )
      *(_OWORD *)(16LL * v6 + a1) = *(_OWORD *)(NextRegistration + 32);
    ++v6;
  }
  result = v5 < v6 ? 0x7A : 0;
  *v3 = 16 * v6;
  return result;
}
