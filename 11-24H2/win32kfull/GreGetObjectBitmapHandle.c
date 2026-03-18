/*
 * XREFs of GreGetObjectBitmapHandle @ 0x1400E4E30
 * Callers:
 *     NtGdiGetObjectBitmapHandle @ 0x140337C20 (NtGdiGetObjectBitmapHandle.c)
 * Callees:
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1400E3FF0 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1400E4080 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetObjectBitmapHandle(HBRUSH a1, int *a2)
{
  __int64 v3; // rbx
  unsigned int v4; // eax
  _QWORD v6[7]; // [rsp+20h] [rbp-38h] BYREF

  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v6, a1);
  v3 = 0LL;
  if ( v6[0] )
  {
    v3 = *(_QWORD *)(v6[0] + 24LL);
    v4 = *(_DWORD *)(v6[0] + 40LL);
    if ( (v4 & 0x1000) != 0 )
      *a2 = 1;
    else
      *a2 = (v4 >> 12) & 2;
  }
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v6);
  return v3;
}
