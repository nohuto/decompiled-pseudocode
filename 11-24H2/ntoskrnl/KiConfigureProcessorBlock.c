/*
 * XREFs of KiConfigureProcessorBlock @ 0x140B57FF8
 * Callers:
 *     KiInitializeDynamicProcessorDpc @ 0x140B59640 (KiInitializeDynamicProcessorDpc.c)
 *     KiInitializeKernel @ 0x140B5A930 (KiInitializeKernel.c)
 *     KeStartAllProcessors @ 0x140C28DA8 (KeStartAllProcessors.c)
 * Callees:
 *     KeIsEmptyGroupMask @ 0x14032FF20 (KeIsEmptyGroupMask.c)
 *     KiGetSubNodeForGroup @ 0x1404431CC (KiGetSubNodeForGroup.c)
 *     KeSetBitGroupMask @ 0x1404B9A10 (KeSetBitGroupMask.c)
 */

__int64 __fastcall KiConfigureProcessorBlock(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v2; // edi
  unsigned __int64 v3; // rax
  unsigned int v4; // edi
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // r8
  __int64 result; // rax
  __int64 v8; // r15
  __int64 *v9; // rbx
  __int64 v10; // rbp
  unsigned int v11; // r10d
  unsigned int v12; // r8d
  __int64 v13; // r9

  v1 = *(_QWORD *)(a1 + 192);
  v2 = *((_DWORD *)KiGlobalState + *(unsigned int *)(a1 + 36));
  LOBYTE(v3) = v2 & 0x3F;
  v4 = v2 >> 6;
  v5 = *(_QWORD *)(v1 + 128) | (1LL << v3);
  _BitScanForward64(&v3, v5);
  *(_QWORD *)(v1 + 128) = v5;
  *(_BYTE *)(v1 + 124) = v3;
  _BitScanReverse64(&v6, v5);
  *(_DWORD *)(v1 + 176) = *((_DWORD *)qword_140F22998 + 64 * v4 + (unsigned int)v3);
  result = v5 - 1;
  *(_DWORD *)(v1 + 180) = *((_DWORD *)qword_140F22998 + 64 * v4 + (unsigned int)v6);
  if ( ((v5 - 1) & v5) == 0 )
  {
    v8 = *(unsigned __int16 *)(v1 + 138);
    v9 = KeNodeBlock;
    v10 = KeNodeBlock[v8];
    if ( (unsigned int)KeIsEmptyGroupMask((unsigned __int64 *)(v10 + 16)) )
      *(_BYTE *)(v10 + 12) = v4;
    result = KeSetBitGroupMask((signed __int64 *)(v10 + 16), v4);
    v11 = (unsigned __int16)KeNumberNodes;
    v12 = 0;
    if ( KeNumberNodes )
    {
      v13 = 0LL;
      do
      {
        if ( v12 != (_DWORD)v8 )
        {
          result = KiGetSubNodeForGroup(*v9, v4);
          if ( result )
          {
            *(_QWORD *)(result + 144) |= 1LL << v8;
            result = *(_QWORD *)(v1 + 144) | (1LL << v13);
            *(_QWORD *)(v1 + 144) = result;
          }
        }
        ++v12;
        ++v13;
        ++v9;
      }
      while ( v12 < v11 );
    }
  }
  return result;
}
