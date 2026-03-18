/*
 * XREFs of DxgkDispMgrCreate @ 0x1403B25C0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?SetNtObjectPointer@DXGDISPLAYMANAGEROBJECT@@QEAAXPEAUDXGDISPLAYMANAGEROBJECT_CONTAINER@@@Z @ 0x1403B28CC (-SetNtObjectPointer@DXGDISPLAYMANAGEROBJECT@@QEAAXPEAUDXGDISPLAYMANAGEROBJECT_CONTAINER@@@Z.c)
 *     ??0DXGDISPLAYMANAGEROBJECT@@QEAA@_N@Z @ 0x1403B294C (--0DXGDISPLAYMANAGEROBJECT@@QEAA@_N@Z.c)
 */

__int64 __fastcall DxgkDispMgrCreate(ULONG64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG64 v5; // rcx
  DXGDISPLAYMANAGEROBJECT *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r9
  DXGDISPLAYMANAGEROBJECT *v9; // rsi
  int v10; // eax
  __int64 v11; // r14
  NTSTATUS inserted; // eax
  __int64 v13; // rsi
  _QWORD *v15; // rdx
  ACCESS_MASK DesiredAccess[4]; // [rsp+50h] [rbp-28h]
  HANDLE Handle; // [rsp+60h] [rbp-18h] BYREF
  PVOID Object; // [rsp+88h] [rbp+10h] BYREF

  Handle = 0LL;
  v5 = a1 + 24;
  if ( v5 < a1 || v5 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *(_OWORD *)DesiredAccess = *(_OWORD *)a1;
  Handle = *(HANDLE *)(a1 + 16);
  v6 = (DXGDISPLAYMANAGEROBJECT *)operator new(0xC0uLL, 0x4B677844u, 256LL, a4);
  if ( v6 )
    v9 = DXGDISPLAYMANAGEROBJECT::DXGDISPLAYMANAGEROBJECT(v6, DesiredAccess[3] & 1);
  else
    v9 = 0LL;
  if ( v9 && *((_BYTE *)v9 + 64) )
  {
    Object = 0LL;
    LOBYTE(v8) = 1;
    LOBYTE(v7) = 1;
    v10 = ObCreateObject(v7, g_pDxgkDisplayManagerObjectType, *(_QWORD *)DesiredAccess, v8, 0LL, 16, 208, 0, &Object);
    v11 = v10;
    if ( v10 < 0 )
    {
      WdLogSingleEntry1(2LL, v10);
      WdLogGlobalForLineNumber = 851;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to create NT object for display manager (0x%I64x)",
        v11,
        0LL,
        0LL,
        0LL,
        0LL);
      ReferenceCounted::Release(v9);
      return (unsigned int)v11;
    }
    else
    {
      *(_OWORD *)Object = 0LL;
      DXGDISPLAYMANAGEROBJECT::SetNtObjectPointer(v9, (struct DXGDISPLAYMANAGEROBJECT_CONTAINER *)Object);
      *(_QWORD *)Object = v9;
      inserted = ObInsertObject(Object, 0LL, DesiredAccess[2], 0, 0LL, &Handle);
      v13 = inserted;
      if ( inserted >= 0 )
      {
        v15 = (_QWORD *)(a1 + 16);
        if ( a1 + 16 >= MmUserProbeAddress )
          v15 = (_QWORD *)MmUserProbeAddress;
        *v15 = Handle;
      }
      else
      {
        WdLogSingleEntry1(2LL, inserted);
        WdLogGlobalForLineNumber = 866;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Failed to create NT handle for display manager object (0x%I64x)",
          v13,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      return (unsigned int)v13;
    }
  }
  else
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 832;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Failed to allocate memory for DXGDISPLAYMANAGEROBJECT",
      832LL,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( v9 )
      ReferenceCounted::Release(v9);
    return 3221225495LL;
  }
}
