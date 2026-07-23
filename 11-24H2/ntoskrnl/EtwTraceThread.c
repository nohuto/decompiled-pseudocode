/*
 * XREFs of EtwTraceThread @ 0x1408FCF28
 * Callers:
 *     PspInsertThread @ 0x1408FBFD4 (PspInsertThread.c)
 *     PspExitThread @ 0x1408FDFF0 (PspExitThread.c)
 * Callees:
 *     PsGetIoPriorityThread @ 0x14022BEB0 (PsGetIoPriorityThread.c)
 *     PsGetPagePriorityThread @ 0x1403305B0 (PsGetPagePriorityThread.c)
 *     EtwTraceSiloKernelEvent @ 0x1403C1FD0 (EtwTraceSiloKernelEvent.c)
 *     PsGetProcessServerSilo @ 0x14043D810 (PsGetProcessServerSilo.c)
 *     PsGetCurrentThreadTeb @ 0x140462F90 (PsGetCurrentThreadTeb.c)
 *     PsLockThreadNameShared @ 0x1405E2874 (PsLockThreadNameShared.c)
 *     PsUnlockThreadNameShared @ 0x1405E2A20 (PsUnlockThreadNameShared.c)
 *     Feature_1224463674__private_IsEnabledDeviceUsageNoInline @ 0x14064D46C (Feature_1224463674__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     EtwpPsProvTraceThread @ 0x1409F4168 (EtwpPsProvTraceThread.c)
 */

