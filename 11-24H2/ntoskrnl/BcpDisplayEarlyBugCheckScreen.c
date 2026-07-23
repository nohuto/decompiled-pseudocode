/*
 * XREFs of BcpDisplayEarlyBugCheckScreen @ 0x140C72ADC
 * Callers:
 *     BgpFwDisplayBugCheckScreen @ 0x14069B3E0 (BgpFwDisplayBugCheckScreen.c)
 *     BgpFwDisplayBugCheckScreenModernized @ 0x14069B730 (BgpFwDisplayBugCheckScreenModernized.c)
 * Callees:
 *     BgConsoleDestroyInterface @ 0x140BB2940 (BgConsoleDestroyInterface.c)
 *     BgConsoleGetInterface @ 0x140BB29A0 (BgConsoleGetInterface.c)
 */

__int64 __fastcall BcpDisplayEarlyBugCheckScreen(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // r14
  unsigned int v6; // esi
  __int64 (__fastcall **Interface)(); // rax
  __int64 (__fastcall **v8)(); // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r8
  int v13; // r10d
  unsigned __int8 v14; // dl
  _WORD *v15; // r9
  __int16 v16; // ax
  _QWORD *v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // r8
  int v20; // r9d
  unsigned __int8 v21; // dl
  _WORD *v22; // r10
  __int16 v23; // ax

  v5 = (_QWORD *)a2;
  v6 = a1;
  Interface = (__int64 (__fastcall **)())BgConsoleGetInterface(a1, a2, a3, a4);
  v8 = Interface;
  if ( Interface )
  {
    if ( ((int (__fastcall *)(__int64, __int64, __int64, _QWORD))*Interface)(2LL, 0xFFFFFFFFLL, 4278190080LL, 0LL) >= 0 )
    {
      v8[1]();
      ((void (__fastcall *)(const wchar_t *))v8[3])(L"Your device needs to restart.\r\n");
      ((void (__fastcall *)(const wchar_t *))v8[3])(L"Please hold down the power button.\r\n");
      ((void (__fastcall *)(const wchar_t *))v8[3])(L"Error Code:");
      ((void (__fastcall *)(const wchar_t *))v8[3])(L" ");
      if ( *(_WORD *)(a3 + 18) >= 0x16u )
      {
        LODWORD(v12) = 2;
        v13 = 28;
        **(_WORD **)(a3 + 24) = 48;
        *(_WORD *)(*(_QWORD *)(a3 + 24) + 2LL) = 120;
        do
        {
          v14 = (v6 >> v13) & 0xF;
          v15 = (_WORD *)(*(_QWORD *)(a3 + 24) + 2LL * (unsigned int)v12);
          if ( v14 >= 0xAu )
            v16 = (unsigned __int8)(v14 - 10) + 65;
          else
            v16 = v14 + 48;
          v12 = (unsigned int)(v12 + 1);
          *v15 = v16;
          v13 -= 4;
        }
        while ( v13 >= 0 );
        *(_WORD *)(*(_QWORD *)(a3 + 24) + 2 * v12) = 0;
        ((void (__fastcall *)(_QWORD))v8[3])(*(_QWORD *)(a3 + 24));
        ((void (__fastcall *)(const wchar_t *))v8[3])(L"\r\n");
      }
      ((void (__fastcall *)(const wchar_t *))v8[3])(L"Parameters:");
      ((void (__fastcall *)(const wchar_t *))v8[3])(L"\r\n");
      v17 = (_QWORD *)(a3 + 40);
      v18 = 4LL;
      do
      {
        if ( *((_WORD *)v17 - 3) >= 0x26u )
        {
          LODWORD(v19) = 2;
          *(_WORD *)*v17 = 48;
          v20 = 60;
          *(_WORD *)(*v17 + 2LL) = 120;
          do
          {
            v21 = (*v5 >> v20) & 0xF;
            v22 = (_WORD *)(*v17 + 2LL * (unsigned int)v19);
            if ( v21 >= 0xAu )
              v23 = (unsigned __int8)(v21 - 10) + 65;
            else
              v23 = v21 + 48;
            v19 = (unsigned int)(v19 + 1);
            *v22 = v23;
            v20 -= 4;
          }
          while ( v20 >= 0 );
          *(_WORD *)(*v17 + 2 * v19) = 0;
          ((void (__fastcall *)(_QWORD))v8[3])(*v17);
          ((void (__fastcall *)(const wchar_t *))v8[3])(L"\r\n");
        }
        ++v5;
        v17 += 2;
        --v18;
      }
      while ( v18 );
    }
    BgConsoleDestroyInterface(v8, v9, v10, v11);
  }
  return 0LL;
}
