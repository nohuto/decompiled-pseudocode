/*
 * XREFs of ?pchTranslateUMPD@RFONTOBJ@@QEAAPEADPEBDPEAPEAX@Z @ 0x1400DC768
 * Callers:
 *     ?pvFileUMPD@RFONTOBJ@@QEAAPEAXPEAKPEAPEAX@Z @ 0x1400DC67C (-pvFileUMPD@RFONTOBJ@@QEAAPEAXPEAKPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

char *__fastcall RFONTOBJ::pchTranslateUMPD(RFONTOBJ *this, const char *a2, void **a3)
{
  unsigned __int64 v3; // r9
  __int64 v4; // r10
  __int64 v7; // rcx
  __int64 *v8; // r8
  unsigned int v9; // r11d
  unsigned int i; // edx
  __int64 v11; // rcx
  unsigned __int64 v12; // rbx
  __int64 v13; // r9
  __int64 v14; // rax
  _QWORD v16[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v17; // [rsp+40h] [rbp-28h]
  __int64 v18; // [rsp+50h] [rbp-18h]
  int v19; // [rsp+58h] [rbp-10h]
  __int64 v20; // [rsp+78h] [rbp+10h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  if ( a2 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)this + 128LL);
    if ( v7 )
    {
      v8 = *(__int64 **)(v7 + 208);
      if ( v8 )
      {
        v9 = *(_DWORD *)(v7 + 36);
        for ( i = 0; i < v9; ++i )
        {
          v11 = *v8;
          if ( *v8 )
          {
            if ( !i )
            {
              v4 = *(_QWORD *)(v11 + 32);
              v3 = *(_QWORD *)(v11 + 104);
            }
            v12 = *(_QWORD *)(v11 + 104);
            if ( (v12 || (v12 = v3) != 0 || (v12 = *(_QWORD *)(v11 + 16)) != 0)
              && v12 <= (unsigned __int64)a2
              && (unsigned __int64)a2 < v12 + *(unsigned int *)(v11 + 24) )
            {
              if ( *(_QWORD *)(v11 + 32) )
              {
                v4 = *(_QWORD *)(v11 + 32);
              }
              else if ( !v4 )
              {
                return 0LL;
              }
              *a3 = 0LL;
              v18 = 0LL;
              v20 = 0LL;
              v13 = *(unsigned int *)(v11 + 24);
              v16[0] = 0LL;
              v16[1] = 0LL;
              v17 = 0LL;
              v19 = 5;
              if ( (unsigned __int8)Gre::MapViewOfSectionObj::Map(v16, v4, 0LL, v13, &v20) )
              {
                v14 = v17;
                *a3 = (void *)v17;
                return (char *)&a2[v14 - v12];
              }
              *a3 = 0LL;
              if ( v19 != 5 )
                Gre::MapViewOfSectionObj::Unmap((Gre::MapViewOfSectionObj *)v16);
              return 0LL;
            }
          }
          ++v8;
        }
      }
    }
  }
  return 0LL;
}
