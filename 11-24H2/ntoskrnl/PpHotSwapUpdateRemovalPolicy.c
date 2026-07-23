/*
 * XREFs of PpHotSwapUpdateRemovalPolicy @ 0x140A680CC
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140A76864 (PiProcessNewDeviceNode.c)
 * Callees:
 *     _CmGetDeviceRegProp @ 0x1408C35E0 (_CmGetDeviceRegProp.c)
 *     PiHotSwapGetDefaultBusRemovalPolicy @ 0x140A68218 (PiHotSwapGetDefaultBusRemovalPolicy.c)
 */

void __fastcall PpHotSwapUpdateRemovalPolicy(__int64 a1)
{
  __int64 v2; // rdx
  int v3; // ecx
  int v4; // eax
  int v5; // ecx
  __int64 v6; // rdx
  int v7; // [rsp+50h] [rbp+10h] BYREF
  int v8; // [rsp+58h] [rbp+18h] BYREF
  int v9; // [rsp+60h] [rbp+20h] BYREF

  v7 = 0;
  v8 = 0;
  v2 = a1;
  if ( !a1 )
  {
LABEL_4:
    *(_WORD *)(a1 + 466) = 257;
    return;
  }
  while ( (*(_DWORD *)(v2 + 560) & 0x18) == 0 )
  {
    v2 = *(_QWORD *)(v2 + 16);
    if ( !v2 )
      goto LABEL_4;
  }
  v3 = *(_DWORD *)(*(_QWORD *)(a1 + 32) + 52LL);
  v4 = v3 & 0x300;
  if ( (v3 & 0x4000) != 0 )
    goto LABEL_14;
  if ( (v3 & 0x8000) == 0 )
  {
    if ( v4 != 512 )
    {
      if ( v4 != 768 )
      {
        if ( a1 != v2 )
        {
          v5 = 6;
          v7 = 6;
          goto LABEL_12;
        }
        PiHotSwapGetDefaultBusRemovalPolicy(a1, &v7);
        LOBYTE(v5) = v7;
        goto LABEL_16;
      }
      goto LABEL_21;
    }
LABEL_14:
    v5 = 2;
    goto LABEL_15;
  }
LABEL_21:
  v5 = 3;
LABEL_15:
  v7 = v5;
  if ( a1 != v2 )
  {
LABEL_12:
    if ( v5 > *(unsigned __int8 *)(*(_QWORD *)(a1 + 16) + 466LL) )
    {
      LOBYTE(v5) = *(_BYTE *)(*(_QWORD *)(a1 + 16) + 466LL);
      v7 = (unsigned __int8)v5;
    }
  }
LABEL_16:
  v6 = *(_QWORD *)(a1 + 48);
  *(_BYTE *)(a1 + 466) = v5;
  *(_BYTE *)(a1 + 467) = v5;
  v9 = 4;
  if ( (int)CmGetDeviceRegProp(*(__int64 *)&PiPnpRtlCtx, v6, 0LL, 0x22u, (__int64)&v8, (__int64)&v7, (__int64)&v9, 0) >= 0
    && v8 == 4
    && (unsigned int)(v7 - 2) <= 1 )
  {
    *(_BYTE *)(a1 + 466) = v7;
  }
}
