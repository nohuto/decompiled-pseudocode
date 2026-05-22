/*
 * XREFs of ?UpdateContactState@ShellGesturesRecognizer@@AEAAXPEBUPointerInputInfo@@@Z @ 0x180066278
 * Callers:
 *     ?OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180088DB0 (-OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRe.c)
 * Callees:
 *     ?GetPointerInfoTimePoint@QpcTimeConverter@@QEBA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@PEBUtagPOINTER_INFO@@@Z @ 0x180057F04 (-GetPointerInfoTimePoint@QpcTimeConverter@@QEBA-AV-$time_point@Usteady_clock@chrono@std@@V-$dura.c)
 *     ??$emplace@AEBIAEAUContactState@ShellGesturesRecognizer@@@?$_Hash@V?$_Umap_traits@KUContactState@ShellGesturesRecognizer@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUContactState@ShellGesturesRecognizer@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUContactState@ShellGesturesRecognizer@@@std@@@std@@@std@@@std@@_N@1@AEBIAEAUContactState@ShellGesturesRecognizer@@@Z @ 0x180158F38 (--$emplace@AEBIAEAUContactState@ShellGesturesRecognizer@@@-$_Hash@V-$_Umap_traits@KUContactState.c)
 */

void __fastcall ShellGesturesRecognizer::UpdateContactState(__int64 this, const struct PointerInputInfo *a2)
{
  char *v2; // rsi
  int v3; // r11d
  _QWORD *v4; // r14
  char *v5; // rdi
  int v6; // r11d
  __int64 v7; // rax
  ShellGesturesRecognizer *v8; // rbx
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // r8d
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  _BYTE v22[16]; // [rsp+20h] [rbp-30h] BYREF
  _DWORD v23[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v24; // [rsp+38h] [rbp-18h]
  __int64 v25; // [rsp+40h] [rbp-10h]
  __int64 v26; // [rsp+48h] [rbp-8h]
  int v27; // [rsp+70h] [rbp+20h]
  __int64 v28; // [rsp+78h] [rbp+28h] BYREF

  v3 = *(_DWORD *)(this + 100);
  v4 = (_QWORD *)(this + 200);
  v5 = (char *)a2 + 320;
  *(_DWORD *)(this + 120) = *(_DWORD *)(this + 96);
  v6 = v3 + 1;
  v7 = *(_QWORD *)(this + 112);
  *(_DWORD *)(this + 100) = v6;
  v8 = (ShellGesturesRecognizer *)this;
  *(_QWORD *)(this + 128) = v7;
  v9 = *((_QWORD *)a2 + 50);
  if ( *(_QWORD *)(this + 200) )
  {
    v10 = v9 / *v4;
    this = *v4 * v10;
    v11 = v4[1] * v10 + v4[1] * (v9 - this) / *v4;
  }
  else
  {
    v11 = 1000LL * *((unsigned int *)a2 + 96);
  }
  v12 = 1000 * v11;
  *((_QWORD *)v8 + 14) = v12;
  if ( v6 == 1 )
  {
    *((_QWORD *)v8 + 13) = v12;
    *((_QWORD *)v8 + 16) = v12;
  }
  *((_DWORD *)v8 + 24) = 0;
  if ( a2 == (const struct PointerInputInfo *)-320LL && MEMORY[0xFFFFFFFFFFFFFFFC] )
  {
    _o_terminate(this);
    __debugbreak();
LABEL_27:
    v26 = 0LL;
    v24 = 0LL;
    v23[0] = *((_DWORD *)v5 + 13);
    v23[1] = *((_DWORD *)v5 + 14);
    v25 = *QpcTimeConverter::GetPointerInfoTimePoint(v4, &v28, (__int64)(v5 - 4));
    v20 = *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,ShellGesturesRecognizer::ContactState,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ShellGesturesRecognizer::ContactState>>,0>>::emplace<unsigned int const &,ShellGesturesRecognizer::ContactState &>(
                       (char *)v8 + 136,
                       v22,
                       v5,
                       v23);
LABEL_19:
    *(_DWORD *)(v20 + 32) = *((_DWORD *)v5 + 13);
    *(_DWORD *)(v20 + 36) = *((_DWORD *)v5 + 14);
    if ( *v4 )
      v21 = v4[1] * (*(_QWORD *)(v5 + 76) / *v4)
          + v4[1] * (*(_QWORD *)(v5 + 76) - *v4 * (*(_QWORD *)(v5 + 76) / *v4)) / *v4;
    else
      v21 = 1000LL * *((unsigned int *)v5 + 15);
    *(_QWORD *)(v20 + 48) = 1000 * v21;
    while ( 1 )
    {
      v5 += 144;
      if ( v5 - 4 == v2 )
        break;
LABEL_8:
      if ( (v5[8] & 4) != 0 )
      {
        ++*((_DWORD *)v8 + 24);
        v13 = 0xCBF29CE484222325uLL;
        v14 = *(_DWORD *)v5;
        v15 = 0LL;
        v27 = *(_DWORD *)v5;
        do
        {
          v16 = *((unsigned __int8 *)&v27 + v15++);
          v13 = 0x100000001B3LL * (v16 ^ v13);
        }
        while ( v15 < 4 );
        v17 = *((_QWORD *)v8 + 20);
        v18 = *((_QWORD *)v8 + 18);
        v19 = 2 * (v13 & *((_QWORD *)v8 + 23));
        v20 = *(_QWORD *)(v17 + 16 * (v13 & *((_QWORD *)v8 + 23)) + 8);
        if ( v20 == v18 )
        {
LABEL_15:
          v20 = 0LL;
        }
        else
        {
          while ( v14 != *(_DWORD *)(v20 + 16) )
          {
            if ( v20 == *(_QWORD *)(v17 + 8 * v19) )
              goto LABEL_15;
            v20 = *(_QWORD *)(v20 + 8);
          }
        }
        if ( !v20 )
          v20 = *((_QWORD *)v8 + 18);
        if ( v20 == v18 )
          goto LABEL_27;
        goto LABEL_19;
      }
    }
  }
  else
  {
    v2 = &v5[144 * *((unsigned int *)a2 + 79)];
    if ( v5 != v2 )
    {
      v5 = (char *)a2 + 324;
      goto LABEL_8;
    }
  }
}
