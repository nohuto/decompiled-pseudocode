/*
 * XREFs of PepUpdateIdleState @ 0x14000E87C
 * Callers:
 *     PepDevicePowerControlCallback @ 0x140003EB0 (PepDevicePowerControlCallback.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PepUpdateIdleState(__int64 a1, unsigned int *a2)
{
  _DWORD *v4; // rdx
  unsigned int v5; // ebx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  struct _IO_WORKITEM *v11; // rcx

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_140019198,
    0LL);
  v4 = *(_DWORD **)(a1 + 1144);
  v5 = 0;
  v6 = *(_QWORD *)(a1 + 544);
  if ( v4 )
  {
    v7 = *a2;
    if ( (unsigned int)v7 >= *v4 )
    {
LABEL_3:
      v5 = -1073741811;
      goto LABEL_12;
    }
    v8 = 3 * v7;
    v4[v8 + 2] = a2[1];
    v4[v8 + 3] = a2[2];
  }
  else
  {
    if ( !v6 )
    {
      v5 = -1073741436;
      goto LABEL_12;
    }
    v9 = *a2;
    if ( (unsigned int)v9 >= *(_DWORD *)(v6 + 16) )
      goto LABEL_3;
    v10 = 10 * v9;
    *(_DWORD *)(v6 + 8 * v10 + 28) = a2[1] / 0xA;
    *(_DWORD *)(v6 + 8 * v10 + 24) = a2[2] / 0xA;
  }
  if ( !*(_BYTE *)(a1 + 1168) && !*(_BYTE *)(a1 + 1169) )
  {
    v11 = *(struct _IO_WORKITEM **)(a1 + 1160);
    *(_WORD *)(a1 + 1168) = 257;
    IoQueueWorkItem(v11, PepUpdateIdleStateWorker, DelayedWorkQueue, 0LL);
  }
LABEL_12:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    qword_140019198,
    v6);
  return v5;
}
