/*
 * XREFs of ?bExpand@STACKOBJ@@QEAAHK@Z @ 0x14033C604
 * Callers:
 *     ?bPushMergeScrScan@STACKOBJ@@QEAAHXZ @ 0x14015C304 (-bPushMergeScrScan@STACKOBJ@@QEAAHXZ.c)
 * Callees:
 *     PALLOCNOZ @ 0x140125A4C (PALLOCNOZ.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall STACKOBJ::bExpand(STACKOBJ *this, unsigned int a2)
{
  void *v2; // rsi
  unsigned int v3; // edi
  void *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rcx
  bool v9; // zf
  __int64 v10; // rax
  __int64 v11; // rax

  v2 = (void *)*((_QWORD *)this + 4);
  v3 = a2 + 440;
  if ( a2 + 440 < a2 )
    return 0LL;
  v5 = (void *)PALLOCNOZ(v3, 1684817479LL);
  *((_QWORD *)this + 4) = v5;
  if ( !v5 )
    return 0LL;
  memmove(v5, v2, *((unsigned int *)this + 1));
  v6 = *((_QWORD *)this + 1);
  v7 = *((_QWORD *)this + 4);
  *(_DWORD *)this = v3;
  v8 = v7 - (_QWORD)v2 + v6;
  v9 = *((_DWORD *)this + 1) == 0;
  *((_QWORD *)this + 1) = v8;
  if ( v9 )
  {
    *(_QWORD *)(v8 + 8) = v8;
  }
  else
  {
    v10 = *(_QWORD *)(v8 + 8);
    if ( v10 != v7 )
    {
      do
      {
        v11 = v7 - (_QWORD)v2 + v10;
        *(_QWORD *)(v8 + 8) = v11;
        v8 = v11;
        v10 = *(_QWORD *)(v11 + 8);
      }
      while ( v10 != *((_QWORD *)this + 4) );
    }
  }
  Win32FreePool(v2);
  return 1LL;
}
