/*
 * XREFs of USBD_SelectInterfaceWithEndpointOffloadUrbAllocateAndBuild @ 0x14001A440
 * Callers:
 *     USBHwSelectStreamingAudioInterfaceSideband @ 0x140035E44 (USBHwSelectStreamingAudioInterfaceSideband.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14001C680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall USBD_SelectInterfaceWithEndpointOffloadUrbAllocateAndBuild(
        PVOID P,
        __int64 a2,
        __int64 a3,
        int a4,
        _QWORD *a5)
{
  unsigned int v6; // ebx
  _QWORD *v7; // rsi
  __int64 (__fastcall *v8)(_QWORD); // rax
  void (__fastcall *v9)(_QWORD); // rax

  if ( !P )
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "USBDHandle cant be NULL\n");
    goto LABEL_10;
  }
  if ( !a2 )
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "ConfigurationHandle cant be NULL\n");
    goto LABEL_10;
  }
  if ( !a3 )
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "InterfaceListEntry cant be NULL\n");
LABEL_10:
    v6 = -1073741811;
    v7 = a5;
    if ( a5 )
    {
LABEL_41:
      *v7 = 0LL;
      return v6;
    }
    return v6;
  }
  v7 = a5;
  if ( a5 )
  {
    if ( !a4 )
    {
      if ( g_EnableDbgPrints )
        DbgPrintEx(0x4Du, 0, "NumberOfEndpointsToOffload cant be ZERO\n");
      v6 = -1073741811;
      goto LABEL_41;
    }
    if ( *((_BYTE *)P + 225) )
    {
      if ( g_EnableDbgPrints )
        DbgPrintEx(0x4Du, 0, "UsbdHandleInfo->PendingDelete is set, UsbdHandleInfo 0x%p\n", P);
    }
    else
    {
      if ( *((int *)P + 55) >= 1 )
      {
        _InterlockedIncrement((volatile signed __int32 *)P + 55);
        v8 = (__int64 (__fastcall *)(_QWORD))*((_QWORD *)P + 22);
        if ( v8 )
        {
          v6 = v8(*((_QWORD *)P + 6));
          if ( (v6 & 0x80000000) == 0 )
            return v6;
        }
        else
        {
          if ( g_EnableDbgPrints )
            DbgPrintEx(0x4Du, 0, "XRB support is needed for offload support\n");
          v6 = -1073741637;
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 55, 0xFFFFFFFF) <= 1 )
        {
          if ( *((_BYTE *)P + 225) )
          {
            v9 = (void (__fastcall *)(_QWORD))*((_QWORD *)P + 14);
            if ( v9 )
              v9(*((_QWORD *)P + 6));
            ExFreePoolWithTag(P, *((_DWORD *)P + 16));
          }
          else if ( g_EnableDbgPrints )
          {
            DbgPrintEx(0x4Du, 0, "UsbdHandleInfo->PendingDelete should be set here UsbdHandleInfo 0x%p\n", P);
          }
        }
        goto LABEL_41;
      }
      if ( g_EnableDbgPrints )
        DbgPrintEx(0x4Du, 0, "UsbdHandleInfo->ReferenceCount must be 1 or higher 0x%p\n", P);
    }
    v6 = -1073741436;
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "USBDInternal_ReferenceHandle failed %x\n", -1073741436);
    goto LABEL_41;
  }
  if ( g_EnableDbgPrints )
    DbgPrintEx(0x4Du, 0, "Urb cant be NULL\n");
  return (unsigned int)-1073741811;
}
