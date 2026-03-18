/*
 * XREFs of ?AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z @ 0x1801308E0
 * Callers:
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x18012F898 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?AsyncFlush@CChannel@@UEAAJII@Z @ 0x18012FC10 (-AsyncFlush@CChannel@@UEAAJII@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18012FF80 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?EnsureSize@CDataStreamWriter@@IEAAJI@Z @ 0x180130750 (-EnsureSize@CDataStreamWriter@@IEAAJI@Z.c)
 *     ?Initialize@CDataStreamWriter@@QEAAJI@Z @ 0x1801DE378 (-Initialize@CDataStreamWriter@@QEAAJI@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDataStreamWriter::AllocateNewBlock(CDataStreamWriter *this, unsigned int a2)
{
  unsigned int v2; // eax
  unsigned int v5; // ebp
  unsigned int v6; // ebx
  _DWORD *v8; // rax
  CDataStreamWriter *v9; // rcx
  CDataStreamWriter **v10; // rdx

  v2 = *((_DWORD *)this + 10);
  v5 = v2 + a2;
  if ( v2 + a2 >= v2 )
  {
    v8 = MIDL_user_allocate(a2 + 28LL);
    if ( v8 )
    {
      v8[5] = 0;
      *(_QWORD *)v8 = 0LL;
      *((_QWORD *)v8 + 1) = 0LL;
      v8[4] = a2;
      v9 = (CDataStreamWriter *)*((_QWORD *)this + 4);
      if ( v9 )
      {
        v10 = (CDataStreamWriter **)*((_QWORD *)this + 1);
        if ( *v10 != this )
          __fastfail(3u);
        *(_QWORD *)v9 = this;
        *((_QWORD *)v9 + 1) = v10;
        *v10 = v9;
        *((_QWORD *)this + 1) = v9;
      }
      *((_QWORD *)this + 4) = v8;
      *((_DWORD *)this + 10) = v5;
      return 0;
    }
    else
    {
      v6 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x225u, 0LL);
    }
  }
  else
  {
    v6 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0x221u, 0LL);
  }
  return v6;
}
