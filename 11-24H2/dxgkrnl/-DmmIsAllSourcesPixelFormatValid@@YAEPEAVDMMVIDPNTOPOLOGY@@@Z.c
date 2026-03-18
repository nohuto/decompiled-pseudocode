/*
 * XREFs of ?DmmIsAllSourcesPixelFormatValid@@YAEPEAVDMMVIDPNTOPOLOGY@@@Z @ 0x1403167AC
 * Callers:
 *     ?_IsSupportedVidPn@VIDPN_MGR@@AEBAJPEAUD3DKMDT_HVIDPN__@@QEAE@Z @ 0x140317EFC (-_IsSupportedVidPn@VIDPN_MGR@@AEBAJPEAUD3DKMDT_HVIDPN__@@QEAE@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14000BE00 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x140039A3C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 */

unsigned __int8 __fastcall DmmIsAllSourcesPixelFormatValid(struct DMMVIDPNTOPOLOGY *a1)
{
  char *v2; // rsi
  char *v3; // rbx
  char *v4; // rbx
  DMMVIDPNTARGET *v5; // rdi
  struct DMMVIDPNTARGETMODESET *v6; // rdi
  __int64 v7; // rbp
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  char *v11; // rax

  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1938;
  }
  v2 = (char *)a1 + 24;
  v3 = (char *)*((_QWORD *)a1 + 3);
  if ( v3 == v2 )
    v4 = 0LL;
  else
    v4 = v3 - 8;
  while ( v4 )
  {
    v5 = (DMMVIDPNTARGET *)*((_QWORD *)v4 + 11);
    if ( !v5 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1949;
    }
    v6 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(v5);
    if ( !v6 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1960;
    }
    v7 = *((_QWORD *)v6 + 18);
    ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v6 + 88));
    if ( v7 )
    {
      v8 = *(int *)(v7 + 96);
      if ( (unsigned int)v8 <= 0x29 )
      {
        v9 = 0x20003900000LL;
        if ( _bittest64(&v9, v8) )
          return 0;
      }
    }
    v11 = (char *)*((_QWORD *)v4 + 1);
    v4 = v11 - 8;
    if ( v11 == v2 )
      v4 = 0LL;
  }
  return 1;
}
