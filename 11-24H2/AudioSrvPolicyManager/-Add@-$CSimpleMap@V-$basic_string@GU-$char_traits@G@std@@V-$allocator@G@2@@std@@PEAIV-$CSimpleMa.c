/*
 * XREFs of ?Add@?$CSimpleMap@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAIV?$CSimpleMapEqualHelper@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAI@ATL@@@ATL@@QEAAHAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBQEAI@Z @ 0x1800310BC
 * Callers:
 *     ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x18000B560 (-OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180011B50 (-OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18002C0E4 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CSimpleMap<std::wstring,unsigned int *,ATL::CSimpleMapEqualHelper<std::wstring,unsigned int *>>::Add(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  _QWORD *v9; // rdx

  v6 = _o__recalloc(*(_QWORD *)a1, *(_DWORD *)(a1 + 16) + 1, 32LL);
  if ( !v6 )
    return 0LL;
  *(_QWORD *)a1 = v6;
  v7 = _o__recalloc(*(_QWORD *)(a1 + 8), *(_DWORD *)(a1 + 16) + 1, 8LL);
  if ( !v7 )
    return 0LL;
  *(_QWORD *)(a1 + 8) = v7;
  v8 = *(int *)(a1 + 16);
  if ( *(_QWORD *)a1 + 32 * v8 )
    std::wstring::wstring((_QWORD *)(*(_QWORD *)a1 + 32 * v8), a2);
  v9 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v8);
  if ( v9 )
    *v9 = *a3;
  ++*(_DWORD *)(a1 + 16);
  return 1LL;
}
