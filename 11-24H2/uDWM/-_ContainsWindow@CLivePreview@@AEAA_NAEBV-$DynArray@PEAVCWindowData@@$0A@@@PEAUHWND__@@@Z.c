/*
 * XREFs of ?_ContainsWindow@CLivePreview@@AEAA_NAEBV?$DynArray@PEAVCWindowData@@$0A@@@PEAUHWND__@@@Z @ 0x180055AC0
 * Callers:
 *     ?_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV?$DynArray@PEAVCWindowData@@$0A@@@_N@Z @ 0x180055878 (-_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV-$DynArray@PEAVCWindowData@@$0A@@@_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CLivePreview::_ContainsWindow(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 i; // r9

  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= *(_DWORD *)(a2 + 24) )
      return 0;
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 8 * i) + 40LL) == a3 )
      break;
  }
  return 1;
}
