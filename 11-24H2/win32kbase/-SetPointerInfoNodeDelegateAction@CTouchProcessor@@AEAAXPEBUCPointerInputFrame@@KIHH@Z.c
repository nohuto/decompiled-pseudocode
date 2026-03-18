/*
 * XREFs of ?SetPointerInfoNodeDelegateAction@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KIHH@Z @ 0x140207070
 * Callers:
 *     ?DelegateCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z @ 0x1401F9F40 (-DelegateCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z.c)
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8564 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z @ 0x140201AC0 (-LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z.c)
 *     ?ReevaluateQFrameHasDelegation@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z @ 0x140205358 (-ReevaluateQFrameHasDelegation@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z.c)
 */

void __fastcall CTouchProcessor::SetPointerInfoNodeDelegateAction(
        PERESOURCE *this,
        const struct CPointerInputFrame *a2,
        unsigned int a3,
        int a4,
        int a5,
        int a6)
{
  CTouchProcessor *v9; // rcx
  struct CPointerInfoNode *v10; // rax
  CTouchProcessor *v11; // rcx
  struct CPointerInfoNode *v12; // rbx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // edi
  int v19; // r8d
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax

  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15183);
  v10 = CTouchProcessor::LookupNode(v9, a2, a3);
  v12 = v10;
  if ( a5 )
  {
    switch ( a4 )
    {
      case 585:
        v13 = *(_DWORD *)v10;
        if ( (v13 & 0x1000000) == 0 || (v13 & 0x2000000) != 0 || (v13 & 0x4000000) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15196);
        *(_DWORD *)v12 |= 0x2000000u;
        break;
      case 586:
        *(_DWORD *)v10 |= 0x20000000u;
        break;
      case 593:
        v14 = *((_DWORD *)v10 + 1);
        if ( (v14 & 1) == 0 || (v14 & 2) != 0 || (v14 & 4) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15210);
        *((_DWORD *)v12 + 1) |= 2u;
        break;
      case 594:
        v15 = *((_DWORD *)v10 + 1);
        if ( (v15 & 0x10) == 0 || (v15 & 0x20) != 0 || (v15 & 0x40) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15217);
        *((_DWORD *)v12 + 1) |= 0x20u;
        break;
      default:
        v16 = *(_DWORD *)v10;
        if ( (v16 & 0x100000) == 0 || (v16 & 0x200000) != 0 || (v16 & 0x400000) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15224);
        *(_DWORD *)v12 |= 0x200000u;
        break;
    }
    goto LABEL_77;
  }
  if ( a6 )
  {
    switch ( a4 )
    {
      case 585:
        v17 = *(_DWORD *)v10;
        v18 = 0x1000000;
        if ( (v17 & 0x800000) != 0 && (v17 & 0x1000000) == 0 )
          goto LABEL_51;
        v19 = 15233;
        goto LABEL_50;
      case 586:
        v20 = *(_DWORD *)v10;
        v18 = 0x10000000;
        if ( (v20 & 0x8000000) != 0 && (v20 & 0x10000000) == 0 )
          goto LABEL_51;
        v19 = 15239;
        goto LABEL_50;
      case 593:
        if ( *(int *)v10 >= 0 || (*((_DWORD *)v10 + 1) & 1) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15245);
        *((_DWORD *)v12 + 1) |= 1u;
        break;
      case 594:
        v21 = *((_DWORD *)v10 + 1);
        if ( (v21 & 8) == 0 || (v21 & 0x10) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15250);
        *((_DWORD *)v12 + 1) |= 0x10u;
        break;
      default:
        v18 = 0x100000;
        if ( (*(_DWORD *)v10 & 0x100000) == 0 )
        {
LABEL_51:
          *(_DWORD *)v12 |= v18;
          break;
        }
        v19 = 15255;
LABEL_50:
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, v19);
        goto LABEL_51;
    }
  }
  else
  {
    switch ( a4 )
    {
      case 585:
        v22 = *(_DWORD *)v10;
        if ( (v22 & 0x1000000) == 0 || (v22 & 0x2000000) != 0 || (v22 & 0x4000000) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15277);
        *(_DWORD *)v12 |= 0x4000000u;
        break;
      case 586:
        v23 = *(_DWORD *)v10;
        if ( (v23 & 0x10000000) == 0 || (v23 & 0x20000000) != 0 || (v23 & 0x40000000) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15284);
        *(_DWORD *)v12 |= 0x40000000u;
        break;
      case 593:
        v24 = *((_DWORD *)v10 + 1);
        if ( (v24 & 1) == 0 || (v24 & 2) != 0 || (v24 & 4) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15291);
        *((_DWORD *)v12 + 1) |= 4u;
        break;
      case 594:
        v25 = *((_DWORD *)v10 + 1);
        if ( (v25 & 0x10) == 0 || (v25 & 0x20) != 0 || (v25 & 0x40) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15298);
        *((_DWORD *)v12 + 1) |= 0x40u;
        break;
      default:
        *(_DWORD *)v10 |= 0x400000u;
        break;
    }
  }
LABEL_77:
  CTouchProcessor::ReevaluateQFrameHasDelegation(v11, a2, *((_DWORD *)v12 + 2));
}
