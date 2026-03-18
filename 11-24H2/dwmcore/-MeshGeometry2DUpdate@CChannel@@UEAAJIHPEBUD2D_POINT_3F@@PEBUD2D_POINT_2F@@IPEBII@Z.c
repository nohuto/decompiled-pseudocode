/*
 * XREFs of ?MeshGeometry2DUpdate@CChannel@@UEAAJIHPEBUD2D_POINT_3F@@PEBUD2D_POINT_2F@@IPEBII@Z @ 0x180204C60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18012F57C (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x18012F898 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18012FF80 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x1801302E8 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x18013059C (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::MeshGeometry2DUpdate(
        CChannel *this,
        unsigned int a2,
        unsigned int a3,
        const struct D2D_POINT_3F *a4,
        const struct D2D_POINT_2F *a5,
        unsigned int a6,
        const unsigned int *a7,
        unsigned int a8)
{
  __int64 v8; // rdi
  int v13; // eax
  int v14; // ebx
  unsigned __int64 v15; // r9
  __int64 v16; // rdx
  int v18; // eax
  unsigned int v19; // r14d
  unsigned __int64 v20; // r9
  __int64 v21; // rdx
  int v22; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v23[3]; // [rsp+24h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]

  v8 = *((_QWORD *)this + 8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 56LL))(v8);
  CChannel::CheckHandle((__int64)this, a2, 111);
  v22 = 557;
  v23[0] = a2;
  v23[1] = a3;
  v13 = CChannel::SendCommand((struct CCommandBatch **)this, &v22, 0xCu);
  v14 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x702,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v13);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 80LL))(v8);
    return (unsigned int)v14;
  }
  v23[1] = 0;
  v22 = 558;
  v23[0] = a2;
  v15 = 12LL * a6;
  if ( v15 > 0xFFFFFFFF )
  {
    v16 = 1800LL;
LABEL_4:
    v14 = -2147024362;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)0x80070216LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 80LL))(v8);
    return (unsigned int)v14;
  }
  v23[1] = 12 * a6;
  v18 = CChannel::BeginCommand((struct CCommandBatch **)this, &v22, 0xCu, v15);
  v19 = v18;
  if ( v18 >= 0 )
  {
    CDataStreamWriter::AddItemData(*((CDataStreamWriter **)this + 22), a4, v23[1]);
    CDataStreamWriter::EndItem(*((CDataStreamWriter **)this + 22));
    v22 = 560;
    v23[1] = 0;
    v23[0] = a2;
    if ( 8 * (unsigned __int64)a6 > 0xFFFFFFFF )
    {
      v16 = 1809LL;
      goto LABEL_4;
    }
    v23[1] = 8 * a6;
    v14 = CChannel::BeginCommand((struct CCommandBatch **)this, &v22, 0xCu, 8 * a6);
    if ( v14 < 0 )
    {
      v21 = 1810LL;
    }
    else
    {
      CDataStreamWriter::AddItemData(*((CDataStreamWriter **)this + 22), a5, v23[1]);
      CDataStreamWriter::EndItem(*((CDataStreamWriter **)this + 22));
      v20 = 4LL * a8;
      v23[1] = 0;
      v22 = 562;
      v23[0] = a2;
      if ( v20 > 0xFFFFFFFF )
      {
        v14 = -2147024362;
        v21 = 1818LL;
      }
      else
      {
        v23[1] = 4 * a8;
        v14 = CChannel::BeginCommand((struct CCommandBatch **)this, &v22, 0xCu, v20);
        if ( v14 >= 0 )
        {
          CDataStreamWriter::AddItemData(*((CDataStreamWriter **)this + 22), a7, v23[1]);
          CDataStreamWriter::EndItem(*((CDataStreamWriter **)this + 22));
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 80LL))(v8);
          return 0LL;
        }
        v21 = 1819LL;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v14);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 80LL))(v8);
    return (unsigned int)v14;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x709,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
    (const char *)(unsigned int)v18);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 80LL))(v8);
  return v19;
}
