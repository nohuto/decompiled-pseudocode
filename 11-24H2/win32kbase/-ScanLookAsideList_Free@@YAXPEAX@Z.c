/*
 * XREFs of ?ScanLookAsideList_Free@@YAXPEAX@Z @ 0x140026A70
 * Callers:
 *     <none>
 * Callees:
 *     ?PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z @ 0x140028890 (-PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z.c)
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x140040DAC (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x140040EBC (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ?Remove@?$CSharedStorage@V?$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x140198FAC (-Remove@-$CSharedStorage@V-$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NS.c)
 */

void __fastcall ScanLookAsideList_Free(char *a1)
{
  char *v1; // rdi
  __int64 v2; // rcx
  unsigned int *v3; // rsi
  __int64 UserSessionState; // rax
  void *v5; // r8
  __int64 v6; // rbx
  char *v7; // rdx
  NSInstrumentation::CPointerHashTable *v8; // rcx
  void *v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1;
  v2 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  v3 = *(unsigned int **)(v2 + 4136);
  UserSessionState = W32GetUserSessionState(v2);
  v6 = UserSessionState;
  if ( !*((_BYTE *)v3 + 5) )
  {
    if ( (*(_DWORD *)(UserSessionState + 72288) & 0xFFFFFFFD) != 0 )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *(NSInstrumentation::CPointerHashTable **)(UserSessionState + 72296),
        (const void *)*v3);
      v1 -= 16;
    }
    _InterlockedIncrement64((volatile signed __int64 *)(v6 + 72408));
    v7 = v1;
    goto LABEL_5;
  }
  v8 = *(NSInstrumentation::CPointerHashTable **)(UserSessionState + 72376);
  v9 = 0LL;
  if ( NSInstrumentation::CPointerHashTable::Remove(v8, v1 - 16, &v9) )
  {
    NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucketCommon<NSInstrumentation::CBackTraceStorageUnit>,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(*(NSInstrumentation::CPrioritizedWriterLock **)(v6 + 72392));
    _InterlockedIncrement64((volatile signed __int64 *)(v6 + 72424));
    v7 = v1 - 16;
LABEL_5:
    NSInstrumentation::PlatformFreeToPagedLookasideList((NSInstrumentation *)(v3 + 4), v7, v5);
  }
}
