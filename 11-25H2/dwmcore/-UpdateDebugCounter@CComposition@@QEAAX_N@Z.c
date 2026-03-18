/*
 * XREFs of ?UpdateDebugCounter@CComposition@@QEAAX_N@Z @ 0x1802665FC
 * Callers:
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x1801989A4 (-CloseChannel@CComposition@@IEAAJI@Z.c)
 *     ?SetIsDebugCounterEnabled@?$CChannelGeneratedT@VCChannelContext@@V?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@@@QEAAJ_N@Z @ 0x1802836CC (-SetIsDebugCounterEnabled@-$CChannelGeneratedT@VCChannelContext@@V-$CMILRefCountBaseT@UIMILRefCo.c)
 * Callees:
 *     ?ForceFullDirty@CRenderTargetManager@@QEAAXXZ @ 0x18021ABBC (-ForceFullDirty@CRenderTargetManager@@QEAAXXZ.c)
 */

void __fastcall CComposition::UpdateDebugCounter(CComposition *this, char a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax

  v2 = *((_DWORD *)this + 250);
  if ( a2 )
  {
    v3 = v2 + 1;
    *((_DWORD *)this + 250) = v3;
    if ( v3 != 1 )
      return;
    if ( *((_BYTE *)this + 1016) == 1 )
      goto LABEL_9;
    *((_WORD *)this + 508) = 1;
    goto LABEL_8;
  }
  v4 = v2 - 1;
  *((_DWORD *)this + 250) = v4;
  if ( v4 )
    return;
  if ( *((_BYTE *)this + 1016) )
  {
    *((_WORD *)this + 508) = 0;
LABEL_8:
    *((_BYTE *)this + 1018) = 0;
    *((_QWORD *)this + 128) = 0LL;
    *((_DWORD *)this + 252) = -1;
    *((_DWORD *)this + 253) = -1;
  }
LABEL_9:
  CRenderTargetManager::ForceFullDirty(*((CRenderTargetManager **)this + 77));
}
