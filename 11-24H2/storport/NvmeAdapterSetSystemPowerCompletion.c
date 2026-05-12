/*
 * XREFs of NvmeAdapterSetSystemPowerCompletion @ 0x140131BE0
 * Callers:
 *     <none>
 * Callees:
 *     GetNvmeAdapter @ 0x14006B1A0 (GetNvmeAdapter.c)
 *     NvmeSetSystemPowerState @ 0x140136C18 (NvmeSetSystemPowerState.c)
 */

__int64 __fastcall NvmeAdapterSetSystemPowerCompletion(__int64 a1)
{
  char v1; // si
  _DWORD *NvmeAdapter; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  int v5; // ebx
  _DWORD *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  POWER_STATE v9; // ebx
  __int64 v10; // rax
  int v11; // ecx
  int v12; // ecx
  PREQUEST_POWER_COMPLETE v13; // r10
  PVOID Context; // r11
  NTSTATUS v15; // eax
  int v16; // ecx
  __int64 v17; // rax
  __int64 v18; // rdx
  int v19; // eax

  v1 = 1;
  NvmeAdapter = GetNvmeAdapter(a1);
  v5 = *(_DWORD *)(v3 + 48);
  v6 = NvmeAdapter;
  if ( v5 < 0 )
    goto LABEL_20;
  v7 = *(_QWORD *)(v3 + 184);
  v8 = *(int *)(v7 + 24);
  v9.SystemState = (_SYSTEM_POWER_STATE)DevicePowerStateTable[v8];
  if ( *(_DWORD *)(*((_QWORD *)v6 + 20) + 64LL) < (int)v8 )
    v1 = 0;
  if ( *(_BYTE *)(v4 + 65) )
    *(_BYTE *)(v7 + 3) |= 1u;
  v10 = *((_QWORD *)v6 + 20);
  v11 = *(_DWORD *)(v10 + 76);
  if ( v9.SystemState == PowerSystemWorking )
    v12 = v11 | 2;
  else
    v12 = v11 | 4;
  *(_DWORD *)(v10 + 76) = v12;
  NvmeSetSystemPowerState(*((_QWORD *)v6 + 20) + 64LL, v8, *(unsigned int *)(*(_QWORD *)(v4 + 184) + 32LL));
  v15 = PoRequestPowerIrp(*((PDEVICE_OBJECT *)v6 + 1), 2u, v9, v13, Context, 0LL);
  v16 = 0;
  if ( v15 != 259 )
    v16 = v15;
  if ( v16 < 0 )
  {
    *(_DWORD *)(*((_QWORD *)v6 + 20) + 76LL) |= 0x10u;
    v17 = *((_QWORD *)v6 + 20);
    if ( v9.SystemState == PowerSystemWorking )
    {
      *(_DWORD *)(v17 + 76) &= ~2u;
      v18 = *((_QWORD *)v6 + 20);
      v19 = *(_DWORD *)(v18 + 76);
      if ( (v19 & 0x20) != 0 )
        *(_DWORD *)(v18 + 76) = v19 & 0xFFFFFFDF;
    }
    else
    {
      *(_DWORD *)(v17 + 76) &= ~4u;
    }
  }
  v5 = v16;
  if ( v1 || v16 < 0 )
LABEL_20:
    ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)v6 + 19));
  else
    return (unsigned int)-1073741802;
  return (unsigned int)v5;
}
