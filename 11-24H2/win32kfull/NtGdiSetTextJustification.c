/*
 * XREFs of NtGdiSetTextJustification @ 0x140310B20
 * Callers:
 *     <none>
 * Callees:
 *     ??0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400BB34C (--0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1400BB3F0 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiSetTextJustification(HDC a1, int a2, int a3)
{
  unsigned int v5; // ebx
  _QWORD v7[10]; // [rsp+20h] [rbp-58h] BYREF

  UAPIDCOBJ::UAPIDCOBJ((UAPIDCOBJ *)v7, a1);
  v5 = 0;
  if ( v7[0] )
  {
    v5 = 1;
    *(_DWORD *)(*(_QWORD *)(v7[0] + 976LL) + 284LL) = a2;
    *(_DWORD *)(*(_QWORD *)(v7[0] + 976LL) + 288LL) = a3;
  }
  DCOBJ::~DCOBJ((DCOBJ *)v7);
  return v5;
}
