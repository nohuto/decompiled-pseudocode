/*
 * XREFs of ?ShareCount@HANDLELOCK@@QEAAKXZ @ 0x1400B6DF0
 * Callers:
 *     bDeleteBrush @ 0x140014820 (bDeleteBrush.c)
 *     HmgSwapLockedHandleContents @ 0x1400B6AD0 (HmgSwapLockedHandleContents.c)
 *     HmgMarkLazyDelete @ 0x1400B6D00 (HmgMarkLazyDelete.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HANDLELOCK::ShareCount(HANDLELOCK *this)
{
  __int64 v1; // r8
  __int64 v2; // rdi
  unsigned __int64 v3; // rdx
  __int64 v4; // rbx
  unsigned int v5; // r11d
  unsigned int v6; // ecx
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r11
  __int64 v10; // r11
  unsigned int v11; // r10d
  unsigned int v12; // ecx
  __int64 v13; // rax

  v1 = 0LL;
  v2 = *(_QWORD *)(*((_QWORD *)this + 2) + 5672LL);
  v3 = **(unsigned int **)this;
  if ( (unsigned int)v3 >= 0x10000 )
  {
    if ( *(_DWORD *)v2 <= 0x10000u )
    {
      v3 = (unsigned __int16)v3;
    }
    else
    {
      v4 = *(_QWORD *)(v2 + 16);
      v5 = *(_DWORD *)(v4 + 2056);
      if ( (unsigned __int16)v3 >= v5 + ((*(unsigned __int16 *)(v4 + 2) + 0xFFFF) << 16) )
      {
        v9 = 0LL;
      }
      else
      {
        if ( (unsigned __int16)v3 >= v5 )
          v6 = (((unsigned __int16)v3 - v5) >> 16) + 1;
        else
          v6 = 0;
        v7 = *(_QWORD *)(v4 + 8LL * v6 + 8);
        if ( v6 )
          v8 = (unsigned __int16)v3 + ((1 - v6) << 16) - v5;
        else
          v8 = (unsigned __int16)v3;
        v9 = 0LL;
        if ( (unsigned int)v8 < *(_DWORD *)(v7 + 20) )
          v9 = *(_QWORD *)v7 + 24 * v8;
      }
      if ( *(unsigned __int8 *)(v9 + 13) == WORD1(v3) )
        v3 = (unsigned __int16)v3;
    }
  }
  v10 = *(_QWORD *)(v2 + 16);
  v11 = *(_DWORD *)(v10 + 2056);
  if ( (unsigned int)v3 < v11 + ((*(unsigned __int16 *)(v10 + 2) + 0xFFFF) << 16) )
  {
    if ( (unsigned int)v3 >= v11 )
      v12 = (((unsigned int)v3 - v11) >> 16) + 1;
    else
      v12 = 0;
    v13 = *(_QWORD *)(v10 + 8LL * v12 + 8);
    if ( v12 )
      v3 = ((1 - v12) << 16) - v11 + (unsigned int)v3;
    if ( (unsigned int)v3 < *(_DWORD *)(v13 + 20) )
      v1 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v13 + 24) + 8 * (v3 >> 8)) + 16LL * (unsigned __int8)v3 + 8);
  }
  return *(unsigned int *)(v1 + 8);
}
