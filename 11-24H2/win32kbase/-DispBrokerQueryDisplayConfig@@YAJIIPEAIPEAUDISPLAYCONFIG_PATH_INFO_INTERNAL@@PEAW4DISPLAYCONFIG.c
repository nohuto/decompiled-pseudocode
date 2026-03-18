/*
 * XREFs of ?DispBrokerQueryDisplayConfig@@YAJIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@_N@Z @ 0x1401A8A8C
 * Callers:
 *     DrvGetDisplayConfigBufferSizesAndLeaveUserCrit @ 0x140023600 (DrvGetDisplayConfigBufferSizesAndLeaveUserCrit.c)
 *     DrvQueryDisplayConfigAndLeaveUserCrit @ 0x140023794 (DrvQueryDisplayConfigAndLeaveUserCrit.c)
 *     DrvGetDisplayConfigBufferSizesInternal @ 0x1400C8194 (DrvGetDisplayConfigBufferSizesInternal.c)
 *     DrvQueryDisplayConfigInternal @ 0x1400C82C8 (DrvQueryDisplayConfigInternal.c)
 * Callees:
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x1400183CC (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     DrvSampleDisplayState @ 0x1400C8DA0 (DrvSampleDisplayState.c)
 *     ??$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU?$AlpcRequest@$07@1@PEA_KPEAU?$AlpcReply@$07@1@@Z @ 0x1400C9970 (--$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU-$AlpcRequest@$07@1@PEA_KPEAU-$AlpcRepl.c)
 *     DrvLogAndUpdateQDCCacheForDatabaseQuery @ 0x1401CB194 (DrvLogAndUpdateQDCCacheForDatabaseQuery.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 *     memset @ 0x14023F500 (memset.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

__int64 __fastcall DispBrokerQueryDisplayConfig(
        __int64 a1,
        int a2,
        unsigned int *a3,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a4,
        enum DISPLAYCONFIG_TOPOLOGY_ID *a5)
{
  unsigned int v7; // ebx
  __int64 DxgkWin32kInterface; // rax
  __int64 result; // rax
  __int64 v10; // rbx
  ULONG TimeIncrement; // eax
  __int64 v12; // rcx
  unsigned int v13; // esi
  __int64 v14; // r12
  unsigned __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 UserSessionState; // rax
  int v19; // ebx
  __int64 v20; // rax
  unsigned int v21; // edx
  int v22; // [rsp+40h] [rbp-89h]
  int v23; // [rsp+44h] [rbp-85h] BYREF
  int v24; // [rsp+48h] [rbp-81h]
  unsigned __int64 v25; // [rsp+50h] [rbp-79h] BYREF
  _DWORD v26[24]; // [rsp+60h] [rbp-69h] BYREF

  v23 = 0;
  v24 = a2;
  v7 = a1;
  v22 = a1;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1);
  result = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, struct DISPLAYCONFIG_PATH_INFO_INTERNAL *, enum DISPLAYCONFIG_TOPOLOGY_ID *, int *))(DxgkWin32kInterface + 800))(
             v7,
             a3,
             a4,
             a5,
             &v23);
  if ( (int)result < 0 )
  {
    v10 = MEMORY[0xFFFFF78000000320];
    TimeIncrement = KeQueryTimeIncrement();
    v13 = *a3;
    v14 = v10 * TimeIncrement;
    if ( !a4 )
    {
      *a3 = 0;
      v13 = 5;
    }
    v15 = 216LL * v13 + 96;
    v25 = v15;
    if ( v15 >= 0x7FFF )
      return 2147483653LL;
    v16 = Win32AllocPoolWithQuotaZInitImpl(v12, v15, 0x44535042u);
    if ( !v16 )
      return 3221225495LL;
    memset(v26, 0, sizeof(v26));
    v26[10] = 8;
    v26[11] = 1;
    if ( (int)DrvSampleDisplayState((__int64)&v26[12]) >= 0 )
    {
      v26[0] = 6291512;
      LOWORD(v26[1]) = 0x8000;
      v26[20] = v22;
      v26[21] = v13;
      v26[22] = 1;
    }
    UserSessionState = W32GetUserSessionState(v17);
    v19 = DispBroker::DispBrokerClient::SyncMessage<8>(
            *(_QWORD *)(UserSessionState + 57056),
            (int)v26,
            (__int64)&v25,
            v16);
    if ( v19 < 0 )
    {
      if ( v19 == -1073741789 )
        v19 = -1073741823;
    }
    else
    {
      v19 = *(_DWORD *)(v16 + 80);
      if ( v19 >= 0 )
      {
        v20 = *(unsigned int *)(v16 + 84);
        if ( (unsigned int)v20 > v13 || v25 < 216 * v20 + 96 )
          v19 = -1073741762;
      }
    }
    if ( !a4 && v19 == -1073741789 )
      goto LABEL_29;
    if ( v19 < 0 )
    {
      v21 = 0;
      if ( v19 == -1073741789 )
        v21 = v13;
    }
    else
    {
      v21 = *(_DWORD *)(v16 + 84);
    }
    DrvLogAndUpdateQDCCacheForDatabaseQuery(v23, v19, v22, v24, v21, v16 + 96, *(_DWORD *)(v16 + 88), v14);
    if ( v19 >= 0 )
    {
      *a3 = *(_DWORD *)(v16 + 84);
      if ( a4 )
      {
        memmove(a4, (const void *)(v16 + 96), 216LL * *(unsigned int *)(v16 + 84));
        if ( a5 )
          *(_DWORD *)a5 = *(_DWORD *)(v16 + 88);
      }
      else
      {
        v19 = -1073741789;
      }
      goto LABEL_30;
    }
    if ( v19 == -1073741789 )
LABEL_29:
      *a3 = *(_DWORD *)(v16 + 84);
LABEL_30:
    GreDeleteFastMutex((char *)v16);
    return (unsigned int)v19;
  }
  return result;
}
