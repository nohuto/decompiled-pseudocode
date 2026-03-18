/*
 * XREFs of ?AsyncFlush@CChannel@@UEAAJII@Z @ 0x1801834F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x180183BC8 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?BeginItem@CDataStreamWriter@@QEAAJXZ @ 0x180183CC4 (-BeginItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x180183DB8 (-Create@CCommandBatch@@SAJIPEAPEAV1@@Z.c)
 *     ?AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z @ 0x180184E80 (-AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::AsyncFlush(CChannel *this, int a2, int a3)
{
  __int64 v3; // r15
  unsigned int v7; // ecx
  CDataStreamWriter **v8; // r14
  unsigned int v9; // ebx
  CDataStreamWriter *v10; // rsi
  _DWORD *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned int v14; // r8d
  unsigned int v15; // eax
  unsigned int v16; // eax
  int v17; // edi
  int v18; // esi
  unsigned int v19; // eax
  int v21; // eax
  unsigned int NewBlock; // edi
  __int64 v23; // rdx
  __int64 *i; // rcx
  unsigned int v25; // edx
  unsigned int v26; // eax
  CDataStreamWriter **v27; // rax
  CDataStreamWriter **v28; // rdx
  __int64 *v29; // rdx
  __int64 **v30; // rax
  int v31; // r9d
  unsigned int v32; // eax
  unsigned int v33; // edx
  unsigned int v34; // edx
  __int64 v35; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v3 = *((_QWORD *)this + 8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 56LL))(v3);
  LODWORD(v35) = 35;
  v8 = (CDataStreamWriter **)((char *)this + 176);
  HIDWORD(v35) = a2;
  v9 = 0;
  if ( !*((_QWORD *)this + 22) )
  {
    v21 = CCommandBatch::Create(v7, (struct CCommandBatch **)this + 22);
    NewBlock = v21;
    if ( v21 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x109,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
        (const char *)(unsigned int)v21);
      v23 = 241LL;
LABEL_19:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v23,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
        (const char *)NewBlock);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8F,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
        (const char *)NewBlock);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6F,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
        (const char *)NewBlock);
      v9 = NewBlock;
      goto LABEL_12;
    }
  }
  v10 = *v8;
  v11 = (_DWORD *)*((_QWORD *)*v8 + 4);
  if ( v11 )
  {
    if ( (unsigned int)(v11[4] - v11[5]) >= 0x10 )
      goto LABEL_4;
    if ( !v11[5] )
    {
      operator delete(v11);
      *((_QWORD *)v10 + 4) = 0LL;
    }
  }
  for ( i = (__int64 *)*((_QWORD *)v10 + 2); ; i = (__int64 *)*i )
  {
    if ( i == (__int64 *)((char *)v10 + 16) )
    {
      v33 = *((_DWORD *)v10 + 10);
      if ( v33 >= 0x4000 )
      {
        v34 = 16400;
      }
      else
      {
        v34 = v33 + 16;
        if ( v34 < 0x10 )
        {
          NewBlock = -2147024362;
          v32 = 501;
          v31 = -2147024362;
          goto LABEL_33;
        }
      }
      NewBlock = CDataStreamWriter::AllocateNewBlock(v10, v34);
      v31 = NewBlock;
      if ( (NewBlock & 0x80000000) == 0 )
        goto LABEL_4;
      v32 = 503;
LABEL_33:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v31, v32, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, NewBlock, 0x17Cu, 0LL);
      v23 = 247LL;
      goto LABEL_19;
    }
    v25 = *((_DWORD *)i + 4);
    if ( v25 >= 0x10 )
      break;
  }
  v26 = *((_DWORD *)v10 + 10);
  if ( v26 + v25 < v26 )
  {
    *((_DWORD *)v10 + 10) = -1;
    NewBlock = -2147024362;
    v31 = -2147024362;
    v32 = 437;
    goto LABEL_33;
  }
  *((_DWORD *)v10 + 10) = v26 + v25;
  v27 = (CDataStreamWriter **)*((_QWORD *)v10 + 4);
  if ( v27 )
  {
    v28 = (CDataStreamWriter **)*((_QWORD *)v10 + 1);
    if ( *v28 == v10 )
    {
      *v27 = v10;
      v27[1] = (CDataStreamWriter *)v28;
      *v28 = (CDataStreamWriter *)v27;
      *((_QWORD *)v10 + 1) = v27;
      goto LABEL_29;
    }
LABEL_34:
    __fastfail(3u);
  }
LABEL_29:
  v29 = (__int64 *)*i;
  if ( *(__int64 **)(*i + 8) != i )
    goto LABEL_34;
  v30 = (__int64 **)i[1];
  if ( *v30 != i )
    goto LABEL_34;
  *v30 = v29;
  v29[1] = (__int64)v30;
  *((_DWORD *)i + 5) = 0;
  *((_QWORD *)v10 + 4) = i;
LABEL_4:
  CDataStreamWriter::BeginItem(*v8);
  v12 = *((_QWORD *)this + 22);
  if ( !*(_QWORD *)(v12 + 48) && !*(_DWORD *)(v12 + 56)
    || (v13 = *(_QWORD *)(v12 + 32), v14 = *(_DWORD *)(v13 + 20), *(_DWORD *)(v13 + 16) - v14 < 0xC) )
  {
    v17 = -2147418113;
    v19 = 209;
    v18 = -2147418113;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, v19, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0xB2u, 0LL);
    goto LABEL_11;
  }
  if ( v14 + 12 < v14 )
  {
    *(_DWORD *)(v13 + 20) = -1;
    v16 = 583;
LABEL_9:
    v17 = -2147024362;
    v18 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, v16, 0LL);
    v19 = 216;
    goto LABEL_10;
  }
  *(_DWORD *)(v13 + 20) = v14 + 12;
  v15 = *(_DWORD *)(v12 + 44);
  if ( v15 + 12 < v15 )
  {
    *(_DWORD *)(v12 + 44) = -1;
    v16 = 584;
    goto LABEL_9;
  }
  *(_DWORD *)(v12 + 44) = v15 + 12;
  *(_DWORD *)(v12 + 56) += 12;
  *(_QWORD *)(v14 + v13 + 24) = v35;
  *(_DWORD *)(v14 + v13 + 32) = a3;
LABEL_11:
  CDataStreamWriter::EndItem(*((CDataStreamWriter **)this + 22));
LABEL_12:
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 80LL))(v3);
  return v9;
}
