/*
 * XREFs of ??$make_unique@VCComposeTop@@$$V$0A@@std@@YA?AV?$unique_ptr@VCComposeTop@@U?$default_delete@VCComposeTop@@@std@@@0@XZ @ 0x180295E10
 * Callers:
 *     ?AddNewComposeTopContent@CDesktopTree@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z @ 0x180075EAC (-AddNewComposeTopContent@CDesktopTree@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18006BC80 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_unique<CComposeTop,,0>(_QWORD *a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rdx
  char v4; // al

  v2 = operator new(0xA8uLL);
  v3 = v2;
  if ( v2 )
  {
    *v2 = 0LL;
    v2[1] = 0LL;
    v2[2] = 0LL;
    *(_QWORD *)((char *)v2 + 84) = 1065353216LL;
    v2[3] = 1065353216LL;
    v2[4] = 0LL;
    *((_DWORD *)v2 + 10) = 0;
    *(_QWORD *)((char *)v2 + 44) = 1065353216LL;
    *(_QWORD *)((char *)v2 + 52) = 0LL;
    *((_DWORD *)v2 + 15) = 0;
    v2[8] = 1065353216LL;
    v2[9] = 0LL;
    *((_DWORD *)v2 + 20) = 0;
    *((_BYTE *)v2 + 88) = -86;
    *((_BYTE *)v2 + 89) = *((_BYTE *)v2 + 89) & 0xC0 | 0x29;
    v2[19] = 1065353216LL;
    *(_QWORD *)((char *)v2 + 92) = 1065353216LL;
    *(_QWORD *)((char *)v2 + 100) = 0LL;
    *((_DWORD *)v2 + 27) = 0;
    v2[14] = 1065353216LL;
    v2[15] = 0LL;
    *((_DWORD *)v2 + 32) = 0;
    *(_QWORD *)((char *)v2 + 132) = 1065353216LL;
    *(_QWORD *)((char *)v2 + 140) = 0LL;
    *((_DWORD *)v2 + 37) = 0;
    v4 = *((_BYTE *)v2 + 157) & 0xE9;
    *((_BYTE *)v3 + 156) = -86;
    *((_BYTE *)v3 + 157) = v4 | 0x29;
    v3[20] = 0LL;
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3;
  return a1;
}
