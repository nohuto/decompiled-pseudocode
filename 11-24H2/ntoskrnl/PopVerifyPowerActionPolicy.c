/*
 * XREFs of PopVerifyPowerActionPolicy @ 0x14099F5BC
 * Callers:
 *     PopExecutePowerAction @ 0x140751894 (PopExecutePowerAction.c)
 *     PdcPoVerifyActionPolicy @ 0x14075C280 (PdcPoVerifyActionPolicy.c)
 *     PopVerifySystemPowerPolicy @ 0x14099EEFC (PopVerifySystemPowerPolicy.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PopFilterCapabilities @ 0x14099F88C (PopFilterCapabilities.c)
 */

char __fastcall PopVerifyPowerActionPolicy(int *a1)
{
  char v2; // di
  int v3; // eax
  int v4; // r9d
  bool v5; // r10
  int v6; // r11d
  int v7; // ecx
  bool v9; // al
  _BYTE v10[6]; // [rsp+20h] [rbp-50h] BYREF
  char v11; // [rsp+26h] [rbp-4Ah]
  char v12; // [rsp+27h] [rbp-49h]
  char v13; // [rsp+28h] [rbp-48h]
  char v14; // [rsp+34h] [rbp-3Ch]
  char v15; // [rsp+36h] [rbp-3Ah]

  v2 = 0;
  memset_0(v10, 0, 0x4CuLL);
  if ( !a1 )
    return 0;
  v3 = a1[1];
  if ( (v3 & 0xCFFFFC0) != 0 )
    return 0;
  if ( v3 < 0 )
    a1[1] = v3 & 0xFFFFFFF8 | 4;
  if ( (int)PopFilterCapabilities(&PopCapabilities, v10) >= 0 )
  {
    v4 = v10[3] != 0;
    if ( v10[4] )
      ++v4;
    if ( v10[5] )
      ++v4;
    if ( (a1[1] & 8) != 0 )
    {
      v9 = 0;
      if ( v11 )
        v9 = v13 != 0;
      v5 = v9;
    }
    else
    {
      v5 = 0;
      if ( v11 )
      {
        if ( v13 )
          v5 = v15 == 2;
      }
    }
    while ( 1 )
    {
      v6 = *a1;
      v7 = *a1;
      if ( *a1 == 1 )
        break;
      if ( *a1 == 2 )
        goto LABEL_34;
      if ( *a1 == 3 )
      {
        v7 = 3;
        if ( v5 )
          goto LABEL_21;
        if ( PopPromoteHibernateToShutdown )
        {
LABEL_38:
          *a1 = 4;
          v7 = 4;
          goto LABEL_21;
        }
        if ( !v4 )
          goto LABEL_39;
        goto LABEL_20;
      }
      if ( *a1 != 6 )
      {
        if ( *a1 != 8 )
          return v2;
        v7 = 8;
        if ( !v14 )
          goto LABEL_21;
LABEL_20:
        *a1 = 2;
        v7 = 2;
        goto LABEL_21;
      }
      v7 = 6;
      if ( !v12 )
        goto LABEL_38;
LABEL_21:
      if ( v6 == v7 )
        return v2;
    }
    *a1 = 2;
    v7 = 2;
LABEL_34:
    if ( !v4 )
    {
      if ( !v5 )
      {
LABEL_39:
        v7 = 0;
        *a1 = 0;
        v2 = 1;
        goto LABEL_21;
      }
      *a1 = 3;
      v7 = 3;
    }
    goto LABEL_21;
  }
  return 1;
}
