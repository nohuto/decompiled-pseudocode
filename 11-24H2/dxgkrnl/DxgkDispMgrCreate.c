/*
 * XREFs of DxgkDispMgrCreate @ 0x1403A5150
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14000BE00 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?SetNtObjectPointer@DXGDISPLAYMANAGEROBJECT@@QEAAXPEAUDXGDISPLAYMANAGEROBJECT_CONTAINER@@@Z @ 0x1403A545C (-SetNtObjectPointer@DXGDISPLAYMANAGEROBJECT@@QEAAXPEAUDXGDISPLAYMANAGEROBJECT_CONTAINER@@@Z.c)
 *     ??0DXGDISPLAYMANAGEROBJECT@@QEAA@_N@Z @ 0x1403A54DC (--0DXGDISPLAYMANAGEROBJECT@@QEAA@_N@Z.c)
 */

__int64 __fastcall DxgkDispMgrCreate(ULONG64 a1)
{
  ULONG64 v2; // rcx
  DXGDISPLAYMANAGEROBJECT *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r9
  DXGDISPLAYMANAGEROBJECT *v6; // rsi
  int v7; // eax
  __int64 v8; // r14
  NTSTATUS inserted; // eax
  __int64 v10; // rsi
  _QWORD *v12; // rdx
  ACCESS_MASK DesiredAccess[4]; // [rsp+50h] [rbp-28h]
  HANDLE Handle; // [rsp+60h] [rbp-18h] BYREF
  PVOID Object; // [rsp+88h] [rbp+10h] BYREF

  Handle = 0LL;
  v2 = a1 + 24;
  if ( v2 < a1 || v2 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *(_OWORD *)DesiredAccess = *(_OWORD *)a1;
  Handle = *(HANDLE *)(a1 + 16);
  v3 = (DXGDISPLAYMANAGEROBJECT *)operator new(0xC0uLL, 0x4B677844u, 256LL);
  if ( v3 )
    v6 = DXGDISPLAYMANAGEROBJECT::DXGDISPLAYMANAGEROBJECT(v3, DesiredAccess[3] & 1);
  else
    v6 = 0LL;
  if ( v6 && *((_BYTE *)v6 + 64) )
  {
    Object = 0LL;
    LOBYTE(v5) = 1;
    LOBYTE(v4) = 1;
    v7 = ObCreateObject(v4, g_pDxgkDisplayManagerObjectType, *(_QWORD *)DesiredAccess, v5, 0LL, 16, 208, 0, &Object);
    v8 = v7;
    if ( v7 < 0 )
    {
      WdLogSingleEntry1(2LL, v7);
      WdLogGlobalForLineNumber = 859;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to create NT object for display manager (0x%I64x)",
        v8,
        0LL,
        0LL,
        0LL,
        0LL);
      ReferenceCounted::Release(v6);
      return (unsigned int)v8;
    }
    else
    {
      *(_OWORD *)Object = 0LL;
      DXGDISPLAYMANAGEROBJECT::SetNtObjectPointer(v6, (struct DXGDISPLAYMANAGEROBJECT_CONTAINER *)Object);
      *(_QWORD *)Object = v6;
      inserted = ObInsertObject(Object, 0LL, DesiredAccess[2], 0, 0LL, &Handle);
      v10 = inserted;
      if ( inserted >= 0 )
      {
        v12 = (_QWORD *)(a1 + 16);
        if ( a1 + 16 >= MmUserProbeAddress )
          v12 = (_QWORD *)MmUserProbeAddress;
        *v12 = Handle;
      }
      else
      {
        WdLogSingleEntry1(2LL, inserted);
        WdLogGlobalForLineNumber = 874;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Failed to create NT handle for display manager object (0x%I64x)",
          v10,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      return (unsigned int)v10;
    }
  }
  else
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 840;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Failed to allocate memory for DXGDISPLAYMANAGEROBJECT",
      840LL,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( v6 )
      ReferenceCounted::Release(v6);
    return 3221225495LL;
  }
}
