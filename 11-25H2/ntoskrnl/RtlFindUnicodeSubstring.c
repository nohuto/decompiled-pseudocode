/*
 * XREFs of RtlFindUnicodeSubstring @ 0x140976ED0
 * Callers:
 *     PiDrvDbFindSystemFilePathToken @ 0x14072ABA8 (PiDrvDbFindSystemFilePathToken.c)
 *     PiDrvDbRegisterNode @ 0x14072C178 (PiDrvDbRegisterNode.c)
 *     CmpTraceSecurityChanging @ 0x140976E1C (CmpTraceSecurityChanging.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     memcmp @ 0x1406B4C10 (memcmp.c)
 */

PWCHAR __cdecl RtlFindUnicodeSubstring(
        PUNICODE_STRING FullString,
        PUNICODE_STRING SearchString,
        BOOLEAN CaseInSensitive)
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  unsigned __int16 *v6; // rdx
  char v7; // r8
  size_t v8; // rdi
  struct _LIST_ENTRY *Flink; // r11
  __int64 Length; // rax
  wchar_t *Buffer; // rbx
  wchar_t *v13; // rsi
  wchar_t *v14; // rbp
  wchar_t *v15; // r10
  bool v16; // zf
  signed __int64 v17; // rdi
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r9

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v8 = *v6;
  Flink = CurrentServerSiloGlobals[75].Flink;
  Length = FullString->Length;
  if ( (unsigned __int16)Length >= (unsigned __int16)v8 )
  {
    Buffer = FullString->Buffer;
    v13 = (wchar_t *)((char *)Buffer + Length - v8);
    if ( v7 )
    {
      v14 = (wchar_t *)(v8 + *((_QWORD *)v6 + 1));
      while ( Buffer <= v13 )
      {
        v15 = SearchString->Buffer;
        v16 = v15 == v14;
        if ( v15 < v14 )
        {
          v17 = (char *)Buffer - (char *)v15;
          do
          {
            v18 = *(wchar_t *)((char *)v15 + v17);
            v19 = *v15;
            if ( (_WORD)v18 != (_WORD)v19 )
            {
              if ( (unsigned int)v18 >= 0x61 )
              {
                if ( (unsigned int)v18 > 0x7A )
                {
                  if ( Flink && (unsigned __int16)v18 >= 0xC0u )
                    LOWORD(v18) = *((_WORD *)&Flink->Flink
                                  + (v18 & 0xF)
                                  + *((unsigned __int16 *)&Flink->Flink
                                    + ((unsigned __int8)v18 >> 4)
                                    + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v18 >> 8))))
                                + v18;
                }
                else
                {
                  LOWORD(v18) = v18 - 32;
                }
              }
              if ( (unsigned int)v19 >= 0x61 )
              {
                if ( (unsigned int)v19 > 0x7A )
                {
                  if ( Flink )
                  {
                    if ( (unsigned __int16)v19 >= 0xC0u )
                      LOWORD(v19) = *((_WORD *)&Flink->Flink
                                    + (v19 & 0xF)
                                    + *((unsigned __int16 *)&Flink->Flink
                                      + ((unsigned __int8)v19 >> 4)
                                      + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v19 >> 8))))
                                  + v19;
                  }
                }
                else
                {
                  LOWORD(v19) = v19 - 32;
                }
              }
              if ( (_WORD)v18 != (_WORD)v19 )
                break;
            }
            ++v15;
          }
          while ( v15 < v14 );
          v16 = v15 == v14;
        }
        if ( v16 )
          return Buffer;
        ++Buffer;
      }
    }
    else
    {
      while ( Buffer <= v13 )
      {
        if ( !memcmp(Buffer, SearchString->Buffer, v8) )
          return Buffer;
        ++Buffer;
      }
    }
  }
  return 0LL;
}
