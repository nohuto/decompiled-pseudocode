/*
 * XREFs of MiInitializePrivateFixupBitmap @ 0x1409D86AC
 * Callers:
 *     MiAddPrivateFixupEntryForSystemImage @ 0x1404AF530 (MiAddPrivateFixupEntryForSystemImage.c)
 *     MiInitializeFixupVad @ 0x140903FFC (MiInitializeFixupVad.c)
 * Callees:
 *     RtlClearAllBits @ 0x14044A700 (RtlClearAllBits.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x140483BB0 (PdcCreateWatchdogAroundClientCall.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1404F6130 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall MiInitializePrivateFixupBitmap(_RTL_BITMAP *a1, _QWORD *a2, char a3)
{
  char v3; // bp
  unsigned __int64 v5; // rdi
  unsigned int v7; // r9d
  unsigned int v8; // r8d
  __int64 v9; // r11
  _QWORD *v10; // rbx
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // r12
  int v13; // ebp
  __int64 *v14; // rdi
  __int64 v15; // r13
  unsigned __int64 i; // rcx
  _BYTE *v17; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned int v21; // esi
  unsigned int v22; // edx
  __int64 v23; // r14
  __int64 v24; // rdx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // [rsp+60h] [rbp+8h]

  v3 = a3;
  v5 = a2[12] & 0xFFFFFFFFFFFFFFF8uLL;
  v26 = v5;
  v7 = *(_DWORD *)(*a2 + 8LL);
  a1->Buffer = &a1[1].SizeOfBitMap;
  a1->SizeOfBitMap = v7;
  RtlClearAllBits(a1);
  v8 = 0;
  v9 = 0LL;
  v10 = a2 + 16;
  do
  {
    v11 = v10[1];
    v12 = v11 + 8LL * *((unsigned int *)v10 + 11);
    if ( v11 < v12 )
    {
      v13 = v3 & 1;
      do
      {
        v14 = *(__int64 **)(v5 + 32);
        v15 = *v14;
        if ( v13 && v8 < *((_DWORD *)v14 + 14) )
        {
          for ( i = v8; (_DWORD)i == v8; i = (unsigned int)(i + 1) )
          {
            if ( *(_QWORD *)(v15 + 8LL * (unsigned int)i) )
              goto LABEL_8;
            v19 = v14[11];
            if ( v19 )
            {
              if ( *(_QWORD *)(v19 + 8LL * (unsigned int)i + 64) )
                goto LABEL_8;
            }
            v20 = v14[12];
            if ( v20 )
            {
              v21 = *(_DWORD *)(v20 + 32);
              if ( (unsigned int)i >= v21 )
              {
                v22 = *(_DWORD *)(v20 + 36);
                if ( (unsigned int)i <= v22 )
                {
                  v23 = *(_QWORD *)(v20 + 24);
                  v24 = v22 - v21 + 1;
                  if ( !v23 && (_DWORD)v24
                    || (v24 = (unsigned int)v24, !v23) && (_DWORD)v24
                    || (v25 = (unsigned int)i - v21, v25 >= (unsigned int)v24) )
                  {
                    gsl::details::terminate((gsl::details *)i, v24);
                    __debugbreak();
                  }
                  if ( *(_QWORD *)(v23 + 8 * v25) )
                    goto LABEL_8;
                }
              }
            }
            if ( (a3 & 2) != 0 && (unsigned int)PdcCreateWatchdogAroundClientCall() )
            {
LABEL_8:
              v17 = (char *)a1->Buffer + ((unsigned __int64)v8 >> 3);
              *v17 |= 1 << (v8 & 7);
              goto LABEL_9;
            }
          }
        }
        if ( (v10[4] & 0xA) == 0xA )
LABEL_9:
          ++v9;
        v5 = v26;
        v11 += 8LL;
        ++v8;
      }
      while ( v11 < v12 );
      v3 = a3;
    }
    v10 = (_QWORD *)v10[2];
  }
  while ( v10 );
  return v9;
}
