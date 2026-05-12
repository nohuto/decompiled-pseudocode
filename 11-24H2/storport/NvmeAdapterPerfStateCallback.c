/*
 * XREFs of NvmeAdapterPerfStateCallback @ 0x14012EEC0
 * Callers:
 *     <none>
 * Callees:
 *     NvmeAdapterCheckAndAcquirePoFx @ 0x14012DF08 (NvmeAdapterCheckAndAcquirePoFx.c)
 *     NvmeAdapterReleasePoFx @ 0x1401311D4 (NvmeAdapterReleasePoFx.c)
 *     NvmeControllerPowerSetPState @ 0x140132578 (NvmeControllerPowerSetPState.c)
 */

BOOLEAN __fastcall NvmeAdapterPerfStateCallback(_QWORD *a1, int a2, char a3, __int64 a4)
{
  BOOLEAN result; // al
  __int64 v9; // rcx
  _DWORD v10[3]; // [rsp+20h] [rbp-28h] BYREF
  char v11; // [rsp+2Ch] [rbp-1Ch]
  __int16 v12; // [rsp+2Dh] [rbp-1Bh]
  char v13; // [rsp+2Fh] [rbp-19h]
  __int64 v14; // [rsp+30h] [rbp-18h]

  v12 = 0;
  v13 = 0;
  result = NvmeAdapterCheckAndAcquirePoFx((__int64)a1);
  if ( result )
  {
    if ( (*(_DWORD *)(a1[50] + 184LL) & 0x40000000) != 0 )
    {
      v9 = a1[142];
      v10[0] = 1;
      v10[1] = 24;
      v10[2] = a2;
      v11 = a3;
      v14 = a4;
      NvmeControllerPowerSetPState(v9, v10);
    }
    _interlockedbittestandreset((volatile signed __int32 *)(a1[20] + 212LL), 0);
    return NvmeAdapterReleasePoFx(a1);
  }
  return result;
}
