/*
 * XREFs of ?GetCurrentBaseColor@CSystemBackdropVisual@@QEBAKXZ @ 0x18006F56C
 * Callers:
 *     ?GetCaptionColor@CTopLevelWindow@@AEBAKXZ @ 0x180030D08 (-GetCaptionColor@CTopLevelWindow@@AEBAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSystemBackdropVisual::GetCurrentBaseColor(CSystemBackdropVisual *this)
{
  DWORD v1; // r8d
  char v2; // al
  _BYTE *v4; // rax
  char v5; // cl
  DWORD v6; // [rsp+30h] [rbp+8h]

  v1 = 0;
  switch ( *((_DWORD *)this + 45) )
  {
    case 1:
      v4 = (_BYTE *)(*(__int64 (__fastcall **)(CSystemBackdropVisual *, _QWORD, _QWORD))(*(_QWORD *)this + 192LL))(
                      this,
                      (unsigned int)(*((_DWORD *)this + 45) - 1),
                      0LL);
      HIBYTE(v6) = *v4;
      LOBYTE(v6) = v4[1];
      v5 = v4[2];
      v2 = v4[3];
      BYTE1(v6) = v5;
      goto LABEL_6;
    case 2:
      HIBYTE(v6) = *((_BYTE *)this + 184);
      LOWORD(v6) = *(_WORD *)((char *)this + 185);
      v2 = *((_BYTE *)this + 187);
LABEL_6:
      BYTE2(v6) = v2;
      return v6;
    case 3:
      return GetSysColor(5);
  }
  return v1;
}
