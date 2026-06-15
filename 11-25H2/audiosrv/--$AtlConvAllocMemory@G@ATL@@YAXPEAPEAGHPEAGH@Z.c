/*
 * XREFs of ??$AtlConvAllocMemory@G@ATL@@YAXPEAPEAGHPEAGH@Z @ 0x180029EF8
 * Callers:
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x180027FD8 (-Initialize@CAppAudioSessionId@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800A4D5C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATL::AtlConvAllocMemory<unsigned short>(void **a1, int a2, void *a3)
{
  void *v3; // rbx
  void *v5; // rcx

  v3 = a3;
  if ( !a1 || a2 < 0 || !a3 )
    ATL::AtlThrowImpl(-2147024809);
  if ( *a1 == a3 )
  {
    if ( a2 > 128 )
      v3 = calloc(a2, 2uLL);
  }
  else
  {
    v5 = *a1;
    if ( a2 <= 128 )
    {
      free(v5);
    }
    else
    {
      v3 = (void *)_o__recalloc(v5, a2, 2LL);
      if ( !v3 )
        ATL::AtlThrowImpl(-2147024882);
    }
  }
  *a1 = v3;
  if ( !v3 )
    ATL::AtlThrowImpl(-2147024882);
}
