/*
 * XREFs of ?SetBufferProperty@CManipulationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x140071250
 * Callers:
 *     <none>
 * Callees:
 *     ?SetSourceModifier@CManipulationMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@W4SourceModifierIndex@@PEAVCResourceMarshaler@2@PEA_N@Z @ 0x140071158 (-SetSourceModifier@CManipulationMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@W4So.c)
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x140072D60 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z @ 0x14008039C (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     ?Add@?$CStructDynamicArray@UInjectManipulationArgs@@@@QEAAJAEBUInjectManipulationArgs@@@Z @ 0x140230EE0 (-Add@-$CStructDynamicArray@UInjectManipulationArgs@@@@QEAAJAEBUInjectManipulationArgs@@@Z.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

__int64 __fastcall DirectComposition::CManipulationMarshaler::SetBufferProperty(
        DirectComposition::CManipulationMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        signed int *a4,
        size_t Size,
        bool *a6)
{
  unsigned int v9; // ebx
  int v10; // r8d
  int v11; // r8d
  unsigned int v13; // esi
  struct DirectComposition::CResourceMarshaler *v14; // rax
  struct DirectComposition::CResourceMarshaler *v15; // r9

  v9 = 0;
  *a6 = 0;
  v10 = a3 - 7;
  if ( v10 )
  {
    v11 = v10 - 2;
    if ( v11 )
    {
      if ( Size == 8 && v11 == 1 )
      {
        v13 = a4[1];
        v14 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(a2, v13);
        if ( v14 )
        {
          if ( (unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(
                                  *((unsigned int *)v14 + 9),
                                  45LL) )
            return (unsigned int)DirectComposition::CManipulationMarshaler::SetSourceModifier(
                                   (__int64)this,
                                   (struct _RTL_GENERIC_TABLE *)a2,
                                   *a4,
                                   v15,
                                   (struct DirectComposition::CWeakReferenceBase *)a6);
        }
        else if ( !v13 )
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
  v9 = CStructDynamicArray<InjectManipulationArgs>::Add((char *)this + 128, a4);
  if ( (v9 & 0x80000000) == 0 )
    *a6 = 1;
  return v9;
}
