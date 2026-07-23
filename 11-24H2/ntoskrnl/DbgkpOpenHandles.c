/*
 * XREFs of DbgkpOpenHandles @ 0x140A2E57C
 * Callers:
 *     NtWaitForDebugEvent @ 0x140A2E240 (NtWaitForDebugEvent.c)
 * Callees:
 *     ObDuplicateObject @ 0x14083C270 (ObDuplicateObject.c)
 *     ObOpenObjectByPointer @ 0x1408511D0 (ObOpenObjectByPointer.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 */

void __fastcall DbgkpOpenHandles(__int64 a1, void *a2, void *a3)
{
  void *v5; // rsi
  struct _KPROCESS *v6; // r8
  _QWORD *v7; // rdi
  _QWORD *v8; // rsi
  struct _KPROCESS *Process; // r8

  switch ( *(_DWORD *)a1 )
  {
    case 2:
      v7 = (_QWORD *)(a1 + 24);
      if ( ObOpenObjectByPointer(a3, 0, 0LL, 0x12007Bu, (POBJECT_TYPE)PsThreadType, 0, (PHANDLE)(a1 + 24)) < 0 )
        *v7 = 0LL;
      break;
    case 3:
      v8 = (_QWORD *)(a1 + 32);
      if ( ObOpenObjectByPointer(a3, 0, 0LL, 0x12007Bu, (POBJECT_TYPE)PsThreadType, 0, (PHANDLE)(a1 + 32)) < 0 )
        *v8 = 0LL;
      if ( ObOpenObjectByPointer(a2, 0, 0LL, 0x12067Bu, (POBJECT_TYPE)PsProcessType, 0, (PHANDLE)(a1 + 24)) < 0 )
        *(_QWORD *)(a1 + 24) = 0LL;
      v5 = *(void **)(a1 + 48);
      if ( v5 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( (int)ObDuplicateObject((__int64)Process, v5, Process, (__int64 *)(a1 + 48), 0, 0, 2, 0) < 0 )
          *(_QWORD *)(a1 + 48) = 0LL;
        goto LABEL_8;
      }
      break;
    case 9:
      v5 = *(void **)(a1 + 24);
      if ( v5 )
      {
        v6 = KeGetCurrentThread()->ApcState.Process;
        if ( (int)ObDuplicateObject((__int64)v6, v5, v6, (__int64 *)(a1 + 24), 0, 0, 2, 0) < 0 )
          *(_QWORD *)(a1 + 24) = 0LL;
LABEL_8:
        ObCloseHandle(v5, 0);
      }
      break;
  }
}
