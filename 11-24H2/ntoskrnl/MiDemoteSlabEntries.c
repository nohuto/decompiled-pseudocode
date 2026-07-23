/*
 * XREFs of MiDemoteSlabEntries @ 0x1402619FC
 * Callers:
 *     MiWaitForFreePage @ 0x140260F64 (MiWaitForFreePage.c)
 *     MiFreeUnusedSlabPages @ 0x140354C04 (MiFreeUnusedSlabPages.c)
 * Callees:
 *     KeGenericCallDpcEx @ 0x140270AE8 (KeGenericCallDpcEx.c)
 *     ?KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z @ 0x1402AE6EC (-KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z.c)
 *     ?KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z @ 0x1402AE83C (-KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z.c)
 *     MiLogSlabEntriesDemote @ 0x1406896AC (MiLogSlabEntriesDemote.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __fastcall MiDemoteSlabEntries(__int64 a1, unsigned int a2, unsigned int a3)
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
