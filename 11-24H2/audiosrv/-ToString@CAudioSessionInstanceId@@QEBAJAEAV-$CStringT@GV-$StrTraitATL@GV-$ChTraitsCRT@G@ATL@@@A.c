/*
 * XREFs of ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180014D00
 * Callers:
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x180011B50 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     ?FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@@Z @ 0x180013760 (-FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEAVCEndpointCharacteristics@@PEBU_GUID@@KPEAPEAG@Z @ 0x180013A10 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEAVCEndpointCharacteristics@@PEBU_GUID@@K.c)
 *     ??$?RVCAudioSessionInstanceId@@@?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@QEBA_KAEBVCAudioSessionInstanceId@@@Z @ 0x180014940 (--$-RVCAudioSessionInstanceId@@@-$_Uhash_compare@VCAudioSessionInstanceId@@U-$hash@VCAudioSessio.c)
 *     ?GetInstanceId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x180014B70 (-GetInstanceId@CAudioSession@@UEAAJPEAPEAG@Z.c)
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x180014A60 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800150E8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     memcpy_s @ 0x180042F00 (memcpy_s.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x1800A1154 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAudioSessionInstanceId::ToString(__int64 a1, __int64 *a2)
{
  unsigned int v3; // r14d
  char *v4; // r15
  volatile signed __int32 *v5; // rdi
  volatile signed __int32 *v6; // rbx
  __int64 (__fastcall ***v7)(_QWORD, _QWORD, __int64); // rax
  __int64 result; // rax
  _DWORD *v9; // r12
  __int64 v10; // rax
  __int64 *v11; // rbp
  _DWORD *v12; // rbx
  __int64 *v13; // rdx
  __int64 v14; // [rsp+0h] [rbp-48h] BYREF
  ATL::CAtlException *v15; // [rsp+20h] [rbp-28h] BYREF
  int v16; // [rsp+50h] [rbp+8h]

  v3 = 0;
  v4 = *(char **)(a1 + 72);
  v5 = (volatile signed __int32 *)(v4 - 24);
  v6 = (volatile signed __int32 *)(*a2 - 24);
  if ( v4 - 24 == (char *)v6 )
    goto LABEL_10;
  if ( *((int *)v6 + 4) < 0 || *(_QWORD *)v5 != *(_QWORD *)v6 )
  {
    ATL::CSimpleStringT<unsigned short,0>::SetString(a2, v4, *((_DWORD *)v4 - 4));
    goto LABEL_10;
  }
  v7 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v5 + 32LL))(*(_QWORD *)v5);
  if ( *((int *)v5 + 4) >= 0 && v7 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v5 )
  {
    _InterlockedIncrement(v5 + 4);
  }
  else
  {
    v9 = v5 + 2;
    v10 = (**v7)(v7, *((unsigned int *)v5 + 2), 2LL);
    v5 = (volatile signed __int32 *)v10;
    if ( !v10 )
    {
      try
      {
        ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
      }
      catch ( ATL::CAtlException *v15 )
      {
        v13 = &v14;
        v11 = v13;
        v12 = (_DWORD *)v13[4];
        if ( *v12 == -1073741571 )
          _o__resetstkoflw();
        *((_DWORD *)v11 + 20) = *v12;
        v3 = v16;
        if ( v16 < 0 )
          AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::ToString", 0x423u, v3);
LABEL_10:
        result = v3;
      }
    }
    *(_DWORD *)(v10 + 8) = *v9;
    memcpy_s((void *const)(v10 + 24), 2LL * (*v9 + 1), v4, 2LL * (*v9 + 1));
  }
  if ( _InterlockedExchangeAdd(v6 + 4, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v6 + 8LL))(*(_QWORD *)v6, v6);
  *a2 = (__int64)(v5 + 6);
  goto LABEL_10;
}
