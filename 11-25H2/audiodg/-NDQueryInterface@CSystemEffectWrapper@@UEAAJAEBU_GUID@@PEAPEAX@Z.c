/*
 * XREFs of ?NDQueryInterface@CSystemEffectWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14002C4F0
 * Callers:
 *     <none>
 * Callees:
 *     ?QIInternal@CSystemEffectWrapper@@AEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14002CA70 (-QIInternal@CSystemEffectWrapper@@AEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSystemEffectWrapper::NDQueryInterface(void **this, const struct _GUID *a2, void **a3)
{
  int v5; // ebx
  __int64 v6; // rax
  void **v7; // rax
  void **v8; // rcx
  void (**v9)(void); // rax
  __int64 v11; // rax
  void **v12; // rdi
  void **v13; // rax
  __int64 v14; // rax
  void **v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  void **v19; // r8
  void **v20; // rax
  void **v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  void **v25; // rax
  __int64 v26; // rax
  void **v27; // rax
  __int64 v28; // rax
  void **v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  void **v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  void **v36; // rax
  void **v37; // rsi
  void **v38; // rax
  void **v39; // rax
  __int64 v40; // rax
  void **v41; // rcx
  void **v42; // rax
  void **v43; // rax
  void **v44; // rax

  *a3 = 0LL;
  v5 = 0;
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( !v6 )
  {
    v7 = this - 15;
    v8 = this - 16;
    if ( !v8 )
      v7 = 0LL;
    *a3 = v7;
    goto LABEL_7;
  }
  v11 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10.Data1 )
    v11 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10.Data4;
  if ( !v11 )
  {
    v12 = this - 16;
    if ( !this[7] )
    {
      v5 = CSystemEffectWrapper::QIInternal((CSystemEffectWrapper *)(this - 16), a2, this + 7);
      if ( v5 >= 0 )
      {
        v41 = this - 15;
        if ( !v12 )
          v41 = 0LL;
        *a3 = v41;
      }
      return (unsigned int)v5;
    }
    v13 = this - 15;
    goto LABEL_85;
  }
  v14 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_0e5ed805_aba6_49c3_8f9a_2b8c889c4fa8.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_0e5ed805_aba6_49c3_8f9a_2b8c889c4fa8.Data1 )
    v14 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_0e5ed805_aba6_49c3_8f9a_2b8c889c4fa8.Data4;
  if ( !v14 )
  {
    v12 = this - 16;
    if ( !this[9] )
    {
      v5 = CSystemEffectWrapper::QIInternal((CSystemEffectWrapper *)(this - 16), a2, this + 9);
      if ( v5 >= 0 )
      {
        v15 = this - 13;
        if ( !v12 )
          v15 = 0LL;
        *a3 = v15;
      }
      return (unsigned int)v5;
    }
    v13 = this - 13;
    goto LABEL_85;
  }
  v16 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_9e1d6a6d_ddbc_4e95_a4c7_ad64ba37846c.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_9e1d6a6d_ddbc_4e95_a4c7_ad64ba37846c.Data1 )
    v16 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_9e1d6a6d_ddbc_4e95_a4c7_ad64ba37846c.Data4;
  if ( !v16 )
  {
    v12 = this - 16;
    if ( !this[8] )
    {
      v5 = CSystemEffectWrapper::QIInternal((CSystemEffectWrapper *)(this - 16), a2, this + 8);
      if ( v5 >= 0 )
      {
        v21 = this - 12;
        if ( !v12 )
          v21 = 0LL;
        *a3 = v21;
      }
      return (unsigned int)v5;
    }
    v13 = this - 12;
LABEL_85:
    if ( !v12 )
      v13 = 0LL;
    *a3 = v13;
    v9 = (void (**)(void))*v12;
    goto LABEL_8;
  }
  v17 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b.Data1 )
    v17 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b.Data4;
  if ( !v17 )
  {
    v19 = this + 10;
    goto LABEL_34;
  }
  v18 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56.Data1 )
    v18 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56.Data4;
  if ( !v18 )
  {
    v19 = this + 11;
LABEL_34:
    v12 = this - 16;
    if ( !*v19 )
    {
      v5 = CSystemEffectWrapper::QIInternal((CSystemEffectWrapper *)(this - 16), a2, v19);
      if ( v5 >= 0 )
      {
        v20 = this - 11;
        if ( !v12 )
          v20 = 0LL;
        *a3 = v20;
      }
      return (unsigned int)v5;
    }
    v13 = this - 11;
    goto LABEL_85;
  }
  v22 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_c58b31cd_fc6a_4255_bc1f_ad29bb0a4a17.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_c58b31cd_fc6a_4255_bc1f_ad29bb0a4a17.Data1 )
    v22 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_c58b31cd_fc6a_4255_bc1f_ad29bb0a4a17.Data4;
  if ( !v22 )
  {
    v19 = this + 12;
    goto LABEL_34;
  }
  v23 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_f851809c_c177_49a0_b1b2_b66f017943ab.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_f851809c_c177_49a0_b1b2_b66f017943ab.Data1 )
    v23 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_f851809c_c177_49a0_b1b2_b66f017943ab.Data4;
  if ( !v23 )
  {
    v12 = this - 16;
    if ( !this[15] )
    {
      v5 = CSystemEffectWrapper::QIInternal((CSystemEffectWrapper *)(this - 16), a2, this + 15);
      if ( v5 >= 0 )
      {
        v44 = this - 9;
        if ( !v12 )
          v44 = 0LL;
        *a3 = v44;
      }
      return (unsigned int)v5;
    }
    v13 = this - 9;
    goto LABEL_85;
  }
  v24 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768.Data1 )
    v24 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768.Data4;
  if ( !v24 )
  {
    v12 = this - 16;
    if ( !this[13] )
    {
      v5 = CSystemEffectWrapper::QIInternal((CSystemEffectWrapper *)(this - 16), a2, this + 13);
      if ( v5 >= 0 )
      {
        v25 = this - 10;
        if ( !v12 )
          v25 = 0LL;
        *a3 = v25;
      }
      return (unsigned int)v5;
    }
    v13 = this - 10;
    goto LABEL_85;
  }
  v26 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_25385759_3236_4101_a943_25693dfb5d2d.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_25385759_3236_4101_a943_25693dfb5d2d.Data1 )
    v26 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_25385759_3236_4101_a943_25693dfb5d2d.Data4;
  if ( !v26 )
  {
    v12 = this - 16;
    if ( !this[16] )
    {
      v5 = CSystemEffectWrapper::QIInternal((CSystemEffectWrapper *)(this - 16), a2, this + 16);
      if ( v5 >= 0 )
      {
        v27 = this - 8;
        if ( !v12 )
          v27 = 0LL;
        *a3 = v27;
      }
      return (unsigned int)v5;
    }
    v13 = this - 8;
    goto LABEL_85;
  }
  v28 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_8ab91395_f920_4132_873f_7a40607f7901.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_8ab91395_f920_4132_873f_7a40607f7901.Data1 )
    v28 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_8ab91395_f920_4132_873f_7a40607f7901.Data4;
  if ( !v28 )
  {
    v12 = this - 16;
    if ( !this[17] )
    {
      v5 = CSystemEffectWrapper::QIInternal((CSystemEffectWrapper *)(this - 16), a2, this + 17);
      if ( v5 >= 0 )
      {
        v29 = this - 7;
        if ( !v12 )
          v29 = 0LL;
        *a3 = v29;
      }
      return (unsigned int)v5;
    }
    v13 = this - 7;
    goto LABEL_85;
  }
  v30 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_51cbd3c4_f1f3_4d2f_a0e1_7e9c4dd0feb3.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_51cbd3c4_f1f3_4d2f_a0e1_7e9c4dd0feb3.Data1 )
    v30 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_51cbd3c4_f1f3_4d2f_a0e1_7e9c4dd0feb3.Data4;
  if ( !v30 )
  {
    v12 = this - 16;
    if ( !this[14] )
    {
      v5 = CSystemEffectWrapper::QIInternal((CSystemEffectWrapper *)(this - 16), a2, this + 14);
      if ( v5 >= 0 )
      {
        v32 = this - 6;
        if ( !v12 )
          v32 = 0LL;
        *a3 = v32;
      }
      return (unsigned int)v5;
    }
    v13 = this - 6;
    goto LABEL_85;
  }
  v31 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_56b0c76f_02fd_4b21_a52e_9f8219fc86e4.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_56b0c76f_02fd_4b21_a52e_9f8219fc86e4.Data1 )
    v31 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_56b0c76f_02fd_4b21_a52e_9f8219fc86e4.Data4;
  if ( !v31 )
  {
    v12 = this - 16;
    if ( !this[18] )
    {
      v5 = CSystemEffectWrapper::QIInternal((CSystemEffectWrapper *)(this - 16), a2, this + 18);
      if ( v5 >= 0 )
      {
        v42 = this - 4;
        if ( !v12 )
          v42 = 0LL;
        *a3 = v42;
      }
      return (unsigned int)v5;
    }
    v13 = this - 4;
    goto LABEL_85;
  }
  v33 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_ca2cfbde_a9d6_4eb0_bc95_c4d026b380f0.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_ca2cfbde_a9d6_4eb0_bc95_c4d026b380f0.Data1 )
    v33 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_ca2cfbde_a9d6_4eb0_bc95_c4d026b380f0.Data4;
  if ( !v33 )
  {
    v37 = this - 16;
    if ( !this[19] )
    {
      v5 = CSystemEffectWrapper::QIInternal((CSystemEffectWrapper *)(this - 16), a2, this + 19);
      if ( v5 >= 0 )
      {
        v38 = this - 4;
        if ( !v37 )
          v38 = 0LL;
        *a3 = v38;
        this[18] = this[19];
      }
      return (unsigned int)v5;
    }
    v43 = this - 4;
    if ( this == (void **)128 )
      v43 = 0LL;
    *a3 = v43;
    v9 = (void (**)(void))*v37;
    goto LABEL_8;
  }
  v34 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_67309ffa_1e7c_48f2_b96f_9b25b183ba25.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_67309ffa_1e7c_48f2_b96f_9b25b183ba25.Data1 )
    v34 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_67309ffa_1e7c_48f2_b96f_9b25b183ba25.Data4;
  if ( !v34 )
  {
    v39 = this - 3;
    v8 = this - 16;
    if ( !v8 )
      v39 = 0LL;
    *a3 = v39;
    goto LABEL_7;
  }
  v35 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data1 )
    v35 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4;
  if ( !v35 )
  {
    v36 = this - 14;
    v8 = this - 16;
    if ( !v8 )
      v36 = 0LL;
    *a3 = v36;
    goto LABEL_7;
  }
  v40 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1 )
    v40 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4;
  v8 = this - 16;
  if ( !v40 )
  {
    *a3 = v8;
LABEL_7:
    v9 = (void (**)(void))*v8;
LABEL_8:
    v9[1]();
    return (unsigned int)v5;
  }
  return CSystemEffectWrapper::QIInternal((CSystemEffectWrapper *)v8, a2, a3);
}
