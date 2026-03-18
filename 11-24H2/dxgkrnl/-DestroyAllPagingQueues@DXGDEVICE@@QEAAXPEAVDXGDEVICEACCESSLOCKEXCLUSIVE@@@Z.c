/*
 * XREFs of ?DestroyAllPagingQueues@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x14039D880
 * Callers:
 *     ?DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z @ 0x14039D208 (-DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x14000CBC0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x14000E300 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14000E5A0 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x14000EE70 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14000EEA0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14000EF08 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x14002A350 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1400301A0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140035C78 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402ABDE8 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402CDF70 (-DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall DXGDEVICE::DestroyAllPagingQueues(DXGDEVICE *this, struct DXGDEVICEACCESSLOCKEXCLUSIVE *a2)
{
  struct DXGPROCESS *Current; // r15
  __int64 **v5; // r14
  __int64 *i; // rdi
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // r8
  int v10; // edx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  struct DXGADAPTER *v14; // rdx
  const char *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  struct COREDEVICEACCESS *v19; // r8
  unsigned __int64 v20; // rdx
  _BYTE v21[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+58h] [rbp-A8h]
  char v23; // [rsp+60h] [rbp-A0h]
  _BYTE v24[16]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v25[32]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v26[8]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v27[64]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v28[64]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v29; // [rsp+128h] [rbp+28h]
  char v30; // [rsp+130h] [rbp+30h]

  if ( !*((_BYTE *)this + 72) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2556;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"IsDeviceLockExclusiveOwner()", 2556LL, 0LL, 0LL, 0LL, 0LL);
  }
  Current = DXGPROCESS::GetCurrent((__int64)this);
  v5 = (__int64 **)((char *)this + 528);
LABEL_5:
  if ( !*((_BYTE *)this + 72) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2568;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"IsDeviceLockExclusiveOwner()", 2568LL, 0LL, 0LL, 0LL, 0LL);
  }
  for ( i = *v5; i != (__int64 *)v5 && i; i = (__int64 *)*i )
  {
    v7 = *((_DWORD *)i + 6);
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v25, Current);
    v8 = (v7 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v8 < *((_DWORD *)Current + 74) )
    {
      v9 = *((_QWORD *)Current + 35);
      v10 = *(_DWORD *)(v9 + 16 * v8 + 8);
      if ( ((v7 >> 25) & 0x60) == (*(_BYTE *)(v9 + 16 * v8 + 8) & 0x60) && (v10 & 0x2000) == 0 && (v10 & 0x1F) != 0 )
      {
        if ( (*(_BYTE *)(v9 + 16 * (((unsigned __int64)v7 >> 6) & 0xFFFFFF) + 8) & 0x1F) == 0xA )
        {
          if ( *(_QWORD *)(v9 + 16 * (((unsigned __int64)v7 >> 6) & 0xFFFFFF)) )
          {
            *(_DWORD *)(v9 + 16 * (((unsigned __int64)v7 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v25);
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release(a2);
            v11 = _InterlockedDecrement64(i + 8);
            if ( v11 < 0 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 67;
              DxgkLogInternalTriageEvent(
                0LL,
                262146LL,
                0xFFFFFFFFLL,
                L"NewReferenceCount >= 0",
                67LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            else if ( !v11 )
            {
              v12 = i[2];
              DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
                (DXGDEVICEACCESSLOCKEXCLUSIVE *)v24,
                (struct DXGDEVICE *)v12);
              v13 = *(_QWORD *)(v12 + 16);
              v23 = 0;
              v22 = *(_QWORD *)(v13 + 16);
              DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v21);
              COREACCESS::COREACCESS((COREACCESS *)v27, *(struct DXGADAPTER *const *)(*(_QWORD *)(v12 + 16) + 16LL));
              v14 = *(struct DXGADAPTER **)(v12 + 1896);
              if ( !v14 )
                v14 = *(struct DXGADAPTER **)(*(_QWORD *)(v12 + 16) + 16LL);
              COREACCESS::COREACCESS((COREACCESS *)v28, v14);
              v16 = *(_QWORD *)(v12 + 16);
              v17 = *(_QWORD *)(v12 + 1896);
              v29 = v12;
              if ( v17 == *(_QWORD *)(v16 + 16) || (v30 = 1, !v17) )
                v30 = 0;
              COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v26, v15);
              if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 16) + 16LL) + 200LL) != 4 )
                DXGDEVICE::DestroyPagingQueue((DXGDEVICE *)v12, (struct DXGPAGINGQUEUE *)i, v19);
              COREACCESS::~COREACCESS((COREACCESS *)v28, v18);
              COREACCESS::~COREACCESS((COREACCESS *)v27, v20);
              DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v21);
              DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v24);
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v12 + 16), (struct DXGDEVICE *)v12);
            }
            DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire(a2);
            goto LABEL_5;
          }
        }
        else
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v25);
  }
}
