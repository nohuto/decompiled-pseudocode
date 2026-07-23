/*
 * XREFs of PiDevCfgCopyDeviceKeys @ 0x1409CDFE8
 * Callers:
 *     PiDevCfgResetDeviceKeyCallback @ 0x140729570 (PiDevCfgResetDeviceKeyCallback.c)
 *     PiDevCfgConfigureDeviceKeyCallback @ 0x1409CC950 (PiDevCfgConfigureDeviceKeyCallback.c)
 *     PiDevCfgConfigureDeviceInterface @ 0x1409CCBD4 (PiDevCfgConfigureDeviceInterface.c)
 *     PipCommitPendingOsExtensionResource @ 0x140C27790 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140C279A0 (PipCommitPendingService.c)
 * Callees:
 *     PiDevCfgPushCopyKeyEntry @ 0x1404A0664 (PiDevCfgPushCopyKeyEntry.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwSetSecurityObject @ 0x1406AAAD0 (ZwSetSecurityObject.c)
 *     PiDevCfgCopyDeviceKey @ 0x1409CE174 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x1409CEE40 (PiDevCfgGetKeySecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgCopyDeviceKeys(void *a1, void *a2, __int64 a3, __int64 a4)
{
  int v7; // edi
  PVOID v8; // rcx
  PVOID *v9; // rax
  void *v10; // rsi
  void *v11; // r14
  int v12; // ebx
  _QWORD *v13; // rcx
  PVOID *v14; // rax
  void *v15; // rsi
  void *v16; // r14
  int v17; // ebx
  __int64 v19; // [rsp+48h] [rbp-18h] BYREF
  PVOID P; // [rsp+50h] [rbp-10h]

  P = &v19;
  v19 = (__int64)&v19;
  if ( (int)PiDevCfgGetKeySecurityDescriptor(a1) >= 0 )
  {
    ZwSetSecurityObject(a2, 4u, 0LL);
    ExFreePoolWithTag(0LL, 0);
  }
  v7 = PiDevCfgPushCopyKeyEntry((HANDLE *)&v19, a1, a2, 1);
  if ( v7 >= 0 )
  {
    while ( 1 )
    {
      if ( (__int64 *)v19 == &v19 )
        goto LABEL_10;
      v8 = P;
      if ( *(__int64 **)P != &v19 )
        break;
      v9 = (PVOID *)*((_QWORD *)P + 1);
      if ( *v9 != P )
        break;
      P = (PVOID)*((_QWORD *)P + 1);
      *v9 = &v19;
      v10 = (void *)*((_QWORD *)v8 + 2);
      v11 = (void *)*((_QWORD *)v8 + 3);
      v12 = *((_DWORD *)v8 + 8);
      ExFreePoolWithTag(v8, 0);
      v7 = PiDevCfgCopyDeviceKey(v10, v12, (__int64)&v19, a4);
      if ( (v12 & 0x40000000) != 0 )
      {
        ZwClose(v10);
        ZwClose(v11);
      }
      if ( v7 < 0 )
        goto LABEL_10;
    }
LABEL_13:
    __fastfail(3u);
  }
LABEL_10:
  while ( (__int64 *)v19 != &v19 )
  {
    v13 = P;
    if ( *(__int64 **)P != &v19 )
      goto LABEL_13;
    v14 = (PVOID *)*((_QWORD *)P + 1);
    if ( *v14 != P )
      goto LABEL_13;
    P = (PVOID)*((_QWORD *)P + 1);
    *v14 = &v19;
    v15 = (void *)v13[2];
    v16 = (void *)v13[3];
    v17 = *((_DWORD *)v13 + 8);
    ExFreePoolWithTag(v13, 0);
    if ( (v17 & 0x40000000) != 0 )
    {
      ZwClose(v15);
      ZwClose(v16);
    }
  }
  return (unsigned int)v7;
}
