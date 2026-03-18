/*
 * XREFs of ?AtlasedRectsMeshUpdate@CChannel@@UEAAJI_NHPEBUD2D_RECT_F@@1I@Z @ 0x18012EFC0
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

__int64 __fastcall CChannel::AtlasedRectsMeshUpdate(
        CChannel *this,
        unsigned int a2,
        unsigned __int8 a3,
        unsigned int a4,
        const struct D2D_RECT_F *a5,
        const struct D2D_RECT_F *a6,
        unsigned int a7)
{
  __int64 v7; // rbx
  unsigned __int64 v12; // r14
  int v13; // eax
  int v14; // esi
  __int64 v16; // rdx
  int v17; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v18[3]; // [rsp+24h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]

  v7 = *((_QWORD *)this + 8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 56LL))(v7);
  CChannel::CheckHandle(this, a2, 8LL);
  v12 = 16LL * a7;
  if ( v12 > 0xFFFFFFFF )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x740,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)0x80070216LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 80LL))(v7);
    return 2147942934LL;
  }
  else
  {
    v17 = 484;
    v18[0] = a2;
    v18[1] = a3;
    v13 = CChannel::SendCommand(this, &v17, 0xCu);
    v14 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x746,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
        (const char *)(unsigned int)v13);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 80LL))(v7);
    }
    else
    {
      v17 = 485;
      v18[0] = a2;
      v18[1] = a4;
      v14 = CChannel::SendCommand(this, &v17, 0xCu);
      if ( v14 < 0 )
      {
        v16 = 1869LL;
      }
      else
      {
        v17 = 486;
        v18[0] = a2;
        v18[1] = 16 * a7;
        v14 = CChannel::BeginCommand(this, &v17, 0xCu, v12);
        if ( v14 < 0 )
        {
          v16 = 1876LL;
        }
        else
        {
          CDataStreamWriter::AddItemData(*((CDataStreamWriter **)this + 22), a5, v18[1]);
          CDataStreamWriter::EndItem(*((CDataStreamWriter **)this + 22));
          v17 = 488;
          v18[0] = a2;
          v18[1] = 16 * a7;
          v14 = CChannel::BeginCommand(this, &v17, 0xCu, v12);
          if ( v14 >= 0 )
          {
            CDataStreamWriter::AddItemData(*((CDataStreamWriter **)this + 22), a6, v18[1]);
            CDataStreamWriter::EndItem(*((CDataStreamWriter **)this + 22));
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 80LL))(v7);
            return 0LL;
          }
          v16 = 1885LL;
        }
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
        (const char *)(unsigned int)v14);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 80LL))(v7);
    }
    return (unsigned int)v14;
  }
}
