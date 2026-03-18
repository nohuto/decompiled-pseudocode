/*
 * XREFs of HalpApicRegisterIoUnit @ 0x140568EA8
 * Callers:
 *     HalpApicDiscover @ 0x140568634 (HalpApicDiscover.c)
 * Callees:
 *     HalRegisterPermanentAddressUsage @ 0x14055FED0 (HalRegisterPermanentAddressUsage.c)
 *     HalpInterruptRegisterController @ 0x140562AC0 (HalpInterruptRegisterController.c)
 *     HalpApicGetCpuInfo @ 0x140568864 (HalpApicGetCpuInfo.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

NTSTATUS __fastcall HalpApicRegisterIoUnit(LARGE_INTEGER PhysicalAddress, int a2, int a3)
{
  int v6; // ebx
  NTSTATUS result; // eax
  __int128 v8; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v9; // [rsp+30h] [rbp-D0h]
  __int128 v10; // [rsp+40h] [rbp-C0h]
  _DWORD v11[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 (__fastcall *v12)(__int64, __int64, int, int, unsigned int, unsigned int *); // [rsp+58h] [rbp-A8h]
  __int64 (__fastcall *v13)(__int64); // [rsp+60h] [rbp-A0h]
  __int64 (__fastcall *v14)(_QWORD, _QWORD); // [rsp+68h] [rbp-98h]
  __int64 (__fastcall *v15)(__int64, __int64, __int64, __int64); // [rsp+70h] [rbp-90h]
  __int64 (__fastcall *v16)(__int64, __int64, __int64, __int64); // [rsp+78h] [rbp-88h]
  __int64 (__fastcall *v17)(); // [rsp+88h] [rbp-78h]
  __int64 (__fastcall *v18)(); // [rsp+98h] [rbp-68h]
  __int64 v19; // [rsp+A0h] [rbp-60h]
  __int64 (__fastcall *v20)(__int64, _DWORD *, __int64); // [rsp+A8h] [rbp-58h]
  __int64 (__fastcall *v21)(__int64, __int64, __m128i *, __int64, _DWORD *); // [rsp+B0h] [rbp-50h]
  __int64 (__fastcall *v22)(); // [rsp+B8h] [rbp-48h]
  __int64 (__fastcall *v23)(__int64, _DWORD *, unsigned __int64 *, _QWORD *); // [rsp+C0h] [rbp-40h]
  __int64 (__fastcall *v24)(__int64, _DWORD *, _DWORD *, char); // [rsp+C8h] [rbp-38h]
  __int64 (__fastcall *v25)(); // [rsp+D0h] [rbp-30h]
  __int64 (__fastcall *v26)(); // [rsp+D8h] [rbp-28h]
  __int64 (*v27)(); // [rsp+E0h] [rbp-20h]
  __int64 (__fastcall *v28)(__int64, __int64, _DWORD *, _BYTE *); // [rsp+F0h] [rbp-10h]
  __int64 (__fastcall *v29)(__int64, __int64, unsigned __int8); // [rsp+100h] [rbp+0h]
  __int128 *v30; // [rsp+128h] [rbp+28h]
  int v31; // [rsp+130h] [rbp+30h]
  int v32; // [rsp+134h] [rbp+34h]
  int v33; // [rsp+138h] [rbp+38h]
  int v34; // [rsp+13Ch] [rbp+3Ch]
  int v35; // [rsp+140h] [rbp+40h]
  int v36; // [rsp+144h] [rbp+44h]
  int v37; // [rsp+148h] [rbp+48h]
  int v38; // [rsp+14Ch] [rbp+4Ch]
  char v39; // [rsp+180h] [rbp+80h] BYREF
  char v40; // [rsp+188h] [rbp+88h] BYREF
  char v41; // [rsp+190h] [rbp+90h] BYREF
  char v42; // [rsp+198h] [rbp+98h] BYREF

  v41 = 0;
  v39 = 0;
  v42 = 0;
  v40 = 0;
  memset_0(v11, 0, 0x100uLL);
  v6 = v34;
  v8 = 0LL;
  v30 = &v8;
  v9 = 0LL;
  v11[0] = 1;
  v10 = 0LL;
  v11[1] = 256;
  v31 = 48;
  v32 = 2;
  v33 = a2;
  if ( HalpApicX2Mode )
  {
    v24 = HalpApicConvertId;
    v36 = 16;
    v37 = 0xFFFF;
    if ( !HalpApicGuestX2Mode )
      v6 = v34 | 0x100;
    if ( HalpApicGetCpuInfo((__int64)&v41, (__int64)&v42, (__int64)&v39, (__int64)&v40) )
    {
      if ( v40 == 2 )
      {
        if ( v41 != 6 || v39 != 47 )
          goto LABEL_12;
        v37 = 255;
      }
      if ( v40 == 1 )
      {
        HalpApicDirectedEndOfInterruptModeEnabled = 1;
        v6 |= 0x400u;
        v29 = HalpApicDirectedEndOfInterrupt;
      }
    }
  }
  else
  {
    v36 = 4;
    v17 = HalpApicSetLogicalId;
    v6 = v34 | 4;
    v37 = 15;
  }
LABEL_12:
  v38 = 96;
  v12 = HalpApicInitializeLocalUnit;
  v34 = v6 | 0xFB;
  v27 = HalpApicDeinitializeLocalUnit;
  v35 = 15;
  v13 = HalpApicInitializeIoUnit;
  *(LARGE_INTEGER *)&v8 = PhysicalAddress;
  v14 = HalpApicSetPriority;
  v15 = HalpApicGetLocalUnitError;
  v16 = HalpApicClearLocalUnitError;
  v18 = HalpApicWriteEndOfInterrupt;
  v19 = HalpApicEndOfInterrupt;
  v20 = HalpApicSetLineState;
  v21 = HalpApicRequestInterrupt;
  v22 = HalpApicStartProcessor;
  v23 = HalpApicGenerateMessage;
  v25 = HalpApicSaveLocalInterrupts;
  v26 = HalpApicReplayLocalInterrupts;
  v28 = HalpApicQueryAndGetSource;
  DWORD2(v8) = a2;
  HIDWORD(v9) = a3;
  result = HalRegisterPermanentAddressUsage(PhysicalAddress, 0x400u);
  if ( result >= 0 )
    return HalpInterruptRegisterController((__int64)v11);
  return result;
}
