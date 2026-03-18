/*
 * XREFs of ACPIPccInitialize @ 0x14009F858
 * Callers:
 *     ACPILoadProcessRSDT @ 0x1400C9308 (ACPILoadProcessRSDT.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400283FC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 *     AcpiPccInitType0Subspace @ 0x1400A0370 (AcpiPccInitType0Subspace.c)
 *     AcpiPccInitType1Subspace @ 0x1400A04A0 (AcpiPccInitType1Subspace.c)
 *     AcpiPccInitType2Subspace @ 0x1400A05E0 (AcpiPccInitType2Subspace.c)
 *     AcpiPccInitType34Subspace @ 0x1400A0780 (AcpiPccInitType34Subspace.c)
 */

__int64 __fastcall ACPIPccInitialize(__int64 a1)
{
  unsigned __int8 *v1; // rsi
  unsigned __int64 v2; // r8
  unsigned int v3; // ebx
  unsigned __int64 v5; // rdx
  __int64 v6; // rax
  __int64 Pool2; // rax
  int v8; // edx
  __int64 v9; // r8
  __int64 v10; // r14
  unsigned int v11; // ebp
  unsigned int *v12; // rdi
  __int64 v13; // rax
  signed __int32 v15[8]; // [rsp+0h] [rbp-48h] BYREF

  v1 = (unsigned __int8 *)(a1 + 48);
  v2 = a1 + *(unsigned int *)(a1 + 4);
  v3 = 0;
  v5 = a1 + 48;
  if ( a1 + 50 <= v2 )
  {
    do
    {
      v6 = *(unsigned __int8 *)(v5 + 1);
      if ( (unsigned __int8)v6 < 2u )
        break;
      v5 += v6;
      if ( v5 > v2 )
        break;
      ++v3;
    }
    while ( v5 + 2 <= v2 );
    if ( v3 )
    {
      Pool2 = ExAllocatePool2(64LL, 824LL * v3, 1299211073LL);
      v10 = Pool2;
      if ( Pool2 )
      {
        v11 = 0;
        v12 = (unsigned int *)(Pool2 + 8);
        do
        {
          *(v12 - 1) = v11;
          v13 = *v1;
          if ( (unsigned __int8)v13 < 5u )
          {
            LOBYTE(v9) = *(_BYTE *)(a1 + 36) & 1;
            if ( ((unsigned __int8 (__fastcall *)(unsigned int *, unsigned __int8 *, __int64))AcpiPccSubspaceInit[v13])(
                   v12 - 2,
                   v1,
                   v9) )
            {
              *v12 = *v12 & 0xFFFFFFE1 | 2;
            }
          }
          ++v11;
          v1 += v1[1];
          v12 += 206;
        }
        while ( v11 < v3 );
        _InterlockedOr(v15, 0);
        AcpiPccSubspaces = v10;
        AcpiPccSubspaceCount = v3;
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = 2;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v8,
          21,
          11,
          (__int64)&WPP_ea8b413dcef53ae066f7a59abc49a3c8_Traceguids);
      }
    }
  }
  return 0LL;
}
