/*
 * XREFs of ?Add@CFlipManagerRegistry@@UEAAXPEAUFlipManagerObject@@PEAUFlipManagerRegistryEntry@@@Z @ 0x140072240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CFlipManagerRegistry::Add(
        CFlipManagerRegistry *this,
        struct FlipManagerObject *a2,
        struct FlipManagerRegistryEntry *a3)
{
  CFlipManagerRegistry **v6; // rcx

  ExAcquirePushLockExclusiveEx((char *)this + 8, 0LL);
  v6 = (CFlipManagerRegistry **)*((_QWORD *)this + 3);
  if ( *v6 != (CFlipManagerRegistry *)((char *)this + 16) )
    __fastfail(3u);
  *((_QWORD *)a3 + 1) = v6;
  *(_QWORD *)a3 = (char *)this + 16;
  *v6 = a3;
  *((_QWORD *)this + 3) = a3;
  *((_QWORD *)a3 + 3) = ++*((_QWORD *)this + 4);
  *((_QWORD *)a3 + 2) = a2;
  ExReleasePushLockExclusiveEx((char *)this + 8, 0LL);
}
