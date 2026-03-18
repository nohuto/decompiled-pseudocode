/*
 * XREFs of DxgkLock2Internal @ 0x1402A3F00
 * Callers:
 *     ?ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_K@Z @ 0x140203478 (-ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_.c)
 *     DxgkLock2 @ 0x1402A3430 (DxgkLock2.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?LogEvent@DXGPUSHLOCK@@IEAAXXZ @ 0x140012FC0 (-LogEvent@DXGPUSHLOCK@@IEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1402A4B10 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1402A7430 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z @ 0x1402AC210 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z.c)
 *     ?VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK2@@EII@Z @ 0x1403FB920 (-VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK.c)
 */

__int64 __fastcall DxgkLock2Internal(struct DXGDEVICE *a1, __int64 a2, __int64 a3, struct _D3DKMT_LOCK2 *a4)
{
  D3DKMT_HANDLE hAllocation; // edi
  volatile signed __int32 *v5; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned int v12; // eax
  __int64 v13; // rdx
  int v14; // ecx
  struct DXGALLOCATION *v15; // rdx
  struct _EX_RUNDOWN_REF *v16; // rax
  __int64 v17; // r8
  char v18; // dl
  ULONG_PTR Count; // rcx
  struct DXGDEVICE *v20; // r9
  unsigned int v21; // eax
  unsigned int v22; // ebx
  struct DXGTHREAD *DxgThread; // rax
  __int64 v25; // rdx
  int v26; // ecx
  unsigned int v27; // [rsp+28h] [rbp-50h]
  unsigned int v28; // [rsp+30h] [rbp-48h]
  struct _EX_RUNDOWN_REF *v29; // [rsp+90h] [rbp+18h] BYREF
  struct DXGTHREAD *v30; // [rsp+98h] [rbp+20h] BYREF

  hAllocation = a4->hAllocation;
  v5 = (volatile signed __int32 *)(a3 + 248);
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v5, 0LL) )
  {
    DXGPUSHLOCK::LogEvent((DXGPUSHLOCK *)v5, v10, v11);
    ExAcquirePushLockSharedEx(v5, 0LL);
  }
  _InterlockedIncrement(v5 + 4);
  v12 = (hAllocation >> 6) & 0xFFFFFF;
  if ( v12 < *(_DWORD *)(a3 + 296) )
  {
    v13 = *(_QWORD *)(a3 + 280) + 16LL * v12;
    if ( ((hAllocation >> 25) & 0x60) == (*(_BYTE *)(v13 + 8) & 0x60) && (*(_DWORD *)(v13 + 8) & 0x2000) == 0 )
    {
      v14 = *(_DWORD *)(v13 + 8) & 0x1F;
      if ( v14 )
      {
        if ( v14 == 5 )
        {
          v15 = *(struct DXGALLOCATION **)v13;
          goto LABEL_9;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  v15 = 0LL;
LABEL_9:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v29, v15);
  _InterlockedDecrement(v5 + 4);
  ExReleasePushLockSharedEx(v5, 0LL);
  KeLeaveCriticalRegion();
  v16 = v29;
  if ( !v29 )
  {
    v22 = -1073741811;
    WdLogSingleEntry2(3LL, a4->hAllocation, -1073741811LL);
    WdLogGlobalForLineNumber = 922;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v29);
    return v22;
  }
  v17 = *((_QWORD *)a1 + 2);
  if ( *(_QWORD *)(*(_QWORD *)(v29[1].Count + 16) + 16LL) != *(_QWORD *)(v17 + 16) )
  {
    v22 = -1073741811;
    WdLogSingleEntry3(3LL, a1, v29, -1073741811LL);
    WdLogGlobalForLineNumber = 931;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v29);
    return v22;
  }
  if ( *(_BYTE *)(a2 + 209) )
  {
    v18 = 1;
  }
  else
  {
    if ( !v29[3].Count )
    {
      v22 = -1073741811;
      WdLogSingleEntry3(3LL, a4->hAllocation, v29, -1073741811LL);
      WdLogGlobalForLineNumber = 941;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v29);
      return v22;
    }
    v18 = (*(__int64 (**)(void))(*(_QWORD *)(*(_QWORD *)(v17 + 760) + 8LL) + 1280LL))();
    v16 = v29;
  }
  Count = v16[5].Count;
  if ( Count )
  {
    if ( (*(_DWORD *)(Count + 4) & 3) == 1 && !v18 )
    {
      v25 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL);
      v26 = *(_DWORD *)(v25 + 444);
      if ( (v26 & 0x10) == 0 && (v26 & 8) == 0 && (*(_DWORD *)(v25 + 2468) & 0x80u) == 0 )
      {
        v22 = -1073741811;
        WdLogSingleEntry3(3LL, a1, v16, -1073741811LL);
        WdLogGlobalForLineNumber = 976;
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v29);
        return v22;
      }
    }
  }
  if ( *(_BYTE *)(a2 + 209) )
  {
    v21 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendLock2(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(a2 + 4664),
            (struct DXGPROCESS *)a3,
            a1,
            a4,
            0,
            v27,
            v28);
  }
  else
  {
    v20 = (struct DXGDEVICE *)v16[1].Count;
    if ( v20 != a1 )
    {
      v22 = -1073741811;
      WdLogSingleEntry4(3LL, v16, a1, v20, -1073741811LL);
      WdLogGlobalForLineNumber = 1137;
      goto LABEL_19;
    }
    v21 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, _QWORD, PVOID *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2)
                                                                                                + 760LL)
                                                                                    + 8LL)
                                                                        + 760LL))(
            *(_QWORD *)(*((_QWORD *)a1 + 2) + 768LL),
            v16[3].Count,
            0LL,
            &a4->pData);
  }
  v22 = v21;
LABEL_19:
  if ( v29 )
    ExReleaseRundownProtection(v29 + 11);
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 340) )
  {
    v30 = 0LL;
    if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v30) >= 0 )
    {
      DxgThread = v30;
      if ( v30 || (DxgThread = DxgkThreadObjectCreateDxgThread(1), (v30 = DxgThread) != 0LL) )
      {
        if ( *((_DWORD *)DxgThread + 12) )
        {
          WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)DxgThread + 12), 0LL, 0LL);
          WdLogGlobalForLineNumber = 73;
        }
      }
    }
  }
  return v22;
}
