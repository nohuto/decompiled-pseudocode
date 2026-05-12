/*
 * XREFs of NvmeNamespaceScsiLogSenseRequest @ 0x140118074
 * Callers:
 *     NvmeNamespaceExecuteScsiSrb @ 0x140100028 (NvmeNamespaceExecuteScsiSrb.c)
 * Callees:
 *     SetSrbSenseData @ 0x140117490 (SetSrbSenseData.c)
 *     NvmeNamespacePopulateLogSenseInformationalExceptions @ 0x140117CB4 (NvmeNamespacePopulateLogSenseInformationalExceptions.c)
 *     NvmeNamespacePopulateLogSenseTemperature @ 0x140117DAC (NvmeNamespacePopulateLogSenseTemperature.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall NvmeNamespaceScsiLogSenseRequest(unsigned __int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  __int64 v6; // r15
  _DWORD *v7; // rdi
  unsigned int v8; // esi
  __int64 v9; // rax
  char v10; // al
  __int64 result; // rax
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF

  v12 = a2;
  v6 = a1;
  if ( *(_BYTE *)(a3 + 2) == 40 )
  {
    v7 = *(_DWORD **)(a3 + 64);
    v8 = *(_DWORD *)(a3 + 60);
  }
  else
  {
    v7 = *(_DWORD **)(a3 + 24);
    v8 = *(_DWORD *)(a3 + 16);
  }
  LODWORD(v12) = v8;
  if ( !v7 )
    goto LABEL_24;
  if ( !v8 )
    goto LABEL_24;
  if ( (a4[1] & 1) != 0 )
    goto LABEL_24;
  if ( (a4[2] & 0xC0) != 0x40 )
    goto LABEL_24;
  LOBYTE(a1) = a4[2] & 0x3F;
  if ( (unsigned __int8)a1 > 0x2Fu )
    goto LABEL_24;
  v9 = 0x800000002001LL;
  if ( !_bittest64(&v9, a1) || a4[3] )
    goto LABEL_24;
  memset_0(v7, 0, v8);
  v10 = a4[2] & 0x3F;
  if ( v10 )
  {
    if ( v10 == 13 )
    {
      result = NvmeNamespacePopulateLogSenseTemperature(v6, a3, (int *)&v12, (__int64)v7);
      goto LABEL_16;
    }
    if ( v10 == 47 )
    {
      result = NvmeNamespacePopulateLogSenseInformationalExceptions(v6, a3, &v12, (__int64)v7);
LABEL_16:
      v8 = v12;
      goto LABEL_20;
    }
LABEL_24:
    SetSrbSenseData(a3, 6, 5, 36, 0);
    return 3221225485LL;
  }
  if ( v8 >= 7uLL )
  {
    *v7 = 50331648;
    v8 = 7;
    *((_WORD *)v7 + 2) = 3328;
    result = 0LL;
    *((_BYTE *)v7 + 6) = 47;
    *(_BYTE *)(a3 + 3) = 1;
  }
  else
  {
    SetSrbSenseData(a3, 6, 5, 36, 0);
    result = 3221225485LL;
  }
LABEL_20:
  if ( !(_DWORD)result )
  {
    if ( *(_BYTE *)(a3 + 2) == 40 )
      *(_DWORD *)(a3 + 60) = v8;
    else
      *(_DWORD *)(a3 + 16) = v8;
  }
  return result;
}
