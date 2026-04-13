/*
 * XREFs of ?GetStateHandle@CallerIdentity@@YAJPEBGPEAPEAX@Z @ 0x1800B28B4
 * Callers:
 *     ?GetEdgeFaviconCache@@YA?AV?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1800A47B8 (-GetEdgeFaviconCache@@YA-AV-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wi.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1800630B8 (-ResultFromKnownLastError@@YAJXZ.c)
 */

__int64 __fastcall CallerIdentity::GetStateHandle(CallerIdentity *this, unsigned __int16 *a2, void **a3)
{
  __int64 v4; // rax
  unsigned int v5; // ecx

  v4 = OpenStateExplicit(-6LL, this);
  v5 = 0;
  *(_QWORD *)a2 = v4;
  if ( !v4 )
    return (unsigned int)ResultFromKnownLastError();
  return v5;
}
