/*
 * XREFs of MiCheckPteReserve @ 0x1404C206C
 * Callers:
 *     MiReservePtes @ 0x14029FB10 (MiReservePtes.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall MiCheckPteReserve(__int64 a1, __int64 a2, ULONG_PTR a3)
{
  ULONG_PTR v5; // r10
  unsigned __int64 v6; // r11
  __int64 v7; // r15
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r15
  const signed __int64 *v11; // rdx
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rcx
  volatile signed __int32 *v14; // r9
  unsigned int v15; // eax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r10
  volatile signed __int32 *v18; // r9
  __int64 result; // rax
  int v20; // r8d
  unsigned __int64 v21; // rcx

  v5 = a2 << 25 >> 16;
  if ( !a3 )
    KeBugCheckEx(0xDAu, 0x200uLL, a2 << 25 >> 16, 0LL, 0LL);
  LOBYTE(v6) = 2;
  v7 = (a3 >> (4 * (*(_BYTE *)(a1 + 40) & 1u))) - 1;
  v8 = 2 * ((unsigned __int64)(unsigned int)((a2 - *(_QWORD *)(a1 + 32)) >> 3) >> (4 * (*(_BYTE *)(a1 + 40) & 1u)));
  v9 = v8;
  v10 = v8 + 2 * v7;
  while ( 1 )
  {
    v11 = *(const signed __int64 **)(a1 + 24);
    if ( v9 >= v10 )
      break;
    if ( !_bittest64(v11, v9) )
      KeBugCheckEx(0xDAu, 0x201uLL, v5, v5 + (((v9 << 11) - (v8 << 11)) & 0xFFFFFFFFFFFFF000uLL), a3);
    v12 = v9 & 0x1F;
    LOBYTE(v13) = 1;
    v14 = (volatile signed __int32 *)v11 + (v9 >> 5);
    if ( v12 + 1 <= 0x20 )
    {
      v15 = ~(1 << v12);
LABEL_14:
      _InterlockedAnd(v14, v15);
      goto LABEL_15;
    }
    if ( (v9 & 0x1F) == 0 )
      goto LABEL_13;
    _InterlockedAnd(v14, ~(((1 << (32 - (v9 & 0x1F))) - 1) << v12));
    v13 = 1LL - (32 - (unsigned int)(v9 & 0x1F));
    ++v14;
    if ( v13 >= 0x20 )
    {
      v16 = v13 >> 5;
      v13 += -32LL * (v13 >> 5);
      do
      {
        *v14++ = 0;
        --v16;
      }
      while ( v16 );
    }
    if ( v13 )
    {
LABEL_13:
      v15 = -1 << v13;
      goto LABEL_14;
    }
LABEL_15:
    v9 += 2LL;
  }
  v17 = v9 & 0x1F;
  v18 = (volatile signed __int32 *)v11 + (v9 >> 5);
  result = v17 + 2;
  if ( v17 + 2 > 0x20 )
  {
    if ( (v9 & 0x1F) == 0 )
      goto LABEL_24;
    v20 = v9 & 0x1F;
    _InterlockedAnd(v18, ~(((1 << (32 - v20)) - 1) << v17));
    result = (unsigned int)(32 - v20);
    ++v18;
    v6 = 2 - result;
    if ( (unsigned __int64)(2 - result) >= 0x20 )
    {
      v21 = v6 >> 5;
      result = -32LL * (v6 >> 5);
      v6 += result;
      do
      {
        *v18++ = 0;
        --v21;
      }
      while ( v21 );
    }
    if ( v6 )
LABEL_24:
      _InterlockedAnd(v18, -1 << v6);
  }
  else
  {
    result = (unsigned int)~(3 << v17);
    _InterlockedAnd(v18, result);
  }
  return result;
}
