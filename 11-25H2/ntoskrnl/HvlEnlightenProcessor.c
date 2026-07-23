/*
 * XREFs of HvlEnlightenProcessor @ 0x1404D3598
 * Callers:
 *     HvlpInitializeBootProcessor @ 0x140580E74 (HvlpInitializeBootProcessor.c)
 *     KiInitializeKernel @ 0x140B48920 (KiInitializeKernel.c)
 *     PopHandleNextState @ 0x140B55D00 (PopHandleNextState.c)
 * Callees:
 *     HvlpGetRegister64 @ 0x14028FB00 (HvlpGetRegister64.c)
 *     HvlpGetLpcbByLpIndex @ 0x1403ED27C (HvlpGetLpcbByLpIndex.c)
 *     HvlGetLpIndexFromProcessorIndex @ 0x1403ED2C0 (HvlGetLpIndexFromProcessorIndex.c)
 *     HvlSharedIsr @ 0x1404431A0 (HvlSharedIsr.c)
 *     HvlpSetRegister64 @ 0x1404D3E70 (HvlpSetRegister64.c)
 *     HvlpSetupSchedulerAssist @ 0x140581E08 (HvlpSetupSchedulerAssist.c)
 *     HvlpDiscoverTopologyLocal @ 0x14070320C (HvlpDiscoverTopologyLocal.c)
 */

void __fastcall HvlEnlightenProcessor(char a1)
{
  struct _KPRCB *CurrentPrcb; // rsi
  int v2; // edx
  ULONG v3; // r8d
  char v4; // cl
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  char v7; // bl
  __int128 *LpcbByLpIndex; // rdi
  unsigned int LpIndexFromProcessorIndex; // eax
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // [rsp+48h] [rbp+10h] BYREF
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  v11 = 0LL;
  v12 = 0LL;
  if ( HvlHypervisorConnected && (!a1 || (HvlpFlags & 2) == 0) )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    if ( !a1 )
    {
      HvlpGetRegister64(589827, &v11);
      v2 = v11;
      v3 = (unsigned int)v11 >> 6;
      v4 = v11 & 0x3F;
      HvlpVirtualProcessorMapping[2 * CurrentPrcb->Number] = (unsigned int)v11 >> 6;
      HvlpVirtualProcessorMapping[2 * CurrentPrcb->Number + 1] = v4;
      if ( v2 != CurrentPrcb->Number )
        HvlpVirtualProcessorsIdentityMapped = 0;
      if ( v3 < 0x10 )
      {
        if ( v3 > ((HvlpFlags >> 8) & 0xF) )
          HvlpFlags = HvlpFlags & 0xFFFFF0FF | ((v3 & 0xF) << 8);
      }
      else
      {
        HvlEnlightenments &= ~0x80u;
        HvlpEnlightenments &= ~0x80u;
      }
    }
    if ( (HvlpFlags & 0x80000) != 0 )
    {
      v11 = 0LL;
      if ( (HvlpFlags & 2) != 0 )
      {
        HvlpGetRegister64(589843, &v11);
        v5 = v11;
      }
      else
      {
        v5 = CurrentPrcb->VirtualApicAssistPage.QuadPart & 0xFFFFFFFFFFFFF000uLL;
      }
      HvlpSetRegister64(589843LL, v5 | 1);
    }
    HvlpSetupSchedulerAssist(CurrentPrcb);
    v7 = HvlpFlags;
    LpcbByLpIndex = 0LL;
    if ( (HvlpFlags & 2) != 0 )
    {
      LpIndexFromProcessorIndex = HvlGetLpIndexFromProcessorIndex(CurrentPrcb->Number);
      LpcbByLpIndex = HvlpGetLpcbByLpIndex(LpIndexFromProcessorIndex);
      if ( (v7 & 0x20) != 0 )
      {
        HvlpGetRegister64(655379, &v12);
        if ( (v12 & 1) == 0 )
          HvlpSetRegister64(655379LL, v12 | 1);
      }
    }
    if ( (HvlpFlags & 0x20) != 0 )
    {
      v10 = ((unsigned __int64)((HvlpFlags & 0x10) == 0) << 17) | 0x30;
      if ( (HvlpFlags & 0x2000000) != 0 )
        HvlpSetRegister64(655360LL, ((unsigned __int64)((HvlpFlags & 0x10) == 0) << 17) | 0x30);
      if ( (HvlpFlags & 2) != 0 )
        __writemsr(0x40000094u, v10);
      HvlSharedIsr();
    }
    if ( (HvlpFlags & 2) != 0 )
    {
      if ( CurrentPrcb->Number )
        HvlpDiscoverTopologyLocal(
          v6,
          *((unsigned int *)LpcbByLpIndex + 2),
          (char *)LpcbByLpIndex + 12,
          LpcbByLpIndex + 1);
    }
  }
}
