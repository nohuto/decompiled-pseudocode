/*
 * XREFs of PnpSetDeviceInterfacePropertyData @ 0x1408B6E48
 * Callers:
 *     IoSetDeviceInterfacePropertyData @ 0x1408B6E00 (IoSetDeviceInterfacePropertyData.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PnpUnicodeStringToWstrFree @ 0x1408B7510 (PnpUnicodeStringToWstrFree.c)
 *     PiPnpRtlSetObjectProperty @ 0x1408B84A0 (PiPnpRtlSetObjectProperty.c)
 *     RtlLCIDToCultureName @ 0x140ABA1E0 (RtlLCIDToCultureName.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpSetDeviceInterfacePropertyData(unsigned __int16 *a1, __int64 a2, unsigned int a3)
{
  _WORD *v5; // rsi
  __int64 v6; // r8
  _WORD *v7; // rcx
  unsigned __int64 v8; // rdx
  _WORD *Pool2; // rax
  _WORD *v10; // rbx
  unsigned int v11; // ebx
  _WORD *v13; // rax
  _QWORD v14[2]; // [rsp+50h] [rbp-108h] BYREF
  _BYTE v15[176]; // [rsp+60h] [rbp-F8h] BYREF

  memset_0(v15, 0, 0xAAuLL);
  v14[0] = 0LL;
  v5 = 0LL;
  if ( !a1 || !*((_QWORD *)a1 + 1) || !*a1 )
    return (unsigned int)-1073741811;
  if ( a3 )
  {
    WORD1(v14[0]) = 170;
    v14[1] = v15;
    if ( !(unsigned __int8)RtlLCIDToCultureName(a3, v14) )
      return (unsigned int)-1073741823;
  }
  v6 = a1[1];
  if ( (unsigned __int16)v6 < 2u )
    goto LABEL_15;
  v7 = (_WORD *)*((_QWORD *)a1 + 1);
  if ( !v7 )
    goto LABEL_15;
  v8 = *a1;
  if ( (unsigned __int16)v8 > (unsigned __int16)v6 )
  {
    v11 = -1073741811;
  }
  else
  {
    if ( (_WORD)v8 )
    {
      if ( !*v7
        || (_WORD)v8 == (_WORD)v6 && !v7[((unsigned __int64)*a1 >> 1) - 1]
        || v8 <= v6 - 2 && (!v7[(v8 >> 1) - 1] || !v7[v8 >> 1]) )
      {
        goto LABEL_25;
      }
      Pool2 = (_WORD *)ExAllocatePool2(0x100uLL);
      v10 = Pool2;
      if ( Pool2 )
      {
        memmove(Pool2, *((const void **)a1 + 1), *a1);
        v5 = v10;
        v10[(unsigned __int64)*a1 >> 1] = 0;
LABEL_15:
        v11 = PiPnpRtlSetObjectProperty(*(_QWORD *)&PiPnpRtlCtx, v5, 3LL);
        goto LABEL_16;
      }
    }
    else
    {
      if ( !*v7 )
      {
LABEL_25:
        v5 = (_WORD *)*((_QWORD *)a1 + 1);
        goto LABEL_15;
      }
      v13 = (_WORD *)ExAllocatePool2(0x100uLL);
      if ( v13 )
      {
        *v13 = 0;
        v5 = v13;
        goto LABEL_15;
      }
    }
    v11 = -1073741670;
  }
LABEL_16:
  PnpUnicodeStringToWstrFree(v5, a1);
  if ( v11 == -1073741275 )
    return (unsigned int)-1073741772;
  return v11;
}
