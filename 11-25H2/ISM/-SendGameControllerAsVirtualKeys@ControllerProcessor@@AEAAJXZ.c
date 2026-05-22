/*
 * XREFs of ?SendGameControllerAsVirtualKeys@ControllerProcessor@@AEAAJXZ @ 0x180055A50
 * Callers:
 *     ?OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180089A00 (-OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?SetVirtualKeyState@ControllerProcessor@@AEAAXG_N0@Z @ 0x180056160 (-SetVirtualKeyState@ControllerProcessor@@AEAAXG_N0@Z.c)
 *     ?UpdateAutoRepeatTimer@ControllerProcessor@@AEAAJXZ @ 0x180056840 (-UpdateAutoRepeatTimer@ControllerProcessor@@AEAAJXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall ControllerProcessor::SendGameControllerAsVirtualKeys(ControllerProcessor *this)
{
  int v1; // eax
  bool v4; // di
  float v5; // xmm0_4
  bool v6; // r8
  float v7; // xmm0_4
  bool v8; // r8
  float v9; // xmm0_4
  unsigned __int16 v10; // dx
  bool v11; // r8
  float v12; // xmm0_4
  unsigned __int16 v13; // dx
  bool v14; // r8
  float v15; // xmm0_4
  unsigned __int16 v16; // dx
  bool v17; // r8
  float v18; // xmm0_4
  unsigned __int16 v19; // dx
  int updated; // eax
  int v21; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v1 = *((_DWORD *)this + 44);
  if ( (v1 & 0x40000) == 0 )
  {
    if ( (v1 & 0x1000000) == 0 )
      return 0LL;
    ControllerProcessor::SetVirtualKeyState(this, 0xCFu, *((_BYTE *)this + 208) & 1, 0);
    ControllerProcessor::SetVirtualKeyState(this, 0xD0u, (*((_DWORD *)this + 52) & 2) != 0, 0);
    ControllerProcessor::SetVirtualKeyState(this, 0xC3u, (*((_DWORD *)this + 52) & 4) != 0, 0);
    ControllerProcessor::SetVirtualKeyState(this, 0xC4u, (*((_DWORD *)this + 52) & 8) != 0, 0);
    ControllerProcessor::SetVirtualKeyState(this, 0xCBu, (*((_DWORD *)this + 52) & 0x10) != 0, 0);
    ControllerProcessor::SetVirtualKeyState(this, 0xCCu, (*((_DWORD *)this + 52) & 0x20) != 0, 0);
    ControllerProcessor::SetVirtualKeyState(this, 0xCDu, (*((_DWORD *)this + 52) & 0x40) != 0, 0);
    ControllerProcessor::SetVirtualKeyState(this, 0xCEu, (*((_DWORD *)this + 52) & 0x80) != 0, 0);
    ControllerProcessor::SetVirtualKeyState(this, 0xC5u, *((_DWORD *)this + 52) & 0x100, 0);
    ControllerProcessor::SetVirtualKeyState(this, 0xC6u, (*((_DWORD *)this + 52) & 0x200) != 0, 0);
    ControllerProcessor::SetVirtualKeyState(this, 0xD1u, (*((_DWORD *)this + 52) & 0x400) != 0, 0);
    ControllerProcessor::SetVirtualKeyState(this, 0xD2u, (*((_DWORD *)this + 52) & 0x800) != 0, 0);
    ControllerProcessor::SetVirtualKeyState(this, 0xC9u, (*((_DWORD *)this + 52) & 0x1000) != 0, 0);
    ControllerProcessor::SetVirtualKeyState(this, 0xCAu, (*((_DWORD *)this + 52) & 0x2000) != 0, 0);
    ControllerProcessor::SetVirtualKeyState(this, 0xC8u, (*((_DWORD *)this + 52) & 0x4000) != 0, 0);
    ControllerProcessor::SetVirtualKeyState(this, 0xC7u, (*((_DWORD *)this + 52) & 0x8000) != 0, 0);
    ControllerProcessor::SetVirtualKeyState(this, 0xD7u, *((_BYTE *)this + 210) & 1, 0);
    ControllerProcessor::SetVirtualKeyState(this, 0xD8u, (*((_DWORD *)this + 52) & 0x20000) != 0, 0);
    ControllerProcessor::SetVirtualKeyState(this, 0xDAu, (*((_DWORD *)this + 52) & 0x40000) != 0, 0);
    v4 = (*((_DWORD *)this + 52) & 0x80000) != 0;
    goto LABEL_45;
  }
  v4 = 1;
  ControllerProcessor::SetVirtualKeyState(this, 0xCFu, *((_BYTE *)this + 180) & 1, 0);
  ControllerProcessor::SetVirtualKeyState(this, 0xD0u, (*((_DWORD *)this + 45) & 2) != 0, 0);
  ControllerProcessor::SetVirtualKeyState(this, 0xC3u, (*((_DWORD *)this + 45) & 4) != 0, 0);
  ControllerProcessor::SetVirtualKeyState(this, 0xC4u, (*((_DWORD *)this + 45) & 8) != 0, 0);
  ControllerProcessor::SetVirtualKeyState(this, 0xC5u, (*((_DWORD *)this + 45) & 0x10) != 0, 0);
  ControllerProcessor::SetVirtualKeyState(this, 0xC6u, (*((_DWORD *)this + 45) & 0x20) != 0, 0);
  ControllerProcessor::SetVirtualKeyState(this, 0xCBu, (*((_DWORD *)this + 45) & 0x40) != 0, 0);
  ControllerProcessor::SetVirtualKeyState(this, 0xCCu, (*((_DWORD *)this + 45) & 0x80) != 0, 0);
  ControllerProcessor::SetVirtualKeyState(this, 0xCDu, *((_DWORD *)this + 45) & 0x100, 0);
  ControllerProcessor::SetVirtualKeyState(this, 0xCEu, (*((_DWORD *)this + 45) & 0x200) != 0, 0);
  ControllerProcessor::SetVirtualKeyState(this, 0xC8u, (*((_DWORD *)this + 45) & 0x400) != 0, 0);
  ControllerProcessor::SetVirtualKeyState(this, 0xC7u, (*((_DWORD *)this + 45) & 0x800) != 0, 0);
  ControllerProcessor::SetVirtualKeyState(this, 0xD1u, (*((_DWORD *)this + 45) & 0x1000) != 0, 0);
  ControllerProcessor::SetVirtualKeyState(this, 0xD2u, (*((_DWORD *)this + 45) & 0x2000) != 0, 0);
  v5 = *((float *)this + 46);
  if ( v5 >= 0.1275 )
  {
    v6 = 1;
  }
  else
  {
    if ( v5 > 0.1075 )
      goto LABEL_8;
    v6 = 0;
  }
  ControllerProcessor::SetVirtualKeyState(this, 0xC9u, v6, 0);
LABEL_8:
  v7 = *((float *)this + 47);
  if ( v7 >= 0.1275 )
  {
    v8 = 1;
  }
  else
  {
    if ( v7 > 0.1075 )
      goto LABEL_12;
    v8 = 0;
  }
  ControllerProcessor::SetVirtualKeyState(this, 0xCAu, v8, 0);
LABEL_12:
  v9 = *((float *)this + 49);
  if ( v9 >= 0.70999998 )
  {
    ControllerProcessor::SetVirtualKeyState(this, 0xD4u, 0, 0);
    v10 = 211;
  }
  else
  {
    if ( v9 > 0.69 )
    {
LABEL_16:
      v10 = 212;
LABEL_17:
      v11 = 0;
      goto LABEL_18;
    }
    v10 = 211;
    if ( v9 >= -0.69 )
    {
      ControllerProcessor::SetVirtualKeyState(this, 0xD3u, 0, 0);
      goto LABEL_16;
    }
    if ( v9 > -0.70999998 )
      goto LABEL_17;
    ControllerProcessor::SetVirtualKeyState(this, 0xD3u, 0, 0);
    v10 = 212;
  }
  v11 = 1;
LABEL_18:
  ControllerProcessor::SetVirtualKeyState(this, v10, v11, 0);
  v12 = *((float *)this + 48);
  if ( v12 >= 0.70999998 )
  {
    ControllerProcessor::SetVirtualKeyState(this, 0xD6u, 0, 0);
    v13 = 213;
  }
  else
  {
    if ( v12 > 0.69 )
    {
LABEL_22:
      v13 = 214;
LABEL_23:
      v14 = 0;
      goto LABEL_24;
    }
    v13 = 213;
    if ( v12 >= -0.69 )
    {
      ControllerProcessor::SetVirtualKeyState(this, 0xD5u, 0, 0);
      goto LABEL_22;
    }
    if ( v12 > -0.70999998 )
      goto LABEL_23;
    ControllerProcessor::SetVirtualKeyState(this, 0xD5u, 0, 0);
    v13 = 214;
  }
  v14 = 1;
LABEL_24:
  ControllerProcessor::SetVirtualKeyState(this, v13, v14, 0);
  v15 = *((float *)this + 51);
  if ( v15 >= 0.70999998 )
  {
    ControllerProcessor::SetVirtualKeyState(this, 0xD8u, 0, 0);
    v16 = 215;
  }
  else
  {
    if ( v15 > 0.69 )
    {
LABEL_28:
      v16 = 216;
LABEL_29:
      v17 = 0;
      goto LABEL_30;
    }
    v16 = 215;
    if ( v15 >= -0.69 )
    {
      ControllerProcessor::SetVirtualKeyState(this, 0xD7u, 0, 0);
      goto LABEL_28;
    }
    if ( v15 > -0.70999998 )
      goto LABEL_29;
    ControllerProcessor::SetVirtualKeyState(this, 0xD7u, 0, 0);
    v16 = 216;
  }
  v17 = 1;
LABEL_30:
  ControllerProcessor::SetVirtualKeyState(this, v16, v17, 0);
  v18 = *((float *)this + 50);
  if ( v18 >= 0.70999998 )
  {
    ControllerProcessor::SetVirtualKeyState(this, 0xDAu, 0, 0);
LABEL_45:
    v19 = 217;
    goto LABEL_36;
  }
  if ( v18 > 0.69 )
    goto LABEL_34;
  v19 = 217;
  if ( v18 >= -0.69 )
  {
    ControllerProcessor::SetVirtualKeyState(this, 0xD9u, 0, 0);
LABEL_34:
    v19 = 218;
LABEL_35:
    v4 = 0;
    goto LABEL_36;
  }
  if ( v18 > -0.70999998 )
    goto LABEL_35;
  ControllerProcessor::SetVirtualKeyState(this, 0xD9u, 0, 0);
  v19 = 218;
LABEL_36:
  ControllerProcessor::SetVirtualKeyState(this, v19, v4, 0);
  updated = ControllerProcessor::UpdateAutoRepeatTimer(this);
  if ( updated < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x978,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)updated,
      v21);
  return 0LL;
}
