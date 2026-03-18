/*
 * XREFs of ?RegisterTtmDevice@CTTMDEVICE@@QEAAJPEAVDXGSESSIONDATA@@@Z @ 0x1401FB170
 * Callers:
 *     ?CreateTtmDeviceWorker@DXGSESSIONMGR@@CAXPEAX@Z @ 0x1401FA410 (-CreateTtmDeviceWorker@DXGSESSIONMGR@@CAXPEAX@Z.c)
 *     ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x1403E6C8C (-SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall CTTMDEVICE::RegisterTtmDevice(CTTMDEVICE *this, struct DXGSESSIONDATA *a2)
{
  char v4; // bl
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // r9
  int v8; // eax
  __int64 v9; // rdi
  struct DXGSESSIONDATA **v10; // rdx
  struct DXGSESSIONDATA *v11; // rax
  __int64 v12; // [rsp+20h] [rbp-58h]
  __int64 v13; // [rsp+28h] [rbp-50h]
  _QWORD v14[4]; // [rsp+50h] [rbp-28h] BYREF

  v14[1] = 0LL;
  v14[3] = 0LL;
  if ( *(struct _KTHREAD **)(*((_QWORD *)DXGGLOBAL::GetGlobal() + 122) + 344LL) != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6482;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"DXGGLOBAL::GetGlobal()->GetSessionMgr()->IsTtmDeviceListLockOwner()",
      6482LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 888, 0LL);
  *((_QWORD *)this + 112) = KeGetCurrentThread();
  v4 = *((_BYTE *)this + 912);
  *((_QWORD *)this + 112) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 888, 0LL);
  KeLeaveCriticalRegion();
  if ( v4 )
  {
    WdLogSingleEntry2(4LL, this, -1073741130LL);
    result = 3221226166LL;
    WdLogGlobalForLineNumber = 6503;
  }
  else
  {
    v6 = _InterlockedExchangeAdd((volatile signed __int32 *)this + 156, 1u) & 0x1F;
    *((_DWORD *)this + 2 * v6 + 157) = 0x40000000;
    v14[0] = CTTMDEVICE::CloseCallback;
    *((_DWORD *)this + 2 * (unsigned int)v6 + 158) = MEMORY[0xFFFFF78000000008] / 0x2710uLL;
    v7 = *((unsigned int *)this + 21);
    v14[2] = &CTTMDEVICE::SetDisplayStateCallback;
    v8 = TtmNotifyDeviceArrival(1LL, this, v14, v7, (char *)this + 608);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v10 = (struct DXGSESSIONDATA **)*((_QWORD *)a2 + 2328);
      v11 = (CTTMDEVICE *)((char *)this + 16);
      if ( *v10 != (struct DXGSESSIONDATA *)((char *)a2 + 18616) )
        __fastfail(3u);
      *(_QWORD *)v11 = (char *)a2 + 18616;
      *((_QWORD *)this + 3) = v10;
      *v10 = v11;
      *((_QWORD *)a2 + 2328) = v11;
      *((_QWORD *)this + 4) = a2;
    }
    else
    {
      WdLogSingleEntry3(2LL, *((unsigned int *)this + 20), *((_QWORD *)this + 8), v8);
      v13 = *((_QWORD *)this + 8);
      v12 = *((unsigned int *)this + 20);
      WdLogGlobalForLineNumber = 6532;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to report TTM device for target 0x%I64x on adapter 0x%I64x (Status = 0x%I64x).",
        v12,
        v13,
        v9,
        0LL,
        0LL);
    }
    return (unsigned int)v9;
  }
  return result;
}
