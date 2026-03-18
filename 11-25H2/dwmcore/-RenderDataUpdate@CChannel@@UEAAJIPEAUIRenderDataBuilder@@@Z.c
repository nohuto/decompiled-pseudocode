/*
 * XREFs of ?RenderDataUpdate@CChannel@@UEAAJIPEAUIRenderDataBuilder@@@Z @ 0x180183010
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x180183178 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x180183BC8 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x180183E7C (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180249850 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::RenderDataUpdate(CChannel *this, unsigned int a2, struct IRenderDataBuilder *a3)
{
  __int64 v3; // rsi
  unsigned __int64 v5; // rbp
  __int64 v7; // r9
  __int64 i; // rax
  unsigned int v9; // r9d
  int v10; // eax
  unsigned int v11; // ebp
  int v13[2]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v14; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = *((_QWORD *)this + 8);
  v5 = a2;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 56LL))(v3);
  v7 = *((_QWORD *)this + 2) + 16LL * (unsigned int)(v5 - 1);
  if ( !(_DWORD)v5
    || v5 > (__int64)(*((_QWORD *)this + 3) - *((_QWORD *)this + 2)) >> 4
    || !*(_DWORD *)v7
    || !*(_DWORD *)(v7 + 4) )
  {
LABEL_9:
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xA88,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)v7);
  }
  for ( i = *(unsigned int *)(v7 + 4); ; LODWORD(i) = dword_1803A0BA0[i] )
  {
    if ( (unsigned int)i >= 0xC0 )
      goto LABEL_9;
    if ( (_DWORD)i == 132 )
      break;
  }
  v13[0] = 326;
  v14 = 0;
  v13[1] = v5;
  if ( a3 )
    v9 = *((_DWORD *)a3 + 10);
  else
    v9 = 0;
  v14 = v9;
  v10 = CChannel::BeginCommand(this, v13, 0xCu, v9);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3CC,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v10);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 80LL))(v3);
    return v11;
  }
  else
  {
    if ( v14 )
    {
      if ( *((_DWORD *)a3 + 2) )
        ModuleFailFastForHRESULT(-2147024809, retaddr);
      CDataStreamWriter::AddItemData(*((CDataStreamWriter **)this + 22), *((const void **)a3 + 2), v14);
    }
    CDataStreamWriter::EndItem(*((CDataStreamWriter **)this + 22));
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 80LL))(v3);
    return 0LL;
  }
}
