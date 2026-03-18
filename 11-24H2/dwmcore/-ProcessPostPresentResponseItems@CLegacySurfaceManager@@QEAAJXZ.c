/*
 * XREFs of ?ProcessPostPresentResponseItems@CLegacySurfaceManager@@QEAAJXZ @ 0x1801CD700
 * Callers:
 *     ?AdvanceFrame@CGlobalSurfaceManager@@UEAAJ_N@Z @ 0x1800F3810 (-AdvanceFrame@CGlobalSurfaceManager@@UEAAJ_N@Z.c)
 *     ??1CLegacySurfaceManager@@UEAA@XZ @ 0x18025E4F8 (--1CLegacySurfaceManager@@UEAA@XZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnPresentComplete@CAsyncFlushResponse@@UEAAJXZ @ 0x1801CD7E0 (-OnPresentComplete@CAsyncFlushResponse@@UEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacySurfaceManager::ProcessPostPresentResponseItems(CLegacySurfaceManager *this)
{
  int v1; // edi
  __int64 v2; // rsi
  __int64 result; // rax
  CAsyncFlushResponse *v5; // r14
  __int64 (__fastcall *v6)(CAsyncFlushResponse *__hidden); // rax
  int v7; // eax
  int v8; // ebp

  v1 = 0;
  v2 = 0LL;
  if ( *((_DWORD *)this + 42) )
  {
    do
    {
      v5 = *(CAsyncFlushResponse **)(*((_QWORD *)this + 18) + 8 * v2);
      v6 = *(__int64 (__fastcall **)(CAsyncFlushResponse *__hidden))(*(_QWORD *)v5 + 48LL);
      if ( v6 == CAsyncFlushResponse::OnPresentComplete )
        v7 = CAsyncFlushResponse::OnPresentComplete(v5);
      else
        v7 = v6(v5);
      v8 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x183u, 0LL);
      if ( !v1 || v1 >= 0 && v8 < 0 )
        v1 = v8;
      (*(void (__fastcall **)(CAsyncFlushResponse *))(*(_QWORD *)v5 + 8LL))(v5);
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < *((_DWORD *)this + 42) );
    result = (unsigned int)v1;
    *((_DWORD *)this + 42) = 0;
  }
  else
  {
    *((_DWORD *)this + 42) = 0;
    return 0LL;
  }
  return result;
}
