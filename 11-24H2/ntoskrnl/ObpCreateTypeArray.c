/*
 * XREFs of ObpCreateTypeArray @ 0x1409D6624
 * Callers:
 *     ObEnumerateObjectsByType @ 0x1407442A0 (ObEnumerateObjectsByType.c)
 *     ObGetObjectInformation @ 0x1409D5F50 (ObGetObjectInformation.c)
 * Callees:
 *     ObReferenceObjectSafe @ 0x14041D310 (ObReferenceObjectSafe.c)
 *     ObpUnlockObjectType @ 0x1409D66BC (ObpUnlockObjectType.c)
 *     ObpLockObjectTypeExclusive @ 0x1409D6734 (ObpLockObjectTypeExclusive.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

_DWORD *__fastcall ObpCreateTypeArray(_QWORD **a1)
{
  _QWORD *v2; // rax
  _DWORD *v3; // rsi
  int v4; // edi
  _DWORD *Pool2; // rax
  __int64 v7; // rbp
  _QWORD *v8; // rdi

  ObpLockObjectTypeExclusive(a1);
  v2 = *a1;
  v3 = 0LL;
  v4 = 0;
  if ( *a1 != a1 )
  {
    do
    {
      v2 = (_QWORD *)*v2;
      ++v4;
    }
    while ( v2 != a1 );
    if ( v4 )
    {
      Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
      v3 = Pool2;
      if ( Pool2 )
      {
        *Pool2 = v4;
        v7 = 0LL;
        v8 = *a1;
        while ( v8 != a1 )
        {
          *(_QWORD *)&v3[2 * v7 + 2] = v8;
          if ( !ObReferenceObjectSafe((__int64)(v8 + 10)) )
            *(_QWORD *)&v3[2 * v7 + 2] = 0LL;
          v8 = (_QWORD *)*v8;
          v7 = (unsigned int)(v7 + 1);
        }
      }
    }
  }
  ObpUnlockObjectType(a1);
  return v3;
}
