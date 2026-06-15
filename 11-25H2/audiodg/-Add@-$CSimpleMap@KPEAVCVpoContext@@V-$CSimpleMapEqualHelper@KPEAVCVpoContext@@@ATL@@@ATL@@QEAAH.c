/*
 * XREFs of ?Add@?$CSimpleMap@KPEAVCVpoContext@@V?$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@QEAAHAEBKAEBQEAVCVpoContext@@@Z @ 0x140075DFC
 * Callers:
 *     ?Initialize@CVpoContext@@UEAAJPEAUISubmix@@PEAUIAudioDeviceGraph@@@Z @ 0x1400761A0 (-Initialize@CVpoContext@@UEAAJPEAUISubmix@@PEAUIAudioDeviceGraph@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CSimpleMap<unsigned long,CVpoContext *,ATL::CSimpleMapEqualHelper<unsigned long,CVpoContext *>>::Add(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  void *v5; // rax
  char *v6; // rax
  __int64 v7; // rdx
  _DWORD *v8; // r8
  char *v9; // rcx
  __int64 result; // rax

  v5 = (void *)_o__recalloc(CVpoContext::s_mapVpoContext, dword_1400C4840 + 1, 4LL);
  if ( !v5 )
    return 0LL;
  CVpoContext::s_mapVpoContext = v5;
  v6 = (char *)_o__recalloc(qword_1400C4838, dword_1400C4840 + 1, 8LL);
  if ( !v6 )
    return 0LL;
  v7 = dword_1400C4840;
  qword_1400C4838 = v6;
  v8 = (char *)CVpoContext::s_mapVpoContext + 4 * dword_1400C4840;
  if ( v8 )
  {
    *v8 = *a2;
    v6 = (char *)qword_1400C4838;
  }
  v9 = &v6[8 * v7];
  if ( v9 )
    *(_QWORD *)v9 = *a3;
  result = 1LL;
  ++dword_1400C4840;
  return result;
}
