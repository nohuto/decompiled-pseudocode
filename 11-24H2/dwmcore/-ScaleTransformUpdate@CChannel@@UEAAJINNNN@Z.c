/*
 * XREFs of ?ScaleTransformUpdate@CChannel@@UEAAJINNNN@Z @ 0x180206F70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18012F57C (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18012FF80 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::ScaleTransformUpdate(
        CChannel *this,
        unsigned int a2,
        double a3,
        double a4,
        double a5,
        double a6)
{
  __int64 v6; // rbx
  float v9; // xmm0_4
  int v10; // eax
  int v11; // edi
  float v12; // xmm0_4
  __int64 v14; // rdx
  int v15; // [rsp+20h] [rbp-30h] BYREF
  unsigned int v16; // [rsp+24h] [rbp-2Ch]
  float v17; // [rsp+28h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  v6 = *((_QWORD *)this + 8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 56LL))(v6);
  CChannel::CheckHandle((__int64)this, a2, 140);
  v15 = 576;
  v16 = a2;
  v9 = a3;
  v17 = v9;
  v10 = CChannel::SendCommand((struct CCommandBatch **)this, &v15, 0xCu);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7ED,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v10);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 80LL))(v6);
  }
  else
  {
    v15 = 577;
    v16 = a2;
    v12 = a4;
    v17 = v12;
    v11 = CChannel::SendCommand((struct CCommandBatch **)this, &v15, 0xCu);
    if ( v11 < 0 )
    {
      v14 = 2036LL;
    }
    else
    {
      v15 = 578;
      v16 = a2;
      v17 = a5;
      v11 = CChannel::SendCommand((struct CCommandBatch **)this, &v15, 0xCu);
      if ( v11 < 0 )
      {
        v14 = 2043LL;
      }
      else
      {
        v15 = 579;
        v16 = a2;
        v17 = a6;
        v11 = CChannel::SendCommand((struct CCommandBatch **)this, &v15, 0xCu);
        if ( v11 >= 0 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 80LL))(v6);
          return 0LL;
        }
        v14 = 2050LL;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v11);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 80LL))(v6);
  }
  return (unsigned int)v11;
}
