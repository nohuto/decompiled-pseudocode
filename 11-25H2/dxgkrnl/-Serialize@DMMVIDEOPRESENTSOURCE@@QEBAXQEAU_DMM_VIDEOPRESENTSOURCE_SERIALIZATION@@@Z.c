/*
 * XREFs of ?Serialize@DMMVIDEOPRESENTSOURCE@@QEBAXQEAU_DMM_VIDEOPRESENTSOURCE_SERIALIZATION@@@Z @ 0x140260964
 * Callers:
 *     ?Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@@Z @ 0x140260ADC (-Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZA.c)
 * Callees:
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14002F740 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x140041DBC (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14004FDB4 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 */

void __fastcall DMMVIDEOPRESENTSOURCE::Serialize(
        DMMVIDEOPRESENTSOURCE *this,
        struct _DMM_VIDEOPRESENTSOURCE_SERIALIZATION *const a2)
{
  __int64 v4; // rdi

  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 503;
  }
  *(_DWORD *)a2 = *((_DWORD *)this + 6);
  if ( !*((_QWORD *)this + 5) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 68;
  }
  v4 = *(_QWORD *)(*((_QWORD *)this + 5) + 88LL);
  if ( v4 )
  {
    if ( !*(_QWORD *)(v4 + 8) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 68;
    }
    *((_BYTE *)a2 + 4) = ADAPTER_DISPLAY::IsPartOfDesktop(*(ADAPTER_DISPLAY **)(v4 + 8), *((_DWORD *)this + 6));
    if ( !*(_QWORD *)(v4 + 8) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 68;
    }
    *((_BYTE *)a2 + 5) = ADAPTER_DISPLAY::IsVidPnSourceActive(*(ADAPTER_DISPLAY **)(v4 + 8), *((_DWORD *)this + 6));
    if ( !*(_QWORD *)(v4 + 8) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 68;
    }
    *((_BYTE *)a2 + 6) = ADAPTER_DISPLAY::IsVidPnSourceVisible(*(ADAPTER_DISPLAY **)(v4 + 8), *((_DWORD *)this + 6));
    if ( !*(_QWORD *)(v4 + 8) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 68;
    }
    *((_BYTE *)a2 + 7) ^= (*(_BYTE *)(3984LL * *((unsigned int *)this + 6)
                                    + *(_QWORD *)(*(_QWORD *)(v4 + 8) + 128LL)
                                    + 3764) ^ *((_BYTE *)a2 + 7)) & 7;
  }
  else
  {
    *((_WORD *)a2 + 2) = 0;
    *((_BYTE *)a2 + 7) &= 0xF8u;
    *((_BYTE *)a2 + 6) = 0;
  }
}
