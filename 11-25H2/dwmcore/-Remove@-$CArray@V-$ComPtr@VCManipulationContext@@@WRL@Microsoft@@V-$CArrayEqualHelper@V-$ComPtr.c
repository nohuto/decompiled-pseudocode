/*
 * XREFs of ?Remove@?$CArray@V?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CArrayEqualHelper@V?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEAAHAEBV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@Z @ 0x1800FB8F4
 * Callers:
 *     ?OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@Z @ 0x1800F9BEC (-OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x18005D64C (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

__int64 __fastcall CArray<Microsoft::WRL::ComPtr<CManipulationContext>,CArrayEqualHelper<Microsoft::WRL::ComPtr<CManipulationContext>>>::Remove(
        __int64 a1,
        _QWORD *a2)
{
  int v2; // ebx
  __int64 v4; // r8
  unsigned int v5; // esi
  int v7; // edx

  v2 = 0;
  v4 = 0LL;
  v5 = 1;
  while ( 1 )
  {
    if ( v4 >= *(int *)(a1 + 8) )
      return 0LL;
    if ( *(_QWORD *)(*(_QWORD *)a1 + 8 * v4) == *a2 )
      break;
    ++v2;
    ++v4;
  }
  if ( v2 == -1 )
    return 0LL;
  if ( v2 < 0 || v2 + 1 > *(_DWORD *)(a1 + 8) )
  {
    return 0;
  }
  else
  {
    Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)(*(_QWORD *)a1 + 8LL * v2));
    v7 = *(_DWORD *)(a1 + 8);
    if ( v2 + 1 != v7 )
      memmove_0((void *)(*(_QWORD *)a1 + 8LL * v2), (const void *)(*(_QWORD *)a1 + 8LL * v2 + 8), 8LL * (v7 - v2 - 1));
    --*(_DWORD *)(a1 + 8);
  }
  return v5;
}
