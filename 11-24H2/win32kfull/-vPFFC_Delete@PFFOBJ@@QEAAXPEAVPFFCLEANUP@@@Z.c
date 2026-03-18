/*
 * XREFs of ?vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z @ 0x14019F11C
 * Callers:
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x14005D30C (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1400FD81C (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     bKillPFFOBJ @ 0x14019F0F0 (bKillPFFOBJ.c)
 *     ?vPFFC_DeleteAndCleanup@PFFOBJ@@QEAAXXZ @ 0x14030EC7C (-vPFFC_DeleteAndCleanup@PFFOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?vDelete@PFEOBJ@@QEAAXXZ @ 0x14019F2D4 (-vDelete@PFEOBJ@@QEAAXXZ.c)
 *     FreeFileView @ 0x14019F3FC (FreeFileView.c)
 */

void __fastcall PFFOBJ::vPFFC_Delete(void **this, struct PFFCLEANUP *a2)
{
  __int64 v3; // rdi
  _QWORD *v4; // rcx
  struct PFFCLEANUP *v5; // rsi
  void *v6; // rbp
  _QWORD *v7; // r10
  __int64 v8; // rcx
  void *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r11
  __int64 v12; // r8
  __int64 SessionState; // rax
  _QWORD *v14; // rdx
  __int64 v15; // r8
  __int64 v16; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  v4 = *this;
  v5 = a2;
  v6 = (void *)v4[28];
  if ( *((_DWORD *)v4 + 54) )
  {
    do
    {
      v16 = v4[v3 + 28];
      if ( v16 )
        PFEOBJ::vDelete((PFEOBJ *)&v16);
      v4 = *this;
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (unsigned int)v3 < *((_DWORD *)*this + 54) );
  }
  *((_QWORD *)v5 + 1) = v4[11];
  *(_QWORD *)v5 = *((_QWORD *)*this + 12);
  *((_QWORD *)v5 + 2) = *((_QWORD *)*this + 20);
  v7 = *this;
  v8 = *((_QWORD *)*this + 20);
  if ( v8 )
  {
    v10 = *(_QWORD *)(v8 + 208);
    if ( v10 )
    {
      a2 = (struct PFFCLEANUP *)v7[3];
      if ( a2 )
      {
        if ( *(struct PFFCLEANUP **)(*(_QWORD *)v10 + 80LL) == a2 )
        {
          v11 = 0LL;
          if ( *(_DWORD *)(v8 + 36) )
          {
            do
            {
              v12 = v7[20];
              v8 = *(_QWORD *)(*(_QWORD *)(v12 + 208) + 8 * v11);
              a2 = (struct PFFCLEANUP *)(v12 + *(_QWORD *)(*(_QWORD *)(v7[26] + 8 * v11) + 80LL) - (_QWORD)v7);
              v11 = (unsigned int)(v11 + 1);
              *(_QWORD *)(v8 + 80) = a2;
              v7 = *this;
            }
            while ( (unsigned int)v11 < *(_DWORD *)(*((_QWORD *)*this + 20) + 36LL) );
          }
        }
      }
    }
    SessionState = W32GetSessionState(v8, a2);
    v14 = *this;
    if ( *((_QWORD *)*this + 12) == *(_QWORD *)(*(_QWORD *)(SessionState + 96) + 24152LL) )
    {
      v15 = v14[11];
      if ( *(_QWORD **)(v15 + 8) == v14 )
        *(_QWORD *)(v15 + 8) = v14[20];
    }
    *(_QWORD *)(*((_QWORD *)*this + 20) + 160LL) = 0LL;
  }
  else
  {
    if ( v7[26] && *((_DWORD *)v7 + 9) )
      FreeFileView();
    v9 = (void *)*((_QWORD *)*this + 25);
    if ( v9 )
      Win32FreePool(v9);
  }
  if ( v6 )
    Win32FreePool(v6);
  Win32FreePool(*this);
  *this = 0LL;
}
