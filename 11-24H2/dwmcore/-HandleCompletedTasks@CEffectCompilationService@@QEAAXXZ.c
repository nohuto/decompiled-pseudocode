/*
 * XREFs of ?HandleCompletedTasks@CEffectCompilationService@@QEAAXXZ @ 0x18007CAD8
 * Callers:
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x18007AD60 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18003A510 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18008FCF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ @ 0x1801549DC (-OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ.c)
 *     ?RemoveAt@?$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z @ 0x1801B002C (-RemoveAt@-$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1801BEBA0 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ??$_Emplace_reallocate@AEB_K@?$vector@_KV?$allocator@_K@std@@@std@@AEAAPEA_KQEA_KAEB_K@Z @ 0x1801FFBEC (--$_Emplace_reallocate@AEB_K@-$vector@_KV-$allocator@_K@std@@@std@@AEAAPEA_KQEA_KAEB_K@Z.c)
 */

void __fastcall CEffectCompilationService::HandleCompletedTasks(CEffectCompilationService *this)
{
  __int64 v2; // rbp
  __int64 v3; // rsi
  __int64 v5; // rax
  _QWORD *v6; // r14
  _QWORD *i; // rbx
  _QWORD *v8; // rdx
  CGlobalComposition *CurrentFrameId; // rax
  unsigned int v10; // ecx
  unsigned __int64 v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  char *v16; // [rsp+40h] [rbp+8h] BYREF

  v16 = (char *)this + 16;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  if ( *((_DWORD *)this + 50) )
  {
    do
    {
      v2 = 0LL;
      v3 = **((_QWORD **)this + 8);
      *(_BYTE *)(v3 + 96) = 1;
      if ( *(_DWORD *)(v3 + 48) )
      {
        do
        {
          CCompiledEffectTemplate::OnCompilationCompleted(*(CCompiledEffectTemplate **)(*(_QWORD *)(v3 + 24) + 8 * v2));
          v2 = (unsigned int)(v2 + 1);
        }
        while ( (unsigned int)v2 < *(_DWORD *)(v3 + 48) );
      }
      *(_DWORD *)(v3 + 48) = 0;
      DynArrayImpl<0>::ShrinkToSize(v3 + 24, 8LL);
      DynArray<CScratchRenderTargetBitmap *,0>::RemoveAt((char *)this + 64, 0LL);
    }
    while ( (*((_DWORD *)this + 50))-- != 1 );
  }
  if ( *((_BYTE *)this + 242) )
  {
    *((_BYTE *)this + 242) = 0;
    v5 = *((_QWORD *)this + 27);
    if ( v5 != *((_QWORD *)this + 28) )
      *((_QWORD *)this + 28) = v5;
    if ( !*((_BYTE *)this + 240) )
    {
      v6 = (_QWORD *)*((_QWORD *)this + 13);
      for ( i = (_QWORD *)*v6; i != v6; i = (_QWORD *)*i )
      {
        if ( *(int *)(i[4] + 72LL) > 1 )
        {
          v8 = (_QWORD *)*((_QWORD *)this + 28);
          if ( v8 == *((_QWORD **)this + 29) )
          {
            std::vector<unsigned __int64>::_Emplace_reallocate<unsigned __int64 const &>((char *)this + 216);
          }
          else
          {
            *v8 = i[2];
            *((_QWORD *)this + 28) += 8LL;
          }
        }
      }
    }
  }
  CurrentFrameId = GetCurrentFrameId();
  v10 = *((_DWORD *)this + 50);
  v11 = (unsigned __int64)CurrentFrameId;
  *((_QWORD *)this + 26) = CurrentFrameId;
  v12 = *((_DWORD *)this + 22);
  if ( v10 < v12 )
  {
    v13 = 8LL * v10;
    v14 = v12 - v10;
    do
    {
      v15 = *(_QWORD *)(v13 + *((_QWORD *)this + 8));
      v13 += 8LL;
      if ( v11 >= *(_QWORD *)(v15 + 8) - 1LL )
        v11 = *(_QWORD *)(v15 + 8) - 1LL;
      *((_QWORD *)this + 26) = v11;
      --v14;
    }
    while ( v14 );
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v16, v11);
}
