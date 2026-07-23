/*
 * XREFs of HalpWdatDiscover @ 0x14055CF58
 * Callers:
 *     HalpTimerRegisterBuiltinPluginsCommon @ 0x1405461A4 (HalpTimerRegisterBuiltinPluginsCommon.c)
 * Callees:
 *     HviGetHardwareFeatures @ 0x14049E6A0 (HviGetHardwareFeatures.c)
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1404A053C (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpWdatExecuteActionBeforeInitialize @ 0x14055D1F8 (HalpWdatExecuteActionBeforeInitialize.c)
 *     HalpWdatProcessWdrtInternalData @ 0x14055D570 (HalpWdatProcessWdrtInternalData.c)
 *     HalSocGetAcpiTable @ 0x14055DB80 (HalSocGetAcpiTable.c)
 *     HalpTimerRegister @ 0x14055DCBC (HalpTimerRegister.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 HalpWdatDiscover()
{
  __int64 AcpiTable; // rbx
  __int64 v1; // rax
  int v2; // ecx
  __int64 v3; // rdi
  char v4; // si
  unsigned int v5; // r15d
  unsigned int v6; // r8d
  unsigned int v7; // r12d
  int v8; // r14d
  unsigned __int64 i; // rdx
  int v10; // eax
  int v11; // edx
  int v12; // ecx
  unsigned __int64 v13; // rcx
  int v15; // [rsp+38h] [rbp-D0h] BYREF
  int v16; // [rsp+3Ch] [rbp-CCh] BYREF
  int v17; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v18; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v19[11]; // [rsp+50h] [rbp-B8h] BYREF
  int v20; // [rsp+A8h] [rbp-60h]
  int v21; // [rsp+ACh] [rbp-5Ch]
  __int64 v22; // [rsp+B0h] [rbp-58h]
  int v23; // [rsp+BCh] [rbp-4Ch]
  int v24; // [rsp+D0h] [rbp-38h]
  int v25; // [rsp+D4h] [rbp-34h]
  _BYTE v26[8]; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v27; // [rsp+E0h] [rbp-28h]
  unsigned int v28; // [rsp+E8h] [rbp-20h]
  unsigned int v29; // [rsp+ECh] [rbp-1Ch]
  unsigned int v30; // [rsp+F0h] [rbp-18h]
  __int128 v31; // [rsp+148h] [rbp+40h] BYREF

  v17 = 0;
  v16 = 0;
  memset_0(v19, 0, 0x88uLL);
  memset_0(v26, 0, 0x70uLL);
  v18 = 0x9000000001LL;
  v31 = 0LL;
  AcpiTable = 0LL;
  LOBYTE(v15) = 0;
  if ( !HalpIsMicrosoftCompatibleHvLoaded()
    || !HalpHvCpuManager
    || (HviGetHardwareFeatures((__int64)&v31), (v31 & 0x2000000) == 0) )
  {
    AcpiTable = HalSocGetAcpiTable(1413563479LL);
  }
  v1 = HalSocGetAcpiTable(1414677591LL);
  v3 = v1;
  if ( AcpiTable )
  {
    if ( (*(_BYTE *)(AcpiTable + 60) & 1) != 0 )
    {
      v4 = 1;
      v5 = *(_DWORD *)(AcpiTable + 52);
      v6 = *(_DWORD *)(AcpiTable + 56);
      v7 = *(_DWORD *)(AcpiTable + 48);
      v8 = (*(_DWORD *)(AcpiTable + 64) << 6) + 112;
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(AcpiTable + 64); i = (unsigned int)(i + 1) )
      {
        v2 = 3 * i;
        if ( *(_BYTE *)(AcpiTable + 24 * i + 68) == 6 )
          goto LABEL_15;
      }
      goto LABEL_28;
    }
    return 0LL;
  }
  if ( !v1 )
    return 0LL;
  v27 = v1;
  v10 = HalpWdatProcessWdrtInternalData(v1, v26, &v16, &v15);
  v4 = v15;
  if ( v10 >= 0 )
  {
    if ( !(_BYTE)v15 )
      return 0LL;
    v7 = v30;
    v6 = v29;
    v5 = v28;
    v8 = v16;
LABEL_15:
    if ( v7 && v5 >= v6 )
    {
      v23 = 163872;
      LOBYTE(v2) = 32;
      if ( (int)HalpWdatExecuteActionBeforeInitialize(v2, i, (unsigned int)&v17, AcpiTable, v3) >= 0 && v17 == 1 )
      {
        v23 = 426016;
        LOBYTE(v12) = 33;
        HalpWdatExecuteActionBeforeInitialize(v12, v11, 0, AcpiTable, v3);
      }
      v13 = v7 * (unsigned __int64)v5 / 0x3E8;
      if ( v13 > 0x12C436C73CE5LL )
      {
        v21 = 64;
LABEL_26:
        v19[2] = 0LL;
        v19[10] = 0LL;
        v25 = 0;
        v19[0] = HalpWdatInitialize;
        v19[3] = HalpWdatArmTimer;
        v19[4] = HalpWdatStop;
        v22 = 894000LL;
        v20 = v8;
        v24 = 13;
        HalpTimerRegister(&v18, 0LL);
        goto LABEL_27;
      }
      i = 894000 * v13;
      v2 = 63;
      v21 = 63;
      do
      {
        if ( (1LL << v2) - 1 < i )
          break;
        --v2;
      }
      while ( v2 );
      v21 = v2;
      if ( v2 )
        goto LABEL_26;
    }
  }
LABEL_27:
  if ( v4 )
  {
LABEL_28:
    LOBYTE(v2) = 11;
    HalpWdatExecuteActionBeforeInitialize(v2, i, 0, AcpiTable, v3);
  }
  return 0LL;
}
