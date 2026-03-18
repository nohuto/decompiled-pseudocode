/*
 * XREFs of KiComputeDueTime @ 0x1402F4350
 * Callers:
 *     KiCommitThreadWait @ 0x14029DDA0 (KiCommitThreadWait.c)
 *     KiResumeThread @ 0x1402F2268 (KiResumeThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiComputeDueTime(int *a1, __int64 a2, char a3, _DWORD *a4)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 result; // rax
  int v8; // [rsp+0h] [rbp-28h]

  v8 = *a1;
  BYTE1(v8) = a3;
  if ( a2 >= 0 )
  {
    BYTE1(v8) = a3 | 1;
    a2 = MEMORY[0xFFFFF78000000014] - a2;
    if ( a2 >= 0 )
    {
      *a1 = v8;
      result = 0LL;
      *((_QWORD *)a1 + 3) = 0LL;
      return result;
    }
    a3 |= 1u;
  }
  v5 = 0LL;
  if ( (a3 & 0xFC) != 0 )
    v5 = (unsigned __int8)(a3 & 0xFC) << 16;
  v6 = MEMORY[0xFFFFF78000000008] - a2;
  *((_QWORD *)a1 + 3) = MEMORY[0xFFFFF78000000008] - a2;
  HIBYTE(v8) |= 0x40u;
  BYTE2(v8) = (unsigned __int64)(v5 + v6) >> 18;
  *a4 = BYTE2(v8);
  *a1 = v8;
  return 1LL;
}
