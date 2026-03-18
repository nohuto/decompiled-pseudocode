/*
 * XREFs of ?UpdateDxgkrnlIndependentFlipDuration@CFlipExBuffer@@IEAAJIIPEBIPEAH@Z @ 0x14009DA98
 * Callers:
 *     ?SetIndependentFlip@CFlipExBuffer@@UEAAJ_N0IIPEBIPEAH@Z @ 0x140048450 (-SetIndependentFlip@CFlipExBuffer@@UEAAJ_N0IIPEBIPEAH@Z.c)
 * Callees:
 *     DxgkSetIndependentFlipMode @ 0x14039E10C (DxgkSetIndependentFlipMode.c)
 */

__int64 __fastcall CFlipExBuffer::UpdateDxgkrnlIndependentFlipDuration(
        HANDLE *this,
        unsigned int a2,
        unsigned int a3,
        const unsigned int *a4,
        int *a5)
{
  __int64 result; // rax

  result = DxgkSetIndependentFlipMode(this[70], a2, a3, (__int64)a4, (__int64)a5, (__int64)(this + 69));
  if ( (int)result >= 0 )
    *((_DWORD *)this + 159) = a2;
  return result;
}
