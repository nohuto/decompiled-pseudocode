/*
 * XREFs of ??$destruct_range@UCachedBlur@CBlurredBackdropCache@@@detail@@YAXPEAUCachedBlur@CBlurredBackdropCache@@0@Z @ 0x1801E37BC
 * Callers:
 *     ?ensure_extra_capacity@?$buffer_impl@UCachedBlur@CBlurredBackdropCache@@$01$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801E3A68 (-ensure_extra_capacity@-$buffer_impl@UCachedBlur@CBlurredBackdropCache@@$01$00Vliberal_expansion.c)
 * Callees:
 *     ??_GCachedBlur@CBlurredBackdropCache@@QEAAPEAXI@Z @ 0x1801E3A44 (--_GCachedBlur@CBlurredBackdropCache@@QEAAPEAXI@Z.c)
 */

void *__fastcall detail::destruct_range<CBlurredBackdropCache::CachedBlur>(
        CBlurredBackdropCache::CachedBlur *this,
        CBlurredBackdropCache::CachedBlur *a2)
{
  CBlurredBackdropCache::CachedBlur *v3; // rbx
  void *result; // rax

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      result = CBlurredBackdropCache::CachedBlur::`scalar deleting destructor'(v3, (unsigned int)a2);
      v3 = (CBlurredBackdropCache::CachedBlur *)((char *)v3 + 128);
    }
    while ( v3 != a2 );
  }
  return result;
}
