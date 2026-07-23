/*
 * XREFs of PnpSetDevicePropertyData @ 0x1409552E4
 * Callers:
 *     IoSetDevicePropertyData @ 0x1409551E0 (IoSetDevicePropertyData.c)
 * Callees:
 *     PnpSetDeviceInstancePropertyChangeEvent @ 0x140487C5C (PnpSetDeviceInstancePropertyChangeEvent.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PnpSetInterruptInformation @ 0x1407186EC (PnpSetInterruptInformation.c)
 *     PiPnpRtlSetObjectProperty @ 0x140955470 (PiPnpRtlSetObjectProperty.c)
 *     RtlLCIDToCultureName @ 0x140AB5EA0 (RtlLCIDToCultureName.c)
 */

__int64 __fastcall PnpSetDevicePropertyData(
        __int64 a1,
        __int64 a2,
        LCID a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        const void *a7)
{
  __int64 v10; // rdi
  wchar_t *Buffer; // rcx
  int v12; // ebx
  __int64 v14; // rax
  UNICODE_STRING String; // [rsp+50h] [rbp-F8h] BYREF
  _BYTE v16[176]; // [rsp+60h] [rbp-E8h] BYREF

  memset_0(v16, 0, 0xAAuLL);
  *(_QWORD *)&String.Length = 0LL;
  if ( !a1 || (v10 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL)) == 0 || !*(_QWORD *)(v10 + 48) )
    return (unsigned int)-1073741808;
  if ( a3 )
  {
    String.MaximumLength = 170;
    String.Buffer = (wchar_t *)v16;
    if ( !RtlLCIDToCultureName(a3, &String) )
      return (unsigned int)-1073741823;
    Buffer = String.Buffer;
  }
  else
  {
    Buffer = 0LL;
  }
  v12 = PiPnpRtlSetObjectProperty(
          *(_QWORD *)&PiPnpRtlCtx,
          *(_QWORD *)(v10 + 48),
          1LL,
          0LL,
          Buffer,
          a2,
          a5,
          a7,
          a6,
          0,
          *(_DWORD *)&String.Length);
  if ( v12 >= 0 )
  {
    if ( *(_DWORD *)(a2 + 16) != 2 )
      goto LABEL_8;
    v14 = *(_QWORD *)a2 - *(_QWORD *)&INTERRUPT_CONNECTION_DATA_PKEY.fmtid.Data1;
    if ( *(_QWORD *)a2 == *(_QWORD *)&INTERRUPT_CONNECTION_DATA_PKEY.fmtid.Data1 )
      v14 = *(_QWORD *)(a2 + 8) - *(_QWORD *)INTERRUPT_CONNECTION_DATA_PKEY.fmtid.Data4;
    if ( v14 )
      goto LABEL_8;
    v12 = PnpSetInterruptInformation(a1, a7, a6);
  }
  if ( v12 == -1073741275 )
    v12 = -1073741772;
LABEL_8:
  if ( *(int *)(v10 + 300) >= 773 )
    PnpSetDeviceInstancePropertyChangeEvent(v10);
  return (unsigned int)v12;
}
