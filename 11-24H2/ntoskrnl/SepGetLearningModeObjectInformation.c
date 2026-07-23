/*
 * XREFs of SepGetLearningModeObjectInformation @ 0x140606348
 * Callers:
 *     SeLogAccessFailure @ 0x140438750 (SeLogAccessFailure.c)
 * Callees:
 *     SepGetCurrentLogLevel @ 0x140404C60 (SepGetCurrentLogLevel.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

_OWORD *__fastcall SepGetLearningModeObjectInformation(_BYTE *a1)
{
  UNICODE_STRING *v1; // r15
  void *v2; // r13
  int CurrentLogLevel; // r8d
  _BYTE *v4; // rcx
  __int64 v5; // rdx
  _OWORD *result; // rax
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int64 v8; // rcx
  _OWORD *v9; // rax
  unsigned __int16 v10; // r14
  _OWORD *Pool2; // rdi
  UNICODE_STRING *v12; // rax
  UNICODE_STRING *v13; // rsi
  UNICODE_STRING *v14; // rax
  void *v15; // r12
  void *Src[2]; // [rsp+30h] [rbp-58h]
  void *v17[2]; // [rsp+40h] [rbp-48h]
  unsigned __int64 v19; // [rsp+98h] [rbp+10h]

  v1 = 0LL;
  v2 = 0LL;
  CurrentLogLevel = SepGetCurrentLogLevel();
  *v4 = 0;
  result = *(_OWORD **)(v5 + 1592);
  if ( !result || *((_DWORD *)result + 2) != CurrentLogLevel )
  {
    if ( KeGetCurrentThread()->PreviousMode != 1 )
      return 0LL;
    CurrentThread = KeGetCurrentThread();
    if ( (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->ApcStateIndex == 1 )
      result = 0LL;
    else
      result = CurrentThread->Teb;
    if ( result )
    {
      result = (_OWORD *)*((_QWORD *)result + 5);
      if ( result )
      {
        if ( ((unsigned __int8)result & 7) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( *(_DWORD *)result != -1395763957 )
          return 0LL;
        v19 = *((_QWORD *)result + 1);
        v8 = *((_QWORD *)result + 2);
        v9 = (_OWORD *)v19;
        if ( (v19 & 7) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v19 + 16 > 0x7FFFFFFF0000LL || v19 + 16 < v19 )
          v9 = (_OWORD *)v19;
        if ( (v8 & 7) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v8 + 16 > 0x7FFFFFFF0000LL || v8 + 16 < v8 )
          v9 = (_OWORD *)v19;
        *(_OWORD *)Src = *v9;
        *(_OWORD *)v17 = *(_OWORD *)v8;
        if ( WORD1(*v9) && ((__int64)Src[1] & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v10 = WORD1(*(_OWORD *)v8);
        if ( WORD1(v17[0]) )
        {
          if ( ((__int64)v17[1] & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (char *)v17[1] + WORD1(v17[0]) > (void *)0x7FFFFFFF0000LL || (char *)v17[1] + WORD1(v17[0]) < v17[1] )
            v10 = WORD1(*(_OWORD *)v8);
        }
        Pool2 = (_OWORD *)ExAllocatePool2(0x100uLL, 0x38uLL, 0x494F6553u);
        if ( Pool2 )
        {
          *Pool2 = 0LL;
          Pool2[1] = 0LL;
          Pool2[2] = 0LL;
          *((_QWORD *)Pool2 + 6) = 0LL;
          v12 = (UNICODE_STRING *)ExAllocatePool2(0x100uLL, 0x10uLL, 0x544F6553u);
          v13 = v12;
          if ( v12 )
          {
            *v12 = 0LL;
            v2 = (void *)ExAllocatePool2(0x100uLL, WORD1(Src[0]), 0x544F6553u);
            if ( v2 )
            {
              v14 = (UNICODE_STRING *)ExAllocatePool2(0x100uLL, 0x10uLL, 0x4E4F6553u);
              v1 = v14;
              if ( v14 )
              {
                *v14 = 0LL;
                v15 = (void *)ExAllocatePool2(0x100uLL, v10, 0x4E4F6553u);
                if ( v15 )
                {
                  memmove(v2, Src[1], WORD1(Src[0]));
                  RtlInitUnicodeString(v13, (PCWSTR)v2);
                  memmove(v15, v17[1], v10);
                  RtlInitUnicodeString(v1, (PCWSTR)v15);
                  *((_QWORD *)Pool2 + 2) = v13;
                  *((_QWORD *)Pool2 + 3) = v1;
                  *a1 = 1;
                  return Pool2;
                }
              }
            }
          }
          if ( v13 )
            ExFreePoolWithTag(v13, 0);
          if ( v2 )
            ExFreePoolWithTag(v2, 0);
          if ( v1 )
            ExFreePoolWithTag(v1, 0);
          ExFreePoolWithTag(Pool2, 0);
        }
        return 0LL;
      }
    }
  }
  return result;
}
