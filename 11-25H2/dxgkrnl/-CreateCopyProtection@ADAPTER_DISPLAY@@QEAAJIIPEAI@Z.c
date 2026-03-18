/*
 * XREFs of ?CreateCopyProtection@ADAPTER_DISPLAY@@QEAAJIIPEAI@Z @ 0x140195C0C
 * Callers:
 *     DxgkHandleVideoParameters @ 0x14022BBF0 (DxgkHandleVideoParameters.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140031C38 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x14003962C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??_GDXGCOPYPROTECTION@@QEAAPEAXI@Z @ 0x1400675B8 (--_GDXGCOPYPROTECTION@@QEAAPEAXI@Z.c)
 *     ?AddCopyProtection@DXGPROCESS@@QEAAXPEAVDXGCOPYPROTECTION@@@Z @ 0x140067648 (-AddCopyProtection@DXGPROCESS@@QEAAXPEAVDXGCOPYPROTECTION@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1403113E4 (-SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::CreateCopyProtection(DXGADAPTER **this, unsigned int a2, int a3, unsigned int *a4)
{
  struct _KTHREAD **Current; // r14
  NTSTATUS v9; // eax
  __int64 v10; // r9
  unsigned int Data1; // ebp
  char *v12; // rsi
  DXGADAPTER *v13; // r8
  unsigned int v14; // r11d
  int v15; // edx
  unsigned int v16; // eax
  char v17; // cl
  __int64 v18; // rax
  struct DXGCOPYPROTECTION *v19; // rbx
  __int64 v20; // rax
  int v21; // esi
  struct DXGCOPYPROTECTION *v22; // rdx
  struct DXGCOPYPROTECTION **v23; // rcx
  _BYTE v25[16]; // [rsp+50h] [rbp-68h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+60h] [rbp-58h] BYREF
  UUID Uuid; // [rsp+68h] [rbp-50h] BYREF

  if ( !ADAPTER_DISPLAY::IsCoreResourceSharedOwner((ADAPTER_DISPLAY *)this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5600;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"IsCoreResourceSharedOwner()", 5600LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5601;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pProtectionKey != NULL", 5601LL, 0LL, 0LL, 0LL, 0LL);
  }
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5604;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pProcess != NULL", 5604LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( Current[48] != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5605;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"pProcess->IsCopyProtectionMutexOwner()",
      5605LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *a4 = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v25, (struct DXGFASTMUTEX *const)(this + 4), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v25);
  _InterlockedAdd64((volatile signed __int64 *)this[2] + 3, 1uLL);
  Uuid = 0LL;
  while ( 1 )
  {
    v9 = ExUuidCreate(&Uuid);
    if ( v9 >= 0 )
      break;
    if ( v9 != -1073741267 )
    {
      WdLogSingleEntry1(2LL, -1073741801LL);
      WdLogGlobalForLineNumber = 5643;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"ExUuidCreate failed, returning 0x%I64x",
        -1073741801LL,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_34;
    }
    Interval.QuadPart = -10000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  Data1 = Uuid.Data1;
  v12 = (char *)(this + 10);
  do
  {
    LOBYTE(v10) = 1;
    v13 = this[10];
    while ( 1 )
    {
      v14 = Data1;
      if ( v13 == (DXGADAPTER *)v12 || !v13 )
        break;
      v15 = *((_DWORD *)v13 + 12);
      v16 = Data1 + 1;
      v13 = *(DXGADAPTER **)v13;
      if ( v15 != Data1 )
        v16 = Data1;
      v17 = 0;
      Data1 = v16;
      if ( v15 != v14 )
        v17 = v10;
      LOBYTE(v10) = v17;
    }
  }
  while ( !(_BYTE)v10 );
  v18 = operator new(0x40uLL, 0x4B677844u, 256LL, v10);
  v19 = (struct DXGCOPYPROTECTION *)v18;
  if ( v18 )
  {
    *(_QWORD *)(v18 + 16) = this;
    *(_OWORD *)v18 = 0LL;
    *(_QWORD *)(v18 + 40) = Current;
    *(_OWORD *)(v18 + 24) = 0LL;
    *(_DWORD *)(v18 + 48) = Data1;
    *(_DWORD *)(v18 + 52) = a2;
    *(_DWORD *)(v18 + 56) = a3;
    v20 = *(_QWORD *)v12;
    if ( *(char **)(*(_QWORD *)v12 + 8LL) == v12 )
    {
      *(_QWORD *)v19 = v20;
      *((_QWORD *)v19 + 1) = v12;
      *(_QWORD *)(v20 + 8) = v19;
      *(_QWORD *)v12 = v19;
      v21 = ADAPTER_DISPLAY::SetCopyProtection((ADAPTER_DISPLAY *)this, a2);
      if ( v21 >= 0 )
      {
        DXGPROCESS::AddCopyProtection(Current, v19);
        *a4 = Data1;
        goto LABEL_30;
      }
      v22 = *(struct DXGCOPYPROTECTION **)v19;
      if ( *(struct DXGCOPYPROTECTION **)(*(_QWORD *)v19 + 8LL) == v19 )
      {
        v23 = (struct DXGCOPYPROTECTION **)*((_QWORD *)v19 + 1);
        if ( *v23 == v19 )
        {
          *v23 = v22;
          *((_QWORD *)v22 + 1) = v23;
          DXGCOPYPROTECTION::`scalar deleting destructor'(v19);
          DXGADAPTER::ReleaseReferenceNoTracking(this[2]);
LABEL_30:
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v25);
          return (unsigned int)v21;
        }
      }
    }
    __fastfail(3u);
  }
  WdLogSingleEntry1(6LL, -1073741801LL);
  WdLogGlobalForLineNumber = 5687;
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    0xFFFFFFFFLL,
    L"Out of memory allocating DXGCOPYPROTECTION class, returning 0x%I64x",
    -1073741801LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_34:
  DXGADAPTER::ReleaseReferenceNoTracking(this[2]);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v25);
  return 3221225495LL;
}
