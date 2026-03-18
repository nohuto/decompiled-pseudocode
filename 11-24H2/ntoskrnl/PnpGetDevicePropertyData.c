/*
 * XREFs of PnpGetDevicePropertyData @ 0x140A12000
 * Callers:
 *     IoGetDevicePropertyData @ 0x140A11F10 (IoGetDevicePropertyData.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     _PnpGetObjectProperty @ 0x1408CDFD0 (_PnpGetObjectProperty.c)
 *     PnpCompareInterruptInformation @ 0x140A12D20 (PnpCompareInterruptInformation.c)
 *     RtlLCIDToCultureName @ 0x140ABA1E0 (RtlLCIDToCultureName.c)
 */

__int64 __fastcall PnpGetDevicePropertyData(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        ULONG a5,
        wchar_t *a6,
        ULONG *a7,
        _DWORD *a8)
{
  __int64 v11; // rbx
  const WCHAR *v12; // rax
  unsigned int ObjectProperty; // ebx
  __int64 v15; // rax
  ULONG *v16; // rdx
  __int64 v17; // [rsp+60h] [rbp-108h] BYREF
  const WCHAR *v18; // [rsp+68h] [rbp-100h]
  _BYTE v19[176]; // [rsp+70h] [rbp-F8h] BYREF

  memset_0(v19, 0, 0xAAuLL);
  v17 = 0LL;
  if ( !a1 )
    return (unsigned int)-1073741808;
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  if ( !v11 || !*(_QWORD *)(v11 + 48) )
    return (unsigned int)-1073741808;
  if ( a3 )
  {
    v18 = (const WCHAR *)v19;
    WORD1(v17) = 170;
    if ( !(unsigned __int8)RtlLCIDToCultureName(a3, &v17) )
      return (unsigned int)-1073741823;
    v12 = v18;
  }
  else
  {
    v12 = 0LL;
  }
  ObjectProperty = PnpGetObjectProperty(
                     *(_QWORD **)&PiPnpRtlCtx,
                     *(WCHAR **)(v11 + 48),
                     1u,
                     0LL,
                     v12,
                     a2,
                     a8,
                     a6,
                     a5,
                     (__int64)a7,
                     0);
  if ( *(_DWORD *)(a2 + 16) != 2 )
    goto LABEL_7;
  v15 = *(_QWORD *)a2 - *(_QWORD *)&INTERRUPT_CONNECTION_DATA_PKEY.fmtid.Data1;
  if ( *(_QWORD *)a2 == *(_QWORD *)&INTERRUPT_CONNECTION_DATA_PKEY.fmtid.Data1 )
    v15 = *(_QWORD *)(a2 + 8) - *(_QWORD *)INTERRUPT_CONNECTION_DATA_PKEY.fmtid.Data4;
  if ( v15 )
  {
LABEL_7:
    if ( ObjectProperty != -1073741275 )
      return ObjectProperty;
    return (unsigned int)-1073741772;
  }
  if ( ObjectProperty != -1073741772 && ObjectProperty != -1073741275 )
  {
    if ( !ObjectProperty )
      PnpCompareInterruptInformation(a1, a6, *a7);
    return ObjectProperty;
  }
  v16 = *(ULONG **)(*(_QWORD *)(a1 + 312) + 88LL);
  if ( !v16 )
    return (unsigned int)-1073741772;
  if ( a7 )
    *a7 = *v16;
  if ( a5 >= *v16 )
  {
    memmove(a6, v16 + 1, *v16);
    return 0;
  }
  else
  {
    return (unsigned int)-1073741789;
  }
}
