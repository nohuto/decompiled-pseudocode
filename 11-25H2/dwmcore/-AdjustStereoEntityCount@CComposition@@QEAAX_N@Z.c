/*
 * XREFs of ?AdjustStereoEntityCount@CComposition@@QEAAX_N@Z @ 0x1802658C0
 * Callers:
 *     ??0CDxHandleStereoBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x1802E1AFC (--0CDxHandleStereoBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIB.c)
 *     ??1CDxHandleStereoBitmapRealization@@MEAA@XZ @ 0x1802E1C30 (--1CDxHandleStereoBitmapRealization@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CComposition::AdjustStereoEntityCount(CComposition *this, char a2)
{
  CGlobalComposition *v2; // rcx
  int v3; // eax
  int v4; // eax

  v2 = g_pComposition;
  v3 = *((_DWORD *)g_pComposition + 208);
  if ( a2 )
  {
    v4 = v3 + 1;
    *((_DWORD *)g_pComposition + 208) = v4;
    if ( v4 == 1 )
      CRenderTargetManager::ForceFullDirty(*((CRenderTargetManager **)v2 + 77));
  }
  else
  {
    *((_DWORD *)g_pComposition + 208) = v3 - 1;
  }
}
