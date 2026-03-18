/*
 * XREFs of ?GetFlipManagerForId@CFlipManagerRegistry@@UEAAX_KPEAPEAUFlipManagerObject@@@Z @ 0x1400722D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CFlipManagerRegistry::GetFlipManagerForId(
        CFlipManagerRegistry *this,
        __int64 *a2,
        struct FlipManagerObject **a3)
{
  char *v3; // rdi
  __int64 ***v7; // rbx
  __int64 **i; // rcx

  *a3 = 0LL;
  v3 = (char *)this + 8;
  ExAcquirePushLockSharedEx((char *)this + 8, 0LL);
  v7 = (__int64 ***)((char *)this + 16);
  for ( i = *v7; i != (__int64 **)v7; i = (__int64 **)*i )
  {
    if ( i[3] == a2 )
    {
      *a3 = (struct FlipManagerObject *)i[2];
      ObfReferenceObject(i[2]);
      break;
    }
  }
  ExReleasePushLockSharedEx(v3, 0LL);
}
