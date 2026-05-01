/*
 * XREFs of CDelayIAMOperations::AddOperation__lambda_e23800a51333d84ae9bc1bc47017f9c2___ @ 0x180038370
 * Callers:
 *     ?UpdateMonitorForAppAsync@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@@Z @ 0x180038568 (-UpdateMonitorForAppAsync@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@@Z.c)
 * Callees:
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x180037158 (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800C9BC4 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V-$CT.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDelayIAMOperations::AddOperation__lambda_e23800a51333d84ae9bc1bc47017f9c2___(int *a1, HWND a2)
{
  unsigned int v4; // edi
  char *v5; // rax
  void (__fastcall ***v6)(_QWORD, __int64); // rbx
  _QWORD *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  int v10; // ebp
  _QWORD *v11; // rdx
  __int64 v12; // rcx

  v4 = 0;
  if ( CApplicationManagerUtility::IsValidWindow(*((CApplicationManagerUtility **)a1 + 2), a2) || *((_QWORD *)a1 + 1) )
  {
    v5 = (char *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    v6 = (void (__fastcall ***)(_QWORD, __int64))v5;
    if ( v5 )
    {
      *((_DWORD *)v5 + 2) = *a1;
      *((_DWORD *)v5 + 3) = 3;
      *(_QWORD *)v5 = &off_18070CC30;
      *((_QWORD *)v5 + 2) = *(_QWORD *)a2;
      v7 = a2 + 2;
      *((_QWORD *)v5 + 3) = 0LL;
      if ( v5 + 24 != (char *)(a2 + 2) )
      {
        *((_QWORD *)v5 + 3) = *v7;
        *v7 = 0LL;
      }
      v8 = *((_QWORD *)a1 + 4);
      if ( v8 == *((_QWORD *)a1 + 6)
        && (int)CTSimpleArray<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>>::_EnsureCapacity(
                  a1 + 6,
                  v8 + 1) < 0 )
      {
        (**v6)(v6, 1LL);
      }
      else
      {
        v9 = *((_QWORD *)a1 + 3);
        v10 = 1;
        v11 = (_QWORD *)(v9 + 8 * (*((_QWORD *)a1 + 4))++);
        if ( v11 )
          *v11 = v6;
        v12 = *((_QWORD *)a1 + 1);
        ++a1[14];
        v4 = *a1;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 56LL))(v12, 65534LL);
        if ( *a1 != -1 )
          v10 = *a1 + 1;
        *a1 = v10;
      }
    }
  }
  return v4;
}
