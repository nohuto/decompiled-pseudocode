/*
 * XREFs of NtUserMNDragOver @ 0x140299BB0
 * Callers:
 *     <none>
 * Callees:
 *     xxxMNDragOver @ 0x1402E7CF0 (xxxMNDragOver.c)
 *     RtlCopyVolatileMemory @ 0x140340280 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserMNDragOver(__int64 *a1, void *a2)
{
  __int64 v4; // rcx
  int v5; // ebx
  __int128 Src; // [rsp+30h] [rbp-28h] BYREF
  __int128 v8; // [rsp+40h] [rbp-18h]
  __int64 v9; // [rsp+70h] [rbp+18h] BYREF

  Src = 0LL;
  v8 = 0LL;
  EnterCrit(0LL, 0LL);
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (__int64 *)MmUserProbeAddress;
  v9 = *a1;
  v5 = xxxMNDragOver(&v9, &Src);
  if ( v5 )
  {
    DWORD1(Src) = 0;
    DWORD1(v8) = 0;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(a2, &Src, 0x20uLL);
  }
  UserSessionSwitchLeaveCrit(v4);
  return v5;
}
