/*
 * XREFs of WPP_IFR_SF_Zd @ 0x14007F02C
 * Callers:
 *     ?IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z @ 0x1400515D4 (-IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z.c)
 *     ?_VerifyMultiSzString@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAGK@Z @ 0x140083690 (-_VerifyMultiSzString@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAGK@Z.c)
 * Callees:
 *     FxIFR @ 0x14000CC40 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x140056368 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_Zd(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 flags,
        unsigned int id,
        unsigned __int16 traceGuid,
        const _GUID *_a1,
        const _UNICODE_STRING *_a2,
        int globals_0)
{
  const _UNICODE_STRING *v7; // rbx
  unsigned __int64 v8; // rsi
  __int64 v11; // rdi
  int v12; // eax
  __int64 Length; // r8
  wchar_t *Buffer; // rax
  const _UNICODE_STRING *v15; // rdx
  wchar_t *v16; // rax

  v7 = _a2;
  v8 = id;
  v11 = 10LL;
  v12 = *(&WPP_GLOBAL_WDF_Control.Characteristics + 16 * ((unsigned __int64)id >> 16) + (((id - 1) >> 5) & 0x7FF));
  if ( !_bittest(&v12, (id - 1) & 0x1F)
    || *((_BYTE *)&WPP_GLOBAL_WDF_Control.Flags + 64 * ((unsigned __int64)id >> 16) + 1) < 2u )
  {
    goto LABEL_12;
  }
  if ( _a2 && _a2->Buffer )
  {
    Length = _a2->Length;
    Buffer = _a2->Buffer;
  }
  else
  {
    Length = 10LL;
    if ( !_a2 || (Buffer = _a2->Buffer) == 0LL )
    {
      Buffer = L"NULL";
      if ( !_a2 )
        goto LABEL_10;
    }
  }
  v15 = _a2;
  if ( !_a2->Length )
LABEL_10:
    v15 = (const _UNICODE_STRING *)&unk_1400B603C;
  FxWmiTraceMessage(
    *((_QWORD *)&WPP_GLOBAL_WDF_Control.CurrentIrp + 8 * (v8 >> 16)),
    43LL,
    _a1,
    traceGuid,
    v15,
    2LL,
    Buffer,
    Length,
    &globals_0,
    4LL,
    0LL);
LABEL_12:
  if ( !_a2 )
    goto LABEL_16;
  if ( _a2->Buffer )
  {
    v11 = _a2->Length;
    v16 = _a2->Buffer;
    goto LABEL_17;
  }
  v16 = _a2->Buffer;
  if ( !v16 )
  {
LABEL_16:
    v16 = L"NULL";
    if ( !_a2 )
    {
LABEL_18:
      v7 = (const _UNICODE_STRING *)&unk_1400B603C;
      goto LABEL_19;
    }
  }
LABEL_17:
  if ( !_a2->Length )
    goto LABEL_18;
LABEL_19:
  FxIFR(globals, 2u, v8, _a1, traceGuid, v7, 2LL, v16, v11, &globals_0, 4LL, 0LL);
}
