/*
 * XREFs of ?EnsureSize@CDataStreamWriter@@IEAAJI@Z @ 0x180130750
 * Callers:
 *     ?AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x180131874 (-AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ?AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z @ 0x1801308E0 (-AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z.c)
 */

__int64 __fastcall CDataStreamWriter::EnsureSize(CDataStreamWriter *this, unsigned int a2)
{
  unsigned int v3; // edi
  _DWORD *v4; // rcx
  unsigned int v5; // esi
  int v6; // edx
  CDataStreamWriter *i; // rax
  unsigned int v9; // edx
  unsigned int v10; // ecx
  int v11; // r8d
  CDataStreamWriter *v12; // rcx
  CDataStreamWriter **v13; // rdx
  CDataStreamWriter *v14; // rdx
  CDataStreamWriter **v15; // rcx
  int v16; // ecx
  int NewBlock; // eax
  unsigned int v18; // [rsp+20h] [rbp-18h]

  v3 = (a2 + 3) & 0xFFFFFFFC;
  if ( v3 < a2 )
  {
    v18 = 402;
LABEL_16:
    v5 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, v18, 0LL);
  }
  else
  {
    v4 = (_DWORD *)*((_QWORD *)this + 4);
    v5 = v3 < a2 ? 0x80070216 : 0;
    if ( v4 )
    {
      v6 = v4[5];
      if ( v4[4] - v6 >= v3 )
        return v5;
      if ( !v6 )
      {
        operator delete(v4);
        *((_QWORD *)this + 4) = 0LL;
      }
    }
    for ( i = (CDataStreamWriter *)*((_QWORD *)this + 2);
          i != (CDataStreamWriter *)((char *)this + 16);
          i = *(CDataStreamWriter **)i )
    {
      v9 = *((_DWORD *)i + 4);
      if ( v9 >= v3 )
      {
        v10 = *((_DWORD *)this + 10);
        v11 = v9 + v10;
        if ( v9 + v10 < v10 )
        {
          v18 = 437;
          *((_DWORD *)this + 10) = -1;
          goto LABEL_16;
        }
        v12 = (CDataStreamWriter *)*((_QWORD *)this + 4);
        v5 = 0;
        *((_DWORD *)this + 10) = v11;
        if ( v12 )
        {
          v13 = (CDataStreamWriter **)*((_QWORD *)this + 1);
          if ( *v13 == this )
          {
            *(_QWORD *)v12 = this;
            *((_QWORD *)v12 + 1) = v13;
            *v13 = v12;
            *((_QWORD *)this + 1) = v12;
            goto LABEL_12;
          }
LABEL_18:
          __fastfail(3u);
        }
LABEL_12:
        v14 = *(CDataStreamWriter **)i;
        if ( *(CDataStreamWriter **)(*(_QWORD *)i + 8LL) != i )
          goto LABEL_18;
        v15 = (CDataStreamWriter **)*((_QWORD *)i + 1);
        if ( *v15 != i )
          goto LABEL_18;
        *v15 = v14;
        *((_QWORD *)v14 + 1) = v15;
        *((_DWORD *)i + 5) = 0;
        *((_QWORD *)this + 4) = i;
        return v5;
      }
    }
    v16 = 0x4000;
    if ( *((_DWORD *)this + 10) < 0x4000u )
      v16 = *((_DWORD *)this + 10);
    if ( v16 + v3 < v3 )
    {
      v18 = 501;
      goto LABEL_16;
    }
    NewBlock = CDataStreamWriter::AllocateNewBlock(this, v16 + v3);
    v5 = NewBlock;
    if ( NewBlock < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, NewBlock, 0x1F7u, 0LL);
  }
  return v5;
}
