/*
 * XREFs of ?_Change_array@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@AEAAXQEAVWeakRef@WRL@Microsoft@@_K1@Z @ 0x180016C2C
 * Callers:
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1800F325C (--$_Emplace_reallocate@AEBV-$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UI.c)
 *     ??$_Emplace_reallocate@AEAVWeakRef@WRL@Microsoft@@@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@AEAAPEAVWeakRef@WRL@Microsoft@@QEAV234@AEAV234@@Z @ 0x1800F90C0 (--$_Emplace_reallocate@AEAVWeakRef@WRL@Microsoft@@@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1800F91AC (--$_Emplace_reallocate@AEBV-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UISaDev.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180016CE8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

char *__fastcall std::vector<Microsoft::WRL::WeakRef>::_Change_array(char **a1, char *a2, __int64 a3, __int64 a4)
{
  char *v4; // rbx
  char *v9; // rsi
  char *v10; // rcx
  const struct std::nothrow_t *v11; // rdx
  char *result; // rax
  char *v13; // r8
  char *v14; // rcx

  v4 = *a1;
  if ( *a1 )
  {
    v9 = a1[1];
    while ( v4 != v9 )
    {
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v4);
      v4 += 8;
    }
    v10 = *a1;
    v11 = (const struct std::nothrow_t *)((a1[2] - *a1) & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (unsigned __int64)v11 >= 0x1000 )
    {
      v13 = (char *)*((_QWORD *)v10 - 1);
      v11 = (const struct std::nothrow_t *)((char *)v11 + 39);
      v14 = (char *)(v10 - v13);
      if ( (unsigned __int64)(v14 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v14, v11);
        __debugbreak();
        JUMPOUT(0x180016CDFLL);
      }
      v10 = v13;
    }
    operator delete(v10, v11);
  }
  *a1 = a2;
  a1[1] = &a2[8 * a3];
  result = &a2[8 * a4];
  a1[2] = result;
  return result;
}
