/*
 * XREFs of CmpInsertCallbackInListByAltitude @ 0x140973684
 * Callers:
 *     CmpRegisterCallbackInternal @ 0x14097354C (CmpRegisterCallbackInternal.c)
 * Callees:
 *     RtlCompareAltitudes @ 0x14044B470 (RtlCompareAltitudes.c)
 *     CmpLockCallbackListExclusive @ 0x1406F3D58 (CmpLockCallbackListExclusive.c)
 *     CmpUnlockCallbackList @ 0x140973760 (CmpUnlockCallbackList.c)
 */

__int64 __fastcall CmpInsertCallbackInListByAltitude(__int64 a1, char a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdi
  __int64 *v6; // rax
  __int64 v7; // rcx
  LONG v8; // eax

  v4 = 0;
  CmpLockCallbackListExclusive();
  *(_QWORD *)(a1 + 24) = ++CmpCallbackCookie;
  v5 = CallbackListHead;
  if ( (__int64 *)CallbackListHead != &CallbackListHead )
  {
    do
    {
      v8 = RtlCompareAltitudes((PCUNICODE_STRING)(v5 + 48), (PCUNICODE_STRING)(a1 + 48));
      if ( v8 )
      {
        if ( v8 < 0 )
          goto LABEL_2;
      }
      else if ( !a2 )
      {
        goto LABEL_15;
      }
      v5 = *(_QWORD *)v5;
    }
    while ( (__int64 *)v5 != &CallbackListHead );
    if ( !v8 && !a2 )
    {
LABEL_15:
      v4 = -1071906799;
      goto LABEL_8;
    }
  }
LABEL_2:
  v6 = *(__int64 **)(v5 + 8);
  v7 = *v6;
  if ( *(__int64 **)(*v6 + 8) != v6 )
    __fastfail(3u);
  *(_QWORD *)a1 = v7;
  *(_QWORD *)(a1 + 8) = v6;
  *(_QWORD *)(v7 + 8) = a1;
  *v6 = a1;
  _InterlockedIncrement(&CmpCallBackCount);
LABEL_8:
  CmpUnlockCallbackList();
  return v4;
}
