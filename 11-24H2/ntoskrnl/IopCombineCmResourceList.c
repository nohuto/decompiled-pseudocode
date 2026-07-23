/*
 * XREFs of IopCombineCmResourceList @ 0x1407230B4
 * Callers:
 *     IopAllocateLegacyBootResources @ 0x140C25F58 (IopAllocateLegacyBootResources.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     PnpDetermineResourceListSize @ 0x140979290 (PnpDetermineResourceListSize.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

_DWORD *__fastcall IopCombineCmResourceList(void *Src, _DWORD *a2)
{
  _DWORD *v5; // rbp
  __int64 v6; // rbx
  int v7; // eax
  unsigned int v8; // r14d
  _DWORD *Pool2; // rax

  if ( !Src )
    return a2;
  if ( !a2 )
    return Src;
  v5 = 0LL;
  v6 = (unsigned int)PnpDetermineResourceListSize(Src);
  v7 = PnpDetermineResourceListSize(a2);
  if ( (_DWORD)v6 && v7 )
  {
    v8 = v7 - 4;
    Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL, (unsigned int)(v7 - 4 + v6), 0x20207050u);
    v5 = Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, Src, (unsigned int)v6);
      memmove((char *)v5 + v6, a2 + 1, v8);
      *v5 += *a2;
    }
  }
  return v5;
}
