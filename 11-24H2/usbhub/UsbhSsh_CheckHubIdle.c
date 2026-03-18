/*
 * XREFs of UsbhSsh_CheckHubIdle @ 0x1400044C4
 * Callers:
 *     UsbhBusPause_Action @ 0x140005D1C (UsbhBusPause_Action.c)
 *     Usbh_SSH_HubActive @ 0x14000C160 (Usbh_SSH_HubActive.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhSsh_CheckPortChangeQueuesIdle @ 0x140033708 (UsbhSsh_CheckPortChangeQueuesIdle.c)
 */

__int64 __fastcall UsbhSsh_CheckHubIdle(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  _QWORD *v7; // rax
  __int64 result; // rax

  v5 = FdoExt(a1, a2, a3, a4);
  v6 = v5;
  if ( *(_BYTE *)(v5 + 5280) )
  {
    if ( *(_BYTE *)(v5 + 3408) || *(_QWORD *)(v5 + 3104) != v5 + 3104 || *(_DWORD *)(v5 + 3120) )
      goto LABEL_15;
    v7 = (_QWORD *)(v5 + 4824);
  }
  else
  {
    if ( *(_BYTE *)(v5 + 3408) || *(_QWORD *)(v5 + 3104) != v5 + 3104 || *(_DWORD *)(v5 + 3120) )
      goto LABEL_15;
    v7 = (_QWORD *)(v5 + 4824);
  }
  if ( (_QWORD *)*v7 != v7
    || (*(_DWORD *)(v6 + 2560) & 0x10) != 0
    || *(int *)(v6 + 2740) > 1
    || (int)UsbhSsh_CheckPortChangeQueuesIdle(a1) < 0 )
  {
LABEL_15:
    result = 3221225473LL;
    goto LABEL_16;
  }
  result = 0LL;
LABEL_16:
  *(_BYTE *)(v6 + 3408) = 0;
  return result;
}
