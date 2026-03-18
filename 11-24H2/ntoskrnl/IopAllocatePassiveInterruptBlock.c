/*
 * XREFs of IopAllocatePassiveInterruptBlock @ 0x140AAB050
 * Callers:
 *     IopConnectInterrupt @ 0x140A12470 (IopConnectInterrupt.c)
 * Callees:
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     KeInitializeDpc @ 0x140455470 (KeInitializeDpc.c)
 *     IopInsertPassiveInterruptBlock @ 0x140456E24 (IopInsertPassiveInterruptBlock.c)
 *     IopFindPassiveInterruptBlock @ 0x140456FDC (IopFindPassiveInterruptBlock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopAllocatePassiveInterruptBlock(_DWORD *a1, _OWORD *a2)
{
  bool v2; // zf
  int v5; // eax
  unsigned int v6; // esi
  int inserted; // edi
  __int64 Pool2; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rdx
  char v15; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1 == 1;
  v15 = 0;
  if ( v2 && ((v5 = a1[2]) == 0 || v5 == 3) )
  {
    v6 = a1[3];
    if ( IopFindPassiveInterruptBlock(v6) )
    {
      return 0;
    }
    else
    {
      Pool2 = ExAllocatePool2(0x40uLL);
      v11 = Pool2;
      if ( Pool2 )
      {
        *(_QWORD *)(Pool2 + 8) = Pool2;
        *(_QWORD *)Pool2 = Pool2;
        *(_DWORD *)(Pool2 + 16) = a1[2];
        *(_DWORD *)(Pool2 + 20) = v6;
        *(_DWORD *)(Pool2 + 32) = a1[6];
        *(_OWORD *)(Pool2 + 40) = *a2;
        v12 = a1[2];
        if ( v12 )
        {
          if ( v12 == 3 )
            *(_BYTE *)(v11 + 28) = 0;
        }
        else
        {
          v13 = (unsigned int)a1[16];
          *(_DWORD *)(v11 + 24) = v13;
          *(_BYTE *)(v11 + 28) = guard_dispatch_icall_no_overrides(0LL, v13, v9, v10);
        }
        KeInitializeEvent((PRKEVENT)(v11 + 168), SynchronizationEvent, 1u);
        KeInitializeDpc((PRKDPC)(v11 + 104), (PKDEFERRED_ROUTINE)IopPassiveInterruptDpc, (PVOID)v11);
        *(_QWORD *)(v11 + 56) = 0LL;
        *(_QWORD *)(v11 + 72) = 0LL;
        *(_QWORD *)(v11 + 88) = IopPassiveInterruptWorker;
        *(_QWORD *)(v11 + 96) = v11;
        *(_BYTE *)(v11 + 105) = 2;
        inserted = IopInsertPassiveInterruptBlock(v11, &v15);
        if ( inserted < 0 || !v15 )
          ExFreePoolWithTag((PVOID)v11, 0x6269704Bu);
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return (unsigned int)inserted;
}
