/*
 * XREFs of TrimBGRMapCache @ 0x1402F48F8
 * Callers:
 *     AddBGRMapCache @ 0x1402F3708 (AddBGRMapCache.c)
 *     FindBGRMapCache @ 0x1402F4448 (FindBGRMapCache.c)
 * Callees:
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall TrimBGRMapCache(int a1, __int64 a2)
{
  unsigned int v2; // esi
  __int64 v3; // rbx
  unsigned __int64 v4; // rdi
  _OWORD *v5; // rbp
  unsigned int v6; // r14d
  int v7; // r8d

  v2 = 0;
  v3 = *(_QWORD *)(W32GetSessionState(a1, a2) + 112);
  EngAcquireSemaphore(*(HSEMAPHORE *)(v3 + 24));
  if ( *(int *)(v3 + 56) > 5 && *(_DWORD *)(v3 + 64) )
  {
    v4 = *(_QWORD *)(v3 + 48);
    v2 = *(_DWORD *)(v3 + 56);
    v5 = (_OWORD *)v4;
    v6 = v2;
    do
    {
      --v6;
      if ( *(int *)(v3 + 56) <= 5 )
        break;
      if ( *(_DWORD *)(v4 + 8) )
      {
        if ( v5 != (_OWORD *)v4 )
          *v5 = *(_OWORD *)v4;
        ++v5;
      }
      else
      {
        EngFreeMem(*(PVOID *)v4);
        --*(_DWORD *)(v3 + 56);
        --*(_DWORD *)(v3 + 64);
      }
      v4 += 16LL;
    }
    while ( v6 );
    if ( v2 != *(_DWORD *)(v3 + 56) )
    {
      if ( v4 > (unsigned __int64)v5 )
      {
        v7 = *(_DWORD *)(v3 + 48) + 16 * v2 - v4;
        if ( v7 > 0 )
          memmove(v5, (const void *)v4, v7);
      }
      v2 -= *(_DWORD *)(v3 + 56);
    }
  }
  EngReleaseSemaphore(*(HSEMAPHORE *)(v3 + 24));
  return v2;
}
