/*
 * XREFs of MiUpdateDomainAvailableAffinity @ 0x140413A28
 * Callers:
 *     MiAssignBackgroundZeroThreadToProcessor @ 0x1403312CC (MiAssignBackgroundZeroThreadToProcessor.c)
 *     MiUnlinkZeroThreadFromActiveDomain @ 0x14041399C (MiUnlinkZeroThreadFromActiveDomain.c)
 * Callees:
 *     <none>
 */

void __fastcall MiUpdateDomainAvailableAffinity(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v3; // rbx
  __int64 *v4; // r9
  unsigned int i; // r10d
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax

  v3 = *(_QWORD *)(a1 + 336);
  v4 = (__int64 *)a2[1];
  for ( i = 0; i < *(_DWORD *)(v3 + 20); ++i )
  {
    if ( *((_WORD *)v4 + 4) == *(_WORD *)(a1 + 360) && (!*(_BYTE *)(v3 + 36) || *(_QWORD *)(*a2 + 16LL * i)) )
    {
      v6 = *(_QWORD *)(a1 + 352);
      v7 = *v4;
      if ( a3 )
        v8 = v7 & ~v6;
      else
        v8 = v7 | v6;
      *v4 = v8;
      return;
    }
    v4 += 2;
  }
}
