/*
 * XREFs of ?VerifyIntegrity@VIDMM_LINEAR_POOL@@QEAAJH@Z @ 0x14009EC28
 * Callers:
 *     ?VerifyIntegrity@VIDMM_SEGMENT@@UEAAJXZ @ 0x14009E090 (-VerifyIntegrity@VIDMM_SEGMENT@@UEAAJXZ.c)
 * Callees:
 *     ?GetActiveVprEnd@VIDMM_SEGMENT@@QEBA_KXZ @ 0x14004CBC0 (-GetActiveVprEnd@VIDMM_SEGMENT@@QEBA_KXZ.c)
 *     ?GetActiveVprStart@VIDMM_SEGMENT@@QEBA_KXZ @ 0x14004CBE8 (-GetActiveVprStart@VIDMM_SEGMENT@@QEBA_KXZ.c)
 */

__int64 __fastcall VIDMM_LINEAR_POOL::VerifyIntegrity(VIDMM_LINEAR_POOL *this)
{
  __int64 v1; // rbx
  char *v2; // rsi
  char *v3; // r11
  __int64 v4; // rdx
  unsigned int v5; // r8d
  char *v7; // r9
  char v8; // cl
  __int64 v9; // r10
  VIDMM_SEGMENT *v10; // rcx
  unsigned __int64 ActiveVprStart; // rbp
  VIDMM_SEGMENT *v12; // rcx
  unsigned __int64 ActiveVprEnd; // rax
  __int64 v14; // r10
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rcx
  __int64 v17; // rdi
  VIDMM_LINEAR_POOL *v18; // rcx
  char v19; // r10
  unsigned __int64 v20; // r9
  char *v21; // rax
  unsigned __int64 v22; // rbx
  __int64 v23; // rsi

  v1 = 0LL;
  v2 = (char *)this + 80;
  v3 = (char *)*((_QWORD *)this + 10);
  v4 = 0LL;
  v5 = 0;
  while ( v3 != v2 )
  {
    v7 = v3 - 40;
    v3 = *(char **)v3;
    v8 = v7[56];
    if ( v8 == 3 || (unsigned __int8)(v8 - 5) > 2u && (++v4, v8 == 4) )
    {
      v9 = *((_QWORD *)v7 + 2);
      if ( v9 )
      {
        v10 = *(VIDMM_SEGMENT **)(v9 + 64);
        if ( v9 == (v9 | 1) )
          v5 = -1073741823;
        if ( v10 )
        {
          ActiveVprStart = VIDMM_SEGMENT::GetActiveVprStart(v10);
          ActiveVprEnd = VIDMM_SEGMENT::GetActiveVprEnd(v12);
          if ( ActiveVprStart != ActiveVprEnd )
          {
            v15 = *(_QWORD *)v7;
            v16 = *(_QWORD *)v7 + *((_QWORD *)v7 + 1);
            if ( v16 <= ActiveVprStart || v15 >= ActiveVprEnd )
            {
              if ( (**(_DWORD **)(*(_QWORD *)v14 + 376LL) & 0x20000) != 0 )
                v5 = -1073741823;
            }
            else
            {
              if ( v15 < ActiveVprStart )
                v5 = -1073741823;
              if ( v16 > ActiveVprEnd )
                v5 = -1073741823;
              if ( (**(_DWORD **)(*(_QWORD *)v14 + 376LL) & 0x20000) == 0 )
                v5 = -1073741823;
            }
          }
        }
      }
    }
    if ( *(_QWORD *)v7 != v1 )
      v5 = -1073741823;
    v1 += *((_QWORD *)v7 + 1);
  }
  v17 = *((_QWORD *)this + 1);
  v18 = (VIDMM_LINEAR_POOL *)*((_QWORD *)this + 6);
  v19 = 1;
  if ( v1 != v17 )
    v5 = -1073741823;
  v20 = 0LL;
  while ( v18 != (VIDMM_LINEAR_POOL *)((char *)this + 48) )
  {
    v21 = (char *)v18 - 24;
    v18 = *(VIDMM_LINEAR_POOL **)v18;
    v22 = *(_QWORD *)v21;
    v23 = *((_QWORD *)v21 + 1);
    if ( *(_QWORD *)v21 < v20 )
      v5 = -1073741823;
    if ( !v23 )
      v5 = -1073741823;
    if ( v19 == 2 && v21[56] == 2 && v22 <= v20 )
      v5 = -1073741823;
    v19 = v21[56];
    if ( ((v19 - 3) & 0xFD) != 0 )
      --v4;
    v20 = v22 + v23;
  }
  if ( v4 )
    v5 = -1073741823;
  if ( *(_QWORD *)(*((_QWORD *)this + 11) - 40LL) + *(_QWORD *)(*((_QWORD *)this + 11) - 32LL) != v17 )
    return (unsigned int)-1073741823;
  return v5;
}
