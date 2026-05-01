/*
 * XREFs of ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x180016E08
 * Callers:
 *     ?_TransferFromPoolToActive@CApplicationFrameService@@AEAAJ_K@Z @ 0x180016B6C (-_TransferFromPoolToActive@CApplicationFrameService@@AEAAJ_K@Z.c)
 *     ?EnsureFramePool@CApplicationFrameService@@UEAAJXZ @ 0x180079EC0 (-EnsureFramePool@CApplicationFrameService@@UEAAJXZ.c)
 *     ?PositionNewCreatedApp@CActivationBasedAppAndGlomCollection@@QEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180091264 (-PositionNewCreatedApp@CActivationBasedAppAndGlomCollection@@QEAAJAEBV-$ComPtr@UIImmersiveApplic.c)
 *     ??$_InsertAt@AEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@?$CTSimpleArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@_K@Z @ 0x180091850 (--$_InsertAt@AEBV-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@-$CTSimpleArray@V-$Co.c)
 *     ?PositionAppAtEnd@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@_K@Z @ 0x180092BC0 (-PositionAppAtEnd@-$CActivationBasedCollection@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Mi.c)
 *     ?PositionNewCreatedApp@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@UEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@Z @ 0x1801FC010 (-PositionNewCreatedApp@-$CActivationBasedCollection@V-$ComPtr@UIImmersiveApplicationInternal@@@W.c)
 *     ?BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ @ 0x180234280 (-BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ.c)
 * Callees:
 *     ?_CoTaskMemSize@CTCoAllocPolicy@@CA_KPEAX@Z @ 0x180045678 (-_CoTaskMemSize@CTCoAllocPolicy@@CA_KPEAX@Z.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 */

__int64 __fastcall CTSimpleArray<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>>::_EnsureCapacity(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned int v3; // ebx
  unsigned __int64 v4; // rdi
  __int64 v5; // rcx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r14
  char *v10; // rax
  char *v11; // rbp
  unsigned __int64 v12; // rax

  v3 = -2147024774;
  if ( a2 <= 0xFFFFFFFE )
  {
    v4 = *(_QWORD *)(a1 + 24);
    v3 = 0;
    if ( a2 > v4 )
    {
      v5 = 2 * v4;
      if ( !is_mul_ok(v4, 2uLL) )
        return (unsigned int)-2147024362;
      v7 = v4;
      v8 = v4 + 4096;
      if ( v7 <= 0x1000 )
        v8 = v5;
      if ( a2 <= v8 )
      {
        if ( v8 > 0xFFFFFFFE )
          v8 = 4294967294LL;
      }
      else
      {
        v8 = a2;
      }
      v9 = 8 * v8;
      if ( is_mul_ok(v8, 8uLL) )
      {
        v10 = (char *)CoTaskMemRealloc(*(LPVOID *)a1, 8 * v8);
        v11 = v10;
        if ( v10 )
        {
          v12 = CTCoAllocPolicy::_CoTaskMemSize(v10);
          if ( v12 > v9 )
            memset_0(&v11[v9], 0, v12 - v9);
          *(_QWORD *)(a1 + 24) = v8;
          *(_QWORD *)a1 = v11;
        }
        else
        {
          return (unsigned int)-2147024882;
        }
      }
      else
      {
        return (unsigned int)-2147024362;
      }
    }
  }
  return v3;
}
