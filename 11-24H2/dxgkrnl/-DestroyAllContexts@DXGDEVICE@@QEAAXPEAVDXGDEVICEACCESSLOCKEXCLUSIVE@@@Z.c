/*
 * XREFs of ?DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x14039DC5C
 * Callers:
 *     ?DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z @ 0x14039D208 (-DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x14000E300 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14000E5A0 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14000EF08 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140010030 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x14002A350 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1400301A0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140035C78 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402ABDE8 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402CEF28 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall DXGDEVICE::DestroyAllContexts(DXGDEVICE *this, struct DXGDEVICEACCESSLOCKEXCLUSIVE *a2)
{
  struct DXGPROCESS *Current; // rbp
  struct DXGCONTEXT ***v5; // r14
  struct DXGCONTEXT **i; // rbx
  unsigned int v7; // edi
  __int64 v8; // rax
  __int64 v9; // r8
  int v10; // edx
  __int64 v11; // rdi
  __int64 v12; // r9
  const char *v13; // rdx
  _BYTE v14[16]; // [rsp+58h] [rbp-120h] BYREF
  _BYTE v15[24]; // [rsp+68h] [rbp-110h] BYREF
  _BYTE v16[32]; // [rsp+80h] [rbp-F8h] BYREF
  _BYTE v17[160]; // [rsp+A0h] [rbp-D8h] BYREF

  if ( !*((_BYTE *)this + 72) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2489;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"IsDeviceLockExclusiveOwner()", 2489LL, 0LL, 0LL, 0LL, 0LL);
  }
  Current = DXGPROCESS::GetCurrent((__int64)this);
  v5 = (struct DXGCONTEXT ***)((char *)this + 496);
LABEL_5:
  if ( !*((_BYTE *)this + 72) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2501;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"IsDeviceLockExclusiveOwner()", 2501LL, 0LL, 0LL, 0LL, 0LL);
  }
  for ( i = *v5; i != (struct DXGCONTEXT **)v5 && i; i = (struct DXGCONTEXT **)*i )
  {
    v7 = *((_DWORD *)i + 6);
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v15, Current);
    v8 = (v7 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v8 < *((_DWORD *)Current + 74) )
    {
      v9 = *((_QWORD *)Current + 35);
      v10 = *(_DWORD *)(v9 + 16 * v8 + 8);
      if ( ((v7 >> 25) & 0x60) == (*(_BYTE *)(v9 + 16 * v8 + 8) & 0x60) && (v10 & 0x2000) == 0 && (v10 & 0x1F) != 0 )
      {
        if ( (*(_BYTE *)(v9 + 16 * (((unsigned __int64)v7 >> 6) & 0xFFFFFF) + 8) & 0x1F) == 7 )
        {
          if ( *(_QWORD *)(v9 + 16 * (((unsigned __int64)v7 >> 6) & 0xFFFFFF)) )
          {
            *(_DWORD *)(v9 + 16 * (((unsigned __int64)v7 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v15);
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release(a2);
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)i + 4, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            {
              v11 = (__int64)i[2];
              DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
                (DXGDEVICEACCESSLOCKEXCLUSIVE *)v14,
                (struct DXGDEVICE *)v11);
              DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
                (DXGADAPTERSTOPRESETLOCKSHARED *)v16,
                *(struct DXGADAPTER **)(*((_QWORD *)i[2] + 2) + 16LL),
                1);
              COREDEVICEACCESS::COREDEVICEACCESS((__int64)v17, v11, 2, v12, 0);
              COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v17, v13);
              if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 16) + 16LL) + 200LL) != 4 )
                DXGDEVICE::DestroyContext((DXGDEVICE *)v11, (struct DXGCONTEXT ***)i, (struct COREDEVICEACCESS *)v17);
              COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v17);
              DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v16);
              DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v14);
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v11 + 16), (struct DXGDEVICE *)v11);
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
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v15);
  }
}
