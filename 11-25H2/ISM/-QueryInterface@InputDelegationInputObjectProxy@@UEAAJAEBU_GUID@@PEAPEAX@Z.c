/*
 * XREFs of ?QueryInterface@InputDelegationInputObjectProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18005A450
 * Callers:
 *     ?QueryInterface@InputDelegationInputObjectProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180131C70 (-QueryInterface@InputDelegationInputObjectProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@InputDelegationInputObjectProxy@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180131C80 (-QueryInterface@InputDelegationInputObjectProxy@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@InputDelegationInputObjectProxy@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180131C90 (-QueryInterface@InputDelegationInputObjectProxy@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@InputDelegationInputObjectProxy@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180131CA0 (-QueryInterface@InputDelegationInputObjectProxy@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall InputDelegationInputObjectProxy::QueryInterface(
        InputDelegationInputObjectProxy *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v4; // rax
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  void *v10; // rdx
  unsigned __int64 v12; // rax

  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_f6f9433e_5957_4930_a4c4_4da30644521c.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_f6f9433e_5957_4930_a4c4_4da30644521c.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_f6f9433e_5957_4930_a4c4_4da30644521c.Data4;
  v6 = 0;
  if ( v4 )
  {
    v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_fc9627fe_ee9e_4718_b797_19522e5898d2.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_fc9627fe_ee9e_4718_b797_19522e5898d2.Data1 )
      v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_fc9627fe_ee9e_4718_b797_19522e5898d2.Data4;
    if ( v7 )
    {
      v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
        v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
      if ( !v8 )
        goto LABEL_13;
      v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_1452f669_12e6_cbad_dfcf_7322d5e6f2bf.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_1452f669_12e6_cbad_dfcf_7322d5e6f2bf.Data1 )
        v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_1452f669_12e6_cbad_dfcf_7322d5e6f2bf.Data4;
      if ( v9 )
      {
        *a3 = 0LL;
      }
      else
      {
LABEL_13:
        v10 = (void *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
        *a3 = v10;
        if ( v10 )
        {
          (**(void (__fastcall ***)(InputDelegationInputObjectProxy *))this)(this);
          return v6;
        }
      }
      return (unsigned int)-2147467262;
    }
    (**((void (__fastcall ***)(char *))this + 2))((char *)this + 16);
    v12 = (unsigned __int64)this + 64;
  }
  else
  {
    (**((void (__fastcall ***)(char *))this + 2))((char *)this + 16);
    v12 = (unsigned __int64)this + 56;
  }
  *a3 = (void *)(v12 & -(__int64)(this != 0LL));
  return 0LL;
}
