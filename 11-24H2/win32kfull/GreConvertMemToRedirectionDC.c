/*
 * XREFs of GreConvertMemToRedirectionDC @ 0x140039EF4
 * Callers:
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x140039ADC (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     UpdateSpriteArea @ 0x14003A40C (UpdateSpriteArea.c)
 * Callees:
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1400CDC4C (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1400CDC98 (--1DCOBJA@@QEAA@XZ.c)
 */

__int64 __fastcall GreConvertMemToRedirectionDC(HDC a1, _DWORD *a2)
{
  unsigned int v3; // edi
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v7; // rdx
  int v8; // ecx
  _QWORD v9[10]; // [rsp+20h] [rbp-58h] BYREF

  v3 = 0;
  DCOBJA::DCOBJA((DCOBJA *)v9, a1);
  v4 = v9[0];
  *a2 = 0;
  if ( v4 )
  {
    if ( *(_DWORD *)(v4 + 32) == 1 )
    {
      v5 = *(_QWORD *)(v4 + 48);
      if ( v5 )
      {
        if ( (*(_DWORD *)(v5 + 2112) & 0x400) != 0 )
        {
          *(_DWORD *)(v4 + 36) |= 0x4000u;
          v3 = 1;
          *(_DWORD *)(v9[0] + 36LL) |= 1u;
          *(_DWORD *)(v9[0] + 32LL) = 0;
          v7 = *(_QWORD *)(v9[0] + 496LL);
          v8 = *(_DWORD *)(v7 + 112);
          if ( (v8 & 0x800) == 0 && !*(_WORD *)(v7 + 100) )
          {
            *a2 = 1;
            *(_DWORD *)(v7 + 112) = v8 | 0x800;
          }
        }
      }
    }
  }
  DCOBJA::~DCOBJA((DCOBJA *)v9);
  return v3;
}
