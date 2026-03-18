/*
 * XREFs of ?GetWindowWorker@@YAPEAUtagWND@@PEAU1@IH@Z @ 0x1400F8428
 * Callers:
 *     ?_GetNextQueueWindow@@YAPEAUtagWND@@PEAU1@HH@Z @ 0x1400F829C (-_GetNextQueueWindow@@YAPEAUtagWND@@PEAU1@HH@Z.c)
 *     ?CheckTopmost@@YAHPEAUtagCVR@@@Z @ 0x14022AA20 (-CheckTopmost@@YAHPEAUtagCVR@@@Z.c)
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x14022AC48 (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 *     ?CheckOnTop@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x14027A2C0 (-CheckOnTop@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     GetAppCompatFlags @ 0x1400C13E0 (GetAppCompatFlags.c)
 */

struct tagWND *__fastcall GetWindowWorker(struct tagWND *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  __int64 i; // rcx
  int v10; // eax

  if ( (*(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) & 0x2FFF) == 0x29D && (_DWORD)a2 != 5 )
    return 0LL;
  v2 = 0LL;
  if ( !(_DWORD)a2 )
  {
    v3 = *((_QWORD *)a1 + 13);
    if ( v3 )
    {
      v2 = *(_QWORD *)(v3 + 112);
      v10 = GetAppCompatFlags(0LL, a2) & 8;
      if ( v2 )
      {
        if ( v10 )
        {
          do
          {
            if ( (*(_BYTE *)(*(_QWORD *)(v2 + 40) + 24LL) & 8) == 0 )
              break;
            v2 = *(_QWORD *)(v2 + 88);
          }
          while ( v2 );
        }
      }
    }
    return (struct tagWND *)v2;
  }
  v5 = a2 - 1;
  if ( !v5 )
  {
    for ( i = *(_QWORD *)(*((_QWORD *)a1 + 13) + 112LL); i; i = *(_QWORD *)(i + 88) )
      v2 = i;
    return (struct tagWND *)v2;
  }
  v6 = v5 - 1;
  if ( !v6 )
    return (struct tagWND *)*((_QWORD *)a1 + 11);
  v7 = v6 - 1;
  if ( !v7 )
    return (struct tagWND *)*((_QWORD *)a1 + 12);
  v8 = v7 - 1;
  if ( !v8 )
    return (struct tagWND *)*((_QWORD *)a1 + 15);
  if ( v8 == 1 )
    return (struct tagWND *)*((_QWORD *)a1 + 14);
  UserSetLastError(1443);
  return 0LL;
}
