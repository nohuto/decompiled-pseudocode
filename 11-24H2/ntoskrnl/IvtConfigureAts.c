/*
 * XREFs of IvtConfigureAts @ 0x14056B300
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x1402CA740 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140359760 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     IvtGetBlockedDomain @ 0x1404C1988 (IvtGetBlockedDomain.c)
 *     IvtUpdateScalableModeContextEntry @ 0x1404C4D8C (IvtUpdateScalableModeContextEntry.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     IvtAllocateTranslationStructures @ 0x14056AD68 (IvtAllocateTranslationStructures.c)
 *     IvtFreeScalableModePasidTables @ 0x14056BA90 (IvtFreeScalableModePasidTables.c)
 *     IvtGetDomainId @ 0x14056BBE8 (IvtGetDomainId.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall IvtConfigureAts(__int64 a1, __int64 a2, char a3)
{
  char v4; // r12
  int v6; // r13d
  unsigned int v7; // esi
  int v8; // eax
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // r14
  int DomainId; // eax
  __int64 v12; // rcx
  __int64 v13; // r15
  int v14; // r8d
  unsigned int *v15; // rdx
  __int64 v16; // rdx
  int v17; // [rsp+30h] [rbp-81h]
  __int64 v18; // [rsp+38h] [rbp-79h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-59h] BYREF
  int v20; // [rsp+78h] [rbp-39h] BYREF
  int v21; // [rsp+7Ch] [rbp-35h]
  int BlockedDomain; // [rsp+A8h] [rbp-9h]
  unsigned __int64 v23; // [rsp+118h] [rbp+67h] BYREF

  v4 = 0;
  v23 = 0LL;
  v6 = 2 - (a3 != 0);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v7 = 0;
  memset_0(&v20, 0, 0x70uLL);
  if ( *(_QWORD *)(a2 + 64) )
    goto LABEL_7;
  v8 = *(_DWORD *)(a1 + 308);
  v20 = 1;
  if ( v8 == 2 )
  {
    v21 = 1;
    BlockedDomain = IvtGetBlockedDomain(a1, 0LL, &v23);
  }
  else
  {
    if ( v8 != 1 )
      return 3221225473LL;
    v21 = 0;
    BlockedDomain = 0;
  }
  result = IvtAllocateTranslationStructures(a1, a2, &v20);
  v7 = result;
  if ( (int)result >= 0 )
  {
LABEL_7:
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 208), &LockHandle);
    DomainId = IvtGetDomainId(a1, a2);
    v12 = *(_QWORD *)(a2 + 72);
    v13 = *(_QWORD *)(a2 + 64);
    v14 = v13;
    if ( v12 )
    {
      if ( v13 && v12 != v13 )
        v4 = 1;
      *(_QWORD *)(a2 + 64) = v12;
      v14 = v12;
    }
    *(_QWORD *)(a2 + 72) = 0LL;
    v15 = *(unsigned int **)(a2 + 56);
    *(_DWORD *)(a2 + 80) = v6;
    IvtUpdateScalableModeContextEntry(a1, v15, v14, v6, 0, v17, v18, 0, DomainId);
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle, v16);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    if ( v4 )
      IvtFreeScalableModePasidTables(a1, v13);
    return v7;
  }
  return result;
}
