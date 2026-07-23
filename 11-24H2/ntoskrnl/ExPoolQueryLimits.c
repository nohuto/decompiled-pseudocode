/*
 * XREFs of ExPoolQueryLimits @ 0x140652A00
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpPlFindLimitEntry @ 0x140396E20 (ExpPlFindLimitEntry.c)
 *     RtlULongLongMult @ 0x14042A2B0 (RtlULongLongMult.c)
 *     Feature_Servicing_PoolQueryLimitFix__private_IsEnabledDeviceUsageNoInline @ 0x140653D08 (Feature_Servicing_PoolQueryLimitFix__private_IsEnabledDeviceUsageNoInline.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExSystemExceptionFilter @ 0x1407B73D0 (ExSystemExceptionFilter.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExPoolQueryLimits(void *Src, size_t Size, void *a3, size_t a4, KPROCESSOR_MODE PreviousMode)
{
  _DWORD *v9; // rbx
  NTSTATUS v10; // edi
  int IsEnabledDeviceUsageNoInline; // eax
  _DWORD *Pool2; // rax
  int v13; // eax
  __int64 i; // r14
  __int64 v15; // rdi
  __int64 LimitEntry; // rax
  _QWORD *v17; // rcx
  _QWORD *v18; // rdx
  __int64 v19; // r9
  ULONGLONG pullResult[2]; // [rsp+20h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  pullResult[0] = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v9 = 0LL;
  if ( PreviousMode && !SeSinglePrivilegeCheck(SeIncreaseQuotaPrivilege, PreviousMode) )
  {
    v10 = -1073741727;
    goto LABEL_24;
  }
  if ( Size < 0x38 )
    goto LABEL_5;
  if ( Size > a4 )
    goto LABEL_7;
  IsEnabledDeviceUsageNoInline = Feature_Servicing_PoolQueryLimitFix__private_IsEnabledDeviceUsageNoInline();
  Pool2 = (_DWORD *)ExAllocatePool2(
                      (-(__int64)(IsEnabledDeviceUsageNoInline != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256,
                      Size,
                      0x6C6F6F50u);
  v9 = Pool2;
  pullResult[1] = (ULONGLONG)Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  memmove(Pool2, Src, Size);
  if ( *v9 == 1 && (v13 = v9[1]) != 0 )
  {
    v10 = RtlULongLongMult((unsigned int)(v13 - 1), 0x30uLL, pullResult);
    if ( v10 >= 0 )
    {
      if ( pullResult[0] < 0xFFFFFFFFFFFFFFC8uLL )
      {
        if ( pullResult[0] + 56 <= Size )
        {
          KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
          for ( i = 0LL; (unsigned int)i < v9[1]; i = (unsigned int)(i + 1) )
          {
            v15 = 12 * i;
            LimitEntry = ExpPlFindLimitEntry(v9[12 * i + 2]);
            if ( LimitEntry )
            {
              v17 = &v9[v15 + 6];
              v18 = (_QWORD *)(LimitEntry + 24);
              v19 = 2LL;
              do
              {
                *(v17 - 1) = *(v18 - 1);
                *v17 = *v18;
                v18 += 3;
                v17 += 2;
                --v19;
              }
              while ( v19 );
              LimitEntry = *(_QWORD *)(LimitEntry + 64);
            }
            else
            {
              *(_OWORD *)&v9[v15 + 4] = 0LL;
              *(_OWORD *)&v9[v15 + 8] = 0LL;
            }
            *(_QWORD *)&v9[v15 + 12] = LimitEntry;
          }
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          memmove(a3, v9, Size);
          v10 = 0;
          goto LABEL_24;
        }
LABEL_5:
        v10 = -1073741820;
        goto LABEL_24;
      }
      v10 = -1073741675;
    }
  }
  else
  {
LABEL_7:
    v10 = -1073741811;
  }
LABEL_24:
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return (unsigned int)v10;
}
