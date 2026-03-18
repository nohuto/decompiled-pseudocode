/*
 * XREFs of ?AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x1801840A0
 * Callers:
 *     ?ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERDATA@@PEBXI@Z @ 0x180183FA0 (-ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERDATA@@PEBXI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureSize@CDataStreamWriter@@IEAAJI@Z @ 0x180184CF0 (-EnsureSize@CDataStreamWriter@@IEAAJI@Z.c)
 *     ?IncreaseWrittenByteCount@CDataStreamWriter@@IEAAJI@Z @ 0x180184F50 (-IncreaseWrittenByteCount@CDataStreamWriter@@IEAAJI@Z.c)
 *     memcpy_0 @ 0x1802E8974 (memcpy_0.c)
 */

__int64 __fastcall CDataStreamWriter::AddBlockData(CDataStreamWriter *this, const void *a2, unsigned int a3)
{
  size_t v4; // rsi
  int v6; // r9d
  unsigned int v7; // ebx
  int v8; // eax
  unsigned int v10; // [rsp+20h] [rbp-18h]

  v4 = a3;
  if ( *((_QWORD *)this + 6) || *((_DWORD *)this + 14) )
  {
    v6 = -2147418113;
    v7 = -2147418113;
    v10 = 325;
  }
  else
  {
    v7 = 0;
    if ( !a3 )
      return v7;
    v8 = CDataStreamWriter::EnsureSize(this, a3);
    v7 = v8;
    if ( v8 < 0 )
    {
      v10 = 330;
    }
    else
    {
      memcpy_0((void *)(*(unsigned int *)(*((_QWORD *)this + 4) + 20LL) + *((_QWORD *)this + 4) + 24LL), a2, v4);
      v8 = CDataStreamWriter::IncreaseWrittenByteCount(this, v4);
      v7 = v8;
      if ( v8 >= 0 )
        return v7;
      v10 = 334;
    }
    v6 = v8;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, v10, 0LL);
  return v7;
}
