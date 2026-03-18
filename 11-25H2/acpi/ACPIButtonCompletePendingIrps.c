/*
 * XREFs of ACPIButtonCompletePendingIrps @ 0x14002455C
 * Callers:
 *     ACPIButtonEvent @ 0x14002433C (ACPIButtonEvent.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     AcpiDiagTraceButtonIrpCompletion @ 0x1400246E0 (AcpiDiagTraceButtonIrpCompletion.c)
 */

char __fastcall ACPIButtonCompletePendingIrps(ULONG_PTR a1, unsigned int a2)
{
  char v4; // di
  __int64 DeviceExtension; // r14
  KIRQL v6; // al
  __int64 *v7; // r8
  KIRQL v8; // r9
  __int64 v9; // rcx
  __int64 **v10; // rax
  __int64 **v11; // rax
  __int64 *v12; // rcx
  __int64 *v13; // rdx
  _QWORD *v14; // rbx
  _QWORD *v15; // rcx
  IRP *v16; // rsi
  _QWORD *v17; // rax
  _QWORD *v18; // rdx
  _QWORD *v20; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v21; // [rsp+28h] [rbp-10h]

  v4 = 0;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v21 = (__int64 *)&v20;
  v20 = &v20;
  v6 = KeAcquireSpinLockRaiseToDpc(&AcpiButtonLock);
  v7 = (__int64 *)AcpiButtonList;
  v8 = v6;
  while ( v7 != &AcpiButtonList )
  {
    v12 = v7;
    v13 = v7;
    v7 = (__int64 *)*v7;
    if ( *(_QWORD *)(v12[2] + 40) == a1 && _InterlockedExchange64(v12 - 8, 0LL) )
    {
      *(_DWORD *)*(v12 - 18) = a2;
      *((_DWORD *)v12 - 30) = 0;
      *(v12 - 14) = 4LL;
      v9 = *v13;
      if ( *(__int64 **)(*v13 + 8) != v13
        || (v10 = (__int64 **)v13[1], *v10 != v13)
        || (*v10 = (__int64 *)v9, *(_QWORD *)(v9 + 8) = v10, v11 = (__int64 **)v21, (_QWORD **)*v21 != &v20) )
      {
LABEL_16:
        __fastfail(3u);
      }
      v13[1] = (__int64)v21;
      *v13 = (__int64)&v20;
      *v11 = v13;
      v21 = v13;
    }
  }
  KeReleaseSpinLock(&AcpiButtonLock, v8);
  v14 = v20;
  while ( v14 != &v20 )
  {
    v15 = (_QWORD *)*v14;
    v16 = (IRP *)(v14 - 21);
    v17 = v14;
    v14 = v15;
    if ( (_QWORD *)v15[1] != v17 )
      goto LABEL_16;
    v18 = (_QWORD *)v17[1];
    if ( (_QWORD *)*v18 != v17 )
      goto LABEL_16;
    *v18 = v15;
    v15[1] = v18;
    IofCompleteRequest(v16, 0);
    v4 = 1;
    AcpiDiagTraceButtonIrpCompletion(DeviceExtension, a2, v16);
  }
  return v4;
}
