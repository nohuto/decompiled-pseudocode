/*
 * XREFs of CDelayIAMOperations::AddOperation__lambda_e4f903151686668c7d98589c7fa057c5___ @ 0x1802E1C04
 * Callers:
 *     ?AsyncInvokeWithApplicationViewSerialization@CApplicationManager@@UEAAJPEAUIAsyncCallback@@@Z @ 0x1801E0DF0 (-AsyncInvokeWithApplicationViewSerialization@CApplicationManager@@UEAAJPEAUIAsyncCallback@@@Z.c)
 * Callees:
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x180037158 (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800C9BC4 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V-$CT.c)
 *     ?_AdjustOpTypeBasedOnCurrentThread@CDelayIAMOperations@@AEAAXPEAW4DELAY_OPERATION_TYPE@@@Z @ 0x1801FCBFC (-_AdjustOpTypeBasedOnCurrentThread@CDelayIAMOperations@@AEAAXPEAW4DELAY_OPERATION_TYPE@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDelayIAMOperations::AddOperation__lambda_e4f903151686668c7d98589c7fa057c5___(int *a1, char *a2)
{
  int v3; // ebp
  int v5; // r14d
  LPARAM v6; // r15
  bool v7; // r12
  HWND v8; // rdx
  char *v9; // rax
  void *v10; // r8
  void (__fastcall ***v11)(_QWORD, __int64); // rdi
  __int64 v12; // rdx
  _QWORD *v13; // rdx
  int v15; // [rsp+60h] [rbp+18h] BYREF

  v3 = 1;
  v15 = 1;
  CDelayIAMOperations::_AdjustOpTypeBasedOnCurrentThread((CDelayIAMOperations *)a1, (enum DELAY_OPERATION_TYPE *)&v15);
  v5 = v15;
  LODWORD(v6) = 0;
  v7 = (unsigned int)(v15 - 2) <= 1;
  if ( CApplicationManagerUtility::IsValidWindow(*((CApplicationManagerUtility **)a1 + 2), v8)
    || v7 && *((_QWORD *)a1 + 1) )
  {
    v9 = (char *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v11 = (void (__fastcall ***)(_QWORD, __int64))v9;
    if ( v9 )
    {
      *((_DWORD *)v9 + 2) = *a1;
      *((_DWORD *)v9 + 3) = v5;
      *(_QWORD *)v9 = &off_18072C480;
      *((_QWORD *)v9 + 2) = 0LL;
      if ( v9 + 16 != a2 )
      {
        *((_QWORD *)v9 + 2) = *(_QWORD *)a2;
        *(_QWORD *)a2 = 0LL;
      }
      v12 = *((_QWORD *)a1 + 4);
      if ( v12 == *((_QWORD *)a1 + 6)
        && (int)CTSimpleArray<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>>::_EnsureCapacity(
                  (__int64)(a1 + 6),
                  v12 + 1,
                  v10) < 0 )
      {
        (**v11)(v11, 1LL);
      }
      else
      {
        v13 = (_QWORD *)(*((_QWORD *)a1 + 3) + 8 * (*((_QWORD *)a1 + 4))++);
        if ( v13 )
          *v13 = v11;
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
