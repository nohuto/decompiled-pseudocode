/*
 * XREFs of KiAllocateIdleSearchStructures @ 0x1405B2C58
 * Callers:
 *     KiCompleteBootProcessorContextInitialization @ 0x1405B3888 (KiCompleteBootProcessorContextInitialization.c)
 *     KiStartDynamicProcessor @ 0x1407393A8 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140C28DA8 (KeStartAllProcessors.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool3 @ 0x140B76270 (ExAllocatePool3.c)
 */

__int64 __fastcall KiAllocateIdleSearchStructures(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned int v3; // esi
  __int64 v4; // r15
  __int64 v5; // r14
  _DWORD *Pool3; // rax
  _DWORD *v7; // rdi
  __int64 v8; // rax
  unsigned int i; // edi
  __int64 v10; // r15
  unsigned int v11; // esi
  _WORD *v12; // rax
  _WORD *v13; // r14
  __int16 v15; // [rsp+80h] [rbp+40h]
  __int16 v16; // [rsp+82h] [rbp+42h]
  unsigned int v17; // [rsp+88h] [rbp+48h]
  size_t Size; // [rsp+90h] [rbp+50h]

  v15 = 1;
  v16 = KiSubNodeCount - 1;
  v1 = 0;
  v3 = 0;
  v17 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 192) + 138LL) | 0x80000000;
  while ( v3 < 2 )
  {
    v4 = v3;
    v5 = (unsigned __int16)*(&v15 + v3);
    if ( !(_WORD)v5 )
      break;
    Size = 34 * v5 + 1064;
    Pool3 = (_DWORD *)ExAllocatePool3(0x48uLL, 1);
    v7 = Pool3;
    if ( !Pool3 )
      return (unsigned int)-1073741670;
    memset_0(Pool3, 0, Size);
    v8 = v7[4] & 0x7F;
    *(_QWORD *)v7 = 0LL;
    *((_WORD *)v7 + 528) = v5;
    *((_QWORD *)v7 + 2) = v8 | 0x80;
    ++v3;
    *((_WORD *)v7 + 530) = 64;
    *(_QWORD *)(a1 + 8 * v4 + 37896) = v7;
  }
  for ( i = 0; i < 2; ++i )
  {
    v10 = i;
    v11 = (unsigned __int16)*(&v15 + i);
    if ( !(_WORD)v11 )
      break;
    v12 = (_WORD *)ExAllocatePool3(0x48uLL, 1);
    v13 = v12;
    if ( !v12 )
      return (unsigned int)-1073741670;
    memset_0(v12, 0, 32LL * v11 + 16);
    v13[4] = v11;
    *(_QWORD *)(a1 + 8 * v10 + 37928) = v13;
  }
  return v1;
}
