/*
 * XREFs of ??1DXGHWQUEUE@@IEAA@XZ @ 0x14040DEC4
 * Callers:
 *     ??_GDXGHWQUEUE@@IEAAPEAXI@Z @ 0x140034AE8 (--_GDXGHWQUEUE@@IEAAPEAXI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x140034A5C (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140035DA0 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     ?FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z @ 0x140043B6C (-FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

void __fastcall DXGHWQUEUE::~DXGHWQUEUE(DXGHWQUEUE *this)
{
  void *v2; // rcx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  DXGDEVICESYNCOBJECT *v4; // rcx
  DXGDEVICESYNCOBJECT *v5; // rcx
  DXGDEVICESYNCOBJECT *v6; // rcx
  unsigned int v7; // edx
  ULONG_PTR NumberOfBytes; // [rsp+60h] [rbp+8h] BYREF
  __int64 v9; // [rsp+68h] [rbp+10h] BYREF

  if ( !*((_BYTE *)this + 112) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 32;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"_DestroyedCoreState", 32LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_QWORD *)this + 18) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 33;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"_Doorbell == nullptr", 33LL, 0LL, 0LL, 0LL, 0LL);
  }
  v2 = (void *)*((_QWORD *)this + 15);
  if ( v2 )
  {
    NumberOfBytes = 4096LL;
    MmRotatePhysicalView(v2, &NumberOfBytes, 0LL, MmToRegularMemoryNoCopy, 0LL, 0LL);
    v9 = 4096LL;
    VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
    (*((void (__fastcall **)(__int64, char *, __int64 *, __int64))VirtualMemoryInterface + 2))(
      -1LL,
      (char *)this + 120,
      &v9,
      0x8000LL);
  }
  v4 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 9);
  if ( v4 )
    DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v4);
  v5 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 11);
  if ( v5 )
    DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v5);
  v6 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 6);
  if ( v6 )
    DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v6);
  v7 = *((_DWORD *)this + 6);
  if ( v7 )
    DXGPROCESS::FreeResourceHandleNoRefSafe(*(DXGPROCESS **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 40LL), v7);
  *((_QWORD *)this + 2) = 0LL;
}
