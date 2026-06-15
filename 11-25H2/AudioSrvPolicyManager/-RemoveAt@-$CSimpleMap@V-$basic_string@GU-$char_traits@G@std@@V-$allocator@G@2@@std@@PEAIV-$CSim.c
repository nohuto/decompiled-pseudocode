/*
 * XREFs of ?RemoveAt@?$CSimpleMap@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAIV?$CSimpleMapEqualHelper@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAI@ATL@@@ATL@@QEAAHH@Z @ 0x180036680
 * Callers:
 *     ??1CProcess@@MEAA@XZ @ 0x1800333C4 (--1CProcess@@MEAA@XZ.c)
 * Callees:
 *     ??_G?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAPEAXI@Z @ 0x18001AF80 (--_G-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAPEAXI@Z.c)
 *     ?memmove_s@Checked@ATL@@YAXPEAX_KPEBX1@Z @ 0x18001DA28 (-memmove_s@Checked@ATL@@YAXPEAX_KPEBX1@Z.c)
 */

__int64 __fastcall ATL::CSimpleMap<std::wstring,unsigned int *,ATL::CSimpleMapEqualHelper<std::wstring,unsigned int *>>::RemoveAt(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int *v4; // rsi
  __int64 v6; // rax
  ATL::Checked **v7; // r14
  _DWORD *v8; // rbx
  __int64 v9; // rax
  _QWORD *v10; // rbp
  __int64 v11; // rax
  _DWORD *v12; // rcx

  v4 = (int *)(a1 + 2);
  if ( *((int *)a1 + 4) <= 0 )
    return 0LL;
  std::wstring::`scalar deleting destructor'(*a1, a2, a3, a4);
  v6 = *v4;
  v7 = (ATL::Checked **)(a1 + 1);
  if ( (_DWORD)v6 == 1 )
  {
    v8 = v4;
  }
  else
  {
    ATL::Checked::memmove_s(
      (ATL::Checked *)*a1,
      (void *)(32 * v6),
      (const void *)(*a1 + 32),
      (void *)(32LL * ((int)v6 - 1)));
    ATL::Checked::memmove_s(*v7, (void *)(8LL * *v4), (char *)*v7 + 8, (void *)(8LL * (*v4 - 1)));
    v8 = a1 + 2;
  }
  v9 = _o__recalloc(*a1, *v4 - 1, 32LL);
  v10 = v8;
  if ( !v9 )
  {
    if ( *v4 != 1 )
      goto LABEL_9;
    v10 = a1 + 2;
  }
  *a1 = v9;
LABEL_9:
  v11 = _o__recalloc(*v7, *v4 - 1, 8LL);
  v12 = v8;
  if ( v11 || (v12 = v10, *v8 == 1) )
  {
    *v7 = (ATL::Checked *)v11;
    v8 = v12;
  }
  --*v8;
  return 1LL;
}
