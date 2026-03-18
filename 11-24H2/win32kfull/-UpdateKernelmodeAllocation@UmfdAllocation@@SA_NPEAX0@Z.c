/*
 * XREFs of ?UpdateKernelmodeAllocation@UmfdAllocation@@SA_NPEAX0@Z @ 0x14033EF08
 * Callers:
 *     ?TryResurrectUmfdAllocations@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x140336748 (-TryResurrectUmfdAllocations@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z.c)
 * Callees:
 *     ?W32AcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x140094BEC (-W32AcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x140095C68 (-W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z @ 0x1400B3FFC (-Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z.c)
 *     ?ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z @ 0x1400FFFB0 (-ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z.c)
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1401013A4 (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 */

char __fastcall UmfdAllocation::UpdateKernelmodeAllocation(char *a1, char *a2, __int64 a3)
{
  char *v3; // rsi
  char *v5; // rdi
  NSInstrumentation::CPointerHashTable **v7; // r14
  struct W32_PUSH_LOCK *v8; // rbx
  NSInstrumentation::CPointerHashTable *v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  const void *v12; // rdx
  void *v13; // [rsp+40h] [rbp+8h] BYREF

  v3 = a1 - 28;
  v5 = a2 - 28;
  if ( a1 - 28 == a2 - 28 )
  {
    UmfdAllocation::ReleaseKernelmodeAllocation(a2, (__int64)a2, a3);
    return 1;
  }
  v7 = *(NSInstrumentation::CPointerHashTable ***)(W32GetSessionState((_DWORD)a1, a2) + 104);
  v8 = v7[1];
  W32AcquirePushLockExclusive(v8);
  if ( *((_DWORD *)v3 + 1) == *((_DWORD *)v5 + 1) && *((_DWORD *)v3 + 6) == *((_DWORD *)v5 + 6) && *(_DWORD *)v5 <= 1u )
  {
    v9 = *v7;
    if ( *v7 )
    {
      v10 = *((_QWORD *)v3 + 2);
      if ( v10 )
      {
        v13 = 0LL;
        NSInstrumentation::CPointerHashTable::Remove(v9, v10, &v13);
      }
      v11 = *((_QWORD *)v5 + 2);
      if ( v11 )
      {
        v13 = 0LL;
        NSInstrumentation::CPointerHashTable::Remove(*v7, v11, &v13);
      }
    }
    *((_QWORD *)v3 + 1) = *((_QWORD *)v5 + 1);
    v12 = (const void *)*((_QWORD *)v5 + 2);
    *((_QWORD *)v3 + 2) = v12;
    if ( NSInstrumentation::CPointerHashTable::Insert(*v7, v12, a1) )
    {
      EngFreeMem(v5);
      W32ReleasePushLockExclusive(v8);
      return 1;
    }
  }
  W32ReleasePushLockExclusive(v8);
  return 0;
}
