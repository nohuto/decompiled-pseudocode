/*
 * XREFs of ?TranslateIndex@CSparseIndexMapRT@@QEAAJIPEAIPEA_N@Z @ 0x140090730
 * Callers:
 *     ?GetObjectMetadata@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAXPEAI@Z @ 0x14008FEA0 (-GetObjectMetadata@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAXPEAI@Z.c)
 *     ?GetObjectProperties@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAXPEAI@Z @ 0x14008FF80 (-GetObjectProperties@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAXPEAI@Z.c)
 *     ?GetObjectSampleBuffer@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAMPEAI@Z @ 0x140090060 (-GetObjectSampleBuffer@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAMPEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSparseIndexMapRT::TranslateIndex(
        CSparseIndexMapRT *this,
        unsigned int a2,
        unsigned int *a3,
        bool *a4)
{
  __int64 result; // rax
  __int64 v6; // r8

  result = 2147942487LL;
  *a4 = 0;
  if ( a2 < *(_DWORD *)this )
  {
    v6 = *((_QWORD *)this + 3);
    if ( !*(_DWORD *)(v6 + 4LL * a2) )
    {
      *(_DWORD *)(v6 + 4LL * a2) = ++*((_DWORD *)this + 1);
      *a4 = 1;
    }
    *a3 = *(_DWORD *)(*((_QWORD *)this + 3) + 4LL * a2) - 1;
    return 0LL;
  }
  return result;
}
