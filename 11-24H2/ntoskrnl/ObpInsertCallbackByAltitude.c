/*
 * XREFs of ObpInsertCallbackByAltitude @ 0x1409C5CD4
 * Callers:
 *     ObRegisterCallbacks @ 0x1409C5AA0 (ObRegisterCallbacks.c)
 * Callees:
 *     RtlCompareAltitudes @ 0x14044B470 (RtlCompareAltitudes.c)
 *     ObpUnlockObjectType @ 0x1409C64EC (ObpUnlockObjectType.c)
 *     ObpLockObjectTypeExclusive @ 0x1409C6564 (ObpLockObjectTypeExclusive.c)
 */

__int64 __fastcall ObpInsertCallbackByAltitude(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // esi
  _QWORD *v5; // rdi
  const UNICODE_STRING *v6; // r15
  LONG v7; // eax
  bool v8; // zf
  __int64 *v9; // rax
  __int64 v10; // rcx

  v4 = 0;
  ObpLockObjectTypeExclusive(a1);
  v5 = *(_QWORD **)(a1 + 200);
  if ( v5 == (_QWORD *)(a1 + 200) )
    goto LABEL_8;
  v6 = (const UNICODE_STRING *)a2[3];
  while ( 1 )
  {
    v7 = RtlCompareAltitudes((PCUNICODE_STRING)(v5[3] + 16LL), v6 + 1);
    v8 = v7 == 0;
    if ( v7 <= 0 )
      break;
    v5 = (_QWORD *)*v5;
    if ( v5 == (_QWORD *)(a1 + 200) )
    {
      v8 = v7 == 0;
      break;
    }
  }
  if ( !v8 )
  {
LABEL_8:
    v9 = (__int64 *)v5[1];
    v10 = *v9;
    if ( *(__int64 **)(*v9 + 8) != v9 )
      __fastfail(3u);
    *a2 = v10;
    a2[1] = v9;
    *(_QWORD *)(v10 + 8) = a2;
    *v9 = (__int64)a2;
  }
  else
  {
    v4 = -1071906799;
  }
  ObpUnlockObjectType(a1);
  return v4;
}
