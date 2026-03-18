/*
 * XREFs of ?RgnGeometryUpdate@CChannel@@UEAAJIPEBUtagRECT@@IHH@Z @ 0x180182450
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180182E5C (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x180183178 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x180183BC8 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x180183E7C (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?GetItemDataWritePointer@CDataStreamWriter@@QEAAJIPEAPEAX@Z @ 0x1801E0E88 (-GetItemDataWritePointer@CDataStreamWriter@@QEAAJIPEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::RgnGeometryUpdate(
        CChannel *this,
        unsigned int a2,
        const struct tagRECT *a3,
        unsigned int a4,
        int a5,
        int a6)
{
  __int64 v6; // rdi
  unsigned __int64 v11; // r9
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // r14d
  int v15; // ebx
  CDataStreamWriter *v17; // rcx
  LONG *p_right; // r8
  signed __int64 v19; // rsi
  _DWORD *v20; // rdx
  LONG v21; // ecx
  int v22[2]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v23; // [rsp+28h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  void *v25; // [rsp+60h] [rbp+8h] BYREF

  v6 = *((_QWORD *)this + 8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 56LL))(v6);
  CChannel::CheckHandle(this, a2, 129LL);
  v22[0] = 555;
  v23 = 0;
  v11 = 16LL * a4;
  v22[1] = a2;
  if ( v11 > 0xFFFFFFFF )
  {
    v13 = -2147024362;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x857,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)0x80070216LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 80LL))(v6);
    return v13;
  }
  v23 = 16 * a4;
  v12 = CChannel::BeginCommand(this, v22, 0xCu, v11);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x858,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v12);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 80LL))(v6);
    return v13;
  }
  if ( a4 )
  {
    v14 = a5;
    v15 = a6;
    if ( a5 || a6 )
    {
      v17 = (CDataStreamWriter *)*((_QWORD *)this + 22);
      v25 = 0LL;
      CDataStreamWriter::GetItemDataWritePointer(v17, v23, &v25);
      p_right = &a3->right;
      v19 = (char *)a3 - (_BYTE *)v25;
      v20 = (char *)v25 + 8;
      do
      {
        *(v20 - 2) = v14 + *(_DWORD *)((char *)v20 + v19 - 8);
        *(v20 - 1) = v15 + *(p_right - 1);
        v21 = *p_right;
        p_right += 4;
        *v20 = v14 + v21;
        v20 += 4;
        *(v20 - 3) = v15 + *(p_right - 3);
        --a4;
      }
      while ( a4 );
    }
    else
    {
      CDataStreamWriter::AddItemData(*((CDataStreamWriter **)this + 22), a3, v23);
    }
  }
  CDataStreamWriter::EndItem(*((CDataStreamWriter **)this + 22));
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 80LL))(v6);
  return 0LL;
}
