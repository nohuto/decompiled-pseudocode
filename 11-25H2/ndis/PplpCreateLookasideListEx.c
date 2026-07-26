/*
 * XREFs of PplpCreateLookasideListEx @ 0x1400E2A3C
 * Callers:
 *     ?ndisMInitializeScatterGatherDmaInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_DEVICE_OBJECT@@EEKK@Z @ 0x1400E1BA0 (-ndisMInitializeScatterGatherDmaInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_DEVICE_OBJECT@@EEKK@.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall PplpCreateLookasideListEx(int a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, SIZE_T Size)
{
  int v7; // r14d
  _DWORD *Pool3; // rbx
  int v9; // ebp
  __int64 v10; // rsi
  _DWORD *v11; // rdi
  _DWORD *result; // rax
  _QWORD v13[2]; // [rsp+40h] [rbp-38h] BYREF

  v13[0] = 1LL;
  v13[1] = 0LL;
  v7 = a1 + 1;
  Pool3 = (_DWORD *)ExAllocatePool3(72LL, ((unsigned __int64)(unsigned int)(a1 + 1) << 7) + 64, 1650738254LL, v13, 1);
  if ( !Pool3 )
    return 0LL;
  v9 = 0;
  v10 = 0LL;
  while ( v9 < v7 )
  {
    v11 = &Pool3[32 * v10];
    KeInitializeSpinLock((PKSPIN_LOCK)v11 + 21);
    if ( v10 )
    {
      *((_BYTE *)v11 + 176) = 0;
      *((_QWORD *)v11 + 20) = Pool3 + 16;
    }
    else
    {
      if ( ExInitializeLookasideListEx(
             (PLOOKASIDE_LIST_EX)(v11 + 16),
             0LL,
             0LL,
             NonPagedPoolNx,
             0,
             Size,
             0x6264444Eu,
             0) < 0 )
      {
        ExFreePoolWithTag(Pool3, 0x6264444Eu);
        return 0LL;
      }
      *((_QWORD *)v11 + 20) = 0LL;
      *((_BYTE *)v11 + 176) = 1;
    }
    ++v9;
    ++v10;
  }
  *Pool3 = v7;
  result = Pool3;
  Pool3[1] = 0;
  Pool3[2] = 1650738254;
  Pool3[3] = 1650738254;
  *((_QWORD *)Pool3 + 2) = Size;
  Pool3[8] = 512;
  *((_WORD *)Pool3 + 18) = 0;
  *((_QWORD *)Pool3 + 3) = 0LL;
  return result;
}
