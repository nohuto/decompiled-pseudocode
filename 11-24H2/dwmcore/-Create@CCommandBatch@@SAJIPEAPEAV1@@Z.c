/*
 * XREFs of ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x1801304D8
 * Callers:
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x18012F898 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?AsyncFlush@CChannel@@UEAAJII@Z @ 0x18012FC10 (-AsyncFlush@CChannel@@UEAAJII@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18012FF80 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18000CD4C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CDataStreamWriter@@QEAAJI@Z @ 0x1801DE378 (-Initialize@CDataStreamWriter@@QEAAJI@Z.c)
 *     ??_GCCommandBatch@@QEAAPEAXI@Z @ 0x1802614B8 (--_GCCommandBatch@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CCommandBatch::Create(__int64 a1, struct CCommandBatch **a2)
{
  CCommandBatch *v3; // rax
  unsigned int v4; // edx
  CCommandBatch *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi
  unsigned int v8; // edx

  v3 = (CCommandBatch *)DefaultHeap::AllocClear(0x50uLL);
  v5 = v3;
  if ( v3 )
  {
    *((_QWORD *)v3 + 1) = v3;
    *(_QWORD *)v3 = v3;
    *((_QWORD *)v3 + 4) = 0LL;
    *((_DWORD *)v3 + 10) = 0;
    *((_DWORD *)v3 + 11) = 0;
    *((_QWORD *)v3 + 6) = 0LL;
    *((_DWORD *)v3 + 14) = 0;
    *((_QWORD *)v3 + 3) = (char *)v3 + 16;
    *((_QWORD *)v3 + 2) = (char *)v3 + 16;
    v6 = CDataStreamWriter::Initialize(v3, v4);
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x27u, 0LL);
      CCommandBatch::`scalar deleting destructor'(v5, v8);
    }
    else
    {
      *a2 = v5;
    }
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x25u, 0LL);
  }
  return v7;
}
