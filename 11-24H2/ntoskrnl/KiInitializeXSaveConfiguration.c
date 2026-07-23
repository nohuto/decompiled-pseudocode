/*
 * XREFs of KiInitializeXSaveConfiguration @ 0x140B58B20
 * Callers:
 *     KiSystemStartup @ 0x140B4D3E0 (KiSystemStartup.c)
 * Callees:
 *     HvlQueryVsmConnection @ 0x14044B190 (HvlQueryVsmConnection.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     VslSynchronizeXSave @ 0x14058B8E0 (VslSynchronizeXSave.c)
 *     KiGetIptInfo @ 0x1405B5F28 (KiGetIptInfo.c)
 *     RtlUpdateXSaveSizeAndVolatileFeatures @ 0x1405E60BC (RtlUpdateXSaveSizeAndVolatileFeatures.c)
 *     RtlGetXSaveSupportedFeatures @ 0x1405EDFCC (RtlGetXSaveSupportedFeatures.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     KiIntersectFeaturesWithPolicy @ 0x140B58F34 (KiIntersectFeaturesWithPolicy.c)
 *     KiParseLoadOptions @ 0x140B591F0 (KiParseLoadOptions.c)
 */

char __fastcall KiInitializeXSaveConfiguration(__int64 a1, int a2)
{
  __int64 v4; // rax
  int v5; // edx
  __int64 v6; // rax
  ULONG_PTR v7; // rcx
  unsigned int v8; // eax
  ULONG_PTR v9; // rdx
  char v10; // al
  ULONG_PTR *v11; // rax
  __int64 v12; // rdx
  _OWORD *v13; // rcx
  __int128 v14; // xmm1
  int v15; // eax
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-D0h] BYREF
  ULONG_PTR BugCheckParameter1[2]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v19; // [rsp+54h] [rbp-ACh]
  __int64 v20; // [rsp+258h] [rbp+158h]
  __int64 v21; // [rsp+378h] [rbp+278h]
  unsigned __int16 v22; // [rsp+384h] [rbp+284h]

  if ( !a2 )
    KiParseLoadOptions(*(_QWORD *)(a1 + 216));
  memset_0(BugCheckParameter1, 0, 0x348uLL);
  RtlGetXSaveSupportedFeatures((__int64)BugCheckParameter1);
  BugCheckParameter3[0] = 0LL;
  KiGetIptInfo((_DWORD *)BugCheckParameter3 + 1, BugCheckParameter3);
  if ( a2 )
  {
    if ( (BugCheckParameter1[0] & MEMORY[0xFFFFF780000003D8]) != MEMORY[0xFFFFF780000003D8]
      || (v20 & MEMORY[0xFFFFF780000005F0]) != MEMORY[0xFFFFF780000005F0]
      || (v21 & MEMORY[0xFFFFF78000000710]) != MEMORY[0xFFFFF78000000710]
      || (v19 & 1) == 0 && (MEMORY[0xFFFFF780000003EC] & 1) != 0
      || (v19 & 2) == 0 && (MEMORY[0xFFFFF780000003EC] & 2) != 0
      || (v19 & 4) == 0 && (MEMORY[0xFFFFF780000003EC] & 4) != 0
      || v22 < MEMORY[0xFFFFF7800000071C] )
    {
      KeBugCheckEx(0x3Eu, (ULONG_PTR)BugCheckParameter1, 0xFFFFF780000003D8uLL, 1uLL, 0LL);
    }
    LOBYTE(v15) = LOBYTE(BugCheckParameter3[0]) & KiIptMsrMask;
    if ( (BugCheckParameter3[0] & (unsigned int)KiIptMsrMask) != (_DWORD)KiIptMsrMask )
      KeBugCheckEx(
        0x3Eu,
        (unsigned int)KiIptSaveAreaLength,
        (unsigned int)KiIptMsrMask,
        HIDWORD(BugCheckParameter3[0]),
        LODWORD(BugCheckParameter3[0]));
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 240);
    v5 = *(_DWORD *)(v4 + 2872);
    if ( BugCheckParameter1[0] )
    {
      v6 = *(_QWORD *)(v4 + 2864);
      v20 &= v6;
      v7 = v6 & BugCheckParameter1[0];
      v8 = v19;
      BugCheckParameter1[0] = v7;
      if ( (v5 & 0x10) == 0 )
      {
        v8 = v19 & 0xFFFFFFFD;
        v19 &= ~2u;
      }
      if ( (v5 & 8) == 0 )
      {
        v8 &= ~1u;
        v19 = v8;
      }
      if ( (v5 & 0x40) == 0 )
        v19 = v8 & 0xFFFFFFFB;
    }
    KiIntersectFeaturesWithPolicy(a1, BugCheckParameter1);
    v9 = BugCheckParameter1[0];
    if ( KeTestRemovedFeatureMask )
    {
      v9 = ~KeTestRemovedFeatureMask & BugCheckParameter1[0];
      v20 &= ~KeTestRemovedFeatureMask;
      BugCheckParameter1[0] = v9;
    }
    v10 = v19;
    if ( KeTestDisableXSave )
    {
      v9 = 0LL;
      v20 = 0LL;
      v10 = v19 & 0xF8;
      BugCheckParameter1[0] = 0LL;
      v19 &= 0xFFFFFFF8;
    }
    if ( (v9 & 0x40000) != 0 )
    {
      if ( (v10 & 2) != 0 && (v10 & 4) != 0 )
        v9 &= v21 | 0xFFFFFFFFFFFBFFFFuLL;
      else
        v9 &= ~0x40000uLL;
      BugCheckParameter1[0] = v9;
    }
    if ( (((unsigned __int8)(v9 >> 17) ^ (unsigned __int8)(v9 >> 18)) & 1) != 0 )
      BugCheckParameter1[0] = v9 & 0xFFFFFFFFFFF9FFFFuLL;
    RtlUpdateXSaveSizeAndVolatileFeatures(BugCheckParameter1);
    v11 = BugCheckParameter1;
    v12 = 6LL;
    v13 = (_OWORD *)(MmWriteableSharedUserData + 984);
    do
    {
      *v13 = *(_OWORD *)v11;
      v13[1] = *((_OWORD *)v11 + 1);
      v13[2] = *((_OWORD *)v11 + 2);
      v13[3] = *((_OWORD *)v11 + 3);
      v13[4] = *((_OWORD *)v11 + 4);
      v13[5] = *((_OWORD *)v11 + 5);
      v13[6] = *((_OWORD *)v11 + 6);
      v13 += 8;
      v14 = *((_OWORD *)v11 + 7);
      v11 += 16;
      *(v13 - 1) = v14;
      --v12;
    }
    while ( v12 );
    *v13 = *(_OWORD *)v11;
    v13[1] = *((_OWORD *)v11 + 1);
    v13[2] = *((_OWORD *)v11 + 2);
    v13[3] = *((_OWORD *)v11 + 3);
    *((_QWORD *)v13 + 8) = v11[8];
    KeEnabledSupervisorXStateFeatures = v20;
    if ( BugCheckParameter1[0] )
    {
      KeXStateLength = MEMORY[0xFFFFF78000000600];
      KiXSaveAreaLength = MEMORY[0xFFFFF78000000718];
      KiXSaveAreaLengthFull = MEMORY[0xFFFFF78000000600];
    }
    if ( (BugCheckParameter1[0] & 0x40000) != 0 )
    {
      LODWORD(KeDecoupledStateSaveAreaLength) = (MEMORY[0xFFFFF78000000600] + 63) & 0xFFFFFFC0;
      KeXStateStackSize = (KeDecoupledStateSaveAreaLength + 4095) & 0xFFFFF000;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 2872LL) & 0x20) != 0 )
    {
      KiXSaveAreaLength += HIDWORD(BugCheckParameter3[0]);
      KiXSaveAreaLengthFull += HIDWORD(BugCheckParameter3[0]);
      LODWORD(KiIptSaveAreaLength) = HIDWORD(BugCheckParameter3[0]);
      LODWORD(KiIptMsrMask) = BugCheckParameter3[0];
    }
    LOBYTE(v15) = HvlQueryVsmConnection(0LL);
    if ( (_BYTE)v15 )
    {
      v15 = VslSynchronizeXSave(BugCheckParameter1[0] | v20, v19);
      if ( v15 < 0 )
        KeBugCheckEx(0x131u, 6uLL, v15, 0LL, 0LL);
    }
  }
  return v15;
}
