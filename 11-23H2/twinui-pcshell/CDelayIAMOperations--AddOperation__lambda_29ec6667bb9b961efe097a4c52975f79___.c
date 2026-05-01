/*
 * XREFs of CDelayIAMOperations::AddOperation__lambda_29ec6667bb9b961efe097a4c52975f79___ @ 0x1801CFB08
 * Callers:
 *     ?AsyncInvokeWithApplicationViewSerialization@CApplicationManager@@UEAAJPEAUIAsyncCallback@@@Z @ 0x180397F70 (-AsyncInvokeWithApplicationViewSerialization@CApplicationManager@@UEAAJPEAUIAsyncCallback@@@Z.c)
 * Callees:
 *     ?_AdjustOpTypeBasedOnCurrentThread@CDelayIAMOperations@@AEAAXPEAW4DELAY_OPERATION_TYPE@@@Z @ 0x18001195C (-_AdjustOpTypeBasedOnCurrentThread@CDelayIAMOperations@@AEAAXPEAW4DELAY_OPERATION_TYPE@@@Z.c)
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x1800119A0 (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1802D0AA0 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 */

__int64 __fastcall CDelayIAMOperations::AddOperation__lambda_29ec6667bb9b961efe097a4c52975f79___(int *a1, char *a2)
{
  int v3; // ebp
  int v5; // r14d
  LPARAM v6; // r15
  bool v7; // r12
  HWND v8; // rdx
  char *v9; // rax
  void (__fastcall ***v10)(_QWORD, __int64); // rdi
  __int64 v11; // rdx
  _QWORD *v12; // rdx
  int v14; // [rsp+60h] [rbp+18h] BYREF

  v3 = 1;
  v14 = 1;
  CDelayIAMOperations::_AdjustOpTypeBasedOnCurrentThread((CDelayIAMOperations *)a1, (enum DELAY_OPERATION_TYPE *)&v14);
  v5 = v14;
  LODWORD(v6) = 0;
  v7 = (unsigned int)(v14 - 2) <= 1;
  if ( CApplicationManagerUtility::IsValidWindow(*((CApplicationManagerUtility **)a1 + 2), v8)
    || v7 && *((_QWORD *)a1 + 1) )
  {
    v9 = (char *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v10 = (void (__fastcall ***)(_QWORD, __int64))v9;
    if ( v9 )
    {
      *((_DWORD *)v9 + 2) = *a1;
      *((_DWORD *)v9 + 3) = v5;
      *(_QWORD *)v9 = &off_1807C3DB0;
      *((_QWORD *)v9 + 2) = 0LL;
      if ( v9 + 16 != a2 )
      {
        *((_QWORD *)v9 + 2) = *(_QWORD *)a2;
        *(_QWORD *)a2 = 0LL;
      }
      v11 = *((_QWORD *)a1 + 4);
      if ( v11 == *((_QWORD *)a1 + 6)
        && (int)CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                  a1 + 6,
                  v11 + 1) < 0 )
      {
        (**v10)(v10, 1LL);
      }
      else
      {
        v12 = (_QWORD *)(*((_QWORD *)a1 + 3) + 8 * (*((_QWORD *)a1 + 4))++);
        if ( v12 )
          *v12 = v10;
        v6 = (unsigned int)*a1;
        if ( v5 != 5 )
        {
          ++a1[14];
          if ( v7 )
            (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)a1 + 1) + 56LL))(
              *((_QWORD *)a1 + 1),
              0xFFFFLL - (v5 != 2),
              (unsigned int)v6);
          else
            PostMessageW(*((HWND *)a1 + 2), (v5 != 0) + 1025, 0LL, v6);
        }
        if ( *a1 != -1 )
          v3 = *a1 + 1;
        *a1 = v3;
      }
    }
  }
  return (unsigned int)v6;
}
