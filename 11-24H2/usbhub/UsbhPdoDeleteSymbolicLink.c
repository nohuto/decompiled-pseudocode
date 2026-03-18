/*
 * XREFs of UsbhPdoDeleteSymbolicLink @ 0x14001DA70
 * Callers:
 *     UsbhPdoRemoveCleanup @ 0x14001DB50 (UsbhPdoRemoveCleanup.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 */

void __fastcall UsbhPdoDeleteSymbolicLink(__int64 a1)
{
  NTSTATUS v2; // edi
  struct _UNICODE_STRING *v3; // rbx
  NTSTATUS v4; // eax
  wchar_t *Buffer; // rcx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx

  v2 = 0;
  v3 = (struct _UNICODE_STRING *)PdoExt(a1);
  if ( (HIDWORD(v3[88].Buffer) & 8) != 0 )
  {
    v4 = IoSetDeviceInterfaceState(v3 + 75, 0);
    Buffer = v3[75].Buffer;
    v2 = v4;
    if ( Buffer )
    {
      ExFreePoolWithTag(Buffer, 0);
      v3[75].Buffer = 0LL;
    }
    HIDWORD(v3[88].Buffer) &= ~8u;
  }
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    v6 = *(_QWORD *)&v3[74].Length;
    if ( v6 )
    {
      v7 = *(_QWORD *)(v6 + 64);
      if ( v7 )
      {
        v8 = *(_QWORD *)(v7 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v7 + 880)) & *(_DWORD *)(v7 + 884));
        *(_QWORD *)(v8 + 8) = 0LL;
        *(_DWORD *)v8 = 1282242931;
        *(_QWORD *)(v8 + 16) = v2;
        *(_QWORD *)(v8 + 24) = a1;
      }
    }
  }
}
