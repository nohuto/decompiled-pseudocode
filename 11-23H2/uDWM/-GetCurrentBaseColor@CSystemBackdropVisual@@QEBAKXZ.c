/*
 * XREFs of ?GetCurrentBaseColor@CSystemBackdropVisual@@QEBAKXZ @ 0x18001ABF8
 * Callers:
 *     ?GetCaptionColor@CTopLevelWindow@@AEBAKXZ @ 0x18001AB94 (-GetCaptionColor@CTopLevelWindow@@AEBAKXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

DWORD __fastcall CSystemBackdropVisual::GetCurrentBaseColor(CSystemBackdropVisual *this)
{
  DWORD result; // eax
  char v2; // al
  _BYTE *v3; // rax
  char v4; // cl
  int v5; // [rsp+30h] [rbp+8h]

  result = 0;
  switch ( *((_DWORD *)this + 71) )
  {
    case 1:
      v3 = (_BYTE *)(*(__int64 (__fastcall **)(CSystemBackdropVisual *))(*(_QWORD *)this + 216LL))(this);
      HIBYTE(v5) = *v3;
      LOBYTE(v5) = v3[1];
      v4 = v3[2];
      v2 = v3[3];
      BYTE1(v5) = v4;
      goto LABEL_4;
    case 2:
      HIBYTE(v5) = *((_BYTE *)this + 288);
      LOWORD(v5) = *(_WORD *)((char *)this + 289);
      v2 = *((_BYTE *)this + 291);
LABEL_4:
      BYTE2(v5) = v2;
      return v5;
    case 3:
      return GetSysColor(5);
  }
  return result;
}
