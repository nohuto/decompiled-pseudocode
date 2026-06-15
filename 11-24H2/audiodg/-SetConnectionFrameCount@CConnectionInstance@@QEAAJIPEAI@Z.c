/*
 * XREFs of ?SetConnectionFrameCount@CConnectionInstance@@QEAAJIPEAI@Z @ 0x140003868
 * Callers:
 *     ?InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ @ 0x140003174 (-InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_D @ 0x1400659FC (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140065CDC (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CConnectionInstance::SetConnectionFrameCount(
        CConnectionInstance *this,
        unsigned int a2,
        unsigned int *a3)
{
  __int64 v6; // rbx
  void (__fastcall ***v7)(__int64, GUID *, __int64 *); // rcx
  unsigned int v8; // edi
  __int64 v9; // rax
  bool v10; // di
  void (__fastcall ***v11)(__int64, GUID *, __int64 *); // rdi
  void (__fastcall **v13)(__int64, GUID *, __int64 *); // rax
  int v14; // eax
  void (__fastcall ***v15)(__int64, GUID *, __int64 *); // [rsp+60h] [rbp+30h] BYREF
  __int64 v16; // [rsp+70h] [rbp+40h] BYREF
  __int64 v17; // [rsp+78h] [rbp+48h] BYREF

  v6 = 0LL;
  v7 = 0LL;
  v15 = 0LL;
  v8 = 0;
  *a3 = a2;
  v9 = *((_QWORD *)this + 4);
  if ( !v9 || *(_DWORD *)(v9 + 40) != 2 )
    goto LABEL_15;
  v6 = *(_QWORD *)(*(_QWORD *)(v9 + 32) + 40LL);
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    v7 = v15;
  }
  if ( v7 )
  {
    if ( !v6 )
      goto LABEL_7;
    v17 = 0LL;
    v16 = 0LL;
    (**v7)((__int64)v7, &GUID_00000000_0000_0000_c000_000000000046, &v17);
    (**(void (__fastcall ***)(__int64, GUID *, __int64 *))v6)(v6, &GUID_00000000_0000_0000_c000_000000000046, &v16);
    v10 = v17 == v16;
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v16);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v17);
    v7 = v15;
  }
  else
  {
    if ( v6 )
    {
LABEL_7:
      v10 = 0;
      goto LABEL_8;
    }
    v10 = 1;
  }
LABEL_8:
  if ( !v10 )
  {
    v11 = v7;
    v7 = 0LL;
    v15 = 0LL;
    if ( v6 )
    {
      (**(void (__fastcall ***)(__int64, GUID *, __int64 *))v6)(
        v6,
        &GUID_7ba1db8f_78ad_49cd_9591_f79d80a17c81,
        (__int64 *)&v15);
      v7 = v15;
    }
    if ( v11 )
    {
      ((void (__fastcall *)(void (__fastcall ***)(__int64, GUID *, __int64 *)))(*v11)[2])(v11);
      v7 = v15;
    }
  }
  if ( !v7 )
  {
    v8 = 0;
LABEL_15:
    *((_DWORD *)this + 10) = *a3;
    goto LABEL_16;
  }
  v13 = *v7;
  if ( *((_DWORD *)this + 4) )
    v14 = ((__int64 (__fastcall *)(_QWORD, _QWORD, unsigned int *))v13[4])(v7, a2, a3);
  else
    v14 = ((__int64 (__fastcall *)(_QWORD, _QWORD, unsigned int *))v13[3])(v7, a2, a3);
  v8 = v14;
  if ( v14 >= 0 )
  {
    v7 = v15;
    goto LABEL_15;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_9589b5f78de2303020e6204913aebd1b_Traceguids);
  }
  AudDGTraceLoggingErrorHelper("CConnectionInstance::SetConnectionFrameCount", 0x354u, v8);
  v7 = v15;
LABEL_16:
  if ( v7 )
    ((void (__fastcall *)(void (__fastcall ***)(__int64, GUID *, __int64 *)))(*v7)[2])(v7);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return v8;
}
