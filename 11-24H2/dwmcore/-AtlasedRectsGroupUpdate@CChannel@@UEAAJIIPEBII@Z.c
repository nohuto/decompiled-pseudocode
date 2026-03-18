/*
 * XREFs of ?AtlasedRectsGroupUpdate@CChannel@@UEAAJIIPEBII@Z @ 0x18012F380
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18012F500 (-CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18012F57C (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x18012F898 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18012FF80 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x1801302E8 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x18013059C (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::AtlasedRectsGroupUpdate(
        CChannel *this,
        unsigned int a2,
        unsigned int a3,
        const unsigned int *a4,
        unsigned int a5)
{
  __int64 v5; // rdi
  int v10; // eax
  int v11; // ebx
  unsigned __int64 v12; // r9
  __int64 v14; // rdx
  int v15; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v16[5]; // [rsp+24h] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v5 = *((_QWORD *)this + 8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 56LL))(v5);
  CChannel::CheckHandle(this, a2, 7LL);
  CChannel::CheckOptionalHandle(this, a3, 13LL);
  v15 = 481;
  v16[0] = a2;
  v16[1] = a3;
  v10 = CChannel::SendCommand(this, &v15, 0xCu);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x773,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v10);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 80LL))(v5);
  }
  else
  {
    v16[1] = 0;
    v12 = 4LL * a5;
    v15 = 482;
    v16[0] = a2;
    if ( v12 > 0xFFFFFFFF )
    {
      v11 = -2147024362;
      v14 = 1913LL;
    }
    else
    {
      v16[1] = 4 * a5;
      v11 = CChannel::BeginCommand(this, &v15, 0xCu, v12);
      if ( v11 >= 0 )
      {
        CDataStreamWriter::AddItemData(*((CDataStreamWriter **)this + 22), a4, v16[1]);
        CDataStreamWriter::EndItem(*((CDataStreamWriter **)this + 22));
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 80LL))(v5);
        return 0LL;
      }
      v14 = 1914LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v11);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 80LL))(v5);
  }
  return (unsigned int)v11;
}
