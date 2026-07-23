/*
 * XREFs of PiDrvDbNodeActionCallback @ 0x140927F50
 * Callers:
 *     DrvDbLoadDatabaseNode @ 0x140927C38 (DrvDbLoadDatabaseNode.c)
 *     DrvDbUnloadDatabaseNode @ 0x140927E0C (DrvDbUnloadDatabaseNode.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     KeSetCoalescableTimer @ 0x1402BE6B0 (KeSetCoalescableTimer.c)
 *     KiSetTimerEx @ 0x140316810 (KiSetTimerEx.c)
 *     PiDrvDbLoadNode @ 0x140928080 (PiDrvDbLoadNode.c)
 */

__int64 __fastcall PiDrvDbNodeActionCallback(__int64 a1, __int64 a2, int a3, int a4, _QWORD *a5, __int64 a6)
{
  unsigned int v6; // ebx
  int v7; // r8d
  _QWORD *v8; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rax

  v6 = 0;
  if ( (*(_DWORD *)(a6 + 64) & 4) == 0 )
    return (unsigned int)-1073741822;
  v7 = a3 - 1;
  if ( v7 )
  {
    if ( v7 == 1 )
    {
      if ( a4 == 1 )
      {
        v8 = (_QWORD *)*a5;
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceExclusiveLite((PERESOURCE)(a6 + 88), 1u);
        if ( *(_QWORD *)(a6 + 72) )
        {
          v10 = *(_QWORD *)(a6 + 480);
          if ( v10 )
          {
            if ( v10 < 0 )
              KeSetCoalescableTimer((PKTIMER)(a6 + 264), *(LARGE_INTEGER *)(a6 + 480), 0, 0x3A98u, (PKDPC)(a6 + 328));
          }
          else
          {
            KiSetTimerEx(a6 + 264, 0LL, 0, 0, a6 + 328);
          }
          *(_BYTE *)(a6 + 488) = 1;
        }
        *v8 = 0LL;
        ExReleaseResourceLite((PERESOURCE)(a6 + 88));
        KeLeaveCriticalRegionThread();
      }
      return v6;
    }
    return (unsigned int)-1073741822;
  }
  if ( a4 == 1 )
    return (unsigned int)PiDrvDbLoadNode(a6, *a5);
  return v6;
}