__int64 __fastcall EtwTraceThread(__int64 a1, __int64 a2, char a3)
{
  unsigned int v6; // r14d
  __int64 v7; // rax
  _WORD *v8; // rcx
  __int64 v9; // rdx
  _DWORD *CurrentThreadTeb; // rdx
  _KPROCESS *Process; // rax
  __int16 v12; // cx
  char v13; // al
  int v14; // eax
  __int64 v15; // rcx
  _KPROCESS *v16; // rdx
  __int16 v17; // r8
  char v18; // al
  __int64 v19; // rax
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int16 *v21; // rdx
  unsigned int v22; // eax
  __int64 ProcessServerSilo; // rax
  __int64 result; // rax
  __int16 v25; // [rsp+30h] [rbp-C8h]
  unsigned int v26; // [rsp+38h] [rbp-C0h]
  _DWORD v27[2]; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+58h] [rbp-A0h]
  __int64 v29; // [rsp+60h] [rbp-98h]
  __int64 v30; // [rsp+68h] [rbp-90h]
  __int64 v31; // [rsp+70h] [rbp-88h]
  __int64 v32; // [rsp+78h] [rbp-80h]
  __int64 v33; // [rsp+80h] [rbp-78h]
  __int64 v34; // [rsp+88h] [rbp-70h]
  int v35; // [rsp+90h] [rbp-68h]
  char v36; // [rsp+94h] [rbp-64h]
  char PagePriorityThread; // [rsp+95h] [rbp-63h]
  char IoPriorityThread; // [rsp+96h] [rbp-62h]
  char v39; // [rsp+97h] [rbp-61h]
  __int64 v40; // [rsp+98h] [rbp-60h]
  _QWORD v41[2]; // [rsp+A0h] [rbp-58h] BYREF
  int *v42; // [rsp+B0h] [rbp-48h]
  __int64 v43; // [rsp+B8h] [rbp-40h]
  int *v44; // [rsp+C0h] [rbp-38h]
  __int64 v45; // [rsp+C8h] [rbp-30h]

  v6 = 2;
  v40 = 0LL;
  v26 = 6297859;
  if ( EtwpHostSiloState != -4812 && (*(_DWORD *)(EtwpHostSiloState + 4812) & 2) != 0 )
    EtwpPsProvTraceThread();
  v27[0] = *(_DWORD *)(a1 + 1288);
  v27[1] = *(_DWORD *)(a1 + 1296);
  v28 = *(_QWORD *)(a1 + 56);
  v29 = *(_QWORD *)(a1 + 48);
  v7 = *(unsigned __int16 *)(a1 + 584);
  v8 = *(_WORD **)(a1 + 576);
  if ( (unsigned __int16)v7 >= *v8 )
    v9 = 0LL;
  else
    v9 = *(_QWORD *)&v8[4 * v7 + 4];
  v32 = v9;
  v33 = *(_QWORD *)(a1 + 1376);
  v30 = 0LL;
  v31 = 0LL;
  v34 = *(_QWORD *)(a1 + 240);
  v35 = 0;
  v36 = *(_BYTE *)(a1 + 563);
  PagePriorityThread = PsGetPagePriorityThread(a1);
  IoPriorityThread = PsGetIoPriorityThread(a1);
  v39 = 0;
  if ( a3 )
  {
    v25 = 1281;
    if ( a2 )
    {
      v30 = *(_QWORD *)(a2 + 16);
      v31 = *(_QWORD *)(a2 + 24);
    }
    CurrentThreadTeb = PsGetCurrentThreadTeb();
    if ( CurrentThreadTeb )
    {
      Process = KeGetCurrentThread()->Process;
      if ( !Process[1].ReadyTime )
        goto LABEL_17;
      v12 = WORD2(Process[3].PerProcessorCycleTimes);
      if ( v12 == 332 || (v13 = 0, v12 == 452) )
        v13 = 1;
      if ( v13 )
        v14 = CurrentThreadTeb[3032];
      else
LABEL_17:
        v14 = CurrentThreadTeb[1480];
      v35 = v14;
    }
  }
  else
  {
    v25 = 1282;
    v26 = 73406723;
    v15 = *(_QWORD *)(a1 + 240);
    if ( v15 )
    {
      v16 = KeGetCurrentThread()->Process;
      if ( !v16[1].ReadyTime )
        goto LABEL_26;
      v17 = WORD2(v16[3].PerProcessorCycleTimes);
      if ( v17 == 332 || (v18 = 0, v17 == 452) )
        v18 = 1;
      if ( v18 )
      {
        v35 = *(_DWORD *)(v15 + 12128);
        v30 = *(unsigned int *)(v15 + 8196);
        v19 = *(unsigned int *)(v15 + 8200);
      }
      else
      {
LABEL_26:
        v35 = *(_DWORD *)(v15 + 5920);
        v30 = *(_QWORD *)(v15 + 8);
        v19 = *(_QWORD *)(v15 + 16);
      }
      v31 = v19;
    }
  }
  v41[0] = v27;
  v41[1] = 72LL;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)Feature_1224463674__private_IsEnabledDeviceUsageNoInline() )
    PsLockThreadNameShared(a1, (__int64)CurrentThread);
  v21 = *(unsigned __int16 **)(a1 + 1696);
  if ( v21 && *((_QWORD *)v21 + 1) )
  {
    v22 = 2048;
    if ( *v21 < 0x800u )
      v22 = *v21;
    v42 = (int *)*((_QWORD *)v21 + 1);
    v43 = v22;
    if ( !v22 || *(_WORD *)(*((_QWORD *)v21 + 1) + 2 * ((unsigned __int64)v22 >> 1) - 2) )
    {
      v44 = &EtwpNull;
      v45 = 2LL;
      v6 = 3;
    }
  }
  else
  {
    v42 = &EtwpNull;
    v43 = 2LL;
  }
  ProcessServerSilo = PsGetProcessServerSilo(*(_QWORD *)(a1 + 544));
  EtwTraceSiloKernelEvent(ProcessServerSilo, (__int64)v41, v6, 2u, v25, v26);
  result = Feature_1224463674__private_IsEnabledDeviceUsageNoInline();
  if ( (_DWORD)result )
    return PsUnlockThreadNameShared(a1);
  return result;
}
