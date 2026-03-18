/*
 * XREFs of UsbhBusIf_ResumeChildHub @ 0x140036200
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     Usbh_SSH_Event @ 0x14000A9E0 (Usbh_SSH_Event.c)
 *     UsbhLatchPdo @ 0x14000ABA0 (UsbhLatchPdo.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhDecHubBusy @ 0x14000F560 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x14000F6F0 (UsbhIncHubBusy.c)
 *     UsbhSshSetPortsBusyState @ 0x140015B70 (UsbhSshSetPortsBusyState.c)
 *     UsbhClearPdoIdleReady @ 0x14001E640 (UsbhClearPdoIdleReady.c)
 *     UsbhUnlatchPdo @ 0x140020FA0 (UsbhUnlatchPdo.c)
 *     UsbhSyncResumePort @ 0x140023948 (UsbhSyncResumePort.c)
 *     UsbhSshPropagateResume @ 0x140023FC8 (UsbhSshPropagateResume.c)
 */

__int64 __fastcall UsbhBusIf_ResumeChildHub(__int64 a1)
{
  _DWORD *v2; // rsi
  __int64 v3; // rdi
  _DWORD *v4; // rbp
  _DWORD *v6; // rbx
  _QWORD *v7; // r15
  __int64 v8; // r9
  int v9; // ebx
  _DWORD *v10; // rax
  __int64 v11; // r9
  __int64 v12; // rdx
  struct _DEVICE_OBJECT *v13; // rbp
  _DWORD *v14; // rax
  __int64 v15; // r9
  _DWORD *v16; // rax
  _DWORD *v17; // rax

  v2 = PdoExt(a1);
  v3 = *((_QWORD *)v2 + 148);
  v4 = FdoExt(v3);
  if ( (v2[355] & 4) == 0 )
    return 3221225473LL;
  v6 = FdoExt(v3) + 478;
  v7 = (_QWORD *)UsbhIncHubBusy(v3, (__int64)v6, v3, 1129476712, 0);
  v9 = Usbh_SSH_Event(v3, 5LL, (__int64)v6, v8);
  if ( (v9 & 0xC0000000) == 0xC0000000 )
  {
    v10 = FdoExt(v3);
    Usbh_SSH_Event(v3, 6LL, (__int64)(v10 + 478), v11);
  }
  if ( v9 < 0 && !*((_BYTE *)v4 + 3416) )
    goto LABEL_12;
  v13 = (struct _DEVICE_OBJECT *)UsbhLatchPdo(v3, *((_WORD *)v2 + 714), 0LL, 0x48536942u);
  if ( v13 )
  {
    v14 = FdoExt(v3);
    if ( (int)UsbhSyncResumePort(v3, (__int64)(v14 + 478), *((unsigned __int16 *)v2 + 714), v15) >= 0 )
      UsbhSshSetPortsBusyState(v3, *((_WORD *)v2 + 714), 2, 1u);
    v16 = FdoExt(v3);
    v9 = UsbhSshPropagateResume(v3, (__int64)(v16 + 478), v13);
    UsbhUnlatchPdo(v3, (__int64)v13, 0LL, 0x48536942u);
LABEL_12:
    v17 = FdoExt(v3);
    UsbhClearPdoIdleReady(v3, a1, (__int64)(v17 + 478));
    goto LABEL_13;
  }
  v9 = -1073741661;
LABEL_13:
  UsbhDecHubBusy(v3, v12, v7);
  return (unsigned int)v9;
}
