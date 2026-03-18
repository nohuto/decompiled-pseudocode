/*
 * XREFs of FreeSystemRelativePath @ 0x140146330
 * Callers:
 *     ?ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z @ 0x14010204C (-ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 */

void __fastcall FreeSystemRelativePath(__int64 a1)
{
  char *v2; // rcx

  v2 = *(char **)(a1 + 8);
  if ( v2 )
    GreDeleteFastMutex(v2);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)a1 = 0;
}
