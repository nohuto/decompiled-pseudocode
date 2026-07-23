/*
 * XREFs of PspSetJobMemoryPartition @ 0x140778014
 * Callers:
 *     NtSetInformationJobObject @ 0x140ACC7F0 (NtSetInformationJobObject.c)
 * Callees:
 *     PsDereferencePartition @ 0x14022B3F0 (PsDereferencePartition.c)
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     PsIsServerSilo @ 0x1403C35A8 (PsIsServerSilo.c)
 *     PspConvertJobToMixed @ 0x1406F8B4C (PspConvertJobToMixed.c)
 *     SmPartitionJobPaired @ 0x1407978C4 (SmPartitionJobPaired.c)
 *     PsReferencePartitionByHandle @ 0x1408F6F54 (PsReferencePartitionByHandle.c)
 *     PsAssignProcessToJobObject @ 0x140A103D0 (PsAssignProcessToJobObject.c)
 *     SmCreatePartition @ 0x140A34664 (SmCreatePartition.c)
 */

__int64 __fastcall PspSetJobMemoryPartition(__int64 a1, char a2, __int64 a3)
{
  __int64 v4; // rax
  char v5; // r14
  int Partition; // ebx
  __int64 v7; // rcx
  PVOID v8; // rdi
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  Object = 0LL;
  v4 = a3;
  LOBYTE(a3) = a2;
  v5 = 0;
  Partition = PsReferencePartitionByHandle(v4, 1LL, a3, 1649046352LL, &Object);
  if ( Partition < 0 )
    goto LABEL_14;
  if ( _interlockedbittestandset((volatile signed __int32 *)Object + 34, 0) )
  {
    Partition = -1073741637;
LABEL_14:
    v8 = Object;
    goto LABEL_15;
  }
  v5 = 1;
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
  if ( PsIsServerSilo(a1) || *(_QWORD *)(a1 + 1792) || *(_QWORD *)(a1 + 1288) != a1 + 1288 || *(_DWORD *)(a1 + 216) )
  {
    Partition = -1073741637;
    goto LABEL_13;
  }
  Partition = PspConvertJobToMixed(v7, 1);
  if ( Partition < 0 )
  {
LABEL_13:
    ExReleaseResourceLite((PERESOURCE)(a1 + 56));
    goto LABEL_14;
  }
  *(_QWORD *)(a1 + 1792) = -1LL;
  ExReleaseResourceLite((PERESOURCE)(a1 + 56));
  v8 = Object;
  Partition = SmCreatePartition(Object);
  if ( Partition >= 0 )
  {
    Partition = PsAssignProcessToJobObject((PVOID)a1, *((_QWORD *)v8 + 15));
    if ( Partition >= 0 )
    {
      ObfReferenceObjectWithTag(v8, 0x624A7350u);
      ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
      *(_QWORD *)(a1 + 1792) = v8;
      *(_QWORD *)(a1 + 1800) = a1;
      ExReleaseResourceLite((PERESOURCE)(a1 + 56));
      SmPartitionJobPaired(v8, a1);
      v5 = 0;
      Partition = 0;
    }
  }
LABEL_15:
  if ( v8 )
  {
    if ( *(_QWORD *)(a1 + 1792) == -1LL )
      *(_QWORD *)(a1 + 1792) = 0LL;
    if ( v5 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)v8 + 34, 0);
      v8 = Object;
    }
    PsDereferencePartition((__int64)v8);
  }
  return (unsigned int)Partition;
}
