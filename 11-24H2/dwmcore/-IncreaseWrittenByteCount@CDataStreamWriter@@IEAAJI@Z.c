/*
 * XREFs of ?IncreaseWrittenByteCount@CDataStreamWriter@@IEAAJI@Z @ 0x1801306C0
 * Callers:
 *     ?AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x180131874 (-AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDataStreamWriter::IncreaseWrittenByteCount(CDataStreamWriter *this, int a2)
{
  __int64 v2; // r8
  unsigned int v3; // eax
  unsigned int v4; // edx

  v2 = *((_QWORD *)this + 4);
  v3 = *(_DWORD *)(v2 + 20);
  if ( v3 + a2 < v3 )
  {
    *(_DWORD *)(v2 + 20) = -1;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0x247u, 0LL);
    return 2147942934LL;
  }
  *(_DWORD *)(v2 + 20) = v3 + a2;
  v4 = *((_DWORD *)this + 11) + a2;
  if ( v4 < *((_DWORD *)this + 11) )
  {
    *((_DWORD *)this + 11) = -1;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0x248u, 0LL);
    return 2147942934LL;
  }
  *((_DWORD *)this + 11) = v4;
  return 0LL;
}
