/*
 * XREFs of ndisConvertIdentifierForCompartment @ 0x1400953E0
 * Callers:
 *     ?ndisConvertIdentifier@@YAJPEAU_ETHREAD@@PEBU_NDIS_CONVERT_IDENTIFIER_IN@@PEAU_NDIS_CONVERT_IDENTIFIER_OUT@@@Z @ 0x140137274 (-ndisConvertIdentifier@@YAJPEAU_ETHREAD@@PEBU_NDIS_CONVERT_IDENTIFIER_IN@@PEAU_NDIS_CONVERT_IDEN.c)
 * Callees:
 *     ?ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z @ 0x1400483A0 (-ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z.c)
 *     ?ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z @ 0x140057D20 (-ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z.c)
 *     ndisConvertIdentifierIsCompartmentVisibile @ 0x1400955EC (ndisConvertIdentifierIsCompartmentVisibile.c)
 */

__int64 __fastcall ndisConvertIdentifierForCompartment(int a1, int a2, const struct _GUID *a3, __int64 a4, _OWORD *a5)
{
  KIRQL v9; // r10
  int v10; // ebx
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlock; // rax
  unsigned int v12; // ebx
  __int64 v13; // rcx
  int v14; // edi

  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  v10 = a1 - 1;
  if ( v10 )
  {
    if ( v10 != 1 )
      goto LABEL_9;
    CompartmentBlock = ndisIfFindCompartmentBlock(a3->Data1);
  }
  else
  {
    CompartmentBlock = ndisIfFindCompartmentBlockByGuid(a3);
  }
  v12 = 0;
  if ( !CompartmentBlock || !(unsigned __int8)ndisConvertIdentifierIsCompartmentVisibile(CompartmentBlock, a4) )
  {
    v12 = -1073741772;
    goto LABEL_13;
  }
  v14 = a2 - 1;
  if ( !v14 )
  {
    *a5 = *(_OWORD *)(v13 + 1144);
    goto LABEL_13;
  }
  if ( v14 == 1 )
  {
    *(_DWORD *)a5 = *(_DWORD *)(v13 + 16);
    goto LABEL_13;
  }
LABEL_9:
  v12 = -1073741637;
LABEL_13:
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v9);
  return v12;
}
