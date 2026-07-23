/*
 * XREFs of HvlMapDeviceInterrupt @ 0x140584AD0
 * Callers:
 *     <none>
 * Callees:
 *     KeAddGroupAffinityEx @ 0x140287710 (KeAddGroupAffinityEx.c)
 *     HvlpHvStatusIsInsufficientMemory @ 0x14039CBE0 (HvlpHvStatusIsInsufficientMemory.c)
 *     HvlpHvToNtStatus @ 0x14039CC08 (HvlpHvToNtStatus.c)
 *     HvlpReleaseHypercallPage @ 0x14039DEB0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF20 (HvcallInitiateHypercall.c)
 *     HvlpAffinityToHvProcessorSet @ 0x1403A4864 (HvlpAffinityToHvProcessorSet.c)
 *     HvlpAcquireHypercallPage @ 0x14045D900 (HvlpAcquireHypercallPage.c)
 *     HvlpHandleInsufficientMemory @ 0x140580554 (HvlpHandleInsufficientMemory.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall HvlMapDeviceInterrupt(__int64 a1, _OWORD *a2, __int64 a3, _OWORD *a4)
{
  unsigned int v8; // edi
  _QWORD *v9; // r14
  _QWORD *v10; // rbx
  int v11; // eax
  unsigned int v12; // eax
  __int16 v13; // ax
  __int16 v14; // bx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int128 v19; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v20; // [rsp+38h] [rbp-C8h]
  __int64 v21; // [rsp+40h] [rbp-C0h]
  __int128 v22; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+58h] [rbp-A8h]
  __int64 v24; // [rsp+60h] [rbp-A0h]
  __int64 v25; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v26[264]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v27[112]; // [rsp+180h] [rbp+80h] BYREF
  _BYTE v28[288]; // [rsp+1F0h] [rbp+F0h] BYREF

  v20 = 0LL;
  LODWORD(v21) = 0;
  v23 = 0LL;
  LODWORD(v24) = 0;
  v19 = 0LL;
  v22 = 0LL;
  memset_0(&v25, 0, 0x108uLL);
  v8 = 0;
  if ( a3 )
  {
    v25 = 2097153LL;
    memset_0(v26, 0, 0x100uLL);
    KeAddGroupAffinityEx((unsigned __int16 *)&v25, *(_WORD *)(a3 + 8), *(_QWORD *)a3);
  }
  while ( 1 )
  {
    v9 = HvlpAcquireHypercallPage((__int64)&v22, 2, (__int64)v27, 56LL);
    v10 = HvlpAcquireHypercallPage((__int64)&v19, 1, (__int64)v28, 144LL);
    memset_0(v10, 0, 0x48uLL);
    *(_OWORD *)(v10 + 5) = *a2;
    *(_OWORD *)(v10 + 7) = a2[1];
    if ( a3 )
    {
      v11 = HvlpAffinityToHvProcessorSet((__int64)&v25, v10 + 8, (v19 & 2) != 0 ? 64 : 4016);
      if ( v11 == -1 )
      {
        HvlpReleaseHypercallPage((unsigned int *)&v19);
        v10 = HvlpAcquireHypercallPage((__int64)&v19, 1, 0LL, 0LL);
        memset_0(v10, 0, 0x48uLL);
        *(_OWORD *)(v10 + 5) = *a2;
        *(_OWORD *)(v10 + 7) = a2[1];
        v11 = HvlpAffinityToHvProcessorSet((__int64)&v25, v10 + 8, 0xFB0u);
      }
      *((_DWORD *)v10 + 15) |= 2u;
      v12 = v11 + 80;
      v8 = v12 - 72;
      if ( v12 <= 0x48 )
        v8 = 0;
    }
    else
    {
      *(_OWORD *)(v10 + 7) = 0LL;
    }
    *v10 = -1LL;
    v10[1] = a1;
    v13 = HvcallInitiateHypercall(((v8 + 7) << 14) & 0x3FE0000 | 0x7C);
    v8 = 0;
    v14 = v13;
    if ( !v13 )
      *a4 = *(_OWORD *)v9;
    HvlpReleaseHypercallPage((unsigned int *)&v19);
    HvlpReleaseHypercallPage((unsigned int *)&v22);
    if ( !HvlpHvStatusIsInsufficientMemory(v14) )
      break;
    if ( (int)HvlpHandleInsufficientMemory(v14, v15, v16, v17) < 0 )
      return 3221225626LL;
  }
  return HvlpHvToNtStatus(v14);
}
