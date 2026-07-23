/*
 * XREFs of SepInformLsaOfDeletedLogon @ 0x140AA6914
 * Callers:
 *     SepDeReferenceLogonSession @ 0x140AD7224 (SepDeReferenceLogonSession.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     SepQueueWorkItem @ 0x1403C35C4 (SepQueueWorkItem.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall SepInformLsaOfDeletedLogon(__int64 *a1, void *a2, __int64 a3)
{
  __int64 Pool2; // rbx
  __int64 v6; // rax

  Pool2 = a3;
  if ( a3 || (Pool2 = ExAllocatePool2(0x100uLL, 0x40uLL, 0x774C6553u)) != 0 )
  {
    v6 = *a1;
    *(_QWORD *)(Pool2 + 40) = 0LL;
    *(_DWORD *)(Pool2 + 48) = 0;
    *(_DWORD *)(Pool2 + 20) = 0;
    *(_QWORD *)(Pool2 + 24) = v6;
    *(_DWORD *)(Pool2 + 32) = 3;
    *(_DWORD *)(Pool2 + 36) = 8;
    *(_DWORD *)(Pool2 + 16) = 1;
    *(_QWORD *)(Pool2 + 56) = a2;
    if ( !SepQueueWorkItem((__int64)&SepLsaDeletedLogonQueueInfo, Pool2, 0LL) )
    {
      if ( a2 )
        ObfDereferenceObjectWithTag(a2, 0x734C6553u);
      ExFreePoolWithTag((PVOID)Pool2, 0);
    }
  }
  else if ( a2 )
  {
    ObfDereferenceObjectWithTag(a2, 0x734C6553u);
  }
}
