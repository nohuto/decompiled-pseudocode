/*
 * XREFs of ACPIWakeEnableDisableAsyncCallBack @ 0x140032D20
 * Callers:
 *     ACPIWakeDisableAsync @ 0x140031C68 (ACPIWakeDisableAsync.c)
 *     ACPIWakeEnableDisableAsync @ 0x140032750 (ACPIWakeEnableDisableAsync.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x140032D20 (ACPIWakeEnableDisableAsyncCallBack.c)
 * Callees:
 *     AMLIAsyncEvalObject @ 0x140010934 (AMLIAsyncEvalObject.c)
 *     WPP_RECORDER_SF_Lqss @ 0x14001E4C0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x140032D20 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     ACPIWakeEnableDisablePciDevice @ 0x1400330A8 (ACPIWakeEnableDisablePciDevice.c)
 *     WPP_RECORDER_SF_LsLLqss @ 0x140069CF4 (WPP_RECORDER_SF_LsLLqss.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

void __fastcall ACPIWakeEnableDisableAsyncCallBack(__int64 *a1, int a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rbx
  const char *v5; // rbp
  __int64 v6; // rdi
  __int64 v9; // r11
  const char *v10; // r14
  const char *v11; // r10
  __int64 v12; // rax
  KIRQL v13; // al
  _QWORD *v14; // rdx
  KIRQL v15; // r8
  void **v16; // rcx
  __int64 v17; // r14
  __int64 v18; // r12
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r8
  __int64 v23; // r9
  char v24; // r11
  const char *v25; // r14
  const char *v26; // r10
  __int64 v27; // rax
  int v28; // r9d
  int v29; // r8d
  char v30; // cl
  const char *v31; // rax
  int v32; // eax
  int v33; // ecx
  int v34; // eax
  char v35; // cl
  unsigned int v36; // ebx
  const char *v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  int v40; // [rsp+20h] [rbp-A8h]
  _OWORD v41[2]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v42; // [rsp+80h] [rbp-48h]
  KIRQL v45; // [rsp+E8h] [rbp+20h]

  v4 = a4[2];
  v5 = byte_140075488;
  LOBYTE(v6) = 0;
  LOBYTE(v9) = 0;
  v10 = byte_140075488;
  v11 = byte_140075488;
  if ( v4 )
  {
    v12 = *(_QWORD *)(v4 + 8);
    v9 = a4[2];
    if ( (v12 & 0x200000000000LL) != 0 )
    {
      v10 = *(const char **)(v4 + 608);
      if ( (v12 & 0x400000000000LL) != 0 )
        v11 = *(const char **)(v4 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0x11u,
      0x14u,
      (__int64)&WPP_1095886ccac338778821f66e45f1cb69_Traceguids,
      a2,
      v9,
      v10,
      v11);
  v13 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v14 = (_QWORD *)*a4;
  v15 = v13;
  v45 = v13;
  if ( *(_QWORD **)(*a4 + 8LL) != a4 || (v16 = (void **)a4[1], *v16 != a4) )
    __fastfail(3u);
  *v16 = v14;
  v14[1] = v16;
  if ( a2 < 0 )
  {
    v24 = 0;
    v25 = byte_140075488;
    v26 = byte_140075488;
    if ( v4 )
    {
      v27 = *(_QWORD *)(v4 + 8);
      v24 = v4;
      if ( (v27 & 0x200000000000LL) != 0 )
      {
        v25 = *(const char **)(v4 + 608);
        if ( (v27 & 0x400000000000LL) != 0 )
          v26 = *(const char **)(v4 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v28 = *(_DWORD *)(v4 + 552);
      v29 = *((_DWORD *)a4 + 7);
      LOBYTE(v14) = *((_BYTE *)a4 + 24);
      v30 = v28 - v29;
      if ( !(_BYTE)v14 )
        v30 = v28 + v29;
      v31 = "-";
      if ( !(_BYTE)v14 )
        v31 = "+";
      WPP_RECORDER_SF_LsLLqss(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v14,
        v29,
        v28,
        v40,
        v28,
        (__int64)v31,
        v29,
        v30,
        v24,
        (__int64)v25,
        (__int64)v26);
      v15 = v45;
    }
    v32 = *(_DWORD *)(v4 + 552);
    v33 = *((_DWORD *)a4 + 7);
    if ( *((_BYTE *)a4 + 24) )
      v34 = v32 - v33;
    else
      v34 = v33 + v32;
    *(_DWORD *)(v4 + 552) = v34;
  }
  v17 = 0LL;
  v18 = *(_QWORD *)(v4 + 560);
  if ( v18 != v4 + 560 )
    v17 = *(_QWORD *)(v4 + 560);
  KeReleaseSpinLock(&AcpiPowerLock, v15);
  if ( _bittest64((const signed __int64 *)(v4 + 8), 0x3Bu) )
  {
    LOBYTE(v19) = *((_BYTE *)a4 + 24);
    if ( (_BYTE)v19 == 1 )
      ACPIWakeEnableDisablePciDevice(v4, v19, v20, v21);
  }
  ((void (__fastcall *)(__int64 *, _QWORD, __int64, _QWORD))a4[4])(a1, (unsigned int)a2, a3, a4[5]);
  ExFreeToNPagedLookasideList(&XswContextLookAsideList, a4);
  if ( v18 != v4 + 560 )
  {
    v35 = *(_BYTE *)(v17 + 24);
    v42 = 0LL;
    v41[0] = 0LL;
    WORD1(v41[0]) = 1;
    v41[1] = v35 != 0;
    if ( _bittest64((const signed __int64 *)(v4 + 8), 0x3Bu) && !v35 )
      ACPIWakeEnableDisablePciDevice(v4, 0LL, v22, v23);
    v36 = AMLIAsyncEvalObject(a1, 0LL, 1, (__int64)v41, ACPIWakeEnableDisableAsyncCallBack, v17);
    v37 = byte_140075488;
    v38 = *(_QWORD *)(v17 + 16);
    if ( v38 )
    {
      v6 = *(_QWORD *)(v17 + 16);
      v39 = *(_QWORD *)(v38 + 8);
      if ( (v39 & 0x200000000000LL) != 0 )
      {
        v5 = *(const char **)(v6 + 608);
        if ( (v39 & 0x400000000000LL) != 0 )
          v37 = *(const char **)(v6 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x11u,
        0x16u,
        (__int64)&WPP_1095886ccac338778821f66e45f1cb69_Traceguids,
        v36,
        v6,
        v5,
        v37);
    if ( v36 != 259 )
      ACPIWakeEnableDisableAsyncCallBack(a1, v36, 0LL, v17);
  }
}
