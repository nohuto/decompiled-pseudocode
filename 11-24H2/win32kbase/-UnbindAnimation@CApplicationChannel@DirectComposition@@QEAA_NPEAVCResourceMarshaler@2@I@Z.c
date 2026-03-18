/*
 * XREFs of ?UnbindAnimation@CApplicationChannel@DirectComposition@@QEAA_NPEAVCResourceMarshaler@2@I@Z @ 0x1400B857C
 * Callers:
 *     ?SetBufferProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x140075AB0 (-SetBufferProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA.c)
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x14009C810 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     ?SetRelativeOffsetHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x14011BAB0 (-SetRelativeOffsetHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX.c)
 * Callees:
 *     ?NewRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1400B911C (-NewRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 *     ?DeleteAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x14019E534 (-DeleteAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 */

char __fastcall DirectComposition::CApplicationChannel::UnbindAnimation(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CResourceMarshaler *a2,
        int a3)
{
  __int64 v3; // rdx
  void *v4; // rax
  __int64 v5; // r9
  char v7; // bl
  int v9; // ecx
  bool v10; // zf

  v3 = *((_QWORD *)a2 + 5);
  v4 = 0LL;
  v5 = 0LL;
  v7 = 1;
  while ( v3 )
  {
    if ( *(_DWORD *)(v3 + 12) != a3 )
      goto LABEL_7;
    v9 = *(_DWORD *)(v3 + 8);
    if ( (v9 & 1) != 0 )
    {
      DirectComposition::CApplicationChannel::NewRemovingBinding(
        this,
        (struct DirectComposition::CAnimationBinding *)v3);
      return v7;
    }
    if ( (v9 & 2) != 0 )
    {
      v4 = (void *)v3;
      v10 = v5 == 0;
    }
    else
    {
      if ( (v9 & 4) == 0 )
        goto LABEL_7;
      v5 = v3;
      v10 = v4 == 0LL;
    }
    if ( !v10 )
      goto LABEL_10;
LABEL_7:
    v3 = *(_QWORD *)(v3 + 32);
  }
  if ( !v4 )
    return 0;
LABEL_10:
  DirectComposition::CApplicationChannel::DeleteAddingBinding(this, v4);
  return v7;
}
