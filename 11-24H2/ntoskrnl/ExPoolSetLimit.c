/*
 * XREFs of ExPoolSetLimit @ 0x140652BF8
 * Callers:
 *     NtSetSystemInformation @ 0x140AE2BE0 (NtSetSystemInformation.c)
 * Callees:
 *     RtlULongLongMult @ 0x14042A2B0 (RtlULongLongMult.c)
 *     ExpTrackTableInsertLimit @ 0x140653A30 (ExpTrackTableInsertLimit.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExSystemExceptionFilter @ 0x1407B73D0 (ExSystemExceptionFilter.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     RtlRunOnceExecuteOnce @ 0x1409473B0 (RtlRunOnceExecuteOnce.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExPoolSetLimit(void *Src, size_t Size, KPROCESSOR_MODE PreviousMode)
{
  _DWORD *v5; // rdi
  NTSTATUS inserted; // ebx
  _DWORD *Pool2; // rax
  int v8; // eax
  __int64 v9; // rdx
  unsigned __int64 v10; // r8
  __int64 v11; // r10
  _DWORD *v12; // r9
  __int64 i; // rcx
  _DWORD *v15; // [rsp+20h] [rbp-18h]
  ULONGLONG pullResult; // [rsp+58h] [rbp+20h] BYREF

  pullResult = 0LL;
  v5 = 0LL;
  if ( PreviousMode && !SeSinglePrivilegeCheck(SeIncreaseQuotaPrivilege, PreviousMode) )
  {
    inserted = -1073741727;
    goto LABEL_28;
  }
  if ( Size < 0x38 )
    goto LABEL_5;
  inserted = RtlRunOnceExecuteOnce(&ExpPlInitOnceVar, ExpPlRunOnceInit, 0LL, 0LL);
  if ( inserted >= 0 )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL, Size, 0x6C6F6F50u);
    v5 = Pool2;
    v15 = Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, Src, Size);
      if ( *v5 == 1 && (v8 = v5[1]) != 0 )
      {
        inserted = RtlULongLongMult((unsigned int)(v8 - 1), 0x30uLL, &pullResult);
        if ( inserted >= 0 )
        {
          if ( pullResult < 0xFFFFFFFFFFFFFFC8uLL )
          {
            if ( pullResult + 56 > Size )
            {
LABEL_5:
              inserted = -1073741820;
              goto LABEL_28;
            }
            v10 = 0LL;
            v11 = 0LL;
            v12 = v5 + 2;
            while ( v10 < (unsigned int)v5[1] )
            {
              if ( *v12 == 1819242320 || !*v12 )
                goto LABEL_10;
              for ( i = 0LL; i < 2; ++i )
              {
                v9 = 2 * (v11 + i + 1);
                if ( (v5[4 * v11 + 4 + 4 * i] & 0xF) != 0 || (v5[4 * v11 + 6 + 4 * i] & 0xF) != 0 )
                  goto LABEL_10;
              }
              ++v10;
              v12 += 12;
              v11 += 3LL;
            }
            inserted = ExpTrackTableInsertLimit(v5, v9, v10, v12, v15);
            if ( inserted >= 0 )
              inserted = 0;
          }
          else
          {
            inserted = -1073741675;
          }
        }
      }
      else
      {
LABEL_10:
        inserted = -1073741811;
      }
    }
    else
    {
      inserted = -1073741670;
    }
  }
LABEL_28:
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)inserted;
}
