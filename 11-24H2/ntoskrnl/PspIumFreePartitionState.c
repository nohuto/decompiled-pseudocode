/*
 * XREFs of PspIumFreePartitionState @ 0x1405E3D04
 * Callers:
 *     PsDispatchIumService @ 0x1404E66B4 (PsDispatchIumService.c)
 * Callees:
 *     MmUnlockPages @ 0x14025F510 (MmUnlockPages.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     MmFreeNonChargedSecurePages @ 0x140433BCC (MmFreeNonChargedSecurePages.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PspIumFreePartitionState(unsigned int *P)
{
  signed __int64 v2; // rax
  unsigned int v3; // eax
  __int128 Object; // [rsp+30h] [rbp-20h] BYREF
  char *v5; // [rsp+40h] [rbp-10h]

  v5 = 0LL;
  v2 = *((_QWORD *)P + 2);
  Object = 0LL;
  if ( v2 )
  {
    DWORD1(Object) = 0;
    v5 = (char *)&Object + 8;
    *((_QWORD *)&Object + 1) = (char *)&Object + 8;
    LOWORD(Object) = 1;
    BYTE2(Object) = 6;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)P + 2, (signed __int64)&Object, v2) )
      KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  }
  MmUnlockPages((PMDL)P + 2);
  v3 = P[1];
  if ( v3 )
  {
    memmove((void *)(*((_QWORD *)P + 20) + 8LL * P[39]), P + 6, 8LL * v3);
    P[39] += P[1];
  }
  MmFreeNonChargedSecurePages(*((ULONG ***)P + 1), 1, P[38], *((_QWORD **)P + 20));
  ExFreePoolWithTag(*((PVOID *)P + 20), 0);
  ObfDereferenceObjectWithTag(*((PVOID *)P + 1), 0x746C6644u);
  ExFreePoolWithTag(P, 0);
}
