/*
 * XREFs of MiCloneWriteWatch @ 0x140677C0C
 * Callers:
 *     MiCloneVads @ 0x1402CC944 (MiCloneVads.c)
 * Callees:
 *     MiLocateLockedVadEvent @ 0x1402A57D4 (MiLocateLockedVadEvent.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 */

void *__fastcall MiCloneWriteWatch(__int64 a1)
{
  int v1; // edx
  __int64 v2; // r8
  unsigned __int64 LockedVadEvent; // rax
  __int64 v4; // r9
  const void *v5; // rdx
  __int64 v6; // r8
  void *v7; // rcx
  unsigned __int64 v8; // rax
  __int64 v9; // r9

  MiLocateLockedVadEvent(a1, 4);
  if ( MmVadEventBlockFixEnabled )
  {
    LockedVadEvent = MiLocateLockedVadEvent(v2, v1);
    v5 = *(const void **)(v4 + 24);
    v6 = *(_QWORD *)(LockedVadEvent + 16);
    v7 = *(void **)(LockedVadEvent + 24);
  }
  else
  {
    v8 = MiLocateLockedVadEvent(v2, v1);
    v5 = *(const void **)(v9 + 16);
    v6 = *(_QWORD *)(v8 + 8);
    v7 = *(void **)(v8 + 16);
  }
  return memmove(v7, v5, (unsigned __int64)(v6 + 7) >> 3);
}
