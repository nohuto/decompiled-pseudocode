/*
 * XREFs of PepUpdatePlatformState @ 0x14000B9C0
 * Callers:
 *     PepDevicePowerControlCallback @ 0x14000C8B0 (PepDevicePowerControlCallback.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14000D700 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PepUpdatePlatformState(__int64 a1, unsigned int *a2)
{
  _DWORD *v3; // r9
  unsigned int v4; // ebx
  _DWORD *v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  IO_WORKITEM_ROUTINE *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1400145B8,
    0LL);
  v3 = (_DWORD *)qword_140014C48;
  v4 = 0;
  v5 = Src;
  if ( !qword_140014C48 )
    v3 = (_DWORD *)qword_140014C50;
  if ( !v3 )
  {
    if ( !Src )
    {
      v4 = -1073741436;
      goto LABEL_14;
    }
    v9 = *a2;
    if ( (unsigned int)v9 >= *((_DWORD *)Src + 1) )
      goto LABEL_5;
    v10 = 6 * v9;
    *((_DWORD *)Src + 2 * v10 + 14) = a2[1];
    v5[2 * v10 + 15] = a2[2];
    if ( byte_140014C80 )
      goto LABEL_14;
    v3 = 0LL;
    v8 = PepUpdatePlatformStateWorker;
LABEL_12:
    byte_140014C80 = 1;
    IoQueueWorkItem(IoWorkItem, v8, DelayedWorkQueue, v3);
    goto LABEL_14;
  }
  v6 = *a2;
  if ( (unsigned int)v6 < *v3 )
  {
    v7 = 80 * v6;
    v3[v7 + 84] = a2[1];
    v3[v7 + 85] = a2[2];
    if ( byte_140014C80 )
      goto LABEL_14;
    v8 = (IO_WORKITEM_ROUTINE *)PepUpdateCoordinatedStateWorker;
    goto LABEL_12;
  }
LABEL_5:
  v4 = -1073741811;
LABEL_14:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1400145B8);
  return v4;
}
