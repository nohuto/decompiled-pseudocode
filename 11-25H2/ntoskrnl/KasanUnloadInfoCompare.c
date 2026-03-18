/*
 * XREFs of KasanUnloadInfoCompare @ 0x1405A6430
 * Callers:
 *     KasanDriverLoadImageInternal @ 0x1404B82E0 (KasanDriverLoadImageInternal.c)
 *     KasanDriverUnloadImage @ 0x1405A6020 (KasanDriverUnloadImage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KasanUnloadInfoCompare(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdx

  v2 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 48LL);
  if ( a1 >= v2 )
    return a1 != v2;
  else
    return 0xFFFFFFFFLL;
}
