/*
 * XREFs of SepSetTokenSessionById @ 0x140A00ACC
 * Callers:
 *     SepGetAnonymousToken @ 0x1402905D8 (SepGetAnonymousToken.c)
 *     SeExchangePrimaryToken @ 0x14078384C (SeExchangePrimaryToken.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     PsGetSessionObjectById @ 0x1403D6D20 (PsGetSessionObjectById.c)
 */

void __fastcall SepSetTokenSessionById(__int64 a1, int a2, char a3, __int64 a4, _QWORD *a5)
{
  void *v6; // rcx

  if ( *(_DWORD *)(a1 + 120) != a2 )
  {
    *(_DWORD *)(a1 + 120) = a2;
    if ( !SeTokenDoesNotTrackSessionObject )
    {
      if ( a3 )
      {
        if ( a5 )
          *a5 = *(_QWORD *)(a1 + 1160);
        *(_QWORD *)(a1 + 1160) = a4;
      }
      else
      {
        v6 = *(void **)(a1 + 1160);
        if ( v6 )
          ObfDereferenceObject(v6);
        *(_QWORD *)(a1 + 1160) = PsGetSessionObjectById();
      }
    }
  }
}
