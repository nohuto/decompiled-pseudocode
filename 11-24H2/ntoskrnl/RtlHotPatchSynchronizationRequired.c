/*
 * XREFs of RtlHotPatchSynchronizationRequired @ 0x1406A44F8
 * Callers:
 *     MiPrepareToHotPatchImage @ 0x1407F5C30 (MiPrepareToHotPatchImage.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x14027BEE0 (RtlFindClearBitsAndSet.c)
 *     RtlGetHotPatchSize @ 0x1406A44AC (RtlGetHotPatchSize.c)
 *     RtlpCheckFunctionPatchAppliedInOriginalImage @ 0x1406A46E4 (RtlpCheckFunctionPatchAppliedInOriginalImage.c)
 */

__int64 __fastcall RtlHotPatchSynchronizationRequired(
        int a1,
        _DWORD *a2,
        int *a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        PRTL_BITMAP BitMapHeader,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        _BYTE *a14)
{
  unsigned int HotPatchSize; // edi
  int *v15; // r10
  int v17; // eax
  int v18; // edx
  bool v19; // cl
  int v20; // r11d
  bool v21; // al
  int v22; // edx
  int v23; // ebx
  unsigned int v24; // eax
  __int64 v25; // r10
  int v26; // r11d
  _BYTE *v27; // rcx
  ULONG v29; // edx
  ULONG ClearBitsAndSet; // eax
  int v31; // ecx

  HotPatchSize = 0;
  v15 = a3;
  *a14 = 0;
  if ( a3 )
    HotPatchSize = RtlGetHotPatchSize(a2);
  while ( v15 )
  {
    v17 = *v15;
    if ( !*v15 )
      break;
    v18 = *v15;
    v19 = 0;
    v20 = *v15++ & 0xFFF;
    v21 = v17 >= 0;
    if ( (v18 & 0xFC000) == 0x1C000 )
      v19 = v21;
    if ( v19 )
    {
      while ( v20 )
      {
        v22 = 0;
        v23 = a1 + *v15;
        if ( HotPatchSize != 2 )
          v22 = (_DWORD)v15 + 8;
        v24 = RtlpCheckFunctionPatchAppliedInOriginalImage(a1 + *v15, v22, (_DWORD)a3, a4, a6);
        if ( v24 == -1 )
          return 3221225595LL;
        if ( v24 == -2 )
        {
          if ( (v23 & 7) == 7 )
            goto LABEL_25;
        }
        else if ( a7 )
        {
          v27 = (char *)BitMapHeader->Buffer + ((unsigned __int64)v24 >> 3);
          *v27 |= 1 << (v24 & 7);
        }
        v20 = v26 - 1;
        v15 = (int *)(v25 + 4LL * HotPatchSize);
      }
    }
    else
    {
      v15 += v20 * HotPatchSize;
    }
  }
  if ( a7 )
  {
    v29 = 0;
    while ( 1 )
    {
      ClearBitsAndSet = RtlFindClearBitsAndSet(BitMapHeader, 1u, v29);
      v29 = ClearBitsAndSet;
      if ( ClearBitsAndSet == -1 )
        break;
      v31 = *(_DWORD *)(a7 + 8LL * ClearBitsAndSet);
      if ( v31 && (((_BYTE)a1 + (_BYTE)v31) & 7) == 7 )
      {
LABEL_25:
        *a14 = 1;
        return 0LL;
      }
    }
  }
  return 0LL;
}
