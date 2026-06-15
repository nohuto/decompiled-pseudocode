/*
 * XREFs of ?MarkDescriptorsAsInitialized@EffectPack@@QEAAXXZ @ 0x18004BB84
 * Callers:
 *     ?DeriveEffectiveConnectorAndEffectPackCapabilities@EffectPack@@QEAAJXZ @ 0x1800A4994 (-DeriveEffectiveConnectorAndEffectPackCapabilities@EffectPack@@QEAAJXZ.c)
 * Callees:
 *     ??A?$span@VSystemEffectDescriptor@@$0?0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z @ 0x18004BC10 (--A-$span@VSystemEffectDescriptor@@$0-0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z.c)
 */

void __fastcall EffectPack::MarkDescriptorsAsInitialized(EffectPack *this)
{
  __int64 v1; // rbx
  char *v2; // rsi
  char *v3; // rbp
  char *v4; // r14
  __int64 v5; // rdi
  __int64 v6; // rax

  v1 = 0LL;
  v2 = (char *)this + 1440;
  v3 = (char *)this + 1456;
  v4 = (char *)this + 1472;
  v5 = 5LL;
  do
  {
    *(_BYTE *)(gsl::span<SystemEffectDescriptor,-1>::operator[](v2, v1) + 52) = 1;
    *(_BYTE *)(gsl::span<SystemEffectDescriptor,-1>::operator[](v3, v1) + 52) = 1;
    v6 = gsl::span<SystemEffectDescriptor,-1>::operator[](v4, v1++);
    *(_BYTE *)(v6 + 52) = 1;
    --v5;
  }
  while ( v5 );
}
