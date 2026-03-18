/*
 * XREFs of ?SetIndependentFlip@CFlipExBuffer@@UEAAJ_N0IIPEBIPEAH@Z @ 0x140048450
 * Callers:
 *     <none>
 * Callees:
 *     ?DisableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJPEAH@Z @ 0x14004852C (-DisableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJPEAH@Z.c)
 *     ?EnableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJIIPEBIPEAH@Z @ 0x1400485FC (-EnableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJIIPEBIPEAH@Z.c)
 *     ?UpdateDxgkrnlIndependentFlipDuration@CFlipExBuffer@@IEAAJIIPEBIPEAH@Z @ 0x14009DA98 (-UpdateDxgkrnlIndependentFlipDuration@CFlipExBuffer@@IEAAJIIPEBIPEAH@Z.c)
 */

int __fastcall CFlipExBuffer::SetIndependentFlip(
        CFlipExBuffer *this,
        char a2,
        char a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int *a6,
        int *a7)
{
  int result; // eax
  int v10; // ecx
  char v11; // si

  result = 0;
  *a7 = 0;
  v10 = *((_DWORD *)this + 100);
  if ( !a2 )
  {
    if ( v10 )
      return CFlipExBuffer::DisableDxgkrnlIndependentFlipMode(this, a7);
    return result;
  }
  v11 = *((_BYTE *)this + 641);
  if ( !v10 )
  {
    if ( *((_BYTE *)this + 40) )
      result = CFlipExBuffer::EnableDxgkrnlIndependentFlipMode(this, a4, a5, a6, a7);
    else
      result = -1073741823;
    *((_BYTE *)this + 641) = a3;
LABEL_11:
    if ( !a3 )
      *((_BYTE *)this + 642) = 1;
    return result;
  }
  if ( *((_DWORD *)this + 159) != a4 )
  {
    if ( v10 >= 1 && *((_BYTE *)this + 40) )
      result = CFlipExBuffer::UpdateDxgkrnlIndependentFlipDuration(this, a4, a5, a6, a7);
    else
      result = -1073741823;
  }
  *((_BYTE *)this + 641) = a3;
  if ( v11 )
    goto LABEL_11;
  return result;
}
