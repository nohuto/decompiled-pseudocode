/*
 * XREFs of AsyncCallBack @ 0x1400348D4
 * Callers:
 *     InsertReadyQueue @ 0x140013A60 (InsertReadyQueue.c)
 *     ParseNestedContext @ 0x14006F010 (ParseNestedContext.c)
 * Callees:
 *     RestartContext @ 0x14001384C (RestartContext.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

int __fastcall AsyncCallBack(_QWORD *a1, unsigned int a2)
{
  _QWORD *v2; // r9
  __int64 v3; // rbx
  __int64 (__fastcall *v4)(); // r11
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // r9
  __int64 (__fastcall *v8)(); // rax
  struct _KTHREAD *v9; // r14
  __int64 v10; // rbp
  __int64 v11; // r15
  __int64 v12; // r10
  struct _KTHREAD *CurrentThread; // r11
  __int64 v14; // r10
  __int64 v15; // rsi
  __int64 v16; // rdx

  v2 = (_QWORD *)a1[13];
  v3 = (int)a2;
  if ( v2 )
  {
    v4 = (__int64 (__fastcall *)())v2[11];
    v5 = v2[4];
    v6 = v2[12];
    v7 = v2[13];
  }
  else
  {
    v4 = (__int64 (__fastcall *)())a1[21];
    v5 = a1[9];
    v6 = a1[22];
    v7 = a1[23];
  }
  v8 = EvalMethodComplete;
  if ( v4 == EvalMethodComplete )
  {
    CurrentThread = KeGetCurrentThread();
    v14 = a1[51];
    v15 = (unsigned int)gReadyQueue;
    if ( (gDebugger & 0x8000) != 0 && qword_140089090 )
    {
      v16 = 9LL * (_InterlockedExchangeAdd((_DWORD *)&qword_140089088 + 1, 1u) % (unsigned int)qword_140089088);
      *((_QWORD *)qword_140089090 + v16 + 1) = MEMORY[0xFFFFF78000000008];
      *((_DWORD *)qword_140089090 + 2 * v16) = 1146048069;
      *((_QWORD *)qword_140089090 + v16 + 2) = CurrentThread;
      *((_QWORD *)qword_140089090 + v16 + 3) = v14;
      *((_QWORD *)qword_140089090 + v16 + 4) = a1;
      *((_QWORD *)qword_140089090 + v16 + 5) = v15;
      *((_QWORD *)qword_140089090 + v16 + 6) = v5;
      *((_QWORD *)qword_140089090 + v16 + 7) = v3;
      *((_QWORD *)qword_140089090 + v16 + 8) = v7;
    }
    *(_QWORD *)(v7 + 8) = a1;
    *(_DWORD *)v7 = v3;
    LODWORD(v8) = KeSetEvent((PRKEVENT)(v7 + 16), 0, 0);
  }
  else if ( a2 == 32771 )
  {
    LODWORD(v8) = RestartContext((__int64)a1, 0);
  }
  else if ( v4 )
  {
    v9 = KeGetCurrentThread();
    v10 = a1[51];
    v11 = (unsigned int)gReadyQueue;
    if ( (gDebugger & 0x8000) != 0 && qword_140089090 )
    {
      v12 = 9LL * (_InterlockedExchangeAdd((_DWORD *)&qword_140089088 + 1, 1u) % (unsigned int)qword_140089088);
      *((_QWORD *)qword_140089090 + v12 + 1) = MEMORY[0xFFFFF78000000008];
      *((_DWORD *)qword_140089090 + 2 * v12) = 1095975746;
      *((_QWORD *)qword_140089090 + v12 + 2) = v9;
      *((_QWORD *)qword_140089090 + v12 + 3) = v10;
      *((_QWORD *)qword_140089090 + v12 + 4) = a1;
      *((_QWORD *)qword_140089090 + v12 + 5) = v11;
      *((_QWORD *)qword_140089090 + v12 + 6) = v5;
      *((_QWORD *)qword_140089090 + v12 + 7) = (int)a2;
      *((_QWORD *)qword_140089090 + v12 + 8) = v7;
    }
    LODWORD(v8) = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64))v4)(v5 + 120, a2, v6, v7);
  }
  return (int)v8;
}
