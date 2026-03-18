/*
 * XREFs of EtwTraceThread @ 0x1408F592C
 * Callers:
 *     PspInsertThread @ 0x1408F1D7C (PspInsertThread.c)
 *     PspExitThread @ 0x1408F49D0 (PspExitThread.c)
 * Callees:
 *     PsGetIoPriorityThread @ 0x1403031B0 (PsGetIoPriorityThread.c)
 *     PsGetPagePriorityThread @ 0x1403059B0 (PsGetPagePriorityThread.c)
 *     EtwTraceSiloKernelEvent @ 0x140310730 (EtwTraceSiloKernelEvent.c)
 *     PsGetProcessServerSilo @ 0x140447CD0 (PsGetProcessServerSilo.c)
 *     PsGetCurrentThreadTeb @ 0x14046BA40 (PsGetCurrentThreadTeb.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     EtwpPsProvTraceThread @ 0x1408F5CC0 (EtwpPsProvTraceThread.c)
 */

void __fastcall EtwTraceThread(__int64 a1, __int64 a2, char a3)
{
  unsigned int v6; // r14d
  __int64 v7; // rax
  _WORD *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  _KPROCESS *v11; // rdx
  __int16 v12; // r8
  char v13; // al
  __int64 v14; // rax
  unsigned __int16 *v15; // rdx
  __int64 ProcessServerSilo; // rax
  _DWORD *CurrentThreadTeb; // rdx
  _KPROCESS *Process; // rax
  __int16 v19; // cx
  char v20; // al
  int v21; // eax
  unsigned int v22; // eax
  unsigned __int16 v23; // [rsp+30h] [rbp-C8h]
  unsigned int v24; // [rsp+38h] [rbp-C0h]
  _DWORD v25[2]; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+58h] [rbp-A0h]
  __int64 v27; // [rsp+60h] [rbp-98h]
  __int64 v28; // [rsp+68h] [rbp-90h]
  __int64 v29; // [rsp+70h] [rbp-88h]
  __int64 v30; // [rsp+78h] [rbp-80h]
  __int64 v31; // [rsp+80h] [rbp-78h]
  __int64 v32; // [rsp+88h] [rbp-70h]
  int v33; // [rsp+90h] [rbp-68h]
  char v34; // [rsp+94h] [rbp-64h]
  char PagePriorityThread; // [rsp+95h] [rbp-63h]
  char IoPriorityThread; // [rsp+96h] [rbp-62h]
  char v37; // [rsp+97h] [rbp-61h]
  __int64 v38; // [rsp+98h] [rbp-60h]
  _QWORD v39[2]; // [rsp+A0h] [rbp-58h] BYREF
  __int64 *v40; // [rsp+B0h] [rbp-48h]
  __int64 v41; // [rsp+B8h] [rbp-40h]
  __int64 *v42; // [rsp+C0h] [rbp-38h]
  __int64 v43; // [rsp+C8h] [rbp-30h]

  v6 = 2;
  v38 = 0LL;
  v24 = 6297859;
  if ( EtwpHostSiloState != -4540 && (*(_DWORD *)(EtwpHostSiloState + 4540) & 2) != 0 )
    EtwpPsProvTraceThread();
  v25[0] = *(_DWORD *)(a1 + 1288);
  v25[1] = *(_DWORD *)(a1 + 1296);
  v26 = *(_QWORD *)(a1 + 56);
  v27 = *(_QWORD *)(a1 + 48);
  v7 = *(unsigned __int16 *)(a1 + 584);
  v8 = *(_WORD **)(a1 + 576);
  if ( (unsigned __int16)v7 >= *v8 )
    v9 = 0LL;
  else
    v9 = *(_QWORD *)&v8[4 * v7 + 4];
  v30 = v9;
  v31 = *(_QWORD *)(a1 + 1376);
  v28 = 0LL;
  v29 = 0LL;
  v32 = *(_QWORD *)(a1 + 240);
  v33 = 0;
  v34 = *(_BYTE *)(a1 + 563);
  PagePriorityThread = PsGetPagePriorityThread(a1);
  IoPriorityThread = PsGetIoPriorityThread(a1);
  v37 = 0;
  if ( a3 )
  {
    v23 = 1281;
    if ( a2 )
    {
      v28 = *(_QWORD *)(a2 + 16);
      v29 = *(_QWORD *)(a2 + 24);
    }
    CurrentThreadTeb = PsGetCurrentThreadTeb();
    if ( CurrentThreadTeb )
    {
      Process = KeGetCurrentThread()->Process;
      if ( !Process[1].ReadyTime )
        goto LABEL_27;
      v19 = WORD2(Process[3].PerProcessorCycleTimes);
      if ( v19 == 332 || (v20 = 0, v19 == 452) )
        v20 = 1;
      if ( v20 )
        v21 = CurrentThreadTeb[3032];
      else
LABEL_27:
        v21 = CurrentThreadTeb[1480];
      v33 = v21;
    }
  }
  else
  {
    v23 = 1282;
    v24 = 73406723;
    v10 = *(_QWORD *)(a1 + 240);
    if ( v10 )
    {
      v11 = KeGetCurrentThread()->Process;
      if ( !v11[1].ReadyTime )
        goto LABEL_12;
      v12 = WORD2(v11[3].PerProcessorCycleTimes);
      if ( v12 == 332 || (v13 = 0, v12 == 452) )
        v13 = 1;
      if ( v13 )
      {
        v33 = *(_DWORD *)(v10 + 12128);
        v28 = *(unsigned int *)(v10 + 8196);
        v14 = *(unsigned int *)(v10 + 8200);
      }
      else
      {
LABEL_12:
        v33 = *(_DWORD *)(v10 + 5920);
        v28 = *(_QWORD *)(v10 + 8);
        v14 = *(_QWORD *)(v10 + 16);
      }
      v29 = v14;
    }
  }
  v39[0] = v25;
  v39[1] = 72LL;
  v15 = *(unsigned __int16 **)(a1 + 1696);
  if ( v15 && *((_QWORD *)v15 + 1) )
  {
    v22 = 2048;
    if ( *v15 < 0x800u )
      v22 = *v15;
    v40 = (__int64 *)*((_QWORD *)v15 + 1);
    v41 = v22;
    if ( !v22 || *(_WORD *)(*((_QWORD *)v15 + 1) + 2 * ((unsigned __int64)v22 >> 1) - 2) )
    {
      v42 = &EtwpNull;
      v43 = 2LL;
      v6 = 3;
    }
  }
  else
  {
    v40 = &EtwpNull;
    v41 = 2LL;
  }
  ProcessServerSilo = PsGetProcessServerSilo(*(_QWORD *)(a1 + 544));
  EtwTraceSiloKernelEvent(ProcessServerSilo, (struct _KTHREAD *)v39, v6, 2u, v23, v24);
}
