/*
 * XREFs of ?Remove@CFlipManagerRegistry@@UEAAXPEAUFlipManagerRegistryEntry@@@Z @ 0x140072370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CFlipManagerRegistry::Remove(CFlipManagerRegistry *this, struct FlipManagerRegistryEntry ***a2)
{
  char *v2; // rdi
  struct FlipManagerRegistryEntry **v4; // rcx
  struct FlipManagerRegistryEntry **v5; // rax

  v2 = (char *)this + 8;
  ExAcquirePushLockExclusiveEx((char *)this + 8, 0LL);
  if ( a2[3] )
  {
    v4 = *a2;
    if ( (*a2)[1] != (struct FlipManagerRegistryEntry *)a2 || (v5 = a2[1], *v5 != (struct FlipManagerRegistryEntry *)a2) )
      __fastfail(3u);
    *v5 = (struct FlipManagerRegistryEntry *)v4;
    v4[1] = (struct FlipManagerRegistryEntry *)v5;
    *(_OWORD *)a2 = 0LL;
    *((_OWORD *)a2 + 1) = 0LL;
  }
  ExReleasePushLockExclusiveEx(v2, 0LL);
}
