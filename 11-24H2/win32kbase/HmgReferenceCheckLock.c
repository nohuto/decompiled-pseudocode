/*
 * XREFs of HmgReferenceCheckLock @ 0x1400D7AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x140035F20 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 */

struct OBJECT *__fastcall HmgReferenceCheckLock(__int64 a1, char a2)
{
  __int16 v3; // esi^2
  unsigned int v4; // edi
  __int64 v5; // rbx
  __int64 SessionState; // rax
  unsigned __int64 v7; // rdx
  GdiHandleManager *v8; // rbp
  __int64 v9; // r11
  unsigned int v10; // r10d
  unsigned int v11; // ecx
  __int64 v12; // r11
  __int64 v13; // rax
  __int64 v14; // r10
  __int64 v15; // r10
  unsigned int v16; // r9d
  unsigned int v17; // ecx
  __int64 v18; // r10
  __int64 v19; // r8

  v3 = WORD1(a1);
  v4 = (unsigned __int16)a1 | ((unsigned int)a1 >> 8) & 0xFF0000;
  v5 = 0LL;
  SessionState = W32GetSessionState(a1);
  v7 = v4;
  v8 = *(GdiHandleManager **)(*(_QWORD *)(SessionState + 88) + 5672LL);
  if ( v4 >= 0x10000 )
  {
    if ( *(_DWORD *)v8 <= 0x10000u )
    {
      v7 = (unsigned __int16)v4;
    }
    else
    {
      v9 = *((_QWORD *)v8 + 2);
      v10 = *(_DWORD *)(v9 + 2056);
      if ( (unsigned __int16)v4 >= v10 + ((*(unsigned __int16 *)(v9 + 2) + 0xFFFF) << 16) )
      {
        v14 = 0LL;
      }
      else
      {
        if ( (unsigned __int16)v4 >= v10 )
          v11 = (((unsigned __int16)v4 - v10) >> 16) + 1;
        else
          v11 = 0;
        v12 = *(_QWORD *)(v9 + 8LL * v11 + 8);
        if ( v11 )
          v13 = (unsigned __int16)v4 + ((1 - v11) << 16) - v10;
        else
          v13 = (unsigned __int16)v4;
        v14 = 0LL;
        if ( (unsigned int)v13 < *(_DWORD *)(v12 + 20) )
          v14 = *(_QWORD *)v12 + 24 * v13;
      }
      if ( *(unsigned __int8 *)(v14 + 13) == HIWORD(v4) )
        v7 = (unsigned __int16)v4;
    }
  }
  v15 = *((_QWORD *)v8 + 2);
  v16 = *(_DWORD *)(v15 + 2056);
  if ( (unsigned int)v7 < v16 + ((*(unsigned __int16 *)(v15 + 2) + 0xFFFF) << 16) )
  {
    if ( (unsigned int)v7 >= v16 )
      v17 = (((unsigned int)v7 - v16) >> 16) + 1;
    else
      v17 = 0;
    v18 = *(_QWORD *)(v15 + 8LL * v17 + 8);
    if ( v17 )
      v7 = ((1 - v17) << 16) - v16 + (unsigned int)v7;
    v19 = 0LL;
    if ( (unsigned int)v7 < *(_DWORD *)(v18 + 20)
      && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v18 + 24) + 8 * (v7 >> 8)) + 16LL * (unsigned __int8)v7 + 8) )
    {
      v19 = *(_QWORD *)v18 + 24LL * (unsigned int)v7;
    }
    if ( v19 && *(_BYTE *)(v19 + 14) == a2 && *(_WORD *)(v19 + 12) == v3 )
      return GdiHandleManager::GetEntryObject(v8, v4);
  }
  return (struct OBJECT *)v5;
}
