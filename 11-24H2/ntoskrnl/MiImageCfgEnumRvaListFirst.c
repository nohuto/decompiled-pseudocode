/*
 * XREFs of MiImageCfgEnumRvaListFirst @ 0x1408F8478
 * Callers:
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1408F6F24 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiCopyToCfgBitMap @ 0x1408FA0F0 (MiCopyToCfgBitMap.c)
 * Callees:
 *     RtlGetRvaListIteratorState @ 0x1408F84F0 (RtlGetRvaListIteratorState.c)
 *     MiImageCfgEnumNextImageExtensionRva @ 0x1408FA810 (MiImageCfgEnumNextImageExtensionRva.c)
 */

__int64 __fastcall MiImageCfgEnumRvaListFirst(__int64 a1, _DWORD *a2, int a3, __int64 a4)
{
  unsigned int *v4; // rdi
  __int64 v6; // r8
  __int64 result; // rax

  a2[6] = 0;
  v4 = a2 + 2;
  a2[5] = a3;
  *((_QWORD *)a2 + 1) = 0LL;
  a2[4] = 0;
  a2[3] = 0;
  v6 = **(unsigned int **)(a1 + 16);
  a2[2] = v6;
  a2[4] = 4;
  if ( a2 != (_DWORD *)-4LL )
    a2[1] = RtlGetRvaListIteratorState(a1, v4);
  result = *v4;
  if ( !(_DWORD)result )
    result = MiImageCfgEnumNextImageExtensionRva(a2, a2, v6, a4);
  *a2 = result;
  return result;
}
