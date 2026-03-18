/*
 * XREFs of ?ConfigureSharedResource@DXGDEVICE@@QEAAJEPEAXIE@Z @ 0x14029EBA4
 * Callers:
 *     DxgkConfigureSharedResource @ 0x14029D770 (DxgkConfigureSharedResource.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140015500 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ConfigureSharedResourceHelper@DXGDEVICE@@QEAAJEPEAXPEAVDXGSHAREDRESOURCE@@EH@Z @ 0x14029E83C (-ConfigureSharedResourceHelper@DXGDEVICE@@QEAAJEPEAXPEAVDXGSHAREDRESOURCE@@EH@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1402A0560 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1402A1CA8 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::ConfigureSharedResource(
        DXGDEVICE *this,
        char a2,
        void *a3,
        unsigned int a4,
        unsigned __int8 a5)
{
  __int64 v6; // rbx
  struct DXGPROCESS *Current; // rbp
  unsigned int v10; // ecx
  __int64 v11; // r10
  int v12; // edx
  struct DXGRESOURCE *v13; // rdx
  DXGDEVICE *v14; // r9
  unsigned int v15; // ebx
  __int64 v17; // r8
  __int64 v18; // [rsp+70h] [rbp+8h] BYREF

  v6 = a4;
  if ( !*((_BYTE *)this + 72) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5470;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"IsDeviceLockExclusiveOwner()", 5470LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !(_DWORD)v6 )
  {
    v15 = -1073741811;
    WdLogSingleEntry2(3LL, this, -1073741811LL);
    WdLogGlobalForLineNumber = 5476;
    return v15;
  }
  Current = DXGPROCESS::GetCurrent((__int64)this);
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
  v10 = ((unsigned int)v6 >> 6) & 0xFFFFFF;
  if ( v10 >= *((_DWORD *)Current + 74) )
    goto LABEL_19;
  v11 = *((_QWORD *)Current + 35);
  if ( (((unsigned int)v6 >> 25) & 0x60) != (*(_BYTE *)(v11 + 16LL * v10 + 8) & 0x60) )
    goto LABEL_19;
  if ( (*(_DWORD *)(v11 + 16LL * v10 + 8) & 0x2000) != 0 )
    goto LABEL_19;
  v12 = *(_DWORD *)(v11 + 16LL * v10 + 8) & 0x1F;
  if ( !v12 )
    goto LABEL_19;
  if ( v12 != 4 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_19:
    v13 = 0LL;
    goto LABEL_11;
  }
  v13 = *(struct DXGRESOURCE **)(v11 + 16LL * v10);
LABEL_11:
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v18, v13);
  _InterlockedDecrement((volatile signed __int32 *)Current + 66);
  ExReleasePushLockSharedEx((char *)Current + 248, 0LL);
  KeLeaveCriticalRegion();
  if ( v18 )
  {
    v14 = *(DXGDEVICE **)(v18 + 8);
    if ( v14 == this )
    {
      if ( (*(_DWORD *)(v18 + 4) & 1) != 0 )
      {
        v15 = DXGDEVICE::ConfigureSharedResourceHelper(this, a2, a3, *(struct DXGSHAREDRESOURCE **)(v18 + 56), a5, 1);
      }
      else
      {
        v15 = -1073741811;
        WdLogSingleEntry3(3LL, this, v18, -1073741811LL);
        WdLogGlobalForLineNumber = 5515;
      }
    }
    else
    {
      v15 = -1073741811;
      WdLogSingleEntry4(3LL, this, v18, v14, -1073741811LL);
      WdLogGlobalForLineNumber = 5502;
    }
  }
  else
  {
    v17 = v6;
    v15 = -1073741811;
    WdLogSingleEntry3(3LL, this, v17, -1073741811LL);
    WdLogGlobalForLineNumber = 5488;
  }
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v18);
  return v15;
}
