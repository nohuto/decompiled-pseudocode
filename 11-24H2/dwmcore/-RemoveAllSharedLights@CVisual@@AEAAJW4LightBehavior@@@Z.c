/*
 * XREFs of ?RemoveAllSharedLights@CVisual@@AEAAJW4LightBehavior@@@Z @ 0x18028BF08
 * Callers:
 *     ?ProcessSetExcludedSharedLights@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETEXCLUDEDSHAREDLIGHTS@@PEBXI@Z @ 0x18028BC28 (-ProcessSetExcludedSharedLights@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETEXCLUD.c)
 *     ?ProcessSetSharedLights@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETSHAREDLIGHTS@@PEBXI@Z @ 0x18028BE30 (-ProcessSetSharedLights@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETSHAREDLIGHTS@@.c)
 * Callees:
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x180037EF0 (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCount@?$CPtrArray@VCVisual@@@@QEBA_KXZ @ 0x1800BF1E0 (-GetCount@-$CPtrArray@VCVisual@@@@QEBA_KXZ.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x1800C0810 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::RemoveAllSharedLights(unsigned __int64 *a1, int a2)
{
  unsigned int v2; // r14d
  char v3; // r15
  char *v5; // rbx
  char *v6; // rbp
  __int64 v7; // rdi
  bool v8; // di
  char *v9; // rbx
  char *v10; // rdi
  __int64 v11; // rbp
  _QWORD *i; // rax
  unsigned __int64 Count; // rax
  CPtrArrayBase *v14; // rcx
  int v15; // eax

  v2 = 0;
  v3 = 0;
  if ( a2 )
  {
    v9 = (char *)a1[37];
    v10 = v9 + 16;
    while ( v9 != (char *)a1[38] )
    {
      if ( *(v10 - 8) )
      {
        v11 = *(_QWORD *)v9;
        (*(void (__fastcall **)(_QWORD, unsigned __int64 *))(**(_QWORD **)v9 + 280LL))(*(_QWORD *)v9, a1);
        for ( i = (_QWORD *)a1[34]; ; i += 2 )
        {
          if ( i == (_QWORD *)a1[35] )
            goto LABEL_17;
          if ( *i == v11 )
            break;
        }
        Count = CPtrArray<CVisual>::GetCount((_QWORD *)(v11 + 32));
        v15 = CPtrArrayBase::InsertAt(v14, (unsigned __int64)a1, Count);
        v2 = v15;
        if ( v15 >= 0 )
        {
          v3 = 1;
LABEL_17:
          memmove_0(v9, v10, a1[38] - (_QWORD)v10);
          a1[38] -= 16LL;
          continue;
        }
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x534u, 0LL);
        break;
      }
      v9 += 16;
      v10 += 16;
    }
  }
  else
  {
    v5 = (char *)a1[34];
    v6 = v5 + 16;
    while ( v5 != (char *)a1[35] )
    {
      if ( *(v6 - 8) )
      {
        v7 = *(_QWORD *)v5;
        (*(void (__fastcall **)(_QWORD, unsigned __int64 *))(**(_QWORD **)v5 + 272LL))(*(_QWORD *)v5, a1);
        v8 = CPtrArrayBase::Remove((CPtrArrayBase *)(v7 + 32), a1);
        memmove_0(v5, v6, a1[35] - (_QWORD)v6);
        a1[35] -= 16LL;
        if ( !v3 )
          v3 = v8;
      }
      else
      {
        v5 += 16;
        v6 += 16;
      }
    }
  }
  if ( v3 )
  {
    (*(void (__fastcall **)(unsigned __int64 *, __int64))(*a1 + 80))(a1, 5LL);
    (*(void (__fastcall **)(unsigned __int64 *, __int64))(*a1 + 80))(a1, 1LL);
  }
  return v2;
}
