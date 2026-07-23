/*
 * XREFs of PnpSetDevicePropertyData @ 0x1408B5C84
 * Callers:
 *     IoSetDevicePropertyData @ 0x1408B5B80 (IoSetDevicePropertyData.c)
 * Callees:
 *     PnpSetDeviceInstancePropertyChangeEvent @ 0x14048225C (PnpSetDeviceInstancePropertyChangeEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PnpSetInterruptInformation @ 0x14072237C (PnpSetInterruptInformation.c)
 *     PiPnpRtlSetObjectProperty @ 0x1408B5E10 (PiPnpRtlSetObjectProperty.c)
 *     RtlLCIDToCultureName @ 0x140AB5200 (RtlLCIDToCultureName.c)
 */

__int64 __fastcall PnpSetDevicePropertyData(
        __int64 a1,
        __int64 a2,
        LCID a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        const void *a7)
{
  __int64 v10; // rdi
  int v11; // ebx
  __int64 v13; // rax
  UNICODE_STRING String; // [rsp+50h] [rbp-F8h] BYREF
  _BYTE v15[176]; // [rsp+60h] [rbp-E8h] BYREF

  memset_0(v15, 0, 0xAAuLL);
  *(_QWORD *)&String.Length = 0LL;
  if ( !a1 || (v10 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL)) == 0 || !*(_QWORD *)(v10 + 48) )
    return (unsigned int)-1073741808;
  if ( a3 )
  {
    String.MaximumLength = 170;
    String.Buffer = (wchar_t *)v15;
    if ( !RtlLCIDToCultureName(a3, &String) )
      return (unsigned int)-1073741823;
  }
  v11 = PiPnpRtlSetObjectProperty(*(_QWORD *)&PiPnpRtlCtx, *(_QWORD *)(v10 + 48), 1LL);
  if ( v11 >= 0 )
  {
    if ( *(_DWORD *)(a2 + 16) != 2 )
      goto LABEL_7;
    v13 = *(_QWORD *)a2 - *(_QWORD *)&INTERRUPT_CONNECTION_DATA_PKEY.fmtid.Data1;
    if ( *(_QWORD *)a2 == *(_QWORD *)&INTERRUPT_CONNECTION_DATA_PKEY.fmtid.Data1 )
      v13 = *(_QWORD *)(a2 + 8) - *(_QWORD *)INTERRUPT_CONNECTION_DATA_PKEY.fmtid.Data4;
    if ( v13 )
      goto LABEL_7;
    v11 = PnpSetInterruptInformation(a1, a7, a6);
  }
  if ( v11 == -1073741275 )
    v11 = -1073741772;
LABEL_7:
  if ( *(int *)(v10 + 300) >= 773 )
    PnpSetDeviceInstancePropertyChangeEvent(v10);
  return (unsigned int)v11;
}
