/*
 * XREFs of ?SendInputToPostProcessor@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@@Z @ 0x1800C6080
 * Callers:
 *     ?Process3DInput@MPCHandProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800C0E70 (-Process3DInput@MPCHandProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?DeliverInputToTarget@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@1@Z @ 0x1801BB738 (-DeliverInputToTarget@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@1@Z.c)
 *     ?Process3DInput@MPCClickerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801C4A10 (-Process3DInput@MPCClickerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x1800133C4 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091C24 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall MPCInputProviderBase::SendInputToPostProcessor(MPCInputProviderBase *this, struct LegacyInputInfo *a2)
{
  struct MPCHolographicInputManager *Instance; // rax
  __int64 v5; // r14
  int v6; // eax
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Instance = MPCHolographicInputManager::GetInstance();
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)Instance + 411) + 48LL))(*((_QWORD *)Instance + 411));
  if ( v5 )
  {
    if ( !*((_BYTE *)this + 3570) )
    {
      (*(void (__fastcall **)(MPCInputProviderBase *, _QWORD, _QWORD, char *))(*(_QWORD *)this + 80LL))(
        this,
        0LL,
        0LL,
        (char *)this + 560);
      *((_BYTE *)this + 3562) = 0;
      v6 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v5 + 24LL))(v5, (char *)this + 560);
      if ( v6 < 0 )
      {
        if ( v6 != -2147417853 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x18C,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcinputproviderbase.cpp",
            (const char *)(unsigned int)v6);
      }
      else
      {
        *((_BYTE *)this + 3570) = 1;
      }
    }
    if ( !(*(unsigned __int8 (__fastcall **)(MPCInputProviderBase *, struct LegacyInputInfo *))(*(_QWORD *)this + 88LL))(
            this,
            a2) )
    {
      if ( *((_BYTE *)this + 3570) )
      {
        if ( *((_BYTE *)this + 3572) )
        {
          v7 = (*(__int64 (__fastcall **)(__int64, struct LegacyInputInfo *))(*(_QWORD *)v5 + 24LL))(v5, a2);
          if ( v7 < 0 )
          {
            *((_BYTE *)this + 3570) = 0;
            if ( v7 != -2147417853 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x19A,
                (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcinputproviderbase.cpp",
                (const char *)(unsigned int)v7);
          }
        }
      }
    }
  }
  *((_BYTE *)a2 + 3002) = 1;
}
