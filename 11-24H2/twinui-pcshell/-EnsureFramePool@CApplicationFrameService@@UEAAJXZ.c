/*
 * XREFs of ?EnsureFramePool@CApplicationFrameService@@UEAAJXZ @ 0x180079EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x180016E08 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO.c)
 *     ?InternalAddRef@?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180038040 (-InternalAddRef@-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameManager@@@Z @ 0x18007A0D4 (-_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameMana.c)
 *     ?InternalRelease@?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ @ 0x18009A168 (-InternalRelease@-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VCApplicationFrameWrapper@@V1@PEAVCApplicationFrameService@@PEAUIApplicationFrameManager@@PEAUIApplicationFrame@@@Details@WRL@Microsoft@@YAJPEAPEAVCApplicationFrameWrapper@@$$QEAPEAVCApplicationFrameService@@$$QEAPEAUIApplicationFrameManager@@$$QEAPEAUIApplicationFrame@@@Z @ 0x1801D3B80 (--$MakeAndInitialize@VCApplicationFrameWrapper@@V1@PEAVCApplicationFrameService@@PEAUIApplicatio.c)
 *     WPP_SF_d @ 0x1802220E8 (WPP_SF_d.c)
 *     ?IsManagedBy@CApplicationFrameWrapper@@QEAA_NPEAUIApplicationFrameManager@@@Z @ 0x1802CB92C (-IsManagedBy@CApplicationFrameWrapper@@QEAA_NPEAUIApplicationFrameManager@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationFrameService::EnsureFramePool(CApplicationFrameService *this)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rdi
  int v4; // esi
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, __int64 *); // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v13; // [rsp+20h] [rbp-18h] BYREF
  char *v14; // [rsp+28h] [rbp-10h] BYREF
  __int64 v15; // [rsp+70h] [rbp+38h] BYREF
  __int64 v16; // [rsp+78h] [rbp+40h] BYREF
  CApplicationFrameWrapper *v17; // [rsp+80h] [rbp+48h] BYREF
  __int64 v18; // [rsp+88h] [rbp+50h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = (unsigned int)++*((_DWORD *)this + 14);
  v3 = *((_QWORD *)this + 9);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = 0;
  if ( v3 < v2 )
  {
    v15 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
    v4 = CApplicationFrameService::_EnsureFrameManager((char *)this - 40, 1LL, &v15);
    if ( v4 >= 0 )
    {
      v16 = 0LL;
      v5 = v15;
      v6 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 24LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
      v4 = v6(v5, &v16);
      if ( v4 >= 0 )
      {
        v17 = 0LL;
        v18 = v16;
        v13 = v15;
        v14 = (char *)this - 40;
        Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalRelease(&v17);
        v4 = Microsoft::WRL::Details::MakeAndInitialize<CApplicationFrameWrapper,CApplicationFrameWrapper,CApplicationFrameService *,IApplicationFrameManager *,IApplicationFrame *>(
               &v17,
               &v14,
               &v13,
               &v18);
        if ( v4 < 0 )
          goto LABEL_12;
        AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        if ( CApplicationFrameWrapper::IsManagedBy(v17, *((struct IApplicationFrameManager **)this + 17)) )
        {
          v4 = 0;
          v7 = *((_QWORD *)this + 9);
          if ( v7 != *((_QWORD *)this + 11)
            || (v4 = CTSimpleArray<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>>::_EnsureCapacity(
                       (__int64)this + 64,
                       v7 + 1),
                v4 >= 0) )
          {
            v8 = *((_QWORD *)this + 9);
            *((_QWORD *)this + 9) = v8 + 1;
            v9 = (__int64 *)(*((_QWORD *)this + 8) + 8 * v8);
            if ( v9 )
            {
              *v9 = (__int64)v17;
              Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalAddRef(v9);
            }
          }
        }
        else
        {
          v4 = -2147024809;
        }
        ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        if ( v4 < 0 )
LABEL_12:
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 40LL))(v15, v16);
        Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalRelease(&v17);
      }
      v10 = v16;
      if ( v16 )
      {
        v16 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      if ( v4 >= 0
        && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
      {
        WPP_SF_d(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
          10LL,
          &WPP_7977c949b5833dbdd5ce02d008d0522d_Traceguids,
          *((unsigned int *)this + 14));
      }
    }
    v11 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
  }
  return (unsigned int)v4;
}
