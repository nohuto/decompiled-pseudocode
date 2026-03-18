/*
 * XREFs of rimFinalizePointerFlags @ 0x1401815FC
 * Callers:
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x140180B5C (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 * Callees:
 *     RIMCmIsButtonContactActiveAndNotSuppressed @ 0x1400D971C (RIMCmIsButtonContactActiveAndNotSuppressed.c)
 *     RIMCmIsContactSuppressed @ 0x1400D975C (RIMCmIsContactSuppressed.c)
 *     RIMCmGetButtonContact @ 0x140104458 (RIMCmGetButtonContact.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x14018250C (RIMCmIsContactDeliveringPointerData.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimPenButtonsPolicyApply @ 0x1401EE4A0 (rimPenButtonsPolicyApply.c)
 *     RIMCmIsSuppressedContactMarkedForDelivery @ 0x1401F1C1C (RIMCmIsSuppressedContactMarkedForDelivery.c)
 *     RIMCmShouldDeliverSuppressedContactEndState @ 0x1401F1CF0 (RIMCmShouldDeliverSuppressedContactEndState.c)
 */

__int64 __fastcall rimFinalizePointerFlags(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v6; // eax
  int v7; // r8d
  int v8; // edi
  int v9; // esi
  int v10; // eax
  int v11; // ecx
  int v12; // ecx
  __int64 v13; // rax
  __int64 result; // rax
  int v15; // esi

  v6 = a3[611];
  v7 = a3[671] & 4;
  if ( !v7 && (v6 & 4) != 0 )
  {
    v8 = 1;
LABEL_6:
    v9 = 0;
    goto LABEL_7;
  }
  v8 = 0;
  if ( !v7 )
    goto LABEL_6;
  v9 = 1;
  if ( (v6 & 4) != 0 )
    goto LABEL_6;
LABEL_7:
  if ( !(unsigned int)RIMCmIsContactDeliveringPointerData(a3)
    && (unsigned int)RIMCmIsContactSuppressed((__int64)a3)
    && (unsigned int)RIMCmIsSuppressedContactMarkedForDelivery(a3) )
  {
    if ( (unsigned int)RIMCmShouldDeliverSuppressedContactEndState(a2, a3)
      || (v10 = 0x2000000, (a3[611] & 0x1000000) == 0) )
    {
      v10 = 0;
    }
    a3[611] = v10;
  }
  else
  {
    if ( (a3[591] & 4) != 0 )
      a3[611] &= ~0x2000000u;
    v11 = a3[611];
    if ( (a3[2] & 0x10) == 0 )
    {
      a3[8] |= 1u;
      v11 |= 0x4000u;
    }
    if ( v8 )
    {
      v12 = v11 | 0x10000;
    }
    else if ( v9 )
    {
      v12 = v11 | 0x40000;
    }
    else
    {
      v12 = v11 | 0x20000;
    }
    a3[611] = v12;
    if ( (a3[8] & 8) != 0 )
    {
      a3[611] = v12 | 0x4000000;
      v13 = *(_QWORD *)(a1 + 480);
      if ( v13 == a2 )
      {
        if ( *(_DWORD **)(v13 + 1024) != a3 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1675LL);
        a3[611] |= 0x2000u;
      }
    }
  }
  result = (unsigned int)a3[8];
  if ( (result & 4) == 0 )
  {
    if ( (unsigned int)RIMCmIsButtonContactActiveAndNotSuppressed(a2) )
    {
      v15 = *(_DWORD *)(RIMCmGetButtonContact(a2) + 2444);
      if ( (v15 & 0x10) != 0 )
      {
        if ( (v15 & 4) == 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1692LL);
        a3[611] |= 0x10u;
      }
      if ( (v15 & 0x20) != 0 )
      {
        if ( (v15 & 4) == 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1697LL);
        a3[611] |= 0x20u;
      }
      if ( (v15 & 0x40) != 0 )
      {
        if ( (v15 & 4) == 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1702LL);
        a3[611] |= 0x40u;
      }
    }
    result = (unsigned int)(*(_DWORD *)(a2 + 24) - 5);
    if ( (unsigned int)result <= 1 )
      result = rimPenButtonsPolicyApply(a2, a3);
  }
  a3[611] &= ~0x1000000u;
  return result;
}
