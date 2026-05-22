/*
 * XREFs of ?Reset@SipcLocalSid@@QEAAXXZ @ 0x1801104E4
 * Callers:
 *     ??1SipcServer@@EEAA@XZ @ 0x18010CE6C (--1SipcServer@@EEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall SipcLocalSid::Reset(void **this)
{
  void *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    LocalFree(v2);
    *this = 0LL;
  }
}
