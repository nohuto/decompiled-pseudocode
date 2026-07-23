/*
 * XREFs of MiGetPageChainSmallPageProcess @ 0x140253A70
 * Callers:
 *     MiGetPageChain @ 0x140307540 (MiGetPageChain.c)
 * Callees:
 *     MiZeroPhysicalPage @ 0x14024B990 (MiZeroPhysicalPage.c)
 *     MiChangePageAttribute @ 0x14024C2DC (MiChangePageAttribute.c)
 *     MiSetPfnTbFlushStamp @ 0x140253C90 (MiSetPfnTbFlushStamp.c)
 *     MiMakeLinkedListPte @ 0x1403F8EF0 (MiMakeLinkedListPte.c)
 *     MiTbFlushTimeStampMayNeedFlush @ 0x140446A68 (MiTbFlushTimeStampMayNeedFlush.c)
 *     MiPerformFinalZeroing @ 0x1404F5E44 (MiPerformFinalZeroing.c)
 */

__int64 __fastcall MiGetPageChainSmallPageProcess(__int64 a1, _QWORD *a2, __int64 a3)
{
  int v6; // r8d
  unsigned int v7; // esi
  __int64 v8; // rbx
  int v9; // ecx
  int v10; // ebp
  char v11; // r12
  int v12; // ecx
  signed __int64 v13; // rdx
  signed __int64 v14; // r8
  signed __int64 v15; // rcx
  __int64 result; // rax
  bool v17; // zf
  char v18; // r8
  __int64 *v19; // rdx
  __int64 v20; // rcx
  signed __int32 v21[8]; // [rsp+0h] [rbp-48h] BYREF

  v6 = *(_DWORD *)(a1 + 32);
  v7 = (*(_DWORD *)(a1 + 48) >> 18) & 3;
  v8 = 48 * a3 - 0x220000000000LL;
  v9 = (unsigned __int8)BYTE2(*(_DWORD *)(v8 + 32)) >> 6;
  if ( v9 != v7 && ((unsigned __int8)((1 << v9) | (1 << v7)) & (unsigned __int8)byte_140E2DD18) != 0 )
  {
    *(_QWORD *)(v8 + 16) = MiMakeLinkedListPte(*a2);
    v17 = ++v19[1] == 16;
    *v19 = a3;
    if ( v17 )
      MiPerformFinalZeroing(a2, v7, v18 & 1);
    goto LABEL_9;
  }
  v10 = 0;
  v11 = 2 * (v6 & 1);
  if ( (v6 & 0x20) != 0 && (*(_QWORD *)(v8 + 16) & 0x3E0LL) != 0 )
  {
    MiZeroPhysicalPage(0LL, a3, v11, v7);
    *(_QWORD *)(v8 + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
    MiSetPfnTbFlushStamp(48 * a3 - 0x220000000000LL, 0LL, 0LL);
    v10 = 1;
  }
  v12 = (unsigned __int8)BYTE2(*(_DWORD *)(v8 + 32)) >> 6;
  if ( v12 == v7 )
    goto LABEL_6;
  if ( v12 != 1 )
  {
    if ( v12 == 3
      || (v20 = (*(_QWORD *)(v8 + 24) >> 59) & 7LL, ((*(_QWORD *)(v8 + 24) >> 59) & 7) != 0)
      && (_InterlockedOr(v21, 0),
          !(unsigned __int8)MiTbFlushTimeStampMayNeedFlush(v20, (unsigned int)KiTbFlushTimeStamp, 7LL)) )
    {
      MiChangePageAttribute(48 * a3 - 0x220000000000LL, v7);
LABEL_6:
      if ( !v10 )
      {
        v13 = *(_QWORD *)(v8 + 24);
        v14 = _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 24), v13 & 0xC7FFFFFFFFFFFFFFuLL, v13);
        if ( v13 != v14 )
        {
          do
          {
            v15 = v14;
            v14 = _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 24), v14 & 0xC7FFFFFFFFFFFFFFuLL, v14);
          }
          while ( v15 != v14 );
        }
      }
      goto LABEL_9;
    }
  }
  if ( (*(_QWORD *)(v8 + 16) & 0x3E0LL) != 0 )
    MiZeroPhysicalPage(0LL, a3, v11, v7);
  *(_QWORD *)(v8 + 16) = MiMakeLinkedListPte(a2[2]);
  ++a2[3];
  a2[2] = a3;
LABEL_9:
  result = *(_QWORD *)(a1 + 88);
  *(_QWORD *)v8 = result;
  ++*(_QWORD *)(a1 + 104);
  v17 = *(_QWORD *)(a1 + 96) == 0LL;
  *(_QWORD *)(a1 + 88) = v8;
  if ( v17 )
    *(_QWORD *)(a1 + 96) = v8;
  return result;
}
