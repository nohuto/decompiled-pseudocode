/*
 * XREFs of ??1?$out_param_t@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x18021E668
 * Callers:
 *     ?AddVisual@CVisualGroup@@IEAAJPEAVCVisual@@@Z @ 0x180298E4C (-AddVisual@CVisualGroup@@IEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::out_param_t<std::unique_ptr<CExcludeVisualReference>>::~out_param_t<std::unique_ptr<CExcludeVisualReference>>(
        __int64 a1)
{
  CExcludeVisualReference *v1; // rdx

  if ( *(_BYTE *)(a1 + 16) )
  {
    v1 = **(CExcludeVisualReference ***)a1;
    **(_QWORD **)a1 = *(_QWORD *)(a1 + 8);
    if ( v1 )
      std::default_delete<CExcludeVisualReference>::operator()(a1, v1);
  }
}
