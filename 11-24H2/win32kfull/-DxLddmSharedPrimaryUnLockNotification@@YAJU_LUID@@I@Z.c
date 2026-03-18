/*
 * XREFs of ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x1403249A0
 * Callers:
 *     NtGdiDdDDISharedPrimaryUnLockNotification @ 0x140325930 (NtGdiDdDDISharedPrimaryUnLockNotification.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140015800 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x140028C4C (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     xxxInternalInvalidate @ 0x1400428C0 (xxxInternalInvalidate.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14006F8FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x140083108 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ??1ReEnterLeaveCrit@@QEAA@XZ @ 0x1400A4A5C (--1ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x140208B2C (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     vSpUnTearDownSprites @ 0x14032F3B0 (vSpUnTearDownSprites.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxLddmSharedPrimaryUnLockNotification(struct _LUID a1, int a2)
{
  DWORD LowPart; // ebx
  unsigned int v4; // r14d
  int v5; // r15d
  __int64 i; // rsi
  __int64 v7; // rdi
  unsigned int CurrentProcessId; // eax
  __int64 ProcessEntry; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  Gre::Base *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct tagWND *v18; // rbx
  __int64 v19; // rdx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+20h] [rbp-10h] BYREF
  LONG HighPart; // [rsp+74h] [rbp+44h]
  __int64 v23; // [rsp+80h] [rbp+50h] BYREF
  __int64 v24; // [rsp+88h] [rbp+58h] BYREF

  HighPart = a1.HighPart;
  LowPart = a1.LowPart;
  v4 = 0;
  v5 = 0;
  SEMOBJSHARED<1>::SEMOBJSHARED<1>((Gre::Base *)&v24);
  for ( i = hdevEnumerateDisplayOnly(0LL); i; i = hdevEnumerateDisplayOnly(i) )
  {
    v23 = i;
    if ( (*(_DWORD *)(i + 40) & 0x20400) == 0
      && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v23)
      && LowPart == PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v23)->LowPart
      && HighPart == PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v23)->HighPart
      && *(_DWORD *)(*(_QWORD *)(v23 + 2568) + 248LL) == a2 )
    {
      GreLockVisRgn(v23);
      GreLockSprite(v23);
      GreLockDisplayDevice(v23);
      v7 = v23;
      CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
      ProcessEntry = DxLddmFindProcessEntry(v7 + 2616, CurrentProcessId & 0xFFFFFFFC);
      v10 = ProcessEntry;
      if ( ProcessEntry )
      {
        if ( *(_DWORD *)(ProcessEntry + 20) )
        {
          v11 = v23;
          if ( *(_QWORD *)(v23 + 2640) )
          {
            (*(void (__fastcall **)(_QWORD, __int64))(v23 + 2640))(*(_QWORD *)(v23 + 1784), v10 + 28);
            v11 = v23;
          }
          --*(_DWORD *)(v11 + 2632);
          if ( (*(_DWORD *)(v10 + 20))-- == 1 )
          {
            vSpUnTearDownSprites(v23, v10 + 28, 1LL);
            if ( *(_DWORD *)(v10 + 44) != *((_DWORD *)Gre::Base::Globals(v13) + 1070) )
              v5 = 1;
          }
        }
      }
      else
      {
        v4 = -1073741811;
      }
      GreUnlockDisplayDevice(v23);
      GreUnlockSprite(v23);
      GreUnlockVisRgn(v23);
    }
  }
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v24);
  if ( v5 )
  {
    ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v23, v14, v15);
    v18 = *(struct tagWND **)(*(_QWORD *)(*((_QWORD *)PtiCurrent(v17, v16) + 62) + 8LL) + 24LL);
    Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, (__int64)v18);
    xxxInternalInvalidate(v18, (HRGN)1, 0x485u);
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v19);
    ReEnterLeaveCrit::~ReEnterLeaveCrit((ReEnterLeaveCrit *)&v23);
  }
  return v4;
}
