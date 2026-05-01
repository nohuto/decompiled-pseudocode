/*
 * XREFs of ??$GetAppPosition@VCImmersiveAppFinderByHwnd@@@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEBAJAEBVCImmersiveAppFinderByHwnd@@_KPEA_K@Z @ 0x18009BC30
 * Callers:
 *     ?_GetFrameByHwnd@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIApplicationFrameProxy@@@Z @ 0x18009B754 (-_GetFrameByHwnd@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIApplicationFrameProxy@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::GetAppPosition<CImmersiveAppFinderByHwnd>(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        unsigned __int64 *a4)
{
  unsigned int v7; // edi
  unsigned __int64 i; // rsi
  __int64 v9; // rbx
  int v10; // r12d
  unsigned __int8 (__fastcall *v11)(__int64, __int64 *, _QWORD); // r9
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v15; // [rsp+28h] [rbp-18h] BYREF
  __int64 v16; // [rsp+30h] [rbp-10h]
  char v17; // [rsp+38h] [rbp-8h]
  __int64 v18; // [rsp+90h] [rbp+50h] BYREF
  __int64 v19; // [rsp+98h] [rbp+58h]

  v18 = a3;
  v7 = 0;
  *a4 = 0LL;
  for ( i = 0LL; i < *(_QWORD *)(a1 + 16); ++i )
  {
    v19 = 0LL;
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * i);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    v10 = -1;
    v18 = 0LL;
    if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v9)(v9, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v18) >= 0 )
    {
      v11 = *(unsigned __int8 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v18 + 296LL);
      v15 = *a2;
      v16 = 0LL;
      v17 = 0;
      v10 = (v11(v18, &v15, *((unsigned int *)a2 + 2)) != 0) - 1;
      v12 = v16;
      if ( v16 )
      {
        v16 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
    }
    v13 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    if ( !v10 )
    {
      *a4 = i;
      return v7;
    }
  }
  return (unsigned int)-2147319765;
}
