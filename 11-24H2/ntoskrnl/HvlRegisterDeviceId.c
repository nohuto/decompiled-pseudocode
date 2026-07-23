/*
 * XREFs of HvlRegisterDeviceId @ 0x140585190
 * Callers:
 *     <none>
 * Callees:
 *     HvlpHvStatusIsInsufficientMemory @ 0x14039CBE0 (HvlpHvStatusIsInsufficientMemory.c)
 *     HvlpHvToNtStatus @ 0x14039CC08 (HvlpHvToNtStatus.c)
 *     HvlpReleaseHypercallPage @ 0x14039DEB0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF20 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x14045D900 (HvlpAcquireHypercallPage.c)
 *     HvlpHandleInsufficientMemory @ 0x140580554 (HvlpHandleInsufficientMemory.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall HvlRegisterDeviceId(int *a1, __int64 a2)
{
  int v3; // eax
  unsigned int v5; // ecx
  __int64 v6; // rax
  __int64 v7; // rcx
  size_t v8; // rsi
  _QWORD *v10; // rbx
  __int64 v11; // r8
  _BYTE *v12; // rdx
  __int16 v13; // bx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int128 v17; // [rsp+20h] [rbp-38h] BYREF
  __int64 v18; // [rsp+30h] [rbp-28h]
  __int64 v19; // [rsp+38h] [rbp-20h]
  int v20; // [rsp+60h] [rbp+8h]

  v18 = 0LL;
  LODWORD(v19) = 0;
  v3 = *a1;
  v17 = 0LL;
  if ( v3 == 1 )
  {
    v5 = 0;
  }
  else
  {
    if ( v3 != 2 )
      return 3221225659LL;
    v6 = *((_QWORD *)a1 + 1);
    v7 = -1LL;
    do
      ++v7;
    while ( *(_BYTE *)(v6 + v7) );
    v5 = (v7 + 8) & 0xFFFFFFF8;
  }
  v8 = v5 + 40LL;
  if ( v8 > 0x1000 )
    return 3221225485LL;
  v20 = (v5 << 14) & 0x3FE0000 | 0x82;
  while ( 1 )
  {
    v10 = HvlpAcquireHypercallPage((__int64)&v17, 1, 0LL, 0LL);
    memset_0(v10, 0, v8);
    *v10 = -1LL;
    if ( *a1 == 1 )
    {
      v10[1] = 0x4000000000000000LL;
      *((_WORD *)v10 + 5) = *((_WORD *)a1 + 4);
      *((_WORD *)v10 + 4) = *((_WORD *)a1 + 6);
      *((_WORD *)v10 + 7) ^= (*((_WORD *)a1 + 5) ^ *((_WORD *)v10 + 7)) & 3;
    }
    else
    {
      v11 = -1LL;
      v10[1] |= 0xC000000000000000uLL;
      v12 = (_BYTE *)*((_QWORD *)a1 + 1);
      do
        ++v11;
      while ( v12[v11] );
      memmove(v10 + 5, v12, v11 + 1);
    }
    *((_DWORD *)v10 + 4) |= 1u;
    v10[3] = a2;
    v13 = HvcallInitiateHypercall(v20);
    HvlpReleaseHypercallPage((unsigned int *)&v17);
    if ( !HvlpHvStatusIsInsufficientMemory(v13) )
      break;
    if ( (int)HvlpHandleInsufficientMemory(v13, v14, v15, v16) < 0 )
      return 3221225626LL;
  }
  return HvlpHvToNtStatus(v13);
}
