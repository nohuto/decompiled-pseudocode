/*
 * XREFs of MiScanRelocationPage @ 0x140976FE0
 * Callers:
 *     MiRelocateImage @ 0x140AEA57C (MiRelocateImage.c)
 * Callees:
 *     MiOffsetToProtos @ 0x1402C28D0 (MiOffsetToProtos.c)
 *     MiCreateFixupRecord @ 0x1409771A4 (MiCreateFixupRecord.c)
 */

__int64 __fastcall MiScanRelocationPage(int a1, unsigned int a2, int a3, _WORD *a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  __int64 v8; // r15
  int v10; // r14d
  unsigned int v11; // ebp
  int v12; // r8d
  int v13; // edx
  unsigned int v14; // r12d
  unsigned __int16 v16; // bx
  __int16 v17; // ax
  __int64 result; // rax
  int v19; // [rsp+70h] [rbp+8h]

  v19 = a1;
  v6 = a5;
  v8 = a2;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a5 + 56LL) + 64LL);
  while ( 1 )
  {
    if ( !a3-- )
      return 0LL;
    v16 = *a4 & 0xFFF;
    v17 = *a4 >> 12;
    switch ( v17 )
    {
      case 10:
        if ( v16 > 0xFF8u )
        {
          v10 = 0;
          v11 = 8;
          goto LABEL_10;
        }
        break;
      case 0:
        goto LABEL_14;
      case 3:
        if ( v16 > 0xFFCu )
        {
          v11 = 4;
          v10 = 2;
LABEL_10:
          v12 = 1;
        }
        break;
      default:
        return 3221226089LL;
    }
    if ( (v8 & 0xFFF) != 0 && (unsigned __int64)((v8 & 0xFFF) + v16) > 0xFFE || (unsigned int)v8 + v16 < v14 )
      return 3221226089LL;
    a1 = v19;
LABEL_14:
    if ( !v12 )
      goto LABEL_15;
    if ( v13 )
      return 3221225595LL;
    result = MiCreateFixupRecord(v6, a1, (unsigned int)v8 + v16, v10, v11, (__int64)a4, a6);
    if ( (int)result < 0 )
      return result;
    if ( (MiFlags & 0x20000) != 0 && (*(_DWORD *)(v6 + 92) & 0xC0000) != 0 )
    {
      a5 = 0LL;
      if ( (*(_DWORD *)(MiOffsetToProtos(v6, v8 + v16 + (unsigned __int64)v11, (unsigned __int64 *)&a5) + 32) & 4) != 0 )
        return 3221225595LL;
    }
    v12 = 0;
    v13 = 1;
LABEL_15:
    a1 = v19;
    ++a4;
  }
}
