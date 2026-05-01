/*
 * XREFs of CDelayIAMOperations::AddOperation__lambda_d2a883147a4aaef7223296bf15465975___ @ 0x1800128E0
 * Callers:
 *     ?SwitchToDesktopOnMonitor@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z @ 0x180012680 (-SwitchToDesktopOnMonitor@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_.c)
 * Callees:
 *     ?_AdjustOpTypeBasedOnCurrentThread@CDelayIAMOperations@@AEAAXPEAW4DELAY_OPERATION_TYPE@@@Z @ 0x18001195C (-_AdjustOpTypeBasedOnCurrentThread@CDelayIAMOperations@@AEAAXPEAW4DELAY_OPERATION_TYPE@@@Z.c)
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x1800119A0 (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1802D0AA0 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 */

__int64 __fastcall CDelayIAMOperations::AddOperation__lambda_d2a883147a4aaef7223296bf15465975___(
        int *a1,
        __int64 a2,
        int a3)
{
  int v5; // r14d
  LPARAM v6; // r15
  int v7; // ebp
  bool v8; // r12
  HWND v9; // rdx
  char *v10; // rax
  void (__fastcall ***v11)(_QWORD, __int64); // rbx
  _QWORD *v12; // rcx
  _QWORD *v13; // rdx
  __int64 v14; // rdx
  _QWORD *v15; // rdx
  int v17; // [rsp+60h] [rbp+18h] BYREF

  v17 = a3;
  CDelayIAMOperations::_AdjustOpTypeBasedOnCurrentThread((CDelayIAMOperations *)a1, (enum DELAY_OPERATION_TYPE *)&v17);
  v5 = v17;
  LODWORD(v6) = 0;
  v7 = 1;
  v8 = (unsigned int)(v17 - 2) <= 1;
  if ( CApplicationManagerUtility::IsValidWindow(*((CApplicationManagerUtility **)a1 + 2), v9)
    || v8 && *((_QWORD *)a1 + 1) )
  {
    v10 = (char *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    v11 = (void (__fastcall ***)(_QWORD, __int64))v10;
    if ( v10 )
    {
      *((_DWORD *)v10 + 2) = *a1;
      *((_DWORD *)v10 + 3) = v5;
      *(_QWORD *)v10 = &off_18079C370;
      *((_QWORD *)v10 + 2) = *(_QWORD *)a2;
      v12 = (_QWORD *)(a2 + 8);
      *((_QWORD *)v10 + 3) = 0LL;
      if ( v10 + 24 != (char *)(a2 + 8) )
      {
        *((_QWORD *)v10 + 3) = *v12;
        *v12 = 0LL;
      }
      v10[32] = *(_BYTE *)(a2 + 16);
      v13 = (_QWORD *)(a2 + 24);
      *((_QWORD *)v10 + 5) = 0LL;
      if ( v10 + 40 != (char *)(a2 + 24) )
      {
        *((_QWORD *)v10 + 5) = *v13;
        *v13 = 0LL;
      }
      *((_DWORD *)v10 + 12) = *(_DWORD *)(a2 + 32);
      v14 = *((_QWORD *)a1 + 4);
      if ( v14 == *((_QWORD *)a1 + 6)
        && (int)CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                  a1 + 6,
                  v14 + 1) < 0 )
      {
        (**v11)(v11, 1LL);
      }
      else
      {
        v15 = (_QWORD *)(*((_QWORD *)a1 + 3) + 8 * (*((_QWORD *)a1 + 4))++);
        if ( v15 )
          *v15 = v11;
        v6 = (unsigned int)*a1;
        if ( v5 != 5 )
        {
          ++a1[14];
          if ( v8 )
            (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)a1 + 1) + 56LL))(
              *((_QWORD *)a1 + 1),
              0xFFFFLL - (v5 != 2),
              (unsigned int)v6);
          else
            PostMessageW(*((HWND *)a1 + 2), (v5 != 0) + 1025, 0LL, v6);
        }
        if ( *a1 != -1 )
          v7 = *a1 + 1;
        *a1 = v7;
      }
    }
  }
  return (unsigned int)v6;
}
