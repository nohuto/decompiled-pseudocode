/*
 * XREFs of PpmGetIdleConstrainedMask @ 0x1404B1924
 * Callers:
 *     PoExecuteIdleCheck @ 0x140274578 (PoExecuteIdleCheck.c)
 *     PpmEstimateIdleDuration @ 0x1404B28E4 (PpmEstimateIdleDuration.c)
 * Callees:
 *     KeAddGroupAffinityEx @ 0x140256130 (KeAddGroupAffinityEx.c)
 *     KeIsEmptyGroupMask @ 0x140304FE8 (KeIsEmptyGroupMask.c)
 *     KeFindFirstSetRightGroupMask @ 0x140305380 (KeFindFirstSetRightGroupMask.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406AAA20 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

char __fastcall PpmGetIdleConstrainedMask(unsigned __int16 *a1)
{
  char v2; // si
  bool v3; // cf
  unsigned int v4; // edi
  unsigned __int16 FirstSetRightGroupMask; // ax
  __int64 v6; // rbx
  __int64 v8; // [rsp+20h] [rbp-38h]
  __int128 v9; // [rsp+28h] [rbp-30h] BYREF

  v2 = 0;
  memset_0(a1 + 4, 0, 8LL * *a1);
  v3 = KeNumberNodes != 0;
  *a1 = 1;
  v4 = 0;
  if ( v3 )
  {
    do
    {
      v9 = 0LL;
      v8 = KeNodeBlock[v4];
      RtlCopyVolatileMemory(&v9, (const void *)(v8 + 16), 0x10uLL);
      while ( !KeIsEmptyGroupMask((__int64)&v9) )
      {
        FirstSetRightGroupMask = KeFindFirstSetRightGroupMask((__int64 *)&v9);
        _bittestandreset64((signed __int64 *)&v9, FirstSetRightGroupMask);
        v6 = *(_QWORD *)(v8 + 8LL * FirstSetRightGroupMask + 32);
        KeAddGroupAffinityEx(a1, *(_WORD *)(v6 + 136), *(_QWORD *)(v6 + 72));
        if ( *(_QWORD *)(v6 + 72) )
          v2 = 1;
      }
      ++v4;
    }
    while ( v4 < (unsigned __int16)KeNumberNodes );
  }
  return v2;
}
