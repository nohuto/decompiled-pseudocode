/*
 * XREFs of MmGetChannelInformation @ 0x140A5A0F8
 * Callers:
 *     ExpQueryNumaAvailableMemory @ 0x1407B5140 (ExpQueryNumaAvailableMemory.c)
 *     ExpQueryChannelInformation @ 0x140A5A018 (ExpQueryChannelInformation.c)
 *     KiPopulateNodeInformation @ 0x140C28EAC (KiPopulateNodeInformation.c)
 * Callees:
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     MiGetChannelInformation @ 0x1403D54BC (MiGetChannelInformation.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 */

__int64 __fastcall MmGetChannelInformation(unsigned __int16 a1, unsigned int a2, _QWORD *a3, size_t *a4)
{
  size_t v6; // rbx
  size_t v7; // rdx
  void *Pool; // rax
  size_t Size[2]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE Src[80]; // [rsp+30h] [rbp-78h] BYREF

  Size[0] = 0LL;
  if ( a2 >= (unsigned __int16)KeNumberNodes )
    return 3221225711LL;
  MiGetChannelInformation(*((_QWORD *)qword_140E2FF88 + a1), a2, (__int64)Src, Size);
  v6 = Size[0];
  v7 = Size[0];
  *a4 = Size[0];
  Pool = (void *)MiAllocatePool(0x40uLL, v7, 1750101325);
  *a3 = Pool;
  if ( !Pool )
    return 3221225626LL;
  memmove(Pool, Src, v6);
  return 0LL;
}
