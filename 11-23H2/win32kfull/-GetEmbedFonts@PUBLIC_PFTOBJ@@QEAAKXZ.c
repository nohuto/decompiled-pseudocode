/*
 * XREFs of ?GetEmbedFonts@PUBLIC_PFTOBJ@@QEAAKXZ @ 0x1C026A118
 * Callers:
 *     NtGdiGetEmbedFonts @ 0x1C02C2780 (NtGdiGetEmbedFonts.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FB6CC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C013DEC0 (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 *     ?bIsPrivatePFT@PFTOBJ@@QEBAHXZ @ 0x1C026A68C (-bIsPrivatePFT@PFTOBJ@@QEBAHXZ.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::GetEmbedFonts(PUBLIC_PFTOBJ *this)
{
  unsigned int v2; // ebx
  __int64 result; // rax
  unsigned int v4; // r14d
  unsigned int CurrentThreadId; // r15d
  Gre::Base *v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rbp
  struct PFF **v9; // rcx
  struct PFF *i; // rcx
  __int64 j; // rdx
  int v12; // r9d
  unsigned int v13; // eax
  struct PFF *v14; // rax
  struct PFF *v15; // r8
  __int64 v16; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  result = PFTOBJ::bIsPrivatePFT(this);
  if ( (_DWORD)result )
  {
    v4 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
    CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
    v16 = *((_QWORD *)Gre::Base::Globals(v6) + 6);
    GreAcquireSemaphore(v16);
    v7 = 40LL;
    v8 = 20LL;
    do
    {
      v9 = (struct PFF **)(v7 + *(_QWORD *)this);
      if ( v9 )
      {
        for ( i = *v9; ; i = (struct PFF *)*((_QWORD *)v15 + 1) )
        {
          v14 = SkipInvalidPff(i);
          v15 = v14;
          if ( !v14 )
            break;
          for ( j = *((_QWORD *)v14 + 18); j; j = *(_QWORD *)(j + 16) )
          {
            v12 = *(_DWORD *)(j + 12);
            if ( (*(_DWORD *)(j + 8) & 4) != 0 )
            {
              v13 = v2 + 1;
              if ( v12 != CurrentThreadId )
                v13 = v2;
              v2 = v13;
            }
            else if ( v12 == v4 )
            {
              ++v2;
            }
          }
        }
      }
      v7 += 8LL;
      --v8;
    }
    while ( v8 );
    SEMOBJ::vUnlock((SEMOBJ *)&v16);
    return v2;
  }
  return result;
}
