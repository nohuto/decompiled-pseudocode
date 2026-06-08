/*
 * XREFs of sub_14002B688 @ 0x14002B688
 * Callers:
 *     sub_140028FB0 @ 0x140028FB0 (sub_140028FB0.c)
 * Callees:
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 *     sub_140010270 @ 0x140010270 (sub_140010270.c)
 *     sub_14002A254 @ 0x14002A254 (sub_14002A254.c)
 */

__int64 __fastcall sub_14002B688(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 ContiguousNodeMemory; // rax
  __int128 v5; // [rsp+30h] [rbp-28h] BYREF

  v5 = 0LL;
  v2 = 0;
  if ( sub_14002A254() )
  {
    sub_140010270(5u, &v5);
    if ( (_WORD)v5 )
    {
      ContiguousNodeMemory = MmAllocateContiguousNodeMemory((unsigned __int16)v5, 0LL, -1LL, 0LL, 4, 0x80000000);
      if ( !ContiguousNodeMemory )
        return (unsigned int)-1073741670;
      *(_QWORD *)(a1 + 200) = ContiguousNodeMemory;
    }
    if ( (BYTE8(v5) & 1) != 0 && (BYTE8(v5) & 2) != 0 )
      *(_DWORD *)(a1 + 288) |= 0x80000u;
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v2;
}
