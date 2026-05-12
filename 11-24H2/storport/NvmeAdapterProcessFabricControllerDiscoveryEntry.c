/*
 * XREFs of NvmeAdapterProcessFabricControllerDiscoveryEntry @ 0x1400E66F0
 * Callers:
 *     NvmeAdapterNvmeControllerBackgroundWork @ 0x1400E4750 (NvmeAdapterNvmeControllerBackgroundWork.c)
 * Callees:
 *     NvmeAdapterCreateAddNvmeController @ 0x1400CDD60 (NvmeAdapterCreateAddNvmeController.c)
 *     NvmeAdapterCreateAddSubsystemPort @ 0x1400CDE2C (NvmeAdapterCreateAddSubsystemPort.c)
 *     NvmeAdapterHostGatewayAcquireRundown @ 0x1400D3748 (NvmeAdapterHostGatewayAcquireRundown.c)
 *     NvmeAdapterSubsystemPortAcquireRundown @ 0x1400DABE8 (NvmeAdapterSubsystemPortAcquireRundown.c)
 *     McTemplateK0qjzpduuuhhsssq_EtwWriteTransfer @ 0x1400DD838 (McTemplateK0qjzpduuuhhsssq_EtwWriteTransfer.c)
 */

void __fastcall NvmeAdapterProcessFabricControllerDiscoveryEntry(__int64 a1, unsigned __int8 *a2)
{
  __int64 v2; // rbp
  int v3; // r15d
  bool v6; // di
  __int64 v7; // r14
  _QWORD *v8; // rax
  _QWORD *v9; // rdi
  __int16 *v10; // r12
  char *v11; // rsi
  _WORD *v12; // r13
  int v13; // edi
  __int64 v14; // rsi
  unsigned __int16 v15; // r8
  __int16 v16; // cx
  __int64 v18; // [rsp+E0h] [rbp+18h] BYREF
  __int64 v19; // [rsp+E8h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(a1 + 128);
  v3 = 0;
  v19 = 0LL;
  v18 = 0LL;
  v6 = 0;
  ExAcquireResourceSharedLite((PERESOURCE)(*(_QWORD *)(v2 + 592) + 24LL), 1u);
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
  if ( (int)NvmeAdapterHostGatewayAcquireRundown(v7) < 0 )
    goto LABEL_12;
  if ( *a2 == *(_DWORD *)(v7 + 4) )
    v6 = a2[1] == *(_DWORD *)(v7 + 8);
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v7 + 56));
  if ( !v6 )
  {
LABEL_12:
    v8 = *(_QWORD **)(v2 + 592);
    v9 = (_QWORD *)*v8;
    if ( (_QWORD *)*v8 == v8 )
      goto LABEL_27;
    do
    {
      if ( (int)NvmeAdapterHostGatewayAcquireRundown((__int64)(v9 - 3)) >= 0 )
      {
        if ( *a2 == *((_DWORD *)v9 - 5) && a2[1] == *((_DWORD *)v9 - 4) )
        {
          ++v3;
          v7 = (__int64)(v9 - 3);
        }
        ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)v9[4]);
      }
      v9 = (_QWORD *)*v9;
    }
    while ( v9 != *(_QWORD **)(v2 + 592) );
    if ( v3 != 1 )
    {
LABEL_27:
      LOBYTE(v13) = 114;
      v10 = (__int16 *)(a2 + 6);
      v12 = a2 + 4;
      v11 = (char *)(a2 + 2);
LABEL_28:
      if ( (byte_14017146A & 8) != 0 )
        McTemplateK0qjzpduuuhhsssq_EtwWriteTransfer(
          a1 ^ v2,
          v2 + 1032,
          (__int64)(a2 + 256),
          *(_DWORD *)(v2 + 56),
          v2 + 1032,
          *(const wchar_t **)(v2 + 1016),
          a1 ^ v2,
          v13,
          *a2,
          a2[1],
          *v11,
          *v12,
          *v10,
          (const char *)a2 + 256,
          (const char *)a2 + 512,
          (const char *)a2 + 32,
          v3);
      goto LABEL_30;
    }
  }
  v10 = (__int16 *)(a2 + 6);
  v11 = (char *)(a2 + 2);
  v12 = a2 + 4;
  v13 = NvmeAdapterCreateAddSubsystemPort(
          v7,
          1,
          (_OWORD *)a2 + 16,
          (__int64)(a2 + 512),
          (_OWORD *)a2 + 2,
          *((_WORD *)a2 + 2),
          0,
          a2[2] == 2,
          *((_WORD *)a2 + 3) == 0xFFFF,
          *((_WORD *)a2 + 3) == 0xFFFE,
          &v18);
  if ( v13 >= 0 )
  {
    if ( (unsigned __int16)*v10 > 0xFFEFu )
    {
      v16 = *((_WORD *)a2 + 4);
      if ( (unsigned __int16)(v16 - 32) <= 0xFE0u )
        *(_WORD *)(v18 + 6) = v16;
    }
    else
    {
      v14 = v18;
      v13 = NvmeAdapterSubsystemPortAcquireRundown(v18);
      if ( v13 >= 0 )
      {
        v13 = NvmeAdapterCreateAddNvmeController(v14, *v10, 0, 0, &v19);
        if ( v13 >= 0 )
        {
          v15 = *((_WORD *)a2 + 4);
          if ( v15 >= 0x20u )
          {
            if ( v15 >= *(_WORD *)(v19 + 6) )
              v15 = *(_WORD *)(v19 + 6);
            *(_WORD *)(v19 + 6) = v15;
          }
        }
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v14 + 40));
      }
      v11 = (char *)(a2 + 2);
    }
  }
  if ( v13 < 0 )
    goto LABEL_28;
LABEL_30:
  ExReleaseResourceLite((PERESOURCE)(*(_QWORD *)(v2 + 592) + 24LL));
}
