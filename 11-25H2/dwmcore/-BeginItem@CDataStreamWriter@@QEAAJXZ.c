/*
 * XREFs of ?BeginItem@CDataStreamWriter@@QEAAJXZ @ 0x180183CC4
 * Callers:
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x180183178 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?AsyncFlush@CChannel@@UEAAJII@Z @ 0x1801834F0 (-AsyncFlush@CChannel@@UEAAJII@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180183860 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDataStreamWriter::BeginItem(CDataStreamWriter *this)
{
  unsigned int v2; // ebx
  unsigned int v3; // eax
  __int64 v5; // rcx
  _DWORD *v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // eax
  unsigned int v10; // eax

  if ( *((_QWORD *)this + 6)
    || *((_DWORD *)this + 14)
    || (v5 = *((_QWORD *)this + 4), (unsigned int)(*(_DWORD *)(v5 + 16) - *(_DWORD *)(v5 + 20)) < 4) )
  {
    v2 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147418113, 0x89u, 0LL);
  }
  else
  {
    v6 = (_DWORD *)(*(unsigned int *)(v5 + 20) + v5 + 24);
    v7 = *((_DWORD *)this + 14);
    *((_QWORD *)this + 6) = v6;
    *v6 = v7;
    v8 = *((_QWORD *)this + 4);
    *((_DWORD *)this + 14) = 4;
    v9 = *(_DWORD *)(v8 + 20);
    if ( v9 + 4 < v9 )
    {
      *(_DWORD *)(v8 + 20) = -1;
      v3 = 583;
    }
    else
    {
      *(_DWORD *)(v8 + 20) = v9 + 4;
      v10 = *((_DWORD *)this + 11);
      if ( v10 + 4 >= v10 )
      {
        *((_DWORD *)this + 11) = v10 + 4;
        return 0;
      }
      *((_DWORD *)this + 11) = -1;
      v3 = 584;
    }
    v2 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, v3, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0x9Au, 0LL);
  }
  return v2;
}
