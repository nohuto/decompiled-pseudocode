/*
 * XREFs of ?QueryInterface@ShellGesturesClientProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800635E0
 * Callers:
 *     ?QueryInterface@ShellGesturesClientProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18015A260 (-QueryInterface@ShellGesturesClientProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ShellGesturesClientProxy@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18015A270 (-QueryInterface@ShellGesturesClientProxy@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ShellGesturesClientProxy@@WIA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18015A280 (-QueryInterface@ShellGesturesClientProxy@@WIA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ShellGesturesClientProxy@@WII@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18015A2A0 (-QueryInterface@ShellGesturesClientProxy@@WII@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ShellGesturesClientProxy::QueryInterface(
        ShellGesturesClientProxy *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v4; // rax
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  void *v11; // rdx
  unsigned __int64 v13; // rax

  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_fc9627fe_ee9e_4718_b797_19522e5898d2.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_fc9627fe_ee9e_4718_b797_19522e5898d2.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_fc9627fe_ee9e_4718_b797_19522e5898d2.Data4;
  v6 = 0;
  if ( v4 )
  {
    v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3.Data1 )
      v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3.Data4;
    if ( v7 )
    {
      v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631.Data1 )
        v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631.Data4;
      if ( v8 )
      {
        v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
        if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
          v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
        if ( !v9 )
          goto LABEL_17;
        v10 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_974ecfd8_5dae_f205_7c42_b9160ca196d3.Data1;
        if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_974ecfd8_5dae_f205_7c42_b9160ca196d3.Data1 )
          v10 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_974ecfd8_5dae_f205_7c42_b9160ca196d3.Data4;
        if ( v10 )
        {
          *a3 = 0LL;
        }
        else
        {
LABEL_17:
          v11 = (void *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
          *a3 = v11;
          if ( v11 )
          {
            (**(void (__fastcall ***)(ShellGesturesClientProxy *))this)(this);
            return v6;
          }
        }
        return (unsigned int)-2147467262;
      }
      (**((void (__fastcall ***)(char *))this + 2))((char *)this + 16);
      v13 = (unsigned __int64)this + 136;
    }
    else
    {
      (**((void (__fastcall ***)(char *))this + 2))((char *)this + 16);
      v13 = (unsigned __int64)this + 128;
    }
  }
  else
  {
    (**((void (__fastcall ***)(char *))this + 2))((char *)this + 16);
    v13 = (unsigned __int64)this + 120;
  }
  *a3 = (void *)(v13 & -(__int64)(this != 0LL));
  return 0LL;
}
