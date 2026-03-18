/*
 * XREFs of ?GetItemDataWritePointer@CDataStreamWriter@@QEAAJIPEAPEAX@Z @ 0x1801D4C88
 * Callers:
 *     ?RgnGeometryUpdate@CChannel@@UEAAJIPEBUtagRECT@@IHH@Z @ 0x18012EB70 (-RgnGeometryUpdate@CChannel@@UEAAJIPEBUtagRECT@@IHH@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDataStreamWriter::GetItemDataWritePointer(CDataStreamWriter *this, unsigned int a2, void **a3)
{
  __int64 v4; // r8
  __int64 v5; // r10
  unsigned int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // ebx

  if ( !*((_QWORD *)this + 6) && !*((_DWORD *)this + 14)
    || !a2
    || (v4 = *((_QWORD *)this + 4), v5 = *(unsigned int *)(v4 + 20), *(_DWORD *)(v4 + 16) - (int)v5 < a2) )
  {
    v8 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147418113, 0xD1u, 0LL);
    return v8;
  }
  *a3 = (void *)(v5 + v4 + 24);
  if ( (unsigned int)v5 + a2 < (unsigned int)v5 )
  {
    *(_DWORD *)(v4 + 20) = -1;
    v7 = 583;
  }
  else
  {
    *(_DWORD *)(v4 + 20) = v5 + a2;
    v6 = *((_DWORD *)this + 11);
    if ( v6 + a2 >= v6 )
    {
      *((_DWORD *)this + 14) += a2;
      v8 = 0;
      *((_DWORD *)this + 11) = v6 + a2;
      return v8;
    }
    *((_DWORD *)this + 11) = -1;
    v7 = 584;
  }
  v8 = -2147024362;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, v7, 0LL);
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0xD8u, 0LL);
  return v8;
}
