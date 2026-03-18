/*
 * XREFs of MmRelocatePfnList @ 0x140ABD000
 * Callers:
 *     PfpPfnPrioRequest @ 0x140933094 (PfpPfnPrioRequest.c)
 * Callees:
 *     MiDeleteUltraThreadContext @ 0x140211630 (MiDeleteUltraThreadContext.c)
 *     MiPfnsWorthTrying @ 0x14021F790 (MiPfnsWorthTrying.c)
 *     MiIdentifyPfnWrapper @ 0x140220FB0 (MiIdentifyPfnWrapper.c)
 *     MiCreateUltraThreadContext @ 0x14022CB40 (MiCreateUltraThreadContext.c)
 *     MiInitializePageColorBase @ 0x14023A610 (MiInitializePageColorBase.c)
 *     MiClaimPhysicalRun @ 0x1403416E0 (MiClaimPhysicalRun.c)
 *     MiAdjustCachedStacks @ 0x1403B1C48 (MiAdjustCachedStacks.c)
 *     MiIsPfn @ 0x1403F2190 (MiIsPfn.c)
 *     MiMakeColor @ 0x140440B50 (MiMakeColor.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MmRelocatePfnList(__int64 a1, _QWORD *a2, unsigned int a3, unsigned int a4)
{
  char v4; // r12
  char v5; // r15
  _QWORD *v9; // r14
  unsigned __int64 v10; // rsi
  __int64 v11; // rcx
  int Color; // eax
  __int64 v13; // xmm1_8
  int v14; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v15; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v16; // [rsp+68h] [rbp-98h]
  __int128 v17; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v18[128]; // [rsp+80h] [rbp-80h] BYREF

  v14 = 0;
  v16 = 0LL;
  v4 = a4;
  v5 = a3;
  v15 = 0LL;
  v17 = 0LL;
  if ( a3 >= (unsigned __int16)KeNumberNodes )
    return 3221225712LL;
  if ( a4 >= (unsigned __int8)MmNumberOfChannels )
    return 3221225713LL;
  MiInitializePageColorBase(
    (__int64)&KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink,
    3,
    a3 + 1,
    (__int64)&v17);
  memset_0(v18, 0, sizeof(v18));
  if ( !(unsigned int)MiCreateUltraThreadContext((__int64)v18, (__int64)&v17, 8, 0LL) )
    return 3221225626LL;
  v9 = &a2[3 * a1];
  while ( a2 < v9 )
  {
    v10 = a2[1];
    *(_QWORD *)&v15 = 0LL;
    v16 = 0LL;
    *((_QWORD *)&v15 + 1) = v10;
    if ( MiIsPfn(v10) )
    {
      MiIdentifyPfnWrapper(48 * v10 - 0x220000000000LL, &v15);
      v11 = v16;
      if ( v16 != a2[2] || ((*a2 ^ (unsigned __int64)v15) & 0x1FFFFFFFFFFFE00LL) != 0 )
        goto LABEL_18;
      if ( !MiPfnsWorthTrying((__int16 *)&MiSystemPartition, 48 * v10 - 0x220000000000LL, 1LL, 0, &v14) )
      {
        if ( (v14 & 1) != 0 )
          MiAdjustCachedStacks((__int64)&MiSystemPartition, 1);
        Color = MiMakeColor(
                  v5,
                  v4,
                  v10 % (unsigned int)dword_140E2D98C,
                  3,
                  (unsigned __int8)BYTE2(*(_DWORD *)(48 * v10 - 0x220000000000LL + 32)) >> 6);
        *(_QWORD *)&v17 = -1LL;
        if ( !MiClaimPhysicalRun(
                (__int64)&MiSystemPartition,
                v10,
                1LL,
                qword_140E2D9A0,
                (__int64)v18,
                4210688,
                Color,
                0LL,
                (__int64 *)&v17,
                &v14)
          && (_QWORD)v17 != -1LL )
        {
          *((_QWORD *)&v15 + 1) = v17;
          goto LABEL_19;
        }
      }
    }
    v11 = v16;
LABEL_18:
    v16 = v11 | 2;
LABEL_19:
    v13 = v16;
    *(_OWORD *)a2 = v15;
    a2[2] = v13;
    a2 += 3;
  }
  MiDeleteUltraThreadContext((__int64)v18);
  return 0LL;
}
