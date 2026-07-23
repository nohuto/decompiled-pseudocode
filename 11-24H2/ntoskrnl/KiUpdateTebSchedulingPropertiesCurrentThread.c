/*
 * XREFs of KiUpdateTebSchedulingPropertiesCurrentThread @ 0x14032CDF8
 * Callers:
 *     KeUpdateTebSchedulingPropertiesCurrentThread @ 0x14032CDA8 (KeUpdateTebSchedulingPropertiesCurrentThread.c)
 *     KiUpdateTebApc @ 0x14032CDE0 (KiUpdateTebApc.c)
 * Callees:
 *     KiAcquireThreadLockRaiseToDpc @ 0x1402D1150 (KiAcquireThreadLockRaiseToDpc.c)
 *     KiReleaseThreadLockLowerIrql @ 0x14032DD90 (KiReleaseThreadLockLowerIrql.c)
 */

unsigned __int64 __fastcall KiUpdateTebSchedulingPropertiesCurrentThread(__int64 a1)
{
  unsigned __int64 result; // rax
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // r15
  __int64 v6; // r14
  _WORD *v7; // r12
  __int64 v8; // r12
  char v9; // dl
  unsigned int v10; // r8d
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // [rsp+20h] [rbp-58h]
  __int128 v14; // [rsp+30h] [rbp-48h]
  __int128 v15; // [rsp+40h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF
  unsigned int v17; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v18; // [rsp+88h] [rbp+10h]

  result = (unsigned __int64)&retaddr;
  v18 = 0;
  LOBYTE(v17) = 0;
  v3 = 0LL;
  v4 = 0LL;
  if ( *(_QWORD *)(a1 + 240) )
  {
    KiAcquireThreadLockRaiseToDpc(a1, (unsigned __int8 *)&v17);
    v5 = *(unsigned int *)(a1 + 196);
    v6 = *(unsigned __int16 *)(a1 + 560);
    *((_QWORD *)&v14 + 1) = (unsigned __int16)v6;
    v7 = *(_WORD **)(a1 + 552);
    if ( (unsigned __int16)v6 >= *v7 )
      v8 = 0LL;
    else
      v8 = *(_QWORD *)&v7[4 * v6 + 4];
    *(_QWORD *)&v14 = v8;
    KiReleaseThreadLockLowerIrql(a1);
    v9 = 0;
    if ( (_DWORD)v5 )
    {
      if ( (unsigned int)v5 < KeMaximumProcessors )
      {
        v10 = *((_DWORD *)KiGlobalState + v5);
        if ( v10 )
        {
          LOWORD(v18) = v10 >> 6;
          v9 = v10 & 0x3F;
          BYTE2(v18) = v10 & 0x3F;
        }
      }
    }
    HIBYTE(v18) = BYTE2(v18);
    LOWORD(v17) = v18;
    BYTE2(v17) = BYTE2(v18) & 0x1F;
    HIBYTE(v17) = v9 & 0x1F;
    HIDWORD(v13) = (unsigned __int16)v6;
    *((_QWORD *)&v15 + 1) = (unsigned __int16)v6;
    *(_QWORD *)&v15 = v8;
    v11 = *(_QWORD *)(a1 + 240);
    v12 = *(_QWORD *)(a1 + 544);
    if ( *(_QWORD *)(v12 + 784) )
    {
      if ( *(_WORD *)(v12 + 1772) == 0x8664 )
        v3 = v11 + 0x2000;
      else
        v4 = v11 + 0x2000;
    }
    result = v18;
    *(_DWORD *)(v11 + 5956) = v18;
    *(_OWORD *)(v11 + 6240) = v14;
    if ( v3 )
    {
      *(_DWORD *)(v3 + 5956) = result;
      *(_OWORD *)(v3 + 6240) = v15;
    }
    if ( v4 )
    {
      result = v17;
      *(_DWORD *)(v4 + 3956) = v17;
      LODWORD(v13) = v8 | HIDWORD(v8);
      *(_QWORD *)(v4 + 4128) = v13;
      *(_DWORD *)(v4 + 4136) = 0;
    }
  }
  return result;
}
