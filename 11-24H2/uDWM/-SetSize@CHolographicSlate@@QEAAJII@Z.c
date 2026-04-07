/*
 * XREFs of ?SetSize@CHolographicSlate@@QEAAJII@Z @ 0x1800C49C4
 * Callers:
 *     ?UpdateHolographicSlateBounds@CTopLevelWindow@@AEAAJXZ @ 0x180029B00 (-UpdateHolographicSlateBounds@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CHolographicSlate::SetSize(CHolographicSlate *this, int a2, unsigned int a3)
{
  unsigned int v3; // ebx
  int v7; // eax
  int v8; // eax
  CDesktopManager *v9; // rax

  v3 = 0;
  if ( a2 != *((_DWORD *)this + 14) - *((_DWORD *)this + 12) || a3 != *((_DWORD *)this + 15) - *((_DWORD *)this + 13) )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 24LL))(*((_QWORD *)this + 3));
    v3 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x86u, 0LL);
    }
    else
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 32LL))(*((_QWORD *)this + 3), a3);
      v3 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x87u, 0LL);
      }
      else
      {
        v9 = CDesktopManager::s_pDesktopManagerInstance;
        *((_DWORD *)this + 14) = a2 + *((_DWORD *)this + 12);
        *((_DWORD *)this + 15) = a3 + *((_DWORD *)this + 13);
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)v9 + 6) + 32LL) + 24LL))(*(_QWORD *)(*((_QWORD *)v9 + 6) + 32LL));
      }
    }
  }
  return v3;
}
