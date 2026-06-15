/*
 * XREFs of ?Format@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ @ 0x18001A490
 * Callers:
 *     ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x1800191D0 (-CalculateStaticId@CAppAudioSessionId@@AEAAJXZ.c)
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x18001A2F0 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ?ToString@CAppInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18001C1D4 (-ToString@CAppInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@.c)
 *     ?ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@H@Z @ 0x180028B78 (-ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@.c)
 *     ?GetStreamSwitchId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x180077FC0 (-GetStreamSwitchId@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?ToStreamSwitchString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800A26A8 (-ToStreamSwitchString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsC.c)
 * Callees:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18001AC20 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x180029DB4 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800A4D5C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _invalid_parameter_noinfo @ 0x1800A8AFE (_invalid_parameter_noinfo.c)
 *     vswprintf_s @ 0x1800A8C38 (vswprintf_s.c)
 *     _vscwprintf @ 0x1800A8C9C (_vscwprintf.c)
 *     memcpy_0 @ 0x1800ABC38 (memcpy_0.c)
 *     ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHI@Z @ 0x1800C371C (-LoadStringW@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHI@Z.c)
 *     memmove_0 @ 0x18015E888 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
wchar_t *ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
        wchar_t *const *a1,
        const wchar_t *a2,
        ...)
{
  int v4; // eax
  __int64 v5; // rbp
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdi
  wchar_t *v9; // rbx
  wchar_t *result; // rax
  __int64 v11; // r15
  wchar_t *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // r8
  unsigned __int64 v15; // r13
  __int64 v16; // rcx
  unsigned int v17; // [rsp+20h] [rbp-68h]
  wchar_t *Format[12]; // [rsp+28h] [rbp-60h] BYREF
  __int64 ArgList; // [rsp+A0h] [rbp+18h] BYREF
  va_list ArgLista; // [rsp+A0h] [rbp+18h]
  va_list va1; // [rsp+A8h] [rbp+20h] BYREF

  va_start(va1, a2);
  va_start(ArgLista, a2);
  ArgList = va_arg(va1, _QWORD);
  va_copy((va_list)&Format[1], ArgLista);
  if ( !a2 )
    ATL::AtlThrowImpl(-2147024809);
  v4 = vscwprintf(a2, ArgLista);
  v5 = v4;
  if ( v4 == -1 )
    ATL::AtlThrowImpl(-2147024882);
  v6 = *((_QWORD *)*a1 - 3);
  if ( !v6 || (v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL))(v6)) == 0 )
  {
    v7 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[4])(&ATL::g_strmgr);
    if ( !v7 )
      ATL::AtlThrowImpl(-2147467259);
  }
  v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 24LL))(v7);
  v9 = (wchar_t *)(v13 + 24);
  Format[0] = (wchar_t *)(v13 + 24);
  if ( (unsigned __int64)a2 < 0x10000 )
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::LoadStringW(
      Format,
      (unsigned __int16)a2);
    v9 = Format[0];
    goto LABEL_14;
  }
  v8 = -1LL;
  do
    ++v8;
  while ( a2[v8] );
  if ( !(_DWORD)v8 )
  {
    ATL::CSimpleStringT<unsigned short,0>::Empty(Format);
    v9 = Format[0];
    goto LABEL_14;
  }
  v17 = *(_DWORD *)(v13 + 8);
  v15 = a2 - v9;
  v16 = (unsigned int)(1 - *(_DWORD *)(v13 + 16));
  if ( (int)(v16 | (*(_DWORD *)(v13 + 12) - v8)) < 0 )
  {
    ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(Format, (unsigned int)v8);
    v9 = Format[0];
  }
  v11 = 2LL * (int)v8;
  if ( v15 > v17 )
  {
    if ( !v11 )
      goto LABEL_11;
    if ( v9 )
    {
      memcpy_0(v9, a2, 2LL * (int)v8);
      goto LABEL_11;
    }
    goto LABEL_26;
  }
  v12 = &v9[v15];
  if ( v11 )
  {
    if ( !v9 || !v12 )
    {
LABEL_26:
      *(_DWORD *)_o__errno(v16, v12, v14) = 22;
      invalid_parameter_noinfo();
      goto LABEL_11;
    }
    memmove_0(v9, v12, 2LL * (int)v8);
  }
LABEL_11:
  if ( (int)v8 < 0 || (int)v8 > *((_DWORD *)v9 - 3) )
    ATL::AtlThrowImpl(-2147024809);
  *((_DWORD *)v9 - 4) = v8;
  v9[(unsigned __int64)v11 / 2] = 0;
LABEL_14:
  if ( (int)((*((_DWORD *)*a1 - 3) - v5) | (1 - *((_DWORD *)*a1 - 2))) < 0 )
    ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(a1, (unsigned int)v5);
  vswprintf_s(*a1, (int)v5 + 1, v9, ArgLista);
  if ( (int)v5 < 0 || (int)v5 > *((_DWORD *)*a1 - 3) )
    ATL::AtlThrowImpl(-2147024809);
  *((_DWORD *)*a1 - 4) = v5;
  result = *a1;
  (*a1)[v5] = 0;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v9 - 2, 0xFFFFFFFF) <= 1 )
    return (wchar_t *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v9 - 3) + 8LL))(*((_QWORD *)v9 - 3));
  return result;
}
