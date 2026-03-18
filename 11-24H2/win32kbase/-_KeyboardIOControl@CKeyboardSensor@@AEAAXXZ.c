/*
 * XREFs of ?_KeyboardIOControl@CKeyboardSensor@@AEAAXXZ @ 0x140210714
 * Callers:
 *     ?KeyboardIoControl@CKeyboardSensor@@QEAAXW4KeyboardControlCodes@@@Z @ 0x1402102D8 (-KeyboardIoControl@CKeyboardSensor@@QEAAXW4KeyboardControlCodes@@@Z.c)
 *     ?OnKeyboardStateUpdateEvent@CKeyboardSensor@@EEAAJXZ @ 0x1402105A0 (-OnKeyboardStateUpdateEvent@CKeyboardSensor@@EEAAJXZ.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140069000 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140091E28 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ??0RIMDropAndReAcquireSyncLock@@QEAA@PEAURawInputManagerObject@@@Z @ 0x1401455B8 (--0RIMDropAndReAcquireSyncLock@@QEAA@PEAURawInputManagerObject@@@Z.c)
 *     ??1RIMDropAndReAcquireSyncLock@@QEAA@XZ @ 0x140145A9C (--1RIMDropAndReAcquireSyncLock@@QEAA@XZ.c)
 *     RIMDeviceIoControl @ 0x14017AF70 (RIMDeviceIoControl.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1401A2B00 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     CBaseInput::ForEachDevice__lambda_5dcffa01845846ecfe290e57461c0d33___ @ 0x140210268 (CBaseInput--ForEachDevice__lambda_5dcffa01845846ecfe290e57461c0d33___.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall CKeyboardSensor::_KeyboardIOControl(CKeyboardSensor *this)
{
  int v2; // r12d
  __int64 v3; // rcx
  __int64 UserSessionState; // rax
  __int64 v5; // rax
  struct RawInputManagerObject *v6; // rdx
  __int64 v7; // xmm0_8
  struct W32_PUSH_LOCK *v8; // rbx
  char *v9; // rdi
  unsigned int v10; // esi
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned int v14; // r14d
  int v15; // r15d
  int v16; // r13d
  int v17; // r12d
  struct _IO_STATUS_BLOCK *v18; // rax
  struct _IO_STATUS_BLOCK *v19; // rax
  struct _IO_STATUS_BLOCK *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  int (*v23)(void); // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  void (*v26)(void); // rax
  _BYTE v27[4]; // [rsp+68h] [rbp-39h] BYREF
  int v28; // [rsp+6Ch] [rbp-35h] BYREF
  unsigned int v29; // [rsp+70h] [rbp-31h] BYREF
  int v30; // [rsp+74h] [rbp-2Dh]
  int v31; // [rsp+78h] [rbp-29h] BYREF
  __int16 v32; // [rsp+7Ch] [rbp-25h]
  char *v33; // [rsp+80h] [rbp-21h]
  __int64 v34; // [rsp+88h] [rbp-19h]
  PVOID v35; // [rsp+A0h] [rbp-1h] BYREF
  _QWORD v36[3]; // [rsp+A8h] [rbp+7h] BYREF
  __int64 v37; // [rsp+C0h] [rbp+1Fh] BYREF
  int v38; // [rsp+C8h] [rbp+27h]

  if ( *((_QWORD *)this + 157) )
  {
    v2 = *((_DWORD *)this + 334);
    *((_DWORD *)this + 334) = 0;
    v30 = *(_DWORD *)(W32GetUserSessionState(this) + 68868);
    UserSessionState = W32GetUserSessionState(v3);
    v31 = *(_DWORD *)(UserSessionState + 12868);
    v32 = *(_WORD *)(UserSessionState + 12872);
    v29 = *(_DWORD *)(UserSessionState + 12860);
    v37 = *(_QWORD *)(UserSessionState + 14320);
    v38 = *(_DWORD *)(UserSessionState + 14328);
    v5 = W32GetUserSessionState(v29);
    v6 = (struct RawInputManagerObject *)*((_QWORD *)this + 2);
    v7 = *(_QWORD *)(v5 + 69096);
    v33 = (char *)*((_QWORD *)this + 1);
    v34 = v7;
    RIMDropAndReAcquireSyncLock::RIMDropAndReAcquireSyncLock((RIMDropAndReAcquireSyncLock *)&v35, v6);
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v27, 1);
    v8 = (struct W32_PUSH_LOCK *)*((_QWORD *)this + 154);
    v9 = 0LL;
    v10 = 0;
    W32AcquirePushLockSharedEx(v8, 0);
    v11 = **((_QWORD **)this + 155);
    if ( v11 )
    {
      do
      {
        if ( *(_DWORD *)(v11 + 48) == 1 && *(_QWORD *)(v11 + 208) && *(_QWORD *)(v11 + 216) )
          ++v10;
        v11 = *(_QWORD *)(v11 + 56);
      }
      while ( v11 );
      if ( v10 )
      {
        v12 = Win32AllocPoolZInitImpl(256LL, 16LL * v10, 0x43486970u);
        v9 = (char *)v12;
        if ( v12 )
        {
          v36[0] = v12;
          v28 = 0;
          v36[2] = &v28;
          CBaseInput::ForEachDevice__lambda_5dcffa01845846ecfe290e57461c0d33___((__int64)this, (__int64)v36);
        }
      }
    }
    ExReleasePushLockSharedEx(v8, 0LL);
    KeLeaveCriticalRegion();
    v14 = 0;
    if ( v10 )
    {
      v15 = v2 & 1;
      v16 = v2 & 2;
      v17 = v2 & 4;
      do
      {
        v28 = 0;
        if ( v15 )
        {
          v18 = (struct _IO_STATUS_BLOCK *)W32GetUserSessionState(v13);
          RIMDeviceIoControl(v33, *(char **)&v9[16 * v14], 0xB0004u, &v31, 6u, 0LL, 0, &v28, v18 + 805, 1, 0, 0);
        }
        if ( v16 )
        {
          v19 = (struct _IO_STATUS_BLOCK *)W32GetUserSessionState(v13);
          RIMDeviceIoControl(v33, *(char **)&v9[16 * v14], 0xB0008u, &v29, 4u, 0LL, 0, &v28, v19 + 805, 1, 0, 0);
        }
        if ( v17 && (v9[16 * v14 + 8] == 7 && v9[16 * v14 + 9] == 82 || v30 && v34 == 0x2000200000007LL) )
        {
          v20 = (struct _IO_STATUS_BLOCK *)W32GetUserSessionState(v13);
          RIMDeviceIoControl(v33, *(char **)&v9[16 * v14], 0xB1004u, &v37, 0xCu, 0LL, 0, &v28, v20 + 805, 1, 0, 0);
        }
        ++v14;
      }
      while ( v14 < v10 );
    }
    if ( v9 )
      GreDeleteFastMutex(v9);
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v27);
    v23 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v22, v21) + 48) + 5904LL);
    if ( v23 && v23() >= 0 )
    {
      v26 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v25, v24) + 48) + 5912LL);
      if ( v26 )
        v26();
    }
    RIMDropAndReAcquireSyncLock::~RIMDropAndReAcquireSyncLock(&v35);
  }
}
