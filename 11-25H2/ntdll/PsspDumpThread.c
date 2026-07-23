/*
 * XREFs of PsspDumpThread @ 0x1800C77C4
 * Callers:
 *     PsspCaptureThreadInformation @ 0x1800C73DC (PsspCaptureThreadInformation.c)
 * Callees:
 *     PsspInitializeContextOrExtendedContext @ 0x1800C7AF8 (PsspInitializeContextOrExtendedContext.c)
 *     ZwQueryInformationThread @ 0x1801636C0 (ZwQueryInformationThread.c)
 *     ZwGetContextThread @ 0x180165170 (ZwGetContextThread.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __fastcall PsspDumpThread(__int64 *a1, __int16 a2, ULONG a3, int a4, int a5, HANDLE ThreadHandle)
{
  __int64 v9; // rbx
  unsigned int v10; // r13d
  unsigned int v11; // esi
  void *v12; // r15
  unsigned int v13; // eax
  NTSTATUS result; // eax
  unsigned int v15; // r12d
  ULONG v16; // r8d
  struct _CONTEXT *v17; // rax
  unsigned int v18; // eax
  ULONG ReturnLength; // [rsp+30h] [rbp-D0h] BYREF
  int ThreadInformation; // [rsp+34h] [rbp-CCh] BYREF
  int v21; // [rsp+38h] [rbp-C8h]
  int v22; // [rsp+3Ch] [rbp-C4h]
  ULONG ContextFlags; // [rsp+40h] [rbp-C0h]
  unsigned __int16 v24; // [rsp+50h] [rbp-B0h] BYREF
  void *Src; // [rsp+58h] [rbp-A8h]

  ContextFlags = a3;
  v22 = a4;
  ReturnLength = 0;
  memset_thunk_772440563353939046(&v24, 0, 0x210uLL);
  ThreadInformation = 0;
  v9 = *a1;
  v10 = (a4 + 15) & 0xFFFFFFF0;
  v21 = a2 & 0x100;
  v11 = v10 + 128;
  if ( (a2 & 0x100) != 0 )
    v12 = (void *)(v9 + 128 + v10);
  else
    v12 = (void *)(v9 + 128);
  v13 = *((_DWORD *)a1 + 3);
  if ( v13 + v11 < v13 )
    return -1073741675;
  if ( v13 + v11 > *((_DWORD *)a1 + 2) )
    return -1073741789;
  memset_thunk_772440563353939046((void *)v9, 0, 0x80uLL);
  result = ZwQueryInformationThread(ThreadHandle, ThreadBasicInformation, (PVOID)v9, 0x30u, &ReturnLength);
  if ( result >= 0 )
  {
    if ( (a2 & 0x400) != 0
      && ZwQueryInformationThread(ThreadHandle, ThreadLastSystemCall, (PVOID)(v9 + 48), 0x18u, &ReturnLength) < 0 )
    {
      *(_WORD *)(v9 + 56) = -1;
    }
    result = ZwQueryInformationThread(ThreadHandle, ThreadTimes, (PVOID)(v9 + 72), 0x20u, &ReturnLength);
    if ( result >= 0 )
    {
      result = ZwQueryInformationThread(
                 ThreadHandle,
                 ThreadQuerySetWin32StartAddress,
                 (PVOID)(v9 + 104),
                 8u,
                 &ReturnLength);
      if ( result >= 0 )
      {
        result = ZwQueryInformationThread(ThreadHandle, ThreadIsTerminated, &ThreadInformation, 4u, &ReturnLength);
        if ( result >= 0 )
        {
          *(_WORD *)(v9 + 124) = (ThreadInformation != 0) | *(_WORD *)(v9 + 124) & 0xFFFE;
          result = ZwQueryInformationThread(ThreadHandle, ThreadSuspendCount, &ThreadInformation, 4u, &ReturnLength);
          if ( result >= 0 )
          {
            *(_WORD *)(v9 + 122) = ThreadInformation;
            if ( v21 )
            {
              v16 = ContextFlags;
              *(_WORD *)(v9 + 124) &= 1u;
              *(_WORD *)(v9 + 124) |= 2 * (_WORD)v22;
              v17 = (struct _CONTEXT *)PsspInitializeContextOrExtendedContext((void *)(v9 + 128), v10, v16);
              if ( ZwGetContextThread(ThreadHandle, v17) < 0 )
              {
                *(_WORD *)(v9 + 124) &= 1u;
                v11 = 128;
              }
            }
            v15 = v11;
            if ( ZwQueryInformationThread(ThreadHandle, ThreadNameInformation, &v24, 0x210u, &ReturnLength) >= 0 && v24 )
            {
              v11 += (v24 + 15) & 0xFFFFFFF0;
              v18 = *((_DWORD *)a1 + 3);
              if ( v18 + v11 < v18 || v18 + v11 > *((_DWORD *)a1 + 2) )
              {
                v11 = v15;
              }
              else
              {
                memmove(v12, Src, v24);
                *(_WORD *)(v9 + 120) = v24;
              }
            }
            *(_QWORD *)(v9 + 112) = MEMORY[0x7FFE0014];
            *((_DWORD *)a1 + 3) += v11;
            ++*((_DWORD *)a1 + 4);
            *a1 += v11;
            return 0;
          }
        }
      }
    }
  }
  return result;
}
