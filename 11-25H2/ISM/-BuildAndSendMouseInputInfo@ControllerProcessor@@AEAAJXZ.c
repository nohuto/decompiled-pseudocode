/*
 * XREFs of ?BuildAndSendMouseInputInfo@ControllerProcessor@@AEAAJXZ @ 0x180178910
 * Callers:
 *     ?OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180089A00 (-OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?SendChordedKeyBuffer@ControllerProcessor@@AEAAXAEAV?$vector@W4GameInputGamepadButtons@@V?$allocator@W4GameInputGamepadButtons@@@std@@@std@@@Z @ 0x18017A044 (-SendChordedKeyBuffer@ControllerProcessor@@AEAAXAEAV-$vector@W4GameInputGamepadButtons@@V-$alloc.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ?BuildMouseInputInfo@ControllerProcessor@@AEAA?AURawMouseInputInfo@@K@Z @ 0x180178AB8 (-BuildMouseInputInfo@ControllerProcessor@@AEAA-AURawMouseInputInfo@@K@Z.c)
 *     ?SendMouseInputInfo@ControllerProcessor@@AEAAJPEAURawMouseInputInfo@@@Z @ 0x18017A50C (-SendMouseInputInfo@ControllerProcessor@@AEAAJPEAURawMouseInputInfo@@@Z.c)
 */

__int64 __fastcall ControllerProcessor::BuildAndSendMouseInputInfo(ControllerProcessor *this)
{
  unsigned int v2; // r10d
  unsigned __int16 v3; // cx
  _DWORD *v4; // r9
  int v5; // esi
  unsigned int v6; // r11d
  __int64 v7; // r8
  _DWORD *v8; // rdi
  int v9; // eax
  _DWORD *v10; // r9
  int v11; // esi
  unsigned int v12; // r11d
  __int64 v13; // r8
  _DWORD *v14; // rdi
  int v15; // eax
  int v16; // eax
  int v18[136]; // [rsp+20h] [rbp-248h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+268h] [rbp+0h]

  v2 = 0;
  v3 = 0;
  if ( *((_BYTE *)this + 276) )
  {
    v4 = &unk_180200340;
    do
    {
      v5 = *((_DWORD *)this + 52) & *v4;
      if ( (v5 != 0) != ((*v4 & *((_DWORD *)this + 68)) != 0) )
      {
        v6 = 0;
        v7 = 0LL;
        v8 = &unk_180200350;
        while ( v6 < 5 )
        {
          if ( v4[1] == *v8 )
          {
            *((_DWORD *)this + v7 + 1881) = v5 != 0;
            if ( v5 )
              v9 = *((_DWORD *)&unk_180200350 + 3 * v7 + 2);
            else
              v9 = *((_DWORD *)&unk_180200350 + 3 * v7 + 1);
            v3 |= v9;
            break;
          }
          ++v6;
          ++v7;
          v8 += 3;
        }
      }
      ++v2;
      v4 += 2;
    }
    while ( v2 < 2 );
  }
  else
  {
    v10 = &unk_180200390;
    do
    {
      v11 = *((_DWORD *)this + 45) & *v10;
      if ( (v11 != 0) != ((*v10 & *((_DWORD *)this + 61)) != 0) )
      {
        v12 = 0;
        v13 = 0LL;
        v14 = &unk_180200350;
        while ( v12 < 5 )
        {
          if ( v10[1] == *v14 )
          {
            *((_DWORD *)this + v13 + 1881) = v11 != 0;
            if ( v11 )
              v15 = *((_DWORD *)&unk_180200350 + 3 * v13 + 2);
            else
              v15 = *((_DWORD *)&unk_180200350 + 3 * v13 + 1);
            v3 |= v15;
            break;
          }
          ++v12;
          ++v13;
          v14 += 3;
        }
      }
      ++v2;
      v10 += 2;
    }
    while ( v2 < 2 );
  }
  if ( v3 )
  {
    ControllerProcessor::BuildMouseInputInfo(this, v18, v3);
    v16 = ControllerProcessor::SendMouseInputInfo(this, (struct RawMouseInputInfo *)v18);
    if ( v16 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x4EB,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v16,
        v18[0]);
  }
  return 0LL;
}
