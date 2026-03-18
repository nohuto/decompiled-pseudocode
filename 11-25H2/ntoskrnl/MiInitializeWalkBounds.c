/*
 * XREFs of MiInitializeWalkBounds @ 0x140246D5C
 * Callers:
 *     MiWalkPageTables @ 0x1402468A0 (MiWalkPageTables.c)
 * Callees:
 *     MiHyperSpaceSize @ 0x1403E2A20 (MiHyperSpaceSize.c)
 *     MiSetExclusionWalkBounds @ 0x14045BE68 (MiSetExclusionWalkBounds.c)
 */

__int64 __fastcall MiInitializeWalkBounds(__int64 a1, __int64 *a2)
{
  unsigned int v3; // edx
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r10
  __int64 v8; // r11
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  __int64 v22; // rcx

  if ( (*(_DWORD *)a1 & 0x2000) == 0 )
  {
    v3 = 1;
    v4 = *(_DWORD *)(*(_QWORD *)(a1 + 32) + 184LL);
    if ( (*(_DWORD *)a1 & 0x800) != 0 )
    {
      if ( (v4 & 0xF) != 0 )
        v14 = qword_140E38918;
      else
        v14 = qword_140E38918 + 0x8000000000LL;
      v16 = 0xFFFFFFFFFLL;
    }
    else
    {
      v5 = v4 & 0xF;
      if ( (v4 & 0xF) == 0 )
      {
        *a2 = 0LL;
        a2[1] = 0x7FFFFFFFFFFFLL;
        v6 = MiHyperSpaceSize(v5, 1LL);
        *(_QWORD *)(v8 + 16) = v7;
        *(_QWORD *)(v8 + 24) = v7 + v6 - 1;
        return 2;
      }
      v10 = v5 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( !v12 )
          {
            v18 = qword_140E38980 + qword_140E38978;
            if ( qword_140E2EE18 >= (unsigned __int64)qword_140E38978 && (qword_140E2EE18 < v18 || !v18) )
              return (unsigned int)MiSetExclusionWalkBounds(
                                     qword_140E38978,
                                     qword_140E38980,
                                     qword_140E2EE18,
                                     qword_140E2EE20,
                                     (__int64)a2);
            *a2 = qword_140E38978;
            v17 = v18 - 1;
            goto LABEL_15;
          }
          v13 = v12 - 1;
          if ( v13 )
          {
            v19 = v13 - 1;
            if ( !v19 )
            {
              *a2 = qword_140E388A8;
              a2[1] = qword_140E388B0 + qword_140E388A8 - 1;
              return v3;
            }
            v20 = v19 - 1;
            if ( v20 )
            {
              v21 = v20 - 1;
              if ( v21 )
              {
                if ( v21 != 2 )
                  return v3;
                *a2 = qword_140E38958;
                a2[1] = qword_140E38960 - 1 + qword_140E38958;
                a2[2] = qword_140E388D8;
                v22 = qword_140E388E0 + qword_140E388D8 - 1;
              }
              else
              {
                *a2 = qword_140E38878;
                a2[1] = qword_140E38880 - 1 + qword_140E38878;
                a2[2] = qword_140E38948;
                v22 = qword_140E38950 + qword_140E38948 - 1;
              }
              a2[3] = v22;
              return 2;
            }
            v14 = qword_140E2EBB0;
            v15 = qword_140E2EB90;
          }
          else
          {
            v14 = qword_140E2EDA8;
            v15 = qword_140E2ED88;
          }
        }
        else
        {
          v14 = qword_140E2ED18;
          v15 = qword_140E2ECF8;
        }
      }
      else
      {
        v14 = qword_140E2ED60;
        v15 = qword_140E2ED40;
      }
      v16 = (v15 << 21) - 1;
    }
    *a2 = v14;
    v17 = v14 + v16;
LABEL_15:
    a2[1] = v17;
    return v3;
  }
  return MiSetExclusionWalkBounds(0, 0, 0, 0, (__int64)a2);
}
