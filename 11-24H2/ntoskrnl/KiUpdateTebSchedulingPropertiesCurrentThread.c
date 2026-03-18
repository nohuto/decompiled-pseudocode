/*
 * XREFs of KiUpdateTebSchedulingPropertiesCurrentThread @ 0x140205818
 * Callers:
 *     KeUpdateTebSchedulingPropertiesCurrentThread @ 0x1402057C8 (KeUpdateTebSchedulingPropertiesCurrentThread.c)
 *     KiUpdateTebApc @ 0x140205800 (KiUpdateTebApc.c)
 * Callees:
 *     KiReleaseThreadLockLowerIrql @ 0x1402067B0 (KiReleaseThreadLockLowerIrql.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x1402A1A20 (KiAcquireThreadLockRaiseToDpc.c)
 */

unsigned __int64 __fastcall KiUpdateTebSchedulingPropertiesCurrentThread(__int64 a1)
{
  unsigned __int64 result; // rax
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // r15
  __int64 v7; // r14
  _WORD *v8; // r12
  __int64 v9; // r12
  char v10; // dl
  unsigned int v11; // r8d
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // [rsp+20h] [rbp-58h]
  __int128 v15; // [rsp+30h] [rbp-48h]
  __int128 v16; // [rsp+40h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF
  unsigned int v18; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v19; // [rsp+88h] [rbp+10h]

  result = (unsigned __int64)&retaddr;
  v19 = 0;
  LOBYTE(v18) = 0;
  v3 = 0LL;
  v4 = 0LL;
  if ( *(_QWORD *)(a1 + 240) )
  {
    KiAcquireThreadLockRaiseToDpc(a1, &v18);
    v6 = *(unsigned int *)(a1 + 196);
    v7 = *(unsigned __int16 *)(a1 + 560);
    *((_QWORD *)&v15 + 1) = (unsigned __int16)v7;
    v8 = *(_WORD **)(a1 + 552);
    if ( (unsigned __int16)v7 >= *v8 )
      v9 = 0LL;
    else
      v9 = *(_QWORD *)&v8[4 * v7 + 4];
    *(_QWORD *)&v15 = v9;
    LOBYTE(v5) = v18;
    KiReleaseThreadLockLowerIrql(a1, v5);
    v10 = 0;
    if ( (_DWORD)v6 )
    {
      if ( (unsigned int)v6 < KeMaximumProcessors )
      {
        v11 = *((_DWORD *)KiGlobalState + v6);
        if ( v11 )
        {
          LOWORD(v19) = v11 >> 6;
          v10 = v11 & 0x3F;
          BYTE2(v19) = v11 & 0x3F;
        }
      }
    }
    HIBYTE(v19) = BYTE2(v19);
    LOWORD(v18) = v19;
    BYTE2(v18) = BYTE2(v19) & 0x1F;
    HIBYTE(v18) = v10 & 0x1F;
    HIDWORD(v14) = (unsigned __int16)v7;
    *((_QWORD *)&v16 + 1) = (unsigned __int16)v7;
    *(_QWORD *)&v16 = v9;
    v12 = *(_QWORD *)(a1 + 240);
    v13 = *(_QWORD *)(a1 + 544);
    if ( *(_QWORD *)(v13 + 784) )
    {
      if ( *(_WORD *)(v13 + 1772) == 0x8664 )
        v3 = v12 + 0x2000;
      else
        v4 = v12 + 0x2000;
    }
    result = v19;
    *(_DWORD *)(v12 + 5956) = v19;
    *(_OWORD *)(v12 + 6240) = v15;
    if ( v3 )
    {
      *(_DWORD *)(v3 + 5956) = result;
      *(_OWORD *)(v3 + 6240) = v16;
    }
    if ( v4 )
    {
      result = v18;
      *(_DWORD *)(v4 + 3956) = v18;
      LODWORD(v14) = v9 | HIDWORD(v9);
      *(_QWORD *)(v4 + 4128) = v14;
      *(_DWORD *)(v4 + 4136) = 0;
    }
  }
  return result;
}
