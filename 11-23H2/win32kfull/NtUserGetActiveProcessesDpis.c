/*
 * XREFs of NtUserGetActiveProcessesDpis @ 0x1C00942F0
 * Callers:
 *     <none>
 * Callees:
 *     GetDpiCacheSlot @ 0x1C00EB0D0 (GetDpiCacheSlot.c)
 */

__int64 __fastcall NtUserGetActiveProcessesDpis(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // ebx
  __int64 i; // r10
  unsigned int DpiCacheSlot; // eax
  __int64 v10; // r10

  EnterSharedCrit(a1, a2, a3);
  v7 = 0;
  for ( i = gppiList; i; i = *(_QWORD *)(v10 + 376) )
  {
    DpiCacheSlot = GetDpiCacheSlot(*(unsigned __int16 *)(i + 284));
    if ( DpiCacheSlot != -1 )
    {
      v4 = DpiCacheSlot;
      v3 = (unsigned int)(1 << DpiCacheSlot);
      v7 |= v3;
    }
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v7;
}
