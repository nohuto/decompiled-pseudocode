/*
 * XREFs of DxgEnumHandleChildrenCB @ 0x1401BBD10
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x140010864 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140012300 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140023F70 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ @ 0x140030E00 (--1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ.c)
 *     Feature_4078915896__private_IsEnabledDeviceUsageNoInline @ 0x14006B7A8 (Feature_4078915896__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x14032B750 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x14032B83C (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 */

__int64 __fastcall DxgEnumHandleChildrenCB(unsigned int *a1)
{
  struct DXGPROCESS *Current; // rsi
  unsigned int v3; // ebx
  unsigned int v4; // r15d
  unsigned int v5; // eax
  __int64 v6; // r8
  int v7; // ecx
  struct DXGRESOURCE *v8; // rdx
  __int64 v10; // r9
  int v11; // ecx
  unsigned int v12; // edx
  __int64 v13; // rax
  unsigned int v14; // eax
  __int64 v15; // r9
  int v16; // ecx
  struct DXGRESOURCE *v17; // rdx
  __int64 v18; // r9
  unsigned int v19; // edx
  __int64 v20; // rcx
  int v21; // eax
  _QWORD *v22; // [rsp+58h] [rbp-39h] BYREF
  __int64 v23; // [rsp+60h] [rbp-31h] BYREF
  _BYTE v24[16]; // [rsp+68h] [rbp-29h] BYREF
  _BYTE v25[24]; // [rsp+78h] [rbp-19h] BYREF
  _BYTE v26[56]; // [rsp+90h] [rbp-1h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v26);
  Current = DXGPROCESS::GetCurrent();
  v3 = 0;
  if ( !(unsigned int)Feature_4078915896__private_IsEnabledDeviceUsageNoInline() )
  {
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v25, Current);
    v14 = (*a1 >> 6) & 0xFFFFFF;
    if ( v14 < *((_DWORD *)Current + 74) )
    {
      v15 = *((_QWORD *)Current + 35);
      if ( ((*a1 >> 25) & 0x60) == (*(_BYTE *)(v15 + 16LL * v14 + 8) & 0x60)
        && (*(_DWORD *)(v15 + 16LL * v14 + 8) & 0x2000) == 0 )
      {
        v16 = *(_DWORD *)(v15 + 16LL * v14 + 8) & 0x1F;
        if ( v16 )
        {
          if ( v16 == 4 )
          {
            v17 = *(struct DXGRESOURCE **)(v15 + 16LL * v14);
            goto LABEL_28;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v17 = 0LL;
LABEL_28:
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v23, v17);
    if ( v23 )
    {
      if ( KeGetCurrentIrql() >= 2u )
      {
        v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v23 + 8) + 16LL) + 16LL);
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 216) + 64LL) + 40LL) + 28LL) >= 0x2003u )
        {
          WdLogSingleEntry5(0LL, 275LL, 20LL, v18, 0LL, 0LL);
          WdLogGlobalForLineNumber = 453;
        }
      }
      v19 = a1[1];
      v20 = *(_QWORD *)(v23 + 24);
      v21 = 0;
      if ( v19 )
      {
        while ( v20 )
        {
          v20 = *(_QWORD *)(v20 + 64);
          if ( ++v21 >= v19 )
            goto LABEL_37;
        }
      }
      else
      {
LABEL_37:
        if ( v20 )
          v3 = *(_DWORD *)(v20 + 16);
      }
    }
    else
    {
      WdLogSingleEntry1(3LL, *a1);
      WdLogGlobalForLineNumber = 442;
    }
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v23);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v25);
    goto LABEL_40;
  }
  v4 = *a1;
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
  v5 = (v4 >> 6) & 0xFFFFFF;
  if ( v5 < *((_DWORD *)Current + 74) )
  {
    v6 = *((_QWORD *)Current + 35);
    if ( ((v4 >> 25) & 0x60) == (*(_BYTE *)(v6 + 16LL * v5 + 8) & 0x60)
      && (*(_DWORD *)(v6 + 16LL * v5 + 8) & 0x2000) == 0 )
    {
      v7 = *(_DWORD *)(v6 + 16LL * v5 + 8) & 0x1F;
      if ( v7 )
      {
        if ( v7 == 4 )
        {
          v8 = *(struct DXGRESOURCE **)(v6 + 16LL * v5);
          goto LABEL_9;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  v8 = 0LL;
LABEL_9:
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v22, v8);
  _InterlockedDecrement((volatile signed __int32 *)Current + 66);
  ExReleasePushLockSharedEx((char *)Current + 248, 0LL);
  KeLeaveCriticalRegion();
  if ( !v22 )
  {
    WdLogSingleEntry1(3LL, *a1);
    WdLogGlobalForLineNumber = 391;
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v22);
    DXGVALIDATIONPROCESSATTACH::~DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v26);
    return 0LL;
  }
  if ( KeGetCurrentIrql() >= 2u )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(v22[1] + 16LL) + 16LL);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 216) + 64LL) + 40LL) + 28LL) >= 0x2003u )
    {
      WdLogSingleEntry5(0LL, 275LL, 20LL, v10, 0LL, 0LL);
      WdLogGlobalForLineNumber = 402;
    }
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v24, (struct DXGFASTMUTEX *const)(v22 + 10), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
  v11 = 0;
  v12 = a1[1];
  v13 = v22[3];
  if ( v12 )
  {
    while ( v13 )
    {
      v13 = *(_QWORD *)(v13 + 64);
      if ( ++v11 >= v12 )
        goto LABEL_18;
    }
  }
  else
  {
LABEL_18:
    if ( v13 )
      v3 = *(_DWORD *)(v13 + 16);
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v24);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v22);
LABEL_40:
  DXGVALIDATIONPROCESSATTACH::~DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v26);
  return v3;
}
