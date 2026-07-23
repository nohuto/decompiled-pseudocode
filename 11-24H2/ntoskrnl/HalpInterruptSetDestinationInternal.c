/*
 * XREFs of HalpInterruptSetDestinationInternal @ 0x1403747D8
 * Callers:
 *     HalpInterruptSetDestination @ 0x140373710 (HalpInterruptSetDestination.c)
 * Callees:
 *     HalpInterruptDestinationToTarget @ 0x140370DAC (HalpInterruptDestinationToTarget.c)
 *     HalpInterruptLookupController @ 0x1403726E4 (HalpInterruptLookupController.c)
 *     HalpInterruptSetLineStateInternal @ 0x140372714 (HalpInterruptSetLineStateInternal.c)
 *     HalpInterruptApplyOverrides @ 0x1403732F0 (HalpInterruptApplyOverrides.c)
 *     HalpInterruptFindBestRouting @ 0x1403752D0 (HalpInterruptFindBestRouting.c)
 *     HalpInterruptSetProblemEx @ 0x14037537C (HalpInterruptSetProblemEx.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall HalpInterruptSetDestinationInternal(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  ULONG_PTR *v6; // rax
  __int64 v7; // rbx
  ULONG_PTR *v8; // rcx
  ULONG_PTR *v9; // rdi
  int v10; // r8d
  unsigned int v11; // eax
  __int64 v12; // rsi
  __int64 v13; // r13
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  _DWORD *v16; // r15
  int v17; // r8d
  ULONG_PTR v19; // rcx
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  signed __int32 v22[8]; // [rsp+0h] [rbp-70h] BYREF
  __int128 v23; // [rsp+30h] [rbp-40h]
  __int128 v24; // [rsp+40h] [rbp-30h]
  __int128 v25; // [rsp+50h] [rbp-20h]
  __int64 v26; // [rsp+60h] [rbp-10h]
  __int64 v27; // [rsp+A0h] [rbp+30h] BYREF

  v27 = *a1;
  HalpInterruptApplyOverrides((__int64)&v27, 0LL, 0LL);
  LODWORD(v5) = v27;
  while ( 1 )
  {
    v6 = HalpInterruptLookupController(v5);
    v7 = (__int64)v6;
    if ( !v6 )
      break;
    if ( (v6[31] & 2) != 0 )
      KeBugCheckEx(0x5Cu, 0x200uLL, HalpInterruptLastProblem, (ULONG_PTR)v6, 0x7931847uLL);
    v8 = (ULONG_PTR *)v6[33];
    do
    {
      if ( v8 == v6 + 33 )
        goto LABEL_17;
      v9 = v8;
      v8 = (ULONG_PTR *)*v8;
      v10 = *((_DWORD *)v9 + 5);
    }
    while ( v10 > SHIDWORD(v27) || *((_DWORD *)v9 + 6) <= SHIDWORD(v27) );
    v11 = HIDWORD(v27) - v10;
    if ( !v9 )
    {
LABEL_17:
      HalpInterruptSetProblemEx(v7, 18, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 1071);
      return (unsigned int)-1073741275;
    }
    if ( *(_BYTE *)(v9[6] + 16LL * v11) )
    {
      HalpInterruptSetProblemEx(v7, 19, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 1084);
      return (unsigned int)-1073741811;
    }
    v12 = 56LL * v11;
    v13 = v12 + v9[5];
    v14 = *(_OWORD *)(v13 + 16);
    v23 = *(_OWORD *)v13;
    v15 = *(_OWORD *)(v13 + 32);
    v24 = v14;
    *(_QWORD *)&v14 = *(_QWORD *)(v13 + 48);
    v25 = v15;
    v26 = v14;
    HalpInterruptDestinationToTarget(2LL * v11, a2, (_DWORD *)(v13 + 24));
    v16 = (_DWORD *)(v13 + 16);
    HalpInterruptFindBestRouting(&v27, *(_QWORD *)a3, v13 + 16);
    _InterlockedOr(v22, 0);
    v17 = HalpInterruptSetLineStateInternal(v7, (__int64)&v27, v13);
    if ( v17 < 0 )
    {
      HalpInterruptSetProblemEx(v7, 7, v17, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 1123);
      v19 = v9[5];
      v20 = v24;
      *(_OWORD *)(v19 + v12) = v23;
      v21 = v25;
      *(_OWORD *)(v19 + v12 + 16) = v20;
      *(_QWORD *)&v20 = v26;
      *(_OWORD *)(v19 + v12 + 32) = v21;
      *(_QWORD *)(v19 + v12 + 48) = v20;
      return (unsigned int)v17;
    }
    if ( *(_DWORD *)(v13 + 20) == *(_DWORD *)(a3 + 4) && *v16 == *(_DWORD *)a3 )
      return (unsigned int)v17;
    v5 = *(_QWORD *)v16;
    v27 = *(_QWORD *)v16;
  }
  HalpInterruptLastProblemController = 0LL;
  HalpInterruptLastProblemStatus = 0;
  HalpInterruptLastProblemFile = (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c";
  HalpInterruptLastProblem = 17;
  HalpInterruptLastProblemLine = 1047;
  return (unsigned int)-1073741275;
}
