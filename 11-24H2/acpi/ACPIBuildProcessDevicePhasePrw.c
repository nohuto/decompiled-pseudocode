/*
 * XREFs of ACPIBuildProcessDevicePhasePrw @ 0x1400213A0
 * Callers:
 *     <none>
 * Callees:
 *     FreeDataBuffs @ 0x14000E530 (FreeDataBuffs.c)
 *     AMLIAsyncEvalObject @ 0x140010934 (AMLIAsyncEvalObject.c)
 *     ACPIGpeValidIndex @ 0x1400198C8 (ACPIGpeValidIndex.c)
 *     AMLIGetNamedChild @ 0x14001D630 (AMLIGetNamedChild.c)
 *     ACPIBuildCompleteMustSucceed @ 0x14001E380 (ACPIBuildCompleteMustSucceed.c)
 *     WPP_RECORDER_SF_Lqss @ 0x14001E4C0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIBuildDevicePowerNodes @ 0x140020F04 (ACPIBuildDevicePowerNodes.c)
 *     ACPIWriteEventLogEntry @ 0x140053A50 (ACPIWriteEventLogEntry.c)
 *     ACPIBuildWakeEventDeviceContext @ 0x14005A504 (ACPIBuildWakeEventDeviceContext.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     memset @ 0x140070F40 (memset.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhasePrw(__int64 a1)
{
  ULONG_PTR v1; // rdi
  __int64 v2; // r13
  char v4; // si
  int v5; // r15d
  _DWORD *v6; // rbx
  __int64 *v7; // rcx
  __int64 v8; // rbx
  __int16 v9; // ax
  __int64 v10; // rdx
  const char *v11; // rax
  const char *v12; // r8
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  int v15; // eax
  unsigned __int8 v16; // cl
  unsigned int v17; // ebx
  int v18; // esi
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  unsigned __int8 v21; // r8
  __int64 *v22; // rbx
  int v23; // r8d
  __int64 v24; // rdx
  const char *v25; // rax
  const char *v26; // r8
  _QWORD v28[16]; // [rsp+50h] [rbp-B8h] BYREF

  v1 = *(_QWORD *)(a1 + 40);
  v2 = a1 + 80;
  *(_DWORD *)(a1 + 32) = 18;
  v4 = 0;
  v5 = 0;
  if ( *(_QWORD *)(v1 + 456) )
  {
    if ( *(_QWORD *)(a1 + 56) )
    {
      dword_1400890B8 = 0;
      pszDest = 0;
      FreeDataBuffs(a1 + 80, 1u);
    }
  }
  else
  {
    v6 = (_DWORD *)(v1 + 600);
    v7 = AMLIGetNamedChild(*(__int64 **)(v1 + 760), 1465074783);
    if ( v7 )
      *v6 |= 0x40u;
    else
      v7 = AMLIGetNamedChild(*(__int64 **)(v1 + 760), 1465077855);
    *(_QWORD *)(v1 + 456) = v7;
    if ( !*(_QWORD *)(a1 + 56) )
    {
      if ( (*v6 & 0x40) == 0 )
        goto LABEL_51;
      _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x10000uLL);
      _InterlockedOr64((volatile signed __int64 *)(v1 + 1120), 0x400000000uLL);
    }
    if ( *(_QWORD *)(a1 + 56) )
    {
      if ( (AcpiOverrideAttributes & 8) != 0 && !_bittest64((const signed __int64 *)(v1 + 8), 0x23u) )
        v4 = 1;
      if ( *(_WORD *)(v2 + 2) != 4 )
        ACPIWriteEventLogEntry(3221553168LL, 0LL, 0LL);
      v5 = ACPIBuildDevicePowerNodes(v1, *(_QWORD *)(a1 + 56), v2, 0);
      KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
      v8 = *(_QWORD *)(v2 + 32);
      v9 = *(_WORD *)(v8 + 10);
      if ( v9 != 1 )
      {
        if ( v9 != 4 )
          KeBugCheckEx(0xA5u, 4uLL, v1, *(_QWORD *)(a1 + 56), *(unsigned __int16 *)(v8 + 10));
        v5 = ACPIBuildWakeEventDeviceContext(v1, v8 + 8);
        if ( v5 < 0 )
        {
          v10 = *(_QWORD *)(v1 + 8);
          v11 = byte_1400753E8;
          v12 = byte_1400753E8;
          if ( (v10 & 0x200000000000LL) != 0 )
          {
            v11 = *(const char **)(v1 + 608);
            if ( (v10 & 0x400000000000LL) != 0 )
              v12 = *(const char **)(v1 + 616);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Lqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              0xAu,
              0x2Bu,
              (__int64)&WPP_a066bce47e7f3a3d1099cda73e5d7dd3_Traceguids,
              v5,
              v1,
              v11,
              v12);
          KeBugCheckEx(0xA5u, 6uLL, v1, *(_QWORD *)(a1 + 56), *(unsigned __int16 *)(v8 + 10));
        }
      }
      v13 = *(_QWORD *)(v2 + 32);
      if ( *(_WORD *)(v13 + 50) != 1 )
        KeBugCheckEx(0xA5u, 4uLL, v1, *(_QWORD *)(a1 + 56), *(unsigned __int16 *)(v13 + 50));
      if ( !v4 )
      {
        *(_DWORD *)(v1 + 504) = *(_DWORD *)(v8 + 24);
        v14 = *(_QWORD *)(v13 + 64);
        if ( v14 < 6 )
          v15 = SystemPowerStateTranslation[v14];
        else
          v15 = 0;
        *(_DWORD *)(v1 + 536) = v15;
        _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x10000uLL);
        if ( *((_BYTE *)AcpiInformation + 133) )
        {
          _InterlockedOr64((volatile signed __int64 *)(v1 + 1120), 0x100000000uLL);
        }
        else
        {
          v20 = *(_QWORD *)(v1 + 1120);
          if ( (v20 & 0x800000000LL) != 0 )
          {
            if ( (v20 & 0x100000000LL) == 0 )
              KeBugCheckEx(0xA5u, 0x1000DuLL, v1, 0LL, 0LL);
            if ( *(_QWORD *)(v8 + 24) != 0xFFFFFFFFLL )
              KeBugCheckEx(0xA5u, 0x1000DuLL, v1, 1uLL, 0LL);
          }
        }
      }
      KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
      if ( !*((_BYTE *)AcpiInformation + 133)
        && !_bittest64((const signed __int64 *)(v1 + 1120), 0x20u)
        && ACPIGpeValidIndex(*(_DWORD *)(v8 + 24)) )
      {
        v17 = v16;
        v18 = 1 << (v16 % 8);
        KeAcquireSpinLockAtDpcLevel(&GpeTableLock);
        v19 = (unsigned __int64)v17 >> 3;
        if ( ((unsigned __int8)v18 & *((_BYTE *)GpeEnable + v19)) != 0 )
        {
          if ( _bittest64((const signed __int64 *)(v1 + 8), 0x23u) )
          {
            *((_BYTE *)GpeSpecialHandler + v19) |= v18;
            v21 = *((_BYTE *)GpeWakeHandler + v19);
            if ( (v21 & (unsigned __int8)v18) != 0 )
              *((_BYTE *)GpeWakeHandler + v19) = v21 & ~(_BYTE)v18;
          }
          else if ( ((unsigned __int8)v18 & *((_BYTE *)GpeSpecialHandler + v19)) == 0 )
          {
            *((_BYTE *)GpeWakeHandler + v19) |= v18;
          }
        }
        KeReleaseSpinLockFromDpcLevel(&GpeTableLock);
      }
    }
    dword_1400890B8 = 0;
    pszDest = 0;
    FreeDataBuffs(v2, 1u);
    v22 = *(__int64 **)(v1 + 456);
    if ( v22 )
    {
      memset(v28, 0, 0x78uLL);
      v23 = *(_DWORD *)(v1 + 600) & 0x40;
      WORD1(v28[0]) = 1;
      v28[2] = 0LL;
      WORD1(v28[5]) = 1;
      v28[7] = 0LL;
      WORD1(v28[10]) = 1;
      v28[12] = 0LL;
      AMLIAsyncEvalObject(v22, 0LL, (v23 | 0x20u) >> 5, (__int64)v28, 0LL, 0LL);
    }
  }
LABEL_51:
  v24 = *(_QWORD *)(v1 + 8);
  v25 = byte_1400753E8;
  v26 = byte_1400753E8;
  if ( (v24 & 0x200000000000LL) != 0 )
  {
    v25 = *(const char **)(v1 + 608);
    if ( (v24 & 0x400000000000LL) != 0 )
      v26 = *(const char **)(v1 + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x2Cu,
      (__int64)&WPP_a066bce47e7f3a3d1099cda73e5d7dd3_Traceguids,
      v5,
      v1,
      v25,
      v26);
  ACPIBuildCompleteMustSucceed(0LL, v5, 0LL, a1);
  return (unsigned int)v5;
}
