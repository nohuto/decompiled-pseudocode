/*
 * XREFs of ?AddToFrameTokenList@CFlipManagerToken@@QEAAXAEAU_LIST_ENTRY@@@Z @ 0x14005E08C
 * Callers:
 *     ?CompleteFlipManagerToken@CTokenManager@@IEAAXPEAUFlipManagerTokenObject@@PEA_N@Z @ 0x14005E1D4 (-CompleteFlipManagerToken@CTokenManager@@IEAAXPEAUFlipManagerTokenObject@@PEA_N@Z.c)
 * Callees:
 *     Feature_FixFlipManagerTokenListCorruptionBugcheck__private_IsEnabledDeviceUsageNoInline @ 0x140097C14 (Feature_FixFlipManagerTokenListCorruptionBugcheck__private_IsEnabledDeviceUsageNoInline.c)
 *     ?FlipManagerMarkAsLost@@YAXPEAVCFlipManagerToken@@@Z @ 0x14009C3FC (-FlipManagerMarkAsLost@@YAXPEAVCFlipManagerToken@@@Z.c)
 */

void __fastcall CFlipManagerToken::AddToFrameTokenList(CFlipManagerToken *this, struct _LIST_ENTRY *a2)
{
  struct _LIST_ENTRY *v4; // rbx
  struct _LIST_ENTRY *Blink; // rax

  v4 = (struct _LIST_ENTRY *)((char *)this + 16);
  if ( (unsigned int)Feature_FixFlipManagerTokenListCorruptionBugcheck__private_IsEnabledDeviceUsageNoInline()
    && v4->Flink )
  {
    FlipManagerMarkAsLost(this);
  }
  else
  {
    Blink = a2->Blink;
    if ( Blink->Flink != a2 )
      __fastfail(3u);
    v4->Flink = a2;
    v4->Blink = Blink;
    Blink->Flink = v4;
    a2->Blink = v4;
  }
}
