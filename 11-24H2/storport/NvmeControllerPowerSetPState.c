/*
 * XREFs of NvmeControllerPowerSetPState @ 0x140132578
 * Callers:
 *     NvmeAdapterPerfStateCallback @ 0x14012EEC0 (NvmeAdapterPerfStateCallback.c)
 * Callees:
 *     NvmeControllerSetPowerState @ 0x1400CA468 (NvmeControllerSetPowerState.c)
 */

__int64 __fastcall NvmeControllerPowerSetPState(__int64 a1, __int64 a2)
{
  unsigned int v3; // r8d
  unsigned __int8 v4; // di
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  unsigned __int8 v8; // dl
  __int64 result; // rax

  v3 = -1073741823;
  if ( *(_DWORD *)(a2 + 4) < 0x18u || !*(_DWORD *)a2 )
    goto LABEL_8;
  if ( !*(_BYTE *)(a2 + 12) )
    goto LABEL_9;
  v4 = *(_BYTE *)(a2 + 16);
  if ( v4 > *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 160LL) + 1LL) )
  {
LABEL_8:
    v3 = -1073741811;
    goto LABEL_9;
  }
  if ( v4 <= 0x1Fu )
  {
    v3 = NvmeControllerSetPowerState(a1, *(_BYTE *)(a2 + 16));
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 160LL) + 182LL) = v4;
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 160LL) + 180LL) = v4;
  }
  else
  {
    v3 = -1073741436;
  }
LABEL_9:
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 128) + 160LL);
  v6 = *(_DWORD *)(v5 + 176);
  if ( (v6 & 0x1000) != 0 )
  {
    *(_DWORD *)(v5 + 176) = v6 & 0xFFFFEFFF;
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 128) + 160LL);
    v8 = *(_BYTE *)(v7 + 183);
    if ( *(_BYTE *)(v7 + 182) != v8 )
      v3 = NvmeControllerSetPowerState(a1, v8);
  }
  result = v3;
  _interlockedbittestandreset((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 160LL) + 212LL), 0);
  return result;
}
