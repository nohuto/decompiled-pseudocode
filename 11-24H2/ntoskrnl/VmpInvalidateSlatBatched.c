/*
 * XREFs of VmpInvalidateSlatBatched @ 0x140479E38
 * Callers:
 *     VmpRemoveMemoryRange @ 0x140479B50 (VmpRemoveMemoryRange.c)
 *     VmpUnpinMemoryRangeHelper @ 0x140649920 (VmpUnpinMemoryRangeHelper.c)
 * Callees:
 *     VmpProcessContextLockExclusive @ 0x14039EC68 (VmpProcessContextLockExclusive.c)
 *     VmpInvalidateOutstandingFaults @ 0x14039F950 (VmpInvalidateOutstandingFaults.c)
 *     VmpInsertInvalidateListRange @ 0x14039FB08 (VmpInsertInvalidateListRange.c)
 *     VmpProcessContextUnlockExclusive @ 0x14047A000 (VmpProcessContextUnlockExclusive.c)
 *     VmpProcessInvalidateList @ 0x1404A41E8 (VmpProcessInvalidateList.c)
 *     VmpFindNextPinnedPageStateHelper @ 0x140648D94 (VmpFindNextPinnedPageStateHelper.c)
 */

__int64 __fastcall VmpInvalidateSlatBatched(
        PEX_SPIN_LOCK SpinLock,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 *a5,
        unsigned int a6)
{
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // rbx
  unsigned __int64 v9; // rsi
  __int64 v10; // r14
  unsigned __int64 v11; // r12
  unsigned int *v12; // rdi
  unsigned __int64 v13; // r15
  __int64 result; // rax
  unsigned __int64 v15; // rbx
  __int64 NextPinnedPageStateHelper; // rax
  __int64 v17; // rcx
  unsigned int v18; // eax
  __int64 v19; // rax
  __int64 v20; // [rsp+30h] [rbp-48h]
  __int64 v21; // [rsp+88h] [rbp+10h]
  unsigned __int64 v22; // [rsp+90h] [rbp+18h]
  unsigned __int64 v23; // [rsp+98h] [rbp+20h]

  v23 = a4;
  v22 = a3;
  v6 = a4;
  v7 = a3;
  while ( 1 )
  {
    v9 = v6;
    v10 = a2;
    v11 = v7;
    v12 = (unsigned int *)((char *)KeGetCurrentPrcb()->VmInternal + 4608);
    if ( v6 > 0x40000 )
      v9 = 0x40000LL;
    v13 = 0LL;
    v21 = v9 + a2;
    result = v9 + a2 - 1;
    v20 = result;
    if ( v9 )
    {
      while ( 1 )
      {
        if ( (a6 & 4) != 0
          || (NextPinnedPageStateHelper = VmpFindNextPinnedPageStateHelper(SpinLock, v10, result, 1LL),
              NextPinnedPageStateHelper == -1) )
        {
          v15 = v9 - v13;
        }
        else
        {
          if ( NextPinnedPageStateHelper == v10 )
          {
            result = VmpFindNextPinnedPageStateHelper(SpinLock, v10, v20, 0LL);
            if ( result == -1 )
              goto LABEL_16;
            v13 += result - v10;
            v17 = result - v10;
            v10 = result;
            v11 += v17;
            goto LABEL_15;
          }
          v15 = NextPinnedPageStateHelper - v10;
        }
        v18 = a6;
        if ( (a6 & 1) != 0 )
        {
          VmpInvalidateOutstandingFaults((__int64)SpinLock, v11, v15);
          v18 = a6;
        }
        VmpInsertInvalidateListRange((__int64)SpinLock, v12, v10, v11, v15, v18);
        v10 += v15;
        v11 += v15;
        v13 += v15;
LABEL_15:
        result = v20;
        if ( v13 >= v9 )
        {
LABEL_16:
          v6 = v23;
          v7 = v22;
          break;
        }
      }
    }
    v6 -= v9;
    v23 = v6;
    if ( !v6 )
      break;
    if ( *((_QWORD *)v12 + 1) )
      VmpProcessInvalidateList(SpinLock, v12);
    VmpProcessContextUnlockExclusive(SpinLock, *a5);
    v7 += v9;
    v22 = v7;
    v19 = VmpProcessContextLockExclusive(SpinLock);
    a2 = v21;
    *a5 = v19;
  }
  if ( *((_QWORD *)v12 + 1) )
    return VmpProcessInvalidateList(SpinLock, v12);
  return result;
}
