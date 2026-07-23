/*
 * XREFs of KiComputeDueTime @ 0x140316E40
 * Callers:
 *     KiResumeThread @ 0x1402DD2DC (KiResumeThread.c)
 *     KeSetTimer @ 0x1403161F0 (KeSetTimer.c)
 *     KiSetTimerEx @ 0x140316810 (KiSetTimerEx.c)
 *     KiCommitThreadWait @ 0x140320100 (KiCommitThreadWait.c)
 * Callees:
 *     KiDecodeTolerableDelayValue @ 0x14046BE58 (KiDecodeTolerableDelayValue.c)
 *     Feature_RebaseTimersAfterTimeAdjustments__private_IsEnabledNoReportingNoInline @ 0x1405C2018 (Feature_RebaseTimersAfterTimeAdjustments__private_IsEnabledNoReportingNoInline.c)
 */

__int64 __fastcall KiComputeDueTime(int *a1, __int64 a2, unsigned __int8 a3, _DWORD *a4)
{
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v8; // rax
  unsigned __int8 v9; // r8
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rbx
  int v14; // [rsp+20h] [rbp-28h]

  v5 = a2;
  v14 = *a1;
  BYTE1(v14) = a3;
  if ( a2 >= 0 )
  {
    BYTE1(v14) = a3 | 1;
    v5 = MEMORY[0xFFFFF78000000014] - a2;
    if ( (((unsigned __int64)(MEMORY[0xFFFFF78000000014] - a2) >> 32) & 0x80000000) == 0LL )
    {
      *a1 = v14;
      result = 0LL;
      *((_QWORD *)a1 + 3) = 0LL;
      return result;
    }
    a3 |= 1u;
  }
  v8 = 0LL;
  v9 = a3 >> 2;
  if ( v9 )
    v8 = (unsigned int)KiDecodeTolerableDelayValue(v9);
  v10 = MEMORY[0xFFFFF78000000008] - v5;
  *((_QWORD *)a1 + 3) = MEMORY[0xFFFFF78000000008] - v5;
  v11 = v10 + v8;
  if ( (unsigned int)Feature_RebaseTimersAfterTimeAdjustments__private_IsEnabledNoReportingNoInline() )
  {
    v12 = v11;
    v11 = -1LL;
    if ( v12 >= v10 )
      v11 = v12;
  }
  v13 = v11 >> 18;
  *a4 = (unsigned __int8)v13;
  HIBYTE(v14) |= 0x40u;
  BYTE2(v14) = v13;
  *a1 = v14;
  return 1LL;
}
