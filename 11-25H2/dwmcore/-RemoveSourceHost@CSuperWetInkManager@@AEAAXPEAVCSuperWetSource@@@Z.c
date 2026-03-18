/*
 * XREFs of ?RemoveSourceHost@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z @ 0x180257188
 * Callers:
 *     ?RemoveSource@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z @ 0x180257148 (-RemoveSource@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z.c)
 * Callees:
 *     ?DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ @ 0x180175B0C (-DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180236804 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SendMessageToHostForDestruction@CSuperWetSource@@QEAAJ_K@Z @ 0x18029B3A0 (-SendMessageToHostForDestruction@CSuperWetSource@@QEAAJ_K@Z.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

void __fastcall CSuperWetInkManager::RemoveSourceHost(CSuperWetInkManager *this, struct CSuperWetSource *a2)
{
  __int64 i; // rbx
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  for ( i = *((_QWORD *)this + 7); i != *((_QWORD *)this + 8); i += 120LL )
  {
    if ( *(struct CSuperWetSource **)i == a2 )
    {
      if ( *(_QWORD *)i == *(_QWORD *)this )
        CSuperWetInkManager::DeactivateCurrentSource(this);
      v4 = CSuperWetSource::SendMessageToHostForDestruction(*(CSuperWetSource **)i, *(_QWORD *)(i + 24));
      if ( v4 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xA7,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globalsuperwetinkmanager.cpp",
          (const char *)(unsigned int)v4);
      memmove_0((void *)i, (const void *)(i + 120), *((_QWORD *)this + 8) - (i + 120));
      *((_QWORD *)this + 8) -= 120LL;
      return;
    }
  }
}
