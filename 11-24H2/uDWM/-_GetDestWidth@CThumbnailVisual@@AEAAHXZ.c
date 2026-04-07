/*
 * XREFs of ?_GetDestWidth@CThumbnailVisual@@AEAAHXZ @ 0x18007AFCC
 * Callers:
 *     ?EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentation@@@Z @ 0x18001F550 (-EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentatio.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CThumbnailVisual::_GetDestWidth(CThumbnailVisual *this)
{
  __int64 v1; // rdx
  __int64 result; // rax
  int v3; // ecx

  v1 = *((_QWORD *)this + 41);
  result = 0LL;
  if ( v1 && (*(_BYTE *)(v1 + 36) & 1) != 0 )
  {
    v3 = *(_DWORD *)(v1 + 48) - *(_DWORD *)(v1 + 40);
    if ( v3 >= 0 )
      return (unsigned int)v3;
  }
  return result;
}
