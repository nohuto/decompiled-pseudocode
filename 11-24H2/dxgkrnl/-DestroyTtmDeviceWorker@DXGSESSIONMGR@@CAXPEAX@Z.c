/*
 * XREFs of ?DestroyTtmDeviceWorker@DXGSESSIONMGR@@CAXPEAX@Z @ 0x1403E8550
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x14004CD50 (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     ?UnRegisterTtmDevice@CTTMDEVICE@@QEAAXE@Z @ 0x1401FC750 (-UnRegisterTtmDevice@CTTMDEVICE@@QEAAXE@Z.c)
 */

void __fastcall DXGSESSIONMGR::DestroyTtmDeviceWorker(CTTMDEVICE *this)
{
  struct DXGGLOBAL *Global; // rax
  CTTMDEVICE **v3; // rcx
  CTTMDEVICE **v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // [rsp+50h] [rbp-18h] BYREF
  char v7; // [rsp+58h] [rbp-10h]

  Global = DXGGLOBAL::GetGlobal();
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
    (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v6,
    (struct DXGPUSHLOCKFAST *)(*((_QWORD *)Global + 122) + 336LL));
  v3 = *(CTTMDEVICE ***)this;
  if ( *(CTTMDEVICE **)this == this )
  {
    WdLogSingleEntry1(2LL, this);
    WdLogGlobalForLineNumber = 7582;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Workitem for destroying TTM device 0x%I64x is called before the creation work item.",
      (__int64)this,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    if ( v3[1] != this || (v4 = (CTTMDEVICE **)*((_QWORD *)this + 1), *v4 != this) )
      __fastfail(3u);
    *v4 = (CTTMDEVICE *)v3;
    v3[1] = (CTTMDEVICE *)v4;
    *((_QWORD *)this + 1) = this;
    *(_QWORD *)this = this;
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 888, 0LL);
  *((_QWORD *)this + 112) = KeGetCurrentThread();
  *((_BYTE *)this + 913) = 1;
  *((_QWORD *)this + 112) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 888, 0LL);
  KeLeaveCriticalRegion();
  if ( *((_QWORD *)this + 4) )
    CTTMDEVICE::UnRegisterTtmDevice(this, 0);
  else
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  if ( v7 )
  {
    v5 = v6;
    *(_QWORD *)(v6 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v5, 0LL);
    KeLeaveCriticalRegion();
  }
}
