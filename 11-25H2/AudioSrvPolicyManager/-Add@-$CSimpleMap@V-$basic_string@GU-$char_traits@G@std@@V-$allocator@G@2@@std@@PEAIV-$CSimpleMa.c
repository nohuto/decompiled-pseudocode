/*
 * XREFs of ?Add@?$CSimpleMap@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAIV?$CSimpleMapEqualHelper@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAI@ATL@@@ATL@@QEAAHAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBQEAI@Z @ 0x180033A9C
 * Callers:
 *     ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180002360 (-OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180004B00 (-OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18002EAC0 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CSimpleMap<std::wstring,unsigned int *,ATL::CSimpleMapEqualHelper<std::wstring,unsigned int *>>::Add(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdi
  _QWORD *v11; // rdx

  v6 = _o__recalloc(*(_QWORD *)a1, *(_DWORD *)(a1 + 16) + 1, 32LL);
  if ( !v6 )
    return 0LL;
  *(_QWORD *)a1 = v6;
  v7 = _o__recalloc(*(_QWORD *)(a1 + 8), *(_DWORD *)(a1 + 16) + 1, 8LL);
  if ( !v7 )
    return 0LL;
  *(_QWORD *)(a1 + 8) = v7;
  v10 = *(int *)(a1 + 16);
  if ( *(_QWORD *)a1 + 32 * v10 )
    std::wstring::wstring((_QWORD *)(*(_QWORD *)a1 + 32 * v10), a2, v8, v9);
  v11 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v10);
  if ( v11 )
    *v11 = *a3;
  ++*(_DWORD *)(a1 + 16);
  return 1LL;
}
