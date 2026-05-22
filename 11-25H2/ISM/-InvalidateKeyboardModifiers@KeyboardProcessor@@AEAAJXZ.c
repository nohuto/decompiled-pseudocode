/*
 * XREFs of ?InvalidateKeyboardModifiers@KeyboardProcessor@@AEAAJXZ @ 0x18002D23C
 * Callers:
 *     ?OnDeviceRemoval@KeyboardProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x18002D040 (-OnDeviceRemoval@KeyboardProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?UpdateKeyModifierArray@KeyboardModifierState@@QEAAJW4KeyboardModifier@@_N@Z @ 0x18002CBF8 (-UpdateKeyModifierArray@KeyboardModifierState@@QEAAJW4KeyboardModifier@@_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall KeyboardProcessor::InvalidateKeyboardModifiers(KeyboardProcessor *this)
{
  unsigned int *v1; // rsi
  unsigned int v2; // eax
  __int64 *v3; // rdi
  int updated; // eax
  unsigned int v6; // ebx
  unsigned int *v8; // rbx
  __int64 *v9; // r14
  int v10; // eax
  unsigned int v11; // r14d
  int v12; // edi
  __int64 v13; // rdx
  __int64 *v14; // rsi
  int v15; // esi
  __int64 v16; // rdx
  __int64 *v17; // rsi
  int v18; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (unsigned int *)((char *)this + 56);
  v2 = *((_DWORD *)this + 14);
  v3 = (__int64 *)((char *)this + 48);
  if ( (v2 & 1) != 0 )
  {
    updated = KeyboardModifierState::UpdateKeyModifierArray(*v3, 1, 0);
    v6 = updated;
    if ( updated < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6D,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\keyboard\\lib\\keyboardprocessor.cpp",
        (const char *)(unsigned int)updated,
        v18);
      return v6;
    }
    *v1 &= ~1u;
    v8 = (unsigned int *)((char *)this + 56);
    v2 = *v1;
  }
  else
  {
    v8 = (unsigned int *)((char *)this + 56);
  }
  v9 = v3;
  if ( (v2 & 2) != 0 )
  {
    v10 = KeyboardModifierState::UpdateKeyModifierArray(*v3, 2, 0);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x75,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\keyboard\\lib\\keyboardprocessor.cpp",
        (const char *)(unsigned int)v10,
        v18);
      return v11;
    }
    *v1 &= ~2u;
    v9 = (__int64 *)((char *)this + 48);
    v2 = *v1;
  }
  if ( (v2 & 4) != 0 )
  {
    v12 = KeyboardModifierState::UpdateKeyModifierArray(*v3, 4, 0);
    if ( v12 < 0 )
    {
      v13 = 125LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\keyboard\\lib\\keyboardprocessor.cpp",
        (const char *)(unsigned int)v12,
        v18);
      return (unsigned int)v12;
    }
    v3 = v9;
    v2 = *v8 & 0xFFFFFFFB;
    *v8 = v2;
    v8 = (unsigned int *)((char *)this + 56);
  }
  v14 = v3;
  if ( (v2 & 8) != 0 )
  {
    v15 = KeyboardModifierState::UpdateKeyModifierArray(*v3, 8, 0);
    if ( v15 < 0 )
    {
      v16 = 133LL;
LABEL_18:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\keyboard\\lib\\keyboardprocessor.cpp",
        (const char *)(unsigned int)v15,
        v18);
      return (unsigned int)v15;
    }
    *v8 &= ~8u;
    v14 = (__int64 *)((char *)this + 48);
    v2 = *v8;
  }
  if ( (v2 & 0x10) != 0 )
  {
    v12 = KeyboardModifierState::UpdateKeyModifierArray(*v3, 16, 0);
    if ( v12 < 0 )
    {
      v13 = 141LL;
      goto LABEL_13;
    }
    v3 = v14;
    v2 = *v8 & 0xFFFFFFEF;
    *v8 = v2;
    v8 = (unsigned int *)((char *)this + 56);
  }
  v17 = v3;
  if ( (v2 & 0x20) != 0 )
  {
    v15 = KeyboardModifierState::UpdateKeyModifierArray(*v3, 32, 0);
    if ( v15 < 0 )
    {
      v16 = 149LL;
      goto LABEL_18;
    }
    *v8 &= ~0x20u;
    v17 = (__int64 *)((char *)this + 48);
    v2 = *v8;
  }
  if ( (v2 & 0x40) != 0 )
  {
    v12 = KeyboardModifierState::UpdateKeyModifierArray(*v3, 64, 0);
    if ( v12 < 0 )
    {
      v13 = 157LL;
      goto LABEL_13;
    }
    v3 = v17;
    v2 = *v8 & 0xFFFFFFBF;
    *v8 = v2;
    v8 = (unsigned int *)((char *)this + 56);
  }
  if ( (v2 & 0x80u) != 0 )
  {
    v12 = KeyboardModifierState::UpdateKeyModifierArray(*v3, 128, 0);
    if ( v12 < 0 )
    {
      v13 = 165LL;
      goto LABEL_13;
    }
    *v8 &= ~0x80u;
  }
  return 0LL;
}
