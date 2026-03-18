/*
 * XREFs of NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1400C44E4
 * Callers:
 *     ACPIInitialize @ 0x1400C4008 (ACPIInitialize.c)
 * Callees:
 *     FreeDataBuffs @ 0x14000E530 (FreeDataBuffs.c)
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x140014164 (AMLIEvalNameSpaceObject.c)
 *     WPP_RECORDER_SF_ @ 0x1400283FC (WPP_RECORDER_SF_.c)
 *     AMLIGetNameSpaceObject @ 0x140028510 (AMLIGetNameSpaceObject.c)
 *     WPP_RECORDER_SF_s @ 0x140042384 (WPP_RECORDER_SF_s.c)
 *     AMLIEvalPackageElement @ 0x14006AB98 (AMLIEvalPackageElement.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NotifyHalWithMachineStatesAndRetrieveInterruptModel(int *a1)
{
  _BYTE *Pool2; // r14
  unsigned int v2; // ebx
  signed int v3; // esi
  __int64 v4; // r13
  __int64 v5; // r15
  void *v6; // rdx
  int v7; // ebx
  bool v8; // zf
  _BYTE *v9; // rdi
  __int64 *v10; // rdi
  char *v11; // rbx
  int v12; // eax
  int *v13; // rsi
  ULONG_PTR BugCheckParameter4; // rdi
  int v15; // eax
  int v17; // [rsp+38h] [rbp-59h] BYREF
  __int64 InputBuffer; // [rsp+40h] [rbp-51h] BYREF
  __int64 v19; // [rsp+48h] [rbp-49h] BYREF
  __int64 v20; // [rsp+50h] [rbp-41h] BYREF
  ULONG_PTR v21; // [rsp+58h] [rbp-39h] BYREF
  int *v22; // [rsp+60h] [rbp-31h]
  __int128 v23; // [rsp+68h] [rbp-29h] BYREF
  __int128 v24; // [rsp+78h] [rbp-19h]
  __int64 v25; // [rsp+88h] [rbp-9h]
  void *Src[5]; // [rsp+90h] [rbp-1h]
  char v27[8]; // [rsp+B8h] [rbp+27h] BYREF

  v22 = a1;
  v25 = 0LL;
  strcpy(v27, "\\_PIC");
  v21 = 0LL;
  Src[0] = "\\_S1";
  v20 = 0LL;
  Src[1] = "\\_S2";
  Src[2] = "\\_S3";
  Src[3] = "\\_S4";
  Src[4] = "\\_S5";
  v23 = 0LL;
  InputBuffer = 0LL;
  v24 = 0LL;
  v19 = 0LL;
  Pool2 = (_BYTE *)ExAllocatePool2(64LL, 15LL, 1299211073LL);
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  v3 = 2;
  AcpiSupportedSystemStates = 98;
  v4 = 0LL;
  do
  {
    v5 = (unsigned __int8)byte_140076E58[v4 * 4];
    v6 = &WPP_8c66e6b15dd83bd6a4675f6d1eaf552a_Traceguids;
    v7 = dword_140076E38[v4];
    if ( v3 == 2 )
    {
      v8 = (AcpiOverrideAttributes & 0x10) == 0;
      goto LABEL_8;
    }
    if ( v3 == 3 )
    {
      v8 = (AcpiOverrideAttributes & 0x20) == 0;
LABEL_8:
      if ( !v8 )
        goto LABEL_17;
      goto LABEL_9;
    }
    if ( v3 == 4 && (AcpiOverrideAttributes & 0x40) != 0 )
    {
LABEL_17:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = 2;
        WPP_RECORDER_SF_s(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)v6,
          6,
          13,
          (__int64)&WPP_8c66e6b15dd83bd6a4675f6d1eaf552a_Traceguids,
          (__int64)Src[v5]);
      }
      Pool2[2 * v5 + v5] = 0;
      if ( v7 )
      {
        HIDWORD(v19) |= v7;
        LODWORD(v19) = 2;
      }
      goto LABEL_31;
    }
LABEL_9:
    if ( (AcpiOverrideAttributes & 4) != 0 && (unsigned int)v3 < 5 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = 2;
        WPP_RECORDER_SF_s(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)v6,
          6,
          14,
          (__int64)&WPP_8c66e6b15dd83bd6a4675f6d1eaf552a_Traceguids,
          (__int64)Src[v5]);
      }
      Pool2[2 * v5 + v5] = 0;
      if ( v7 )
      {
        HIDWORD(v20) |= v7;
        LODWORD(v20) = 9;
      }
      goto LABEL_31;
    }
    if ( !*((_BYTE *)AcpiInformation + 133) || AcpiStrictS4Supported )
    {
      v9 = Src[v5];
      if ( (int)AMLIGetNameSpaceObject(v9, 0LL, &v21, 0) < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v6) = 2;
          WPP_RECORDER_SF_s(
            WPP_GLOBAL_Control->DeviceExtension,
            (_DWORD)v6,
            6,
            15,
            (__int64)&WPP_8c66e6b15dd83bd6a4675f6d1eaf552a_Traceguids,
            (__int64)v9);
        }
        Pool2[2 * v5 + v5] = 0;
        if ( v7 )
        {
          HIDWORD(InputBuffer) |= v7;
          LODWORD(InputBuffer) = 1;
        }
        goto LABEL_31;
      }
      v10 = (__int64 *)v21;
      AcpiSupportedSystemStates |= 1 << v3;
      AMLIEvalPackageElement((__int64 *)v21, 0, (__int64)&v23);
      v11 = &Pool2[2 * v5];
      v11[v5 + 1] = v24;
      dword_140089138 = 0;
      pszDest[0] = 0;
      FreeDataBuffs((__int64)&v23, 1u);
      AMLIEvalPackageElement(v10, 1u, (__int64)&v23);
      v11[v5 + 2] = v24;
      dword_140089138 = 0;
      pszDest[0] = 0;
      FreeDataBuffs((__int64)&v23, 1u);
      AMLIDereferenceHandleEx((__int64)v10);
      v21 = 0LL;
    }
    v12 = AcpiSupportedSystemStates;
    if ( _bittest(&v12, v3) )
      Pool2[2 * v5 + v5] = 1;
LABEL_31:
    ++v3;
    ++v4;
  }
  while ( v3 <= 6 );
  if ( *((_BYTE *)AcpiInformation + 133) && (AcpiSupportedSystemStates & 0xFFFFFF9D) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v6,
        22,
        16,
        (__int64)&WPP_8c66e6b15dd83bd6a4675f6d1eaf552a_Traceguids);
    }
    KeBugCheckEx(0xA5u, 0x11uLL, 0xDuLL, 0LL, 0LL);
  }
  if ( (_DWORD)InputBuffer )
    ZwPowerInformation(SystemPowerLoggingEntry, &InputBuffer, 8u, 0LL, 0);
  if ( (_DWORD)v19 )
    ZwPowerInformation(SystemPowerLoggingEntry, &v19, 8u, 0LL, 0);
  if ( (_DWORD)v20 )
    ZwPowerInformation(SystemPowerLoggingEntry, &v20, 8u, 0LL, 0);
  v17 = 0;
  (*(void (__fastcall **)(_BYTE *, int *))(PmHalDispatchTable + 16))(Pool2, &v17);
  ExFreePoolWithTag(Pool2, 0);
  if ( v17 == 1 || v17 == 2 || (unsigned int)(v17 - 3) < 2 )
  {
    v13 = v22;
    *v22 = v17;
  }
  else
  {
    v13 = v22;
    *v22 = 4096;
  }
  if ( (int)AMLIGetNameSpaceObject(v27, 0LL, &v21, 0) >= 0 )
  {
    BugCheckParameter4 = v21;
    v23 = 0LL;
    v25 = 0LL;
    WORD1(v23) = 1;
    v24 = (unsigned __int64)v17;
    v15 = AMLIEvalNameSpaceObject((__int64 *)v21, 0LL, 1, (__int64)&v23);
    v2 = v15;
    if ( v15 < 0 )
      KeBugCheckEx(0xA5u, 0x2001uLL, *v13, v15, BugCheckParameter4);
    AMLIDereferenceHandleEx(BugCheckParameter4);
  }
  else
  {
    return 0;
  }
  return v2;
}
