/*
 * XREFs of ?AddRef@?$weak_source@$00$00@impl@winrt@@UEAAIXZ @ 0x1800ED050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::weak_source<1,1>::AddRef(__int64 a1)
{
  __int64 v1; // rdx

  v1 = a1 + 16;
  if ( !a1 )
    v1 = 24LL;
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)v1);
}
