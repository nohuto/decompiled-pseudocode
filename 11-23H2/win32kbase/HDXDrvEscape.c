/*
 * XREFs of HDXDrvEscape @ 0x1C00CCB90
 * Callers:
 *     DrvEscapeRemoteDrivers @ 0x1C00CC970 (DrvEscapeRemoteDrivers.c)
 * Callees:
 *     ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x1C0019C20 (-vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00428F0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0042EC0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C0044400 (EngAcquireSemaphore.c)
 *     ??1SEMOBJEX@@QEAA@XZ @ 0x1C00CCCEC (--1SEMOBJEX@@QEAA@XZ.c)
 *     ??0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z @ 0x1C00CCE60 (--0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HDXDrvEscape(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  unsigned int v8; // edi
  __int64 v9; // rax
  unsigned int v10; // r8d
  __int64 (__fastcall *v11)(__int64, _QWORD, _QWORD, __int64, _DWORD, _QWORD); // rax
  struct _ERESOURCE *v12; // rcx
  unsigned int v14; // [rsp+20h] [rbp-E8h]
  unsigned int v15; // [rsp+30h] [rbp-D8h]
  HSEMAPHORE v16; // [rsp+68h] [rbp-A0h]
  unsigned int v17; // [rsp+70h] [rbp-98h]
  HSEMAPHORE v18; // [rsp+78h] [rbp-90h]
  unsigned int v19; // [rsp+80h] [rbp-88h]
  _BYTE v20[96]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v21; // [rsp+110h] [rbp+8h] BYREF

  v21 = a1;
  if ( a1 && (v8 = 1, (*(_DWORD *)(a1 + 40) & 1) != 0) )
  {
    v9 = SGDGetSessionState(a1);
    SEMOBJEX::SEMOBJEX(
      (SEMOBJEX *)v20,
      *(HSEMAPHORE *)(*(_QWORD *)(v9 + 24) + 80LL),
      v10,
      *(HSEMAPHORE *)(*(_QWORD *)(v9 + 24) + 120LL),
      v14,
      *(HSEMAPHORE *)(*(_QWORD *)(v9 + 24) + 88LL),
      v15,
      *(HSEMAPHORE *)(a1 + 56),
      4u,
      *(HSEMAPHORE *)(*(_QWORD *)(v9 + 24) + 112LL),
      5u,
      *(HSEMAPHORE *)(*(_QWORD *)(v9 + 24) + 136LL),
      6u,
      v16,
      v17,
      v18,
      v19);
    EngAcquireSemaphore(*(HSEMAPHORE *)(a1 + 48));
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemDevLock()", *(_QWORD *)(a1 + 48), 11);
    PDEVOBJ::vSync(
      (PDEVOBJ *)&v21,
      (struct _SURFOBJ *)((*(_QWORD *)(a1 + 2528) + 24LL) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)(a1 + 2528) >> 64)),
      0LL,
      0);
    v11 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _DWORD, _QWORD))(a1 + 2856);
    if ( v11 )
      v8 = v11(*(_QWORD *)(a1 + 2528) + 24LL, a2, a4, a3, 0, 0LL);
    EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemDevLock()", *(_QWORD *)(a1 + 48));
    v12 = *(struct _ERESOURCE **)(a1 + 48);
    if ( v12 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v12);
      PsLeavePriorityRegion();
    }
    SEMOBJEX::~SEMOBJEX((SEMOBJEX *)v20);
  }
  else
  {
    return 0;
  }
  return v8;
}
