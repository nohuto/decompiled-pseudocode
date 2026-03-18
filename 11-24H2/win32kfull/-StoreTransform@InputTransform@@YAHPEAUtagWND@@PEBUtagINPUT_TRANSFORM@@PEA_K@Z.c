/*
 * XREFs of ?StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x1401105D4
 * Callers:
 *     EditionUpdateInputTransformFromHitTest @ 0x14010F850 (EditionUpdateInputTransformFromHitTest.c)
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z @ 0x14010FE84 (-OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14002BB10 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14002BCE8 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     _GetTopLevelWindow @ 0x140049F30 (_GetTopLevelWindow.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x140067238 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     ?InitInputTransformList@@YAPEAUtagINPUTTRANSFORMLIST@@PEAUtagWND@@@Z @ 0x140110A1C (-InitInputTransformList@@YAPEAUtagINPUTTRANSFORMLIST@@PEAUtagWND@@@Z.c)
 *     ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x140195C2C (-IsIndependentInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

struct W32_PUSH_LOCK *__fastcall InputTransform::StoreTransform(
        InputTransform *this,
        struct tagWND *a2,
        const struct tagINPUT_TRANSFORM *a3,
        unsigned __int64 *a4)
{
  __int64 v4; // rax
  __int128 v6; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  const struct tagWND *v10; // rcx
  struct tagWND *v11; // rax
  __int64 TopLevelWindow; // rax
  __int64 v13; // rdi
  float *v14; // rcx
  float *v15; // rax
  float v16; // xmm2_4
  struct W32_PUSH_LOCK *result; // rax
  struct W32_PUSH_LOCK *v18; // rbx
  __int64 v19; // rdx
  _DWORD *v20; // rdi
  __int128 v21; // xmm1
  __int128 Source1; // [rsp+30h] [rbp-50h] BYREF
  __int128 v23; // [rsp+40h] [rbp-40h]
  __int128 v24; // [rsp+50h] [rbp-30h]
  __int128 v25; // [rsp+60h] [rbp-20h]

  v4 = *((_QWORD *)this + 5);
  v6 = *((_OWORD *)a2 + 1);
  Source1 = *(_OWORD *)a2;
  v8 = *((_OWORD *)a2 + 2);
  v23 = v6;
  v9 = *((_OWORD *)a2 + 3);
  v24 = v8;
  v25 = v9;
  if ( (*(_DWORD *)(v4 + 288) & 0xF) != 2 )
  {
    v11 = (unsigned int)IsIndependentInputWindow(this) ? GetCompositionInputWindowUIOwner(v10) : this;
    TopLevelWindow = GetTopLevelWindow((__int64)v11);
    v13 = TopLevelWindow;
    if ( TopLevelWindow )
    {
      v14 = *(float **)(TopLevelWindow + 216);
      if ( v14 )
      {
        if ( *v14 != v14[5] )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 343LL);
        if ( *((float *)&Source1 + 2) != 0.0
          || *((float *)&Source1 + 3) != 0.0
          || *((float *)&v23 + 2) != 0.0
          || *((float *)&v23 + 3) != 0.0
          || *(float *)&v24 != 0.0
          || *((float *)&v24 + 1) != 0.0
          || *((float *)&v24 + 2) != 1.0
          || *((float *)&v24 + 3) != 0.0
          || *((float *)&v25 + 2) != 0.0
          || *((float *)&v25 + 3) != 1.0 )
        {
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 355LL);
        }
        *(float *)&Source1 = *(float *)&Source1 / **(float **)(v13 + 216);
        *((float *)&Source1 + 1) = *((float *)&Source1 + 1) / **(float **)(v13 + 216);
        *(float *)&v23 = *(float *)&v23 / **(float **)(v13 + 216);
        *((float *)&v23 + 1) = *((float *)&v23 + 1) / **(float **)(v13 + 216);
        v15 = *(float **)(v13 + 216);
        v16 = v15[13];
        *(float *)&v25 = (float)(*(float *)&v25 - v15[12]) / *v15;
        *((float *)&v25 + 1) = (float)(*((float *)&v25 + 1) - v16) / **(float **)(v13 + 216);
      }
    }
  }
  result = InitInputTransformList(this);
  v18 = result;
  if ( result )
  {
    W32AcquirePushLockExclusiveEx(result, 0);
    v19 = *((_QWORD *)v18 + 1);
    if ( (struct W32_PUSH_LOCK *)v19 == (struct W32_PUSH_LOCK *)((char *)v18 + 8) )
    {
      v20 = (_DWORD *)((char *)v18 + 88);
    }
    else
    {
      if ( a3 && *(_QWORD *)(v19 + 16) == *(_QWORD *)a3 )
        goto LABEL_29;
      v20 = (_DWORD *)((char *)v18 + 88);
      if ( (*((_DWORD *)v18 + 22) & 1) == 0 && RtlCompareMemory(&Source1, (const void *)(v19 + 24), 0x40uLL) == 64 )
        goto LABEL_29;
    }
    *(_OWORD *)((char *)v18 + 24) = Source1;
    *(_OWORD *)((char *)v18 + 40) = v23;
    *(_OWORD *)((char *)v18 + 56) = v24;
    v21 = v25;
    *v20 |= 1u;
    *(_OWORD *)((char *)v18 + 72) = v21;
LABEL_29:
    W32ReleasePushLockExclusiveEx(v18, 0LL);
    return (struct W32_PUSH_LOCK *)1;
  }
  return result;
}
