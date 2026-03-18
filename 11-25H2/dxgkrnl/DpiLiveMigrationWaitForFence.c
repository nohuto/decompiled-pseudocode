/*
 * XREFs of DpiLiveMigrationWaitForFence @ 0x14007D154
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x140237020 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EEE@Z @ 0x140054E24 (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EEE@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x14005A628 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     DxgkLiveMigrationWaitForFence @ 0x14020AFB8 (DxgkLiveMigrationWaitForFence.c)
 *     DpiFdoGetVirtualGpuType @ 0x14040C6E4 (DpiFdoGetVirtualGpuType.c)
 */

__int64 __fastcall DpiLiveMigrationWaitForFence(void *a1, struct _IRP *a2, __int64 a3, __int64 a4, int a5)
{
  int v7; // eax
  __int64 v8; // rdi
  __int64 v9; // r9
  const wchar_t *v10; // r9
  int v11; // eax
  PRKEVENT Event; // [rsp+58h] [rbp-31h] BYREF
  _QWORD v14[4]; // [rsp+60h] [rbp-29h] BYREF
  __int128 v15; // [rsp+80h] [rbp-9h]
  _BYTE v16[16]; // [rsp+90h] [rbp+7h] BYREF
  void *v17; // [rsp+A0h] [rbp+17h]
  int v18; // [rsp+B0h] [rbp+27h]

  v14[0] = 48LL;
  Event = 0LL;
  v14[3] = 512LL;
  v14[1] = 0LL;
  v14[2] = 0LL;
  v15 = 0LL;
  v7 = ObCreateObject(0LL, ExEventObjectType, v14, 0LL, 0LL, 24, 0, 0, &Event);
  v8 = v7;
  if ( v7 < 0 )
  {
    WdLogSingleEntry1(2LL, v7);
    WdLogGlobalForLineNumber = 3399;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"LiveMigrationWaitForFence failed - kernel event object creation failed. Status = 0x%I64p",
      v8,
      0LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v8;
  }
  KeInitializeEvent(Event, SynchronizationEvent, 0);
  ObfReferenceObject(Event);
  LOBYTE(v9) = 1;
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v16, a1, a2, v9, 0, 0);
  v8 = v18;
  if ( v18 >= 0 )
  {
    DpiFdoGetVirtualGpuType(a2);
    v11 = DxgkLiveMigrationWaitForFence(v17, (__int64)Event, a5);
    v8 = v11;
    if ( v11 >= 0 )
    {
      CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v16);
      do
      {
        LODWORD(v8) = KeWaitForSingleObject(Event, Executive, 0, 1u, 0LL);
        if ( PsIsThreadTerminating(KeGetCurrentThread()) )
        {
          WdLogSingleEntry0(3LL);
          WdLogGlobalForLineNumber = 3448;
          LODWORD(v8) = -1073741130;
          goto LABEL_14;
        }
      }
      while ( (_DWORD)v8 == 257 );
      if ( (int)v8 < 0 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 3456;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Failed to wait for the Live Migration Fence",
          3456LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      goto LABEL_14;
    }
    WdLogSingleEntry1(2LL, v11);
    v10 = L"DxgkLiveMigrationWaitForFence failed with Status: 0x%I64x";
    WdLogGlobalForLineNumber = 3432;
  }
  else
  {
    WdLogSingleEntry1(2LL, v18);
    v10 = L"Failed to acquire the adapter lock in DpiLiveMigrationWaitForFence with Status: 0x%I64x";
    WdLogGlobalForLineNumber = 3419;
  }
  DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v10, v8, 0LL, 0LL, 0LL, 0LL);
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v16);
LABEL_14:
  if ( Event )
    ObfDereferenceObject(Event);
  return (unsigned int)v8;
}
