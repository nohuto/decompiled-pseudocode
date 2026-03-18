/*
 * XREFs of ?DestroyPeriodicFrameNotification@BLTQUEUE@@QEAAJPEA_K@Z @ 0x140281C94
 * Callers:
 *     ?DestroyPeriodicFrameNotification@DXGSYNCOBJECT@@QEAAXXZ @ 0x1402FAC14 (-DestroyPeriodicFrameNotification@DXGSYNCOBJECT@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14000CAD0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x140022C10 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?VidSchSignalSyncObjectsFromCpu@VIDSCH_EXPORT@@QEAAJIPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_K@Z @ 0x14004F184 (-VidSchSignalSyncObjectsFromCpu@VIDSCH_EXPORT@@QEAAJIPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGN.c)
 *     ?RemovePending@DXGADAPTER@@QEBAHXZ @ 0x1400674A8 (-RemovePending@DXGADAPTER@@QEBAHXZ.c)
 */

__int64 __fastcall BLTQUEUE::DestroyPeriodicFrameNotification(struct _KTHREAD **this, unsigned __int64 **a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdi
  unsigned __int64 i; // rdx
  __int64 v7; // rdi
  struct _KTHREAD *v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // rax
  struct _KTHREAD *v11; // r8
  unsigned __int64 *v13; // [rsp+20h] [rbp-68h]
  unsigned __int64 *v14; // [rsp+20h] [rbp-68h]
  _BYTE v15[8]; // [rsp+50h] [rbp-38h] BYREF
  DXGPUSHLOCK *v16; // [rsp+58h] [rbp-30h]
  int v17; // [rsp+60h] [rbp-28h]
  unsigned __int64 v18; // [rsp+90h] [rbp+8h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v15, this + 373, 0);
  DXGPUSHLOCK::AcquireExclusive(v16);
  v4 = 0;
  v17 = 2;
  v5 = 0LL;
  for ( i = 0LL; ; i += 64LL )
  {
    if ( i >= 0x200 )
    {
      WdLogSingleEntry1(2LL, *a2);
      v14 = *a2;
      WdLogGlobalForLineNumber = 4662;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to destroy dod periodic frame notification id: %lu",
        (__int64)v14,
        0LL,
        0LL,
        0LL,
        0LL);
      v4 = -1073741811;
      goto LABEL_13;
    }
    if ( *(unsigned __int64 **)((char *)this[379] + i + 48) == *a2 )
      break;
    ++v5;
  }
  _mm_lfence();
  v7 = v5 << 6;
  *((_BYTE *)this[379] + v7 + 56) = 1;
  *((_BYTE *)this[379] + v7 + 57) = 0;
  v8 = this[379];
  --*((_DWORD *)this + 756);
  ExCancelTimer(*(_QWORD *)((char *)v8 + v7), 0LL);
  v9 = *(_QWORD *)((char *)this[379] + v7 + 16);
  if ( *(_DWORD *)(v9 + 200) != 1 && !DXGADAPTER::RemovePending(*(DXGADAPTER **)((char *)this[379] + v7 + 16)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4633;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"pSyncAdapter->IsActive() || pSyncAdapter->RemovePending()",
      4633LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v10 = *(_QWORD *)(v9 + 3128);
  v11 = this[379];
  v18 = -1LL;
  if ( (int)VIDSCH_EXPORT::VidSchSignalSyncObjectsFromCpu(
              *(VIDSCH_EXPORT **)(v10 + 736),
              1u,
              (struct _VIDSCH_SYNC_OBJECT **)((char *)v11 + v7 + 8),
              0,
              &v18) < 0 )
  {
    WdLogSingleEntry1(2LL, *a2);
    v13 = *a2;
    WdLogGlobalForLineNumber = 4651;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to signal UINT64_MAX on a destroyed dod periodic frame notification id: %lu",
      (__int64)v13,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    *(_QWORD *)((char *)this[379] + v7 + 40) = v18;
  }
  DXGADAPTER_REFERENCE::Assign((struct _KTHREAD *)((char *)this[379] + v7 + 16), 0LL);
  *a2 = 0LL;
LABEL_13:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v15);
  return v4;
}
