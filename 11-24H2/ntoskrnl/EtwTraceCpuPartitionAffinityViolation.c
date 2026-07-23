/*
 * XREFs of EtwTraceCpuPartitionAffinityViolation @ 0x14064BB1C
 * Callers:
 *     KiCpuPartitionCheckAffinitization @ 0x1405BD680 (KiCpuPartitionCheckAffinitization.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall EtwTraceCpuPartitionAffinityViolation(int a1, __int64 a2, unsigned __int16 *a3)
{
  __int64 UserData; // rbx
  __int64 Pool2; // rax
  char *v7; // rdi
  unsigned __int16 v8; // r8
  char **v9; // rcx
  unsigned __int16 v10; // ax
  __int64 v11; // rdx
  char *v12; // rax
  int v13; // [rsp+40h] [rbp-28h] BYREF
  int v14; // [rsp+70h] [rbp+8h] BYREF
  __int16 v15; // [rsp+88h] [rbp+20h] BYREF

  v14 = a1;
  v15 = 0;
  v13 = 0;
  if ( EtwCpuPartitionProvRegHandle
    && EtwEventEnabled(EtwCpuPartitionProvRegHandle, &CPU_STARVATION_EVENT_SINGLE_DPC_SOFT_TIMEOUT) )
  {
    UserData = ExAllocatePool2(0x40uLL, 32LL * *a3 + 48, 0x74777445u);
    Pool2 = ExAllocatePool2(0x40uLL, 2LL * *a3, 0x74777445u);
    v7 = (char *)Pool2;
    if ( UserData )
    {
      if ( Pool2 )
      {
        *(_QWORD *)(UserData + 8) = 4LL;
        *(_QWORD *)UserData = &v14;
        v8 = 0;
        v13 = *(_DWORD *)(a2 + 1296);
        v9 = (char **)(UserData + 48);
        *(_QWORD *)(UserData + 16) = &v13;
        *(_QWORD *)(UserData + 24) = 4LL;
        v10 = *a3;
        if ( *a3 )
        {
          v11 = UserData + 76;
          do
          {
            if ( v8 < v10 && *(_QWORD *)&a3[4 * v8 + 4] )
            {
              v12 = &v7[2 * v8];
              *(_WORD *)v12 = v8;
              *v9 = v12;
              *(_QWORD *)(v11 - 20) = 2LL;
              *(_QWORD *)(v11 - 12) = &a3[4 * v8 + 4];
              v9 += 4;
              *(_QWORD *)(v11 - 4) = 8LL;
              v11 += 32LL;
              ++v15;
            }
            v10 = *a3;
            ++v8;
          }
          while ( v8 < *a3 );
        }
        *(_QWORD *)(UserData + 32) = &v15;
        *(_QWORD *)(UserData + 40) = 2LL;
        EtwWriteEx(
          EtwCpuPartitionProvRegHandle,
          &CPU_STARVATION_EVENT_SINGLE_DPC_SOFT_TIMEOUT,
          0LL,
          0,
          0LL,
          0LL,
          ((__int64)v9 - UserData) >> 4,
          (PEVENT_DATA_DESCRIPTOR)UserData);
      }
      ExFreePoolWithTag((PVOID)UserData, 0);
    }
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
  }
}
