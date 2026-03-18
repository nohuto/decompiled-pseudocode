/*
 * XREFs of PsCreatePartition @ 0x14077AA80
 * Callers:
 *     NtCreatePartition @ 0x14077A990 (NtCreatePartition.c)
 *     MiInitializePartitionSpecialPurposeMemory @ 0x1407FE3D4 (MiInitializePartitionSpecialPurposeMemory.c)
 *     PspInitializeSystemPartitionPhase0 @ 0x140C35F38 (PspInitializeSystemPartitionPhase0.c)
 * Callees:
 *     PsDereferencePartition @ 0x140275E60 (PsDereferencePartition.c)
 *     PspAllocatePartition @ 0x14077ABFC (PspAllocatePartition.c)
 *     SeSinglePrivilegeCheck @ 0x140853E90 (SeSinglePrivilegeCheck.c)
 *     ObCloseHandle @ 0x1408A2B10 (ObCloseHandle.c)
 *     PsReferencePartitionByHandle @ 0x140934434 (PsReferencePartitionByHandle.c)
 */

__int64 __fastcall PsCreatePartition(__int64 a1, HANDLE *a2, int a3, int a4, KPROCESSOR_MODE PreviousMode, int a6)
{
  __int64 v10; // rcx
  int Partition; // edi
  __int64 v12; // r8
  HANDLE *p_Handle; // r14
  HANDLE Handle; // [rsp+48h] [rbp-40h] BYREF
  void *v16; // [rsp+50h] [rbp-38h] BYREF
  __int64 v17[3]; // [rsp+58h] [rbp-30h] BYREF

  v16 = 0LL;
  Handle = 0LL;
  v17[0] = 0LL;
  if ( !PreviousMode )
    goto LABEL_21;
  v10 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
    v10 = (__int64)a2;
  *(_QWORD *)v10 = *(_QWORD *)v10;
  if ( a6 )
  {
    Partition = -1073741811;
  }
  else
  {
LABEL_21:
    if ( SeSinglePrivilegeCheck(SeLockMemoryPrivilege, PreviousMode) )
    {
      if ( !a1
        || (LOBYTE(v12) = PreviousMode,
            Partition = PsReferencePartitionByHandle(a1, 2LL, v12, 1883468624LL, v17),
            Partition >= 0) )
      {
        p_Handle = &Handle;
        if ( (a6 & 1) != 0 )
          p_Handle = 0LL;
        LOBYTE(v12) = PreviousMode;
        Partition = PspAllocatePartition(a4, a3, v12, v17[0], a6, (__int64)&v16, (__int64)p_Handle);
        if ( Partition >= 0 )
        {
          if ( p_Handle )
          {
            PsDereferencePartition((__int64)v16);
            *a2 = Handle;
          }
          else
          {
            PspSystemPartition = v16;
          }
        }
      }
    }
    else
    {
      Partition = -1073741727;
    }
  }
  if ( v17[0] )
    PsDereferencePartition(v17[0]);
  return (unsigned int)Partition;
}
