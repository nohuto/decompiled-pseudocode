/*
 * XREFs of ?DestroyAllHwQueues@DXGCONTEXT@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1403A0E60
 * Callers:
 *     ?DxgkDestroyContextImpl@@YAJPEBU_D3DKMT_DESTROYCONTEXT@@E@Z @ 0x1403A0A98 (-DxgkDestroyContextImpl@@YAJPEBU_D3DKMT_DESTROYCONTEXT@@E@Z.c)
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
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402CDB4C (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402CEF28 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall DXGCONTEXT::DestroyAllHwQueues(DXGCONTEXT *this, struct DXGDEVICEACCESSLOCKEXCLUSIVE *a2)
{
  __int64 v3; // rcx
  struct DXGPROCESS *Current; // r14
  __int64 **v6; // r12
  __int64 v7; // rcx
  __int64 *i; // rdi
  unsigned int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // r8
  int v12; // edx
  unsigned int *v13; // rax
  unsigned int v14; // r8d
  __int64 v15; // rax
  __int64 v16; // r9
  int v17; // edx
  __int64 v18; // rax
  __int64 v19; // rsi
  struct DXGDEVICE *v20; // rbx
  __int64 v21; // r9
  const char *v22; // rdx
  __int64 v23; // rbx
  __int64 v24; // r9
  const char *v25; // rdx
  _BYTE v26[16]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v27[16]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v28[24]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v29[24]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v30[24]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v31[160]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v32[160]; // [rsp+160h] [rbp+60h] BYREF

  v3 = *((_QWORD *)this + 2);
  if ( !*(_BYTE *)(v3 + 72) && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v3 + 136)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 759;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"GetDevice()->IsDeviceLockExclusiveOwner()",
      759LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  Current = DXGPROCESS::GetCurrent(v3);
  v6 = (__int64 **)((char *)this + 400);
LABEL_5:
  v7 = *((_QWORD *)this + 2);
  if ( !*(_BYTE *)(v7 + 72) && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v7 + 136)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 771;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"GetDevice()->IsDeviceLockExclusiveOwner()",
      771LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  for ( i = *v6; i != (__int64 *)v6 && i; i = (__int64 *)*i )
  {
    v9 = *((_DWORD *)i + 6);
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v28, Current);
    v10 = (v9 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v10 < *((_DWORD *)Current + 74) )
    {
      v11 = *((_QWORD *)Current + 35);
      v12 = *(_DWORD *)(v11 + 16 * v10 + 8);
      if ( ((v9 >> 25) & 0x60) == (*(_BYTE *)(v11 + 16 * v10 + 8) & 0x60) && (v12 & 0x2000) == 0 && (v12 & 0x1F) != 0 )
      {
        if ( (*(_BYTE *)(v11 + 16 * (((unsigned __int64)v9 >> 6) & 0xFFFFFF) + 8) & 0x1F) == 0xF )
        {
          if ( *(_QWORD *)(v11 + 16 * (((unsigned __int64)v9 >> 6) & 0xFFFFFF)) )
          {
            *(_DWORD *)(v11 + 16 * (((unsigned __int64)v9 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
            v13 = (unsigned int *)i[18];
            if ( v13 )
            {
              v14 = *v13;
              v15 = (*v13 >> 6) & 0xFFFFFF;
              if ( (unsigned int)v15 < *((_DWORD *)Current + 74) )
              {
                v16 = *((_QWORD *)Current + 35);
                v17 = *(_DWORD *)(v16 + 16 * v15 + 8);
                if ( ((v14 >> 25) & 0x60) == (*(_BYTE *)(v16 + 16 * v15 + 8) & 0x60)
                  && (v17 & 0x2000) == 0
                  && (v17 & 0x1F) != 0 )
                {
                  *(_DWORD *)(v16 + 16 * (((unsigned __int64)v14 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
                }
              }
            }
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v28);
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release(a2);
            v18 = _InterlockedDecrement64(i + 13);
            if ( v18 >= 0 )
            {
              if ( !v18 )
              {
                v19 = i[2];
                v20 = *(struct DXGDEVICE **)(v19 + 16);
                DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v26, v20);
                DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
                  (DXGADAPTERSTOPRESETLOCKSHARED *)v29,
                  *(struct DXGADAPTER **)(*((_QWORD *)v20 + 2) + 16LL),
                  1);
                COREDEVICEACCESS::COREDEVICEACCESS((__int64)v31, (__int64)v20, 2, v21, 0);
                COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v31, v22);
                if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v20 + 2) + 16LL) + 200LL) != 4 )
                  DXGCONTEXT::DestroyHwQueue((DXGCONTEXT *)v19, (struct DXGHWQUEUE *)i, (struct COREDEVICEACCESS *)v31);
                COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v31);
                DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v29);
                DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v26);
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v19 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                {
                  v23 = *(_QWORD *)(v19 + 16);
                  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
                    (DXGDEVICEACCESSLOCKEXCLUSIVE *)v27,
                    (struct DXGDEVICE *)v23);
                  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
                    (DXGADAPTERSTOPRESETLOCKSHARED *)v30,
                    *(struct DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL) + 16LL),
                    1);
                  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v32, v23, 2, v24, 0);
                  COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v32, v25);
                  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v23 + 16) + 16LL) + 200LL) != 4 )
                    DXGDEVICE::DestroyContext(
                      (DXGDEVICE *)v23,
                      (struct DXGCONTEXT ***)v19,
                      (struct COREDEVICEACCESS *)v32);
                  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v32);
                  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v30);
                  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v27);
                  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v23 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                    ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v23 + 16), (struct DXGDEVICE *)v23);
                }
              }
            }
            else
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 141;
              DxgkLogInternalTriageEvent(
                0LL,
                262146LL,
                0xFFFFFFFFLL,
                L"NewReferenceCount >= 0",
                141LL,
                0LL,
                0LL,
                0LL,
                0LL);
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
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v28);
  }
}
