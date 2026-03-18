/*
 * XREFs of ?SetBufferProperty@CManipulationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C02134B0
 * Callers:
 *     <none>
 * Callees:
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z @ 0x1C002EB40 (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x1C0092B30 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 *     memmove @ 0x1C00D6F00 (memmove.c)
 *     ?Add@?$CStructDynamicArray@UInjectManipulationArgs@@@@QEAAJAEBUInjectManipulationArgs@@@Z @ 0x1C0212D44 (-Add@-$CStructDynamicArray@UInjectManipulationArgs@@@@QEAAJAEBUInjectManipulationArgs@@@Z.c)
 *     ?SetSourceModifier@CManipulationMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@W4SourceModifierIndex@@PEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0213788 (-SetSourceModifier@CManipulationMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@W4So.c)
 */

__int64 __fastcall DirectComposition::CManipulationMarshaler::SetBufferProperty(
        DirectComposition::CManipulationMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _DWORD *a4,
        size_t Size,
        bool *a6)
{
  unsigned int v9; // ebx
  int v10; // r8d
  int v11; // r8d
  int v12; // esi
  struct DirectComposition::CResourceMarshaler *v13; // rax

  v9 = 0;
  *a6 = 0;
  v10 = a3 - 7;
  if ( v10 )
  {
    v11 = v10 - 2;
    if ( v11 )
    {
      if ( v11 == 1 && Size == 8 )
      {
        v12 = a4[1];
        v13 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(a2, v12);
        if ( v13 )
        {
          if ( DirectComposition::CResourceMarshaler::IsDerivedResourceType(*((_DWORD *)v13 + 9), 45) )
            return (unsigned int)DirectComposition::CManipulationMarshaler::SetSourceModifier(
                                   this,
                                   a2,
                                   (unsigned int)*a4);
        }
        else if ( !v12 )
        {
          return v9;
        }
      }
    }
    else if ( Size - 3 <= 0x7C && *(_WORD *)a4 )
    {
      memmove((char *)this + 152, a4, Size);
      *((_DWORD *)this + 37) = Size;
      *((_WORD *)this + (Size >> 1) + 76) = 0;
      *a6 = 1;
      *((_DWORD *)this + 4) |= 0x100u;
      return v9;
    }
    return (unsigned int)-1073741811;
  }
  if ( !a4 || Size != 128 )
    return (unsigned int)-1073741811;
  v9 = CStructDynamicArray<InjectManipulationArgs>::Add((__int64)this + 128, a4);
  if ( (v9 & 0x80000000) == 0 )
    *a6 = 1;
  return v9;
}
