/*
 * XREFs of ?QueryInterface@CImmersiveWindowFactory@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180140DD0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveWindowFactoryBase@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1806C7990 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1806C7990.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveWindowFactoryBase@@@Details@WRL@Microsoft@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1806C79A0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1806C79A0.c)
 *     ?QueryInterface@CImmersiveWindowFactory@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1806C79B0 (-QueryInterface@CImmersiveWindowFactory@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveWindowFactoryBase@@@Details@WRL@Microsoft@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1806C79C0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1806C79C0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveWindowFactoryBase@@@Details@WRL@Microsoft@@WLA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1806C79D0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1806C79D0.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CImmersiveWindowFactory::QueryInterface(
        CImmersiveWindowFactory *this,
        const struct _GUID *a2,
        void **a3)
{
  char *v4; // r9
  unsigned int v5; // ebx
  int v6; // eax
  int v7; // eax

  *a3 = 0LL;
  if ( *(_QWORD *)&a2->Data1 == __PAIR64__(*(unsigned int *)&GUID_00000000_0000_0000_c000_000000000046.Data2, 0)
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    goto LABEL_28;
  }
  if ( a2->Data1 == -1350114592 )
  {
    if ( *(_DWORD *)&a2->Data2 != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
      || *(_DWORD *)a2->Data4 != *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
      || *(_DWORD *)&a2->Data4[4] != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
    {
      goto LABEL_6;
    }
LABEL_28:
    *a3 = this;
    (*(void (__fastcall **)(CImmersiveWindowFactory *))(*(_QWORD *)this + 8LL))(this);
    return 0;
  }
  if ( a2->Data1 == -852941984
    && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_cd292360_2763_4085_8a9f_74b224a29175.Data2
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_cd292360_2763_4085_8a9f_74b224a29175.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_cd292360_2763_4085_8a9f_74b224a29175.Data4[4] )
  {
    goto LABEL_22;
  }
LABEL_6:
  v4 = (char *)this + 8;
  v5 = -2147467262;
  if ( *(_QWORD *)&a2->Data1 != __PAIR64__(*(unsigned int *)&GUID_00000003_0000_0000_c000_000000000046.Data2, 3)
    || *(_DWORD *)a2->Data4 != *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4
    || *(_DWORD *)&a2->Data4[4] != *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4] )
  {
    if ( a2->Data1 == 24
      && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_00000018_0000_0000_c000_000000000046.Data2
      && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_00000018_0000_0000_c000_000000000046.Data4
      && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_00000018_0000_0000_c000_000000000046.Data4[4] )
    {
      *a3 = (char *)this + 48;
      v6 = 0;
    }
    else
    {
      v6 = -2147467262;
    }
    if ( v6 != -2147467262 )
      goto LABEL_16;
    v4 = (char *)this + 72;
    if ( *(_QWORD *)&a2->Data1 != __PAIR64__(
                                    *(unsigned int *)&GUID_601d51e3_801e_49c9_bbfa_fe29a662aead.Data2,
                                    1612534243)
      || *(_DWORD *)a2->Data4 != *(_DWORD *)GUID_601d51e3_801e_49c9_bbfa_fe29a662aead.Data4
      || *(_DWORD *)&a2->Data4[4] != *(_DWORD *)&GUID_601d51e3_801e_49c9_bbfa_fe29a662aead.Data4[4] )
    {
      v4 = (char *)this + 80;
      if ( *(_QWORD *)&a2->Data1 != __PAIR64__(
                                      *(unsigned int *)&GUID_087ca5a4_8cfc_4264_b39d_da2bb2583a11.Data2,
                                      142386596)
        || *(_DWORD *)a2->Data4 != *(_DWORD *)GUID_087ca5a4_8cfc_4264_b39d_da2bb2583a11.Data4
        || *(_DWORD *)&a2->Data4[4] != *(_DWORD *)&GUID_087ca5a4_8cfc_4264_b39d_da2bb2583a11.Data4[4] )
      {
        v7 = -2147467262;
        goto LABEL_17;
      }
    }
  }
  *a3 = v4;
LABEL_16:
  v7 = 0;
LABEL_17:
  if ( v7 != -2147467262 )
  {
    v5 = v7;
    goto LABEL_23;
  }
  this = (CImmersiveWindowFactory *)((char *)this + 176);
  if ( a2->Data1 == 56
    && *(_DWORD *)&a2->Data2 == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data2
    && *(_DWORD *)a2->Data4 == *(_DWORD *)_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4[4] )
  {
LABEL_22:
    *a3 = this;
    v5 = 0;
LABEL_23:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  }
  return v5;
}
