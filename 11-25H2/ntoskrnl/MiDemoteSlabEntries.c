/*
 * XREFs of MiDemoteSlabEntries @ 0x1403BE9C4
 * Callers:
 *     MiFreeUnusedSlabPages @ 0x1403B5490 (MiFreeUnusedSlabPages.c)
 *     MiWaitForFreePage @ 0x1403BFC64 (MiWaitForFreePage.c)
 * Callees:
 *     ?KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z @ 0x140204644 (-KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z.c)
 *     ?KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z @ 0x140204704 (-KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z.c)
 *     KeGenericCallDpcEx @ 0x140417AB0 (KeGenericCallDpcEx.c)
 *     MiLogSlabEntriesDemote @ 0x14067CCEC (MiLogSlabEntriesDemote.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

void __fastcall MiDemoteSlabEntries(__int64 a1, unsigned int a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  int v6[4]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v7; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v8[88]; // [rsp+38h] [rbp-90h] BYREF
  __int64 v9; // [rsp+90h] [rbp-38h]

  if ( *(_QWORD *)(a1 + 19672) )
  {
    CurrentThread = KeGetCurrentThread();
    KiSetSystemPriorityThread((ULONG_PTR)CurrentThread, 30, a3);
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 17744), 1, 0) )
    {
      v6[0] = 30;
      KiClearSystemPriority((ULONG_PTR)CurrentThread, v6);
    }
    else
    {
      memset_0(v8, 0, sizeof(v8));
      v9 = -1LL;
      v7 = a1;
      KeGenericCallDpcEx(MiDemoteSlabEntriesDpc, &v7);
      _InterlockedExchange((volatile __int32 *)(a1 + 17744), 0);
      v6[0] = 30;
      KiClearSystemPriority((ULONG_PTR)CurrentThread, v6);
      MiLogSlabEntriesDemote(&v7, a2);
    }
  }
}
