/*
 * XREFs of ACPIDevicePowerDetermineSupportedDeviceStates @ 0x1400BAA18
 * Callers:
 *     ACPISystemPowerUpdateDeviceCapabilities @ 0x1400444A4 (ACPISystemPowerUpdateDeviceCapabilities.c)
 * Callees:
 *     AMLIIsNamedChildPresent @ 0x140029050 (AMLIIsNamedChildPresent.c)
 *     WPP_RECORDER_SF_qss @ 0x14003E0C4 (WPP_RECORDER_SF_qss.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 */

__int64 __fastcall ACPIDevicePowerDetermineSupportedDeviceStates(ULONG_PTR BugCheckParameter2, _DWORD *a2, int *a3)
{
  int v3; // esi
  int v4; // edi
  int v8; // ebp
  int *v9; // r14
  int v10; // ebp
  int *v11; // r14
  char v12; // al
  __int64 v13; // rdx
  const char *v14; // rax
  const char *v15; // r8
  __int64 v16; // rdx
  const char *v17; // rax
  const char *v18; // r8
  __int64 v19; // rdx
  const char *v20; // rax
  const char *v21; // r8
  int v23; // [rsp+40h] [rbp-68h] BYREF
  _DWORD v24[2]; // [rsp+44h] [rbp-64h] BYREF
  _DWORD v25[4]; // [rsp+50h] [rbp-58h] BYREF

  v3 = 0;
  v23 = 810700895;
  *a2 = 0;
  v4 = 0;
  *a3 = 0;
  qmemcpy(v24, "_PR1_PR2", sizeof(v24));
  qmemcpy(v25, "_PS0_PS1_PS2_PS3", sizeof(v25));
  if ( _bittest64((const signed __int64 *)(BugCheckParameter2 + 8), 0x33u) )
  {
    v4 = 18;
LABEL_35:
    *a2 = v3;
    *a3 = v4;
    return 0LL;
  }
  v8 = 1;
  v9 = v25;
  do
  {
    if ( AMLIIsNamedChildPresent(*(__int64 **)(BugCheckParameter2 + 760), *v9) )
      v4 |= 1 << v8;
    ++v8;
    ++v9;
  }
  while ( v8 <= 4 );
  v10 = 1;
  v11 = &v23;
  do
  {
    if ( AMLIIsNamedChildPresent(*(__int64 **)(BugCheckParameter2 + 760), *v11) )
      v3 |= (1 << v10) | 0x10;
    ++v10;
    ++v11;
  }
  while ( v10 <= 3 );
  v12 = v3 | v4;
  if ( v3 | v4 )
  {
    if ( (v12 & 2) == 0 )
    {
      v13 = *(_QWORD *)(BugCheckParameter2 + 8);
      v14 = byte_140075488;
      v15 = byte_140075488;
      if ( (v13 & 0x200000000000LL) != 0 )
      {
        v14 = *(const char **)(BugCheckParameter2 + 608);
        if ( (v13 & 0x400000000000LL) != 0 )
          v15 = *(const char **)(BugCheckParameter2 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xAu,
          0x25u,
          (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
          BugCheckParameter2,
          v14,
          v15);
      KeBugCheckEx(0xA5u, 0xDuLL, BugCheckParameter2, (-(__int64)(v3 != 0) & 0xFFFFFFFFFFFF0000uLL) + 810766431, 0LL);
    }
    if ( (v12 & 0x10) == 0 )
    {
      v16 = *(_QWORD *)(BugCheckParameter2 + 8);
      v17 = byte_140075488;
      v18 = byte_140075488;
      if ( (v16 & 0x200000000000LL) != 0 )
      {
        v17 = *(const char **)(BugCheckParameter2 + 608);
        if ( (v16 & 0x400000000000LL) != 0 )
          v18 = *(const char **)(BugCheckParameter2 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xAu,
          0x26u,
          (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
          BugCheckParameter2,
          v17,
          v18);
      KeBugCheckEx(0xA5u, 0xDuLL, BugCheckParameter2, 0x3353505FuLL, 0LL);
    }
    if ( v3 && v4 && v3 != v4 )
    {
      v19 = *(_QWORD *)(BugCheckParameter2 + 8);
      v20 = byte_140075488;
      v21 = byte_140075488;
      if ( (v19 & 0x200000000000LL) != 0 )
      {
        v20 = *(const char **)(BugCheckParameter2 + 608);
        if ( (v19 & 0x400000000000LL) != 0 )
          v21 = *(const char **)(BugCheckParameter2 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xAu,
          0x27u,
          (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
          BugCheckParameter2,
          v20,
          v21);
      v3 &= v4;
      v4 &= v3;
    }
    goto LABEL_35;
  }
  return 0LL;
}
