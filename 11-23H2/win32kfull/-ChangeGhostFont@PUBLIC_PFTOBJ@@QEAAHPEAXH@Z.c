/*
 * XREFs of ?ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z @ 0x1C0269FCC
 * Callers:
 *     GreChangeGhostFont @ 0x1C0277270 (GreChangeGhostFont.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FB6CC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C013DEC0 (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 *     ?GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z @ 0x1C015921A (-GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z.c)
 *     ?bIsPrivatePFT@PFTOBJ@@QEBAHXZ @ 0x1C026A68C (-bIsPrivatePFT@PFTOBJ@@QEBAHXZ.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::ChangeGhostFont(PUBLIC_PFTOBJ *this, void *a2, int a3)
{
  unsigned int v4; // esi
  unsigned int v6; // edi
  __int64 result; // rax
  unsigned int v8; // r15d
  unsigned int CurrentThreadId; // r13d
  Gre::Base *v10; // rcx
  struct Gre::Base::SESSION_GLOBALS *v11; // rbx
  struct PFF *PFFFromId; // rax
  unsigned int v13; // ebx
  struct PFF *v14; // r12
  __int64 v15; // rsi
  struct PFF **v16; // rcx
  struct PFF *i; // rcx
  struct PFF *v18; // rax
  struct PFF *v19; // r8
  __int64 j; // rcx
  int v21; // edx
  int v22; // eax
  bool v23; // zf
  int v24; // eax
  __int64 v25; // [rsp+68h] [rbp+20h] BYREF

  v4 = (unsigned int)a2;
  v6 = 0;
  result = PFTOBJ::bIsPrivatePFT(this);
  if ( (_DWORD)result )
  {
    v8 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
    CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
    v11 = Gre::Base::Globals(v10);
    v25 = *((_QWORD *)v11 + 6);
    GreAcquireSemaphore(v25);
    PFFFromId = GetPFFFromId(*((struct PFT **)v11 + 796), v4, 0LL);
    v13 = 0;
    v14 = PFFFromId;
    v15 = 40LL;
    do
    {
      if ( v6 )
        break;
      v16 = (struct PFF **)(v15 + *(_QWORD *)this);
      if ( v16 )
      {
        for ( i = *v16; ; i = (struct PFF *)*((_QWORD *)v19 + 1) )
        {
          v18 = SkipInvalidPff(i);
          v19 = v18;
          if ( !v18 )
            break;
          if ( v14 == v18 )
          {
            for ( j = *((_QWORD *)v18 + 18); j; j = *(_QWORD *)(j + 16) )
            {
              v21 = *(_DWORD *)(j + 8);
              v22 = *(_DWORD *)(j + 12);
              if ( (v21 & 4) != 0 )
                v23 = v22 == CurrentThreadId;
              else
                v23 = v22 == v8;
              if ( v23 )
              {
                v24 = *(_DWORD *)(j + 4);
                if ( a3 )
                {
                  v6 = 1;
                  *(_DWORD *)(j + 4) = v24 + 1;
                  *(_DWORD *)(j + 8) = v21 | 0x40;
                  goto LABEL_21;
                }
                if ( v24 )
                {
                  *(_DWORD *)(j + 4) = v24 - 1;
                  *(_DWORD *)(j + 8) = v21 & 0xFFFFFFBF;
                }
                break;
              }
            }
          }
        }
      }
LABEL_21:
      ++v13;
      v15 += 8LL;
    }
    while ( v13 < 0x14 );
    SEMOBJ::vUnlock((SEMOBJ *)&v25);
    return v6;
  }
  return result;
}
