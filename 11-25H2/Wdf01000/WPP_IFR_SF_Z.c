/*
 * XREFs of WPP_IFR_SF_Z @ 0x1400969D8
 * Callers:
 *     ?_VerifyStateSeparationRegistryPolicy@FxRegKey@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x140053538 (-_VerifyStateSeparationRegistryPolicy@FxRegKey@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     FxInitialize @ 0x14006D198 (FxInitialize.c)
 * Callees:
 *     FxIFR @ 0x14000CC40 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x140056368 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_Z(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 level,
        unsigned int flags,
        unsigned __int16 id,
        const _GUID *traceGuid,
        const _UNICODE_STRING *_a1)
{
  const _UNICODE_STRING *v6; // rbx
  unsigned __int64 v7; // rbp
  __int64 v11; // rsi
  int v12; // eax
  __int64 Length; // r8
  wchar_t *Buffer; // rax
  const _UNICODE_STRING *v15; // rdx
  wchar_t *v16; // rax

  v6 = _a1;
  v7 = flags;
  v11 = 10LL;
  v12 = *(&WPP_GLOBAL_WDF_Control.Characteristics + 16 * ((unsigned __int64)flags >> 16) + (((flags - 1) >> 5) & 0x7FF));
  if ( !_bittest(&v12, (flags - 1) & 0x1F)
    || *((_BYTE *)&WPP_GLOBAL_WDF_Control.Flags + 64 * ((unsigned __int64)flags >> 16) + 1) < level )
  {
    goto LABEL_12;
  }
  if ( _a1 && _a1->Buffer )
  {
    Length = _a1->Length;
    Buffer = _a1->Buffer;
  }
  else
  {
    Length = 10LL;
    if ( !_a1 || (Buffer = _a1->Buffer) == 0LL )
    {
      Buffer = L"NULL";
      if ( !_a1 )
        goto LABEL_10;
    }
  }
  v15 = _a1;
  if ( !_a1->Length )
LABEL_10:
    v15 = (const _UNICODE_STRING *)&unk_1400B603C;
  FxWmiTraceMessage(
    *((_QWORD *)&WPP_GLOBAL_WDF_Control.CurrentIrp + 8 * (v7 >> 16)),
    43LL,
    traceGuid,
    id,
    v15,
    2LL,
    Buffer,
    Length,
    0LL);
LABEL_12:
  if ( !_a1 )
    goto LABEL_16;
  if ( _a1->Buffer )
  {
    v11 = _a1->Length;
    v16 = _a1->Buffer;
    goto LABEL_17;
  }
  v16 = _a1->Buffer;
  if ( !v16 )
  {
LABEL_16:
    v16 = L"NULL";
    if ( !_a1 )
    {
LABEL_18:
      v6 = (const _UNICODE_STRING *)&unk_1400B603C;
      goto LABEL_19;
    }
  }
LABEL_17:
  if ( !_a1->Length )
    goto LABEL_18;
LABEL_19:
  FxIFR(globals, level, v7, traceGuid, id, v6, 2LL, v16, v11, 0LL);
}
