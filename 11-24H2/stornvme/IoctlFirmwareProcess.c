/*
 * XREFs of IoctlFirmwareProcess @ 0x14000CFC0
 * Callers:
 *     IoctlToNVMe @ 0x140003580 (IoctlToNVMe.c)
 * Callees:
 *     FirmwareGetInfo @ 0x140005F70 (FirmwareGetInfo.c)
 *     FirmwareActivate @ 0x14001F854 (FirmwareActivate.c)
 *     FirmwareDownload @ 0x14001FABC (FirmwareDownload.c)
 */

__int64 __fastcall IoctlFirmwareProcess(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rdx
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  unsigned int v7; // esi
  __int64 v9; // r8
  unsigned int Info; // eax

  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v4 = *(_DWORD **)(a2 + 64);
    v5 = 60LL;
  }
  else
  {
    v4 = *(_DWORD **)(a2 + 24);
    v5 = 16LL;
  }
  v6 = *(unsigned int *)(a2 + v5);
  if ( (unsigned int)v6 < 0x34 )
    goto LABEL_4;
  v9 = (unsigned int)v4[11];
  if ( v6 < v9 + (unsigned __int64)(unsigned int)v4[12]
    || !v4[7]
    || (v4[10] & 1) == 0
    || (unsigned int)v9 < 0x34
    || (v9 & 3) != 0 )
  {
    v4[5] = 3;
    goto LABEL_4;
  }
  switch ( v4[9] )
  {
    case 1:
      Info = FirmwareGetInfo(a1, a2);
LABEL_8:
      v7 = Info;
      if ( !Info )
        return v7;
      goto LABEL_5;
    case 2:
      Info = FirmwareDownload(a1, a2);
      goto LABEL_8;
    case 3:
      Info = FirmwareActivate(a1, a2);
      goto LABEL_8;
  }
LABEL_4:
  *(_BYTE *)(a2 + 3) = 21;
  v7 = -1056964602;
LABEL_5:
  if ( (*(_BYTE *)(a1 + 21) & 8) != 0 )
    StorPortExtendedFunction(87LL, a1, 0LL, 0LL);
  return v7;
}
