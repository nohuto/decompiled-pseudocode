/*
 * XREFs of ?DisableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJPEAH@Z @ 0x14004852C
 * Callers:
 *     ??1CFlipExBuffer@@MEAA@XZ @ 0x14001F5B8 (--1CFlipExBuffer@@MEAA@XZ.c)
 *     ?SetIndependentFlip@CFlipExBuffer@@UEAAJ_N0IIPEBIPEAH@Z @ 0x140048450 (-SetIndependentFlip@CFlipExBuffer@@UEAAJ_N0IIPEBIPEAH@Z.c)
 * Callees:
 *     memset @ 0x1400A2000 (memset.c)
 *     DxgkSetIndependentFlipMode @ 0x14039E10C (DxgkSetIndependentFlipMode.c)
 */

__int64 __fastcall CFlipExBuffer::DisableDxgkrnlIndependentFlipMode(CFlipExBuffer *this, int *a2)
{
  __int64 v2; // rax
  char *v3; // rbx
  unsigned int v6; // eax
  unsigned int v7; // ebp
  int v9; // [rsp+70h] [rbp+8h] BYREF
  __int64 v10; // [rsp+78h] [rbp+10h]

  v2 = *((_QWORD *)this + 1);
  v3 = (char *)this + 568;
  v9 = 0;
  v10 = v2;
  v6 = DxgkSetIndependentFlipMode(
         *((HANDLE *)this + 70),
         *((_DWORD *)this + 159),
         *((_DWORD *)this + 158),
         (__int64)this + 568,
         (__int64)&v9,
         (__int64)this + 552);
  *((_DWORD *)this + 100) = 0;
  *((_DWORD *)this + 158) = 0;
  v7 = v6;
  memset(v3, 0, 0x40uLL);
  ObCloseHandle(*((HANDLE *)this + 70), 0);
  *((_QWORD *)this + 70) = 0LL;
  *((_BYTE *)this + 644) = 0;
  if ( a2 )
    *a2 = v9;
  return v7;
}
