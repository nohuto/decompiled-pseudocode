/*
 * XREFs of SepSetTokenSessionById @ 0x1409F6674
 * Callers:
 *     SepGetAnonymousToken @ 0x1403B977C (SepGetAnonymousToken.c)
 *     SeExchangePrimaryToken @ 0x140792C70 (SeExchangePrimaryToken.c)
 *     SepFilterToken @ 0x140985C1C (SepFilterToken.c)
 *     SeSubProcessToken @ 0x140AD660C (SeSubProcessToken.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsGetSessionObjectById @ 0x1403C2DE0 (PsGetSessionObjectById.c)
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
