/*
 * XREFs of ?RegisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z @ 0x18010B894
 * Callers:
 *     ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x180018FB4 (-UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180036F9C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

void __fastcall CWindowList::RegisterAccentState(CWindowList *a1, struct CWindowData *a2, unsigned int a3)
{
  unsigned int v4; // r11d
  __int64 v5; // r10
  unsigned int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // edx
  int v10; // eax
  __int128 v11; // [rsp+30h] [rbp-18h] BYREF

  if ( a3 )
  {
    v4 = *((_DWORD *)a1 + 150);
    v5 = (__int64)a1 + 576;
    v6 = 0;
    if ( v4 )
    {
      v7 = *(_QWORD *)v5;
      while ( *(struct CWindowData **)(v7 + 16LL * v6) != a2 )
      {
        if ( ++v6 >= v4 )
          goto LABEL_7;
      }
      *(_DWORD *)(v7 + 16LL * v6 + 8) = a3;
    }
    else
    {
LABEL_7:
      v8 = *(unsigned int *)(v5 + 24);
      *(_QWORD *)&v11 = a2;
      *((_QWORD *)&v11 + 1) = a3;
      v9 = v8 + 1;
      if ( (int)v8 + 1 >= (unsigned int)v8 )
      {
        if ( v9 > *(_DWORD *)(v5 + 20) )
        {
          v10 = DynArrayImpl<0>::AddMultipleAndSet(v5, 16, 1, &v11);
          if ( v10 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0xC0u);
        }
        else
        {
          *(_OWORD *)(*(_QWORD *)v5 + 16 * v8) = v11;
          *(_DWORD *)(v5 + 24) = v9;
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
      }
    }
  }
  else
  {
    CWindowList::UnregisterAccentState(a1, a2);
  }
}
