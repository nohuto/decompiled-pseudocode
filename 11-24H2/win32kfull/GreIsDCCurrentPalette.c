/*
 * XREFs of GreIsDCCurrentPalette @ 0x14030F7C4
 * Callers:
 *     xxxRealizePalette @ 0x1401D6620 (xxxRealizePalette.c)
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C8FBC (--0APIDCOBJ@@QEAA@PEAUHDC__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

__int64 __fastcall GreIsDCCurrentPalette(Gre::Base *a1)
{
  unsigned int v2; // edi
  struct Gre::Base::SESSION_GLOBALS *v3; // rsi
  __int64 v4; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v6; // rdx
  _QWORD v8[14]; // [rsp+20h] [rbp-78h] BYREF

  v2 = 0;
  v3 = Gre::Base::Globals(a1);
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v8, (HDC)a1, v3);
  if ( v8[0] )
  {
    if ( *(_QWORD *)(v8[0] + 80LL) == *((_QWORD *)v3 + 457) )
      goto LABEL_8;
    if ( *(_DWORD *)(*(_QWORD *)(v8[0] + 976LL) + 208LL) == 1 )
    {
      v4 = (unsigned __int16)*((_DWORD *)v3 + 914) | (*((_DWORD *)v3 + 914) >> 8) & 0xFF0000u;
      if ( ((unsigned __int16)*(_DWORD *)(v8[0] + 80LL) | (*(_DWORD *)(v8[0] + 80LL) >> 8) & 0xFF0000) == (_DWORD)v4 )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
        v6 = CurrentProcessWin32Process;
        if ( CurrentProcessWin32Process )
          v6 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
        if ( *((_QWORD *)v3 + 458) == v6 )
LABEL_8:
          v2 = 1;
      }
    }
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v8);
  return v2;
}
