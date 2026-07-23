/*
 * XREFs of ObpCreateTypeArray @ 0x1409C6454
 * Callers:
 *     ObEnumerateObjectsByType @ 0x140742590 (ObEnumerateObjectsByType.c)
 *     ObGetObjectInformation @ 0x1409C5D80 (ObGetObjectInformation.c)
 * Callees:
 *     ObReferenceObjectSafe @ 0x140411C00 (ObReferenceObjectSafe.c)
 *     ObpUnlockObjectType @ 0x1409C64EC (ObpUnlockObjectType.c)
 *     ObpLockObjectTypeExclusive @ 0x1409C6564 (ObpLockObjectTypeExclusive.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

unsigned int *__fastcall ObpCreateTypeArray(_QWORD **a1)
{
  _QWORD *v2; // rax
  unsigned int *v3; // rsi
  unsigned int v4; // edi
  __int64 v6; // rcx
  unsigned int *Pool2; // rax
  __int64 v8; // rbp
  _QWORD *v9; // rdi

  ObpLockObjectTypeExclusive(a1);
  v2 = *a1;
  v3 = 0LL;
  v4 = 0;
  if ( *a1 != a1 )
  {
    do
    {
      v2 = (_QWORD *)*v2;
      v6 = v4++;
    }
    while ( v2 != a1 );
    if ( v4 )
    {
      Pool2 = (unsigned int *)ExAllocatePool2(0x100uLL, 8 * v6 + 16, 0x7241624Fu);
      v3 = Pool2;
      if ( Pool2 )
      {
        *Pool2 = v4;
        v8 = 0LL;
        v9 = *a1;
        while ( v9 != a1 )
        {
          *(_QWORD *)&v3[2 * v8 + 2] = v9;
          if ( !ObReferenceObjectSafe((__int64)(v9 + 10)) )
            *(_QWORD *)&v3[2 * v8 + 2] = 0LL;
          v9 = (_QWORD *)*v9;
          v8 = (unsigned int)(v8 + 1);
        }
      }
    }
  }
  ObpUnlockObjectType(a1);
  return v3;
}
