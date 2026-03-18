/*
 * XREFs of ?RemoveLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z @ 0x1801EE560
 * Callers:
 *     ?RemoveAllTargets@CCompositionLight@@AEAAJW4LightBehavior@@@Z @ 0x1801EE4B4 (-RemoveAllTargets@CCompositionLight@@AEAAJW4LightBehavior@@@Z.c)
 * Callees:
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x180037EF0 (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCount@?$CPtrArray@VCVisual@@@@QEBA_KXZ @ 0x1800BF1E0 (-GetCount@-$CPtrArray@VCVisual@@@@QEBA_KXZ.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x1800C0810 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::RemoveLight(unsigned __int64 *a1, __int64 a2, int a3)
{
  unsigned int v3; // ebp
  bool v4; // r14
  _QWORD *k; // rcx
  _QWORD *i; // rbx
  _QWORD *j; // rax
  unsigned __int64 Count; // rax
  CPtrArrayBase *v12; // rcx
  int v13; // eax

  v3 = 0;
  v4 = 0;
  if ( a3 )
  {
    for ( i = (_QWORD *)a1[37]; i != (_QWORD *)a1[38]; i += 2 )
    {
      if ( *i == a2 )
      {
        for ( j = (_QWORD *)a1[34]; j != (_QWORD *)a1[35]; j += 2 )
        {
          if ( *j == a2 )
          {
            Count = CPtrArray<CVisual>::GetCount((_QWORD *)(a2 + 32));
            v13 = CPtrArrayBase::InsertAt(v12, (unsigned __int64)a1, Count);
            v3 = v13;
            if ( v13 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x4A5u, 0LL);
              return v3;
            }
            v4 = 1;
            break;
          }
        }
        memmove_0(i, i + 2, a1[38] - (_QWORD)(i + 2));
        a1[38] -= 16LL;
LABEL_6:
        if ( v4 )
        {
          (*(void (__fastcall **)(unsigned __int64 *, __int64))(*a1 + 80))(a1, 5LL);
          (*(void (__fastcall **)(unsigned __int64 *, __int64))(*a1 + 80))(a1, 1LL);
        }
        return v3;
      }
    }
  }
  else
  {
    for ( k = (_QWORD *)a1[34]; k != (_QWORD *)a1[35]; k += 2 )
    {
      if ( *k == a2 )
      {
        memmove_0(k, k + 2, a1[35] - (_QWORD)(k + 2));
        a1[35] -= 16LL;
        v4 = CPtrArrayBase::Remove((CPtrArrayBase *)(a2 + 32), a1);
        goto LABEL_6;
      }
    }
  }
  return v3;
}
