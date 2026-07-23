/*
 * XREFs of PpmGetIdleConstrainedMask @ 0x1404AD2F4
 * Callers:
 *     PoExecuteIdleCheck @ 0x1402ABB40 (PoExecuteIdleCheck.c)
 *     PpmEstimateIdleDuration @ 0x1404BC1F4 (PpmEstimateIdleDuration.c)
 * Callees:
 *     KeAddGroupAffinityEx @ 0x140287710 (KeAddGroupAffinityEx.c)
 *     KeIsEmptyGroupMask @ 0x14032FF20 (KeIsEmptyGroupMask.c)
 *     KeFindFirstSetRightGroupMask @ 0x140330524 (KeFindFirstSetRightGroupMask.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406B6C90 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
      while ( !(unsigned int)KeIsEmptyGroupMask((unsigned __int64 *)&v9) )
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
