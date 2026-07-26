/*
 * XREFs of ??0?$KHashTableBase@$00@Rtl@@QEAA@_K@Z @ 0x140144CA0
 * Callers:
 *     ?ndisBindBuilderInitialize@@YAJXZ @ 0x14018DDB8 (-ndisBindBuilderInitialize@@YAJXZ.c)
 * Callees:
 *     ?AllocateBuckets@?$KHashTableBase@$00@Rtl@@CAPEAX_KPEAX@Z @ 0x140144FC0 (-AllocateBuckets@-$KHashTableBase@$00@Rtl@@CAPEAX_KPEAX@Z.c)
 */

__int64 __fastcall Rtl::KHashTableBase<1>::KHashTableBase<1>(__int64 a1)
{
  __int64 Buckets; // rax
  char *v3; // rdi
  __int64 v4; // rdx
  char v5; // cl
  unsigned __int64 v6; // rcx

  Buckets = Rtl::KHashTableBase<1>::AllocateBuckets(0x40uLL);
  v3 = (char *)(a1 + 16);
  if ( Buckets )
    v3 = (char *)Buckets;
  v4 = Buckets != 0 ? 8 : 1;
  if ( ((Buckets != 0 ? 7 : 0) & (unsigned __int8)(Buckets != 0 ? 8 : 1)) != 0 )
  {
    v5 = -1;
    do
    {
      ++v5;
      LODWORD(v4) = (unsigned int)v4 >> 1;
    }
    while ( (_DWORD)v4 );
    v4 = (unsigned int)(1 << v5);
  }
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = v3;
  if ( (unsigned int)v4 > 0x4000000 )
    v4 = 0x4000000LL;
  v6 = (unsigned int)v4;
  *(_DWORD *)(a1 + 4) = (32 * v4) | 3;
  if ( v3 > &v3[8 * v4] )
    v6 = 0LL;
  if ( v6 )
    memset64(v3, a1 | 1, v6);
  return a1;
}
