/*
 * XREFs of MiGetPageChainSmallPageProcess @ 0x1402C7A50
 * Callers:
 *     MiGetPageChain @ 0x140241940 (MiGetPageChain.c)
 * Callees:
 *     MiZeroPhysicalPage @ 0x14024D560 (MiZeroPhysicalPage.c)
 *     MiChangePageAttribute @ 0x14024DE74 (MiChangePageAttribute.c)
 *     MiSetPfnTbFlushStamp @ 0x1402C7C70 (MiSetPfnTbFlushStamp.c)
 *     MiMakeLinkedListPte @ 0x1403B7F30 (MiMakeLinkedListPte.c)
 *     MiTbFlushTimeStampMayNeedFlush @ 0x14044FFB8 (MiTbFlushTimeStampMayNeedFlush.c)
 *     MiPerformFinalZeroing @ 0x1404F5DB0 (MiPerformFinalZeroing.c)
 */

__int64 __fastcall MiGetPageChainSmallPageProcess(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  unsigned int v6; // esi
  __int64 v9; // r8
  unsigned int v10; // esi
  __int64 v11; // rbx
  int v12; // ecx
  int v13; // ebp
  char v14; // r12
  int v15; // ecx
  signed __int64 v16; // rdx
  signed __int64 v17; // r8
  signed __int64 v18; // rcx
  __int64 result; // rax
  bool v20; // zf
  char v21; // r8
  __int64 *v22; // rdx
  __int64 v23; // rcx
  signed __int32 v24[8]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v25; // [rsp+20h] [rbp-28h]

  v6 = *(_DWORD *)(a1 + 48);
  v25 = v4;
  v9 = *(unsigned int *)(a1 + 32);
  v10 = (v6 >> 18) & 3;
  v11 = 48 * a3 - 0x220000000000LL;
  v12 = (unsigned __int8)BYTE2(*(_DWORD *)(v11 + 32)) >> 6;
  if ( v12 != v10 && ((unsigned __int8)((1 << v12) | (1 << v10)) & (unsigned __int8)byte_140E2D998) != 0 )
  {
    *(_QWORD *)(v11 + 16) = MiMakeLinkedListPte(*a2, a2, v9, a4, v25);
    v20 = ++v22[1] == 16;
    *v22 = a3;
    if ( v20 )
      MiPerformFinalZeroing(a2, v10, v21 & 1);
    goto LABEL_9;
  }
  v13 = 0;
  v14 = 2 * (v9 & 1);
  if ( (v9 & 0x20) != 0 && (*(_QWORD *)(v11 + 16) & 0x3E0LL) != 0 )
  {
    MiZeroPhysicalPage(0LL, a3, v14, v10);
    *(_QWORD *)(v11 + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
    MiSetPfnTbFlushStamp(48 * a3 - 0x220000000000LL, 0LL, 0LL);
    v13 = 1;
  }
  v15 = (unsigned __int8)BYTE2(*(_DWORD *)(v11 + 32)) >> 6;
  if ( v15 == v10 )
    goto LABEL_6;
  if ( v15 != 1 )
  {
    if ( v15 == 3
      || (v23 = (*(_QWORD *)(v11 + 24) >> 59) & 7LL, ((*(_QWORD *)(v11 + 24) >> 59) & 7) != 0)
      && (_InterlockedOr(v24, 0),
          !(unsigned __int8)MiTbFlushTimeStampMayNeedFlush(v23, (unsigned int)KiTbFlushTimeStamp, 7LL)) )
    {
      MiChangePageAttribute(48 * a3 - 0x220000000000LL, v10);
LABEL_6:
      if ( !v13 )
      {
        v16 = *(_QWORD *)(v11 + 24);
        v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 24), v16 & 0xC7FFFFFFFFFFFFFFuLL, v16);
        if ( v16 != v17 )
        {
          do
          {
            v18 = v17;
            v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 24), v17 & 0xC7FFFFFFFFFFFFFFuLL, v17);
          }
          while ( v18 != v17 );
        }
      }
      goto LABEL_9;
    }
  }
  if ( (*(_QWORD *)(v11 + 16) & 0x3E0LL) != 0 )
    MiZeroPhysicalPage(0LL, a3, v14, v10);
  *(_QWORD *)(v11 + 16) = MiMakeLinkedListPte(a2[2], a2, v9, a4, v25);
  ++a2[3];
  a2[2] = a3;
LABEL_9:
  result = *(_QWORD *)(a1 + 88);
  *(_QWORD *)v11 = result;
  ++*(_QWORD *)(a1 + 104);
  v20 = *(_QWORD *)(a1 + 96) == 0LL;
  *(_QWORD *)(a1 + 88) = v11;
  if ( v20 )
    *(_QWORD *)(a1 + 96) = v11;
  return result;
}
