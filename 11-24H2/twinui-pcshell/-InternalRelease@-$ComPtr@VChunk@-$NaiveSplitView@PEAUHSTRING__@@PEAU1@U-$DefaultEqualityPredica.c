/*
 * XREFs of ?InternalRelease@?$ComPtr@VChunk@?$NaiveSplitView@PEAUHSTRING__@@PEAU1@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U73456@U?$HashMapOptions@PEAUHSTRING__@@PEAU1@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18056EBE0
 * Callers:
 *     ??1ChunkElementIterator@?$NaiveSplitView@PEAUHSTRING__@@PEAU1@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U73456@U?$HashMapOptions@PEAUHSTRING__@@PEAU1@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAA@XZ @ 0x18056BFC4 (--1ChunkElementIterator@-$NaiveSplitView@PEAUHSTRING__@@PEAU1@U-$DefaultEqualityPredicate@PEAUHS.c)
 *     ??1ChunkView@?$NaiveSplitView@PEAUHSTRING__@@PEAU1@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U73456@U?$HashMapOptions@PEAUHSTRING__@@PEAU1@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAA@XZ @ 0x18056BFEC (--1ChunkView@-$NaiveSplitView@PEAUHSTRING__@@PEAU1@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@I.c)
 *     ?Initialize@ChunkView@?$NaiveSplitView@PEAUHSTRING__@@PEAU1@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U73456@U?$HashMapOptions@PEAUHSTRING__@@PEAU1@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@QEAAJPEAU?$IIterator@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@@456@@Z @ 0x18056E7FC (-Initialize@ChunkView@-$NaiveSplitView@PEAUHSTRING__@@PEAU1@U-$DefaultEqualityPredicate@PEAUHSTR.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAU1@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U73456@U?$HashMapOptions@PEAUHSTRING__@@PEAU1@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEAA@XZ @ 0x18056BF7C (--1Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAU1@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Inter.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::Chunk>::InternalRelease(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v1; // rbx
  __int64 result; // rax
  unsigned __int32 v3; // edi

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    v3 = _InterlockedDecrement(v1 + 2);
    if ( !v3 )
    {
      Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::Chunk::~Chunk((__int64)v1);
      operator delete((void *)v1, (const struct std::nothrow_t *)0x90);
    }
    return v3;
  }
  return result;
}
