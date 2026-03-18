/*
 * XREFs of DxgkEngGetClientRect @ 0x1400CF010
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1400CDC4C (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1400CDC98 (--1DCOBJA@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkEngGetClientRect(HDC a1, _OWORD *a2)
{
  unsigned int v3; // ebx
  _QWORD v5[11]; // [rsp+20h] [rbp-58h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v5, a1);
  v3 = 0;
  if ( v5[0] )
  {
    v3 = 1;
    *a2 = *(_OWORD *)(v5[0] + 1032LL);
  }
  DCOBJA::~DCOBJA((DCOBJA *)v5);
  return v3;
}
