/*
 * XREFs of PfTLoggingWorker @ 0x140970EA0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     KeWaitForMultipleObjects @ 0x14031CC00 (KeWaitForMultipleObjects.c)
 *     KeSetBasePriorityThread @ 0x1404DDF20 (KeSetBasePriorityThread.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PfTGenerateTrace @ 0x140971110 (PfTGenerateTrace.c)
 *     PfpFlushBuffers @ 0x140971DE0 (PfpFlushBuffers.c)
 */

LONG __fastcall PfTLoggingWorker(__int64 a1)
{
  __int64 v2; // rdi
  NTSTATUS v3; // eax
  int v4; // ebx
  LONG result; // eax
  int v6; // ebx
  int v7; // ebx
  unsigned int v8; // ebx
  char v9; // si
  int v10; // ebx
  int v11; // eax
  unsigned int v12; // ebx
  char v13; // si
  LARGE_INTEGER Interval; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+50h] [rbp-B8h]
  LARGE_INTEGER Timeout; // [rsp+58h] [rbp-B0h] BYREF
  PVOID Object[5]; // [rsp+60h] [rbp-A8h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+88h] [rbp-80h] BYREF

  v15 = a1;
  Timeout.QuadPart = -3000000000LL;
  Interval.QuadPart = -300000LL;
  KeSetBasePriorityThread(KeGetCurrentThread(), -1);
  Object[0] = (PVOID)(a1 + 264);
  Object[1] = (PVOID)(a1 + 200);
  Object[2] = (PVOID)(a1 + 176);
  Object[3] = (PVOID)(a1 + 736);
  v2 = v15;
  *(_QWORD *)(v15 + 256) = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
  while ( 1 )
  {
    while ( 1 )
    {
      v3 = KeWaitForMultipleObjects(4u, Object, WaitAny, Executive, 0, 0, &Timeout, &WaitBlockArray);
      v4 = v3;
      if ( v3 == 258 )
        break;
      if ( v3 < 4 )
        goto LABEL_4;
    }
    v4 = 3;
LABEL_4:
    result = KeResetEvent((PRKEVENT)Object[v4]);
    if ( !v4 )
      return result;
    if ( *(_DWORD *)(v2 + 600) < *(_DWORD *)(v2 + 604) )
    {
      v6 = v4 - 1;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          if ( v7 == 1 )
          {
            v8 = 0;
            while ( 1 )
            {
              v9 = PfpFlushBuffers(v2);
              if ( !v9 && (unsigned int)PfTGenerateTrace(v2) == -1073741670 )
                break;
              ++v8;
              if ( v9 || v8 >= 0x3E8 )
                goto LABEL_15;
            }
            KeDelayExecutionThread(0, 0, &Interval);
LABEL_15:
            if ( MEMORY[0xFFFFF78000000008] - *(_QWORD *)(v2 + 256) - MEMORY[0xFFFFF780000003B0] > 0xB2D05E00uLL )
              PfTGenerateTrace(v2);
          }
        }
        else
        {
          v10 = (unsigned __int8)PfpFlushBuffers(v2);
          v11 = PfTGenerateTrace(v2);
          if ( !(_BYTE)v10 )
          {
            if ( v11 == -1073741670 )
              KeDelayExecutionThread(0, 0, &Interval);
            PfpFlushBuffers(v2);
          }
        }
      }
      else
      {
        v12 = 0;
        do
        {
          v13 = PfpFlushBuffers(v2);
          if ( (!v13 || *(_DWORD *)(v2 + 248)) && (unsigned int)PfTGenerateTrace(v2) == -1073741670 )
          {
            KeDelayExecutionThread(0, 0, &Interval);
            v12 += 1000;
          }
          else
          {
            ++v12;
          }
        }
        while ( !v13 && v12 < 0x2710 );
LABEL_7:
        KeSetEvent((PRKEVENT)(v2 + 224), 0, 0);
      }
    }
    else if ( v4 == 1 )
    {
      goto LABEL_7;
    }
  }
}
