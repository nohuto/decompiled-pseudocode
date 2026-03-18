/*
 * XREFs of DpiGetMonitorColorimetryOverride @ 0x140254B54
 * Callers:
 *     ?GetDriverColorimetryOverride@KernelDriver@@UEBAJAEAU_DXGK_COLORIMETRY@@@Z @ 0x14027DB50 (-GetDriverColorimetryOverride@KernelDriver@@UEBAJAEAU_DXGK_COLORIMETRY@@@Z.c)
 * Callees:
 *     DpiFdoGetChildDescriptor @ 0x140028BA8 (DpiFdoGetChildDescriptor.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x14035DC70 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     DpiFdoValidateDxgkColorimetry @ 0x1403B6284 (DpiFdoValidateDxgkColorimetry.c)
 */

__int64 __fastcall DpiGetMonitorColorimetryOverride(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v5; // edi
  _QWORD *ChildDescriptor; // rax
  __int64 v7; // r9
  __int64 v9; // rcx
  __int64 v10; // rsi
  int v11; // eax
  DXGADAPTER *v12; // rcx
  int v13; // eax
  struct _DXGKARG_QUERYADAPTERINFO v14; // [rsp+20h] [rbp-30h] BYREF
  unsigned int v15; // [rsp+60h] [rbp+10h] BYREF

  v5 = -1071841279;
  ChildDescriptor = DpiFdoGetChildDescriptor(*(_QWORD *)(a1 + 64), a2);
  if ( !ChildDescriptor )
    return 3221225485LL;
  *(_OWORD *)a3 = 0LL;
  *(_OWORD *)(a3 + 16) = 0LL;
  *(_OWORD *)(a3 + 32) = 0LL;
  *(_DWORD *)(a3 + 48) = 0;
  v9 = ChildDescriptor[13];
  if ( !v9 )
  {
    if ( !*((_BYTE *)ChildDescriptor + 65) )
      return v5;
    if ( *(int *)(v7 + 4048) < 8704 )
      return v5;
    v12 = *(DXGADAPTER **)(v7 + 4032);
    *((_DWORD *)&v14.Type + 1) = 0;
    *(&v14.InputDataSize + 1) = 0;
    *(_QWORD *)&v14.Flags.0 = 0LL;
    HIDWORD(v14.hKmdProcessHandle) = 0;
    v14.pInputData = &v15;
    v15 = a2;
    v14.Type = DXGKQAITYPE_QUERYCOLORIMETRYOVERRIDES;
    v14.InputDataSize = 4;
    v14.OutputDataSize = 52;
    v14.pOutputData = (void *)a3;
    if ( (int)DXGADAPTER::DdiQueryAdapterInfo(v12, &v14) >= 0 )
    {
      v13 = DpiFdoValidateDxgkColorimetry(a3, a2);
      v5 = v13;
      if ( v13 >= 0 && v13 != 279 )
        return v5;
    }
    v11 = 0;
    *(_OWORD *)a3 = 0LL;
    v5 = -1071841279;
    *(_OWORD *)(a3 + 16) = 0LL;
    *(_OWORD *)(a3 + 32) = 0LL;
    goto LABEL_12;
  }
  v10 = v9 + 68;
  if ( RtlCompareMemory((const void *)a3, (const void *)(v9 + 68), 0x34uLL) != 52 )
  {
    v5 = 0;
    *(_OWORD *)a3 = *(_OWORD *)v10;
    *(_OWORD *)(a3 + 16) = *(_OWORD *)(v10 + 16);
    *(_OWORD *)(a3 + 32) = *(_OWORD *)(v10 + 32);
    v11 = *(_DWORD *)(v10 + 48);
LABEL_12:
    *(_DWORD *)(a3 + 48) = v11;
  }
  return v5;
}
