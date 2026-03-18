/*
 * XREFs of PspAttachSession @ 0x140AD25B8
 * Callers:
 *     PspAllocateProcess @ 0x140A1C4C0 (PspAllocateProcess.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     PsGetSessionById @ 0x140349430 (PsGetSessionById.c)
 *     PspUnlockProcessListExclusive @ 0x1403494CC (PspUnlockProcessListExclusive.c)
 *     PspLockProcessListExclusive @ 0x140349ACC (PspLockProcessListExclusive.c)
 */

__int64 __fastcall PspAttachSession(unsigned int a1, __int64 a2, _KPROCESS **a3)
{
  __int64 SessionById; // rax
  _KPROCESS *v6; // rbx
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v9; // rsi

  *a3 = 0LL;
  SessionById = PsGetSessionById(a1);
  v6 = (_KPROCESS *)SessionById;
  if ( !SessionById )
    return 3221225738LL;
  CurrentThread = KeGetCurrentThread();
  v9 = *(_QWORD *)(SessionById + 744);
  PspLockProcessListExclusive((__int64)CurrentThread);
  if ( (*(_DWORD *)(v9 + 4) & 2) != 0 )
  {
    PspUnlockProcessListExclusive((__int64)CurrentThread);
    ObfDereferenceObjectWithTag(v6, 0x79517350u);
    return 3221225738LL;
  }
  ++*(_DWORD *)(v9 + 52);
  PspUnlockProcessListExclusive((__int64)CurrentThread);
  KiStackAttachProcess(v6, 0, a2);
  result = 0LL;
  *a3 = v6;
  return result;
}
