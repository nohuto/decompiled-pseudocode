/*
 * XREFs of FreeThreadBufferWithTag @ 0x14001BCC0
 * Callers:
 *     FreeTmpBuffer @ 0x14001A2D0 (FreeTmpBuffer.c)
 *     NtGdiOpenDCW @ 0x1400675B0 (NtGdiOpenDCW.c)
 *     ?vFreeDriverInfo2@@YAXPEAU_DRIVER_INFO_2W@@@Z @ 0x140067BE0 (-vFreeDriverInfo2@@YAXPEAU_DRIVER_INFO_2W@@@Z.c)
 *     MultiUserNtGreCleanup @ 0x140089C68 (MultiUserNtGreCleanup.c)
 *     ?CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z @ 0x1400AB790 (-CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z.c)
 *     ?CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z @ 0x1400ABAB0 (-CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z.c)
 * Callees:
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x14001C1C0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x140040DAC (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x140040EBC (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ?LookUpAndRemove@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAXPEAPEAX@Z @ 0x140198AAC (-LookUpAndRemove@-$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAXPEAPEAX@Z.c)
 *     ?Remove@?$CSharedStorage@V?$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x140198FAC (-Remove@-$CSharedStorage@V-$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NS.c)
 */

void __fastcall FreeThreadBufferWithTag(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rax
  _QWORD *v3; // rcx
  __int64 UserSessionState; // rdi
  int v5; // eax
  _QWORD *v6; // rcx
  int v7; // eax
  _QWORD *v8; // rax
  unsigned int v9; // ebx
  NSInstrumentation::CPointerHashTable *v10; // rcx
  struct W32_PUSH_LOCK *v11; // rcx
  void *v12; // [rsp+48h] [rbp+10h] BYREF
  __int64 v13; // [rsp+50h] [rbp+18h]

  v1 = (_QWORD *)(a1 - 32);
  if ( a1 != 32 )
  {
    v2 = *v1;
    if ( *(_QWORD **)(*v1 + 8LL) != v1 || (v3 = (_QWORD *)v1[1], (_QWORD *)*v3 != v1) )
      __fastfail(3u);
    *v3 = v2;
    *(_QWORD *)(v2 + 8) = v3;
    v1[1] = v1;
    *v1 = v1;
    UserSessionState = W32GetUserSessionState();
    v5 = *(_DWORD *)(UserSessionState + 72288);
    if ( !v5 )
      goto LABEL_5;
    v7 = v5 - 1;
    if ( !v7 )
    {
      v8 = v1 - 2;
      v9 = *((_DWORD *)v1 - 4);
      _InterlockedIncrement64((volatile signed __int64 *)(UserSessionState + 72408));
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>(v8);
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *(NSInstrumentation::CPointerHashTable **)(UserSessionState + 72296),
        (const void *)v9);
      return;
    }
    if ( v7 == 1 )
    {
      v10 = *(NSInstrumentation::CPointerHashTable **)(UserSessionState + 72376);
      if ( v10 )
      {
        if ( ((unsigned __int16)v1 & 0xFFFu) >= 0x10uLL )
        {
          v12 = 0LL;
          if ( NSInstrumentation::CPointerHashTable::Remove(v10, v1 - 2, &v12) )
          {
            NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucketCommon<NSInstrumentation::CBackTraceStorageUnit>,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(*(NSInstrumentation::CPrioritizedWriterLock **)(UserSessionState + 72392));
            _InterlockedIncrement64((volatile signed __int64 *)(UserSessionState + 72424));
            v6 = v1 - 2;
            goto LABEL_7;
          }
        }
      }
      v11 = *(struct W32_PUSH_LOCK **)(UserSessionState + 72384);
      if ( v11 )
      {
        v13 = 0LL;
        if ( (unsigned __int8)NSInstrumentation::CSortedVector<void *,void *>::LookUpAndRemove(v11) )
        {
          NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucketCommon<NSInstrumentation::CBackTraceStorageUnit>,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(*(NSInstrumentation::CPrioritizedWriterLock **)(UserSessionState + 72392));
          _InterlockedIncrement64((volatile signed __int64 *)(UserSessionState + 72424));
          goto LABEL_6;
        }
      }
LABEL_5:
      _InterlockedIncrement64((volatile signed __int64 *)(UserSessionState + 72408));
LABEL_6:
      v6 = v1;
LABEL_7:
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>(v6);
    }
  }
}
