/*
 * XREFs of ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x14001C090
 * Callers:
 *     ?FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x14008A594 (-FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     W32ExecuteUsingSessionGlobal__lambda_249bc4ecfc0c18c17c3d22e8f3bb9a0d___ @ 0x1401BF054 (W32ExecuteUsingSessionGlobal__lambda_249bc4ecfc0c18c17c3d22e8f3bb9a0d___.c)
 *     ?FreePool@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAXPEAXI@Z @ 0x1401BF440 (-FreePool@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAXPEAXI@Z.c)
 * Callees:
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x14001C1C0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x140040DAC (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x140040EBC (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ?LookUpAndRemove@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAXPEAPEAX@Z @ 0x140198AAC (-LookUpAndRemove@-$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAXPEAPEAX@Z.c)
 *     ?Remove@?$CSharedStorage@V?$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x140198FAC (-Remove@-$CSharedStorage@V-$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NS.c)
 */

void __fastcall NSInstrumentation::CLeakTrackingAllocator::Free(
        NSInstrumentation::CLeakTrackingAllocator *this,
        _DWORD *a2)
{
  unsigned int v3; // edi
  NSInstrumentation::CPointerHashTable *v4; // rcx
  struct W32_PUSH_LOCK *v5; // rcx
  char *v6; // rdi
  void *v8; // [rsp+40h] [rbp+18h] BYREF
  __int64 v9; // [rsp+48h] [rbp+20h]

  if ( a2 )
  {
    if ( *(_DWORD *)this )
    {
      if ( *(_DWORD *)this == 1 )
      {
        v3 = *(a2 - 4);
        _InterlockedIncrement64((volatile signed __int64 *)this + 15);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>(a2 - 4);
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)this + 1),
          (const void *)v3);
      }
      else if ( *(_DWORD *)this == 2 )
      {
        v4 = (NSInstrumentation::CPointerHashTable *)*((_QWORD *)this + 11);
        if ( v4
          && ((unsigned __int16)a2 & 0xFFFu) >= 0x10uLL
          && (v6 = (char *)(a2 - 4), v8 = 0LL, NSInstrumentation::CPointerHashTable::Remove(v4, a2 - 4, &v8)) )
        {
          NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucketCommon<NSInstrumentation::CBackTraceStorageUnit>,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(*((NSInstrumentation::CPrioritizedWriterLock **)this + 13));
          _InterlockedIncrement64((volatile signed __int64 *)this + 17);
          _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>(v6);
        }
        else
        {
          v5 = (struct W32_PUSH_LOCK *)*((_QWORD *)this + 12);
          if ( v5 && (v9 = 0LL, (unsigned __int8)NSInstrumentation::CSortedVector<void *,void *>::LookUpAndRemove(v5)) )
          {
            NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucketCommon<NSInstrumentation::CBackTraceStorageUnit>,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(*((NSInstrumentation::CPrioritizedWriterLock **)this + 13));
            _InterlockedIncrement64((volatile signed __int64 *)this + 17);
            _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>(a2);
          }
          else
          {
            _InterlockedIncrement64((volatile signed __int64 *)this + 15);
            _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>(a2);
          }
        }
      }
    }
    else
    {
      _InterlockedIncrement64((volatile signed __int64 *)this + 15);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>(a2);
    }
  }
}
