/*
 * XREFs of __tlregdtor @ 0x18000CC8C
 * Callers:
 *     sub_180028774 @ 0x180028774 (sub_180028774.c)
 * Callees:
 *     _o__free_base @ 0x18000C396 (_o__free_base.c)
 *     _o__malloc_base @ 0x18000C3C6 (_o__malloc_base.c)
 */

__int64 __fastcall _tlregdtor(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbx

  v2 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex);
  v3 = *(_QWORD *)(v2 + 32);
  if ( !v3 )
  {
    v3 = v2 + 48;
LABEL_7:
    *(_DWORD *)v3 = 0;
    *(_QWORD *)(v2 + 32) = v3;
    goto LABEL_8;
  }
  if ( *(_DWORD *)v3 == 30 )
  {
    v3 = o__malloc_base();
    o__free_base();
    if ( !v3 )
      return 0xFFFFFFFFLL;
    *(_QWORD *)(v3 + 8) = *(_QWORD *)(v2 + 32);
    goto LABEL_7;
  }
LABEL_8:
  *(_QWORD *)(v3 + 8LL * (int)(*(_DWORD *)v3)++ + 16) = a1;
  return 0LL;
}
