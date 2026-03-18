/*
 * XREFs of ?RevalidationCleanup@CManipulationContext@@CAXHPEAUMCCollections@@PEAV?$CQueue@PEAVCResource@@@@@Z @ 0x180210994
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@IEAAXXZ @ 0x1800901C0 (-OnInteractionUpdate@CManipulationManager@@IEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x18008E308 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Insert@?$CQueue@PEAVCResource@@@@AEAAJ_NPEAVCResource@@@Z @ 0x1800906AC (-Insert@-$CQueue@PEAVCResource@@@@AEAAJ_NPEAVCResource@@@Z.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CManipulationContext::RevalidationCleanup(int a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  __int64 v4; // rbp
  int v5; // r15d
  __int64 v6; // rsi
  int v7; // r14d
  __int64 v8; // rbx
  int v9; // ecx
  __int64 v10; // r12
  __int64 v11; // r13
  _QWORD *v12; // rax
  __int64 v13; // rcx
  int v14; // edx
  __int64 v15; // rcx
  int v16; // [rsp+60h] [rbp+8h]

  if ( a1 > 0 )
  {
    v3 = 0;
    v4 = a2;
    v5 = a1;
    v6 = 0LL;
    v7 = 1;
    do
    {
      v8 = *(_QWORD *)(v6 + *(_QWORD *)(v4 + 24));
      if ( v8 )
        (**(void (__fastcall ***)(_QWORD))v8)(*(_QWORD *)(v6 + *(_QWORD *)(v4 + 24)));
      if ( (*(_BYTE *)(v8 + 28) & 4) != 0 )
      {
        v9 = 0;
        v16 = 0;
        if ( *(int *)(v8 + 72) > 0 )
        {
          v10 = 0LL;
          do
          {
            v11 = *(_QWORD *)(v10 + *(_QWORD *)(v8 + 64));
            if ( v11 )
            {
              while ( 1 )
              {
                v12 = (_QWORD *)(v11 + 208);
                v11 = *(_QWORD *)(v11 + 208);
                if ( !v11 )
                  break;
                *v12 = 0LL;
                CQueue<CResource *>::Insert(a3, a2, v11);
              }
              v9 = v16;
            }
            ++v9;
            v10 += 8LL;
            v16 = v9;
          }
          while ( v9 < *(_DWORD *)(v8 + 72) );
          v4 = a2;
        }
        v13 = *(_QWORD *)(v4 + 24);
        if ( *(_QWORD *)(*(_QWORD *)(v6 + v13) + 48LL) )
        {
          *(_BYTE *)(v8 + 28) &= ~4u;
        }
        else
        {
          if ( v3 >= 0 && v7 <= *(_DWORD *)(v4 + 32) )
          {
            Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)(v13 + 8LL * v3));
            v14 = *(_DWORD *)(v4 + 32);
            if ( v7 != v14 )
            {
              v15 = *(_QWORD *)(v4 + 24) + 8LL * v3;
              memmove_0((void *)v15, (const void *)(v15 + 8), 8LL * (v14 - v3 - 1));
            }
            --*(_DWORD *)(v4 + 32);
          }
          --v5;
          --v3;
          --v7;
          v6 -= 8LL;
        }
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      ++v3;
      ++v7;
      v6 += 8LL;
    }
    while ( v3 < v5 );
  }
}
