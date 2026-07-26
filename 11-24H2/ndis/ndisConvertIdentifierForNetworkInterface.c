/*
 * XREFs of ndisConvertIdentifierForNetworkInterface @ 0x1400954B0
 * Callers:
 *     ?ndisConvertIdentifier@@YAJPEAU_ETHREAD@@PEBU_NDIS_CONVERT_IDENTIFIER_IN@@PEAU_NDIS_CONVERT_IDENTIFIER_OUT@@@Z @ 0x140137274 (-ndisConvertIdentifier@@YAJPEAU_ETHREAD@@PEBU_NDIS_CONVERT_IDENTIFIER_IN@@PEAU_NDIS_CONVERT_IDEN.c)
 * Callees:
 *     ?ndisIfFindInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z @ 0x14002A780 (-ndisIfFindInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z.c)
 *     ?ndisIfFindInterface@@YAPEAU_NDIS_IF_BLOCK@@K@Z @ 0x14002B100 (-ndisIfFindInterface@@YAPEAU_NDIS_IF_BLOCK@@K@Z.c)
 *     ?ndisIfFindInterfaceByInterfaceGuid@@YAPEAU_NDIS_IF_BLOCK@@PEBU_GUID@@@Z @ 0x140060190 (-ndisIfFindInterfaceByInterfaceGuid@@YAPEAU_NDIS_IF_BLOCK@@PEBU_GUID@@@Z.c)
 *     ndisConvertIdentifierIsCompartmentVisibile @ 0x1400955EC (ndisConvertIdentifierIsCompartmentVisibile.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 */

__int64 __fastcall ndisConvertIdentifierForNetworkInterface(
        int a1,
        __int64 a2,
        const struct _GUID *a3,
        __int64 a4,
        __int64 a5)
{
  int v6; // ecx
  struct _NDIS_IF_BLOCK *Interface; // rax
  __int64 v8; // r10
  int v9; // r11d
  int v10; // r11d
  int v11; // r11d
  int v12; // r11d
  __int64 v14; // rcx
  const void *v15; // rdx
  size_t v16; // r8

  if ( a1 )
  {
    v6 = a1 - 1;
    if ( v6 )
    {
      if ( v6 != 1 )
        return 3221225659LL;
      Interface = ndisIfFindInterface(a3->Data1);
    }
    else
    {
      Interface = ndisIfFindInterfaceByInterfaceGuid(a3);
    }
  }
  else
  {
    Interface = ndisIfFindInterfaceByNetLuid(*(union _NET_LUID_LH *)&a3->Data1);
  }
  if ( !Interface || !(unsigned __int8)ndisConvertIdentifierIsCompartmentVisibile(Interface->Compartment, a4) )
    return 3221225524LL;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          if ( v12 != 1 )
            return 3221225659LL;
          v14 = a5;
          v15 = (const void *)(v8 + 1160);
          *(_OWORD *)a5 = 0LL;
          *(_OWORD *)(a5 + 16) = 0LL;
          *(_WORD *)(a5 + 32) = 0;
          *(_WORD *)a5 = *(_WORD *)(v8 + 1158);
          v16 = *(unsigned __int16 *)(v8 + 1158);
        }
        else
        {
          v14 = a5;
          v15 = (const void *)(v8 + 1126);
          *(_OWORD *)a5 = 0LL;
          *(_OWORD *)(a5 + 16) = 0LL;
          *(_WORD *)(a5 + 32) = 0;
          *(_WORD *)a5 = *(_WORD *)(v8 + 1124);
          v16 = *(unsigned __int16 *)(v8 + 1124);
        }
        memmove((void *)(v14 + 2), v15, v16);
      }
      else
      {
        *(_DWORD *)a5 = *(_DWORD *)(v8 + 4);
      }
    }
    else
    {
      *(_OWORD *)a5 = *(_OWORD *)(v8 + 540);
    }
  }
  else
  {
    *(_QWORD *)a5 = *(_QWORD *)(v8 + 1312);
  }
  return 0LL;
}
