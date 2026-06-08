/*
 * XREFs of sub_140049BE4 @ 0x140049BE4
 * Callers:
 *     sub_14004A99C @ 0x14004A99C (sub_14004A99C.c)
 * Callees:
 *     sub_140003BC4 @ 0x140003BC4 (sub_140003BC4.c)
 *     sub_140003D28 @ 0x140003D28 (sub_140003D28.c)
 */

void __fastcall sub_140049BE4(__int64 a1, unsigned __int8 a2)
{
  const char *v4; // rdi
  const char *v5; // rax
  const char *v6; // rax
  const char *v7; // rax
  const char *v8; // rax
  const char *v9; // rax
  const char *v10; // rax
  const char *v11; // rax
  const char *v12; // rax
  const char *v13; // rax
  const char *v14; // rax
  const char *v15; // rax
  const char *v16; // rax
  const char *v17; // rax
  const char *v18; // rax
  const char *v19; // rax
  const char *v20; // rax
  const char *v21; // rax
  const char *v22; // rax
  const char *v23; // rax
  const char *v24; // rax
  const char *v25; // rax
  const char *v26; // rax
  const char *v27; // rax
  const char *v28; // rax
  const char *v29; // rax
  const char *v30; // rax
  const char *v31; // rax
  const char *v32; // rax
  const char *v33; // rax
  const char *v34; // rax
  const char *v35; // rax
  const char *v36; // rax

  if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
  {
    if ( a2 < 5u || LOWORD(off_140018050->DeviceType) )
      sub_140003D28(off_140018050->DeviceExtension, a2, 2, 61, (__int64)&unk_140012AE0);
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      v4 = "En";
      if ( a2 < 5u || LOWORD(off_140018050->DeviceType) )
      {
        v5 = "En";
        if ( (a1 & 1) == 0 )
          v5 = "Dis";
        sub_140003BC4((__int64)off_140018050->DeviceExtension, a2, 2u, 0x3Eu, (__int64)&unk_140012AE0, v5);
      }
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        if ( a2 < 5u || LOWORD(off_140018050->DeviceType) )
        {
          v6 = "En";
          if ( (a1 & 2) == 0 )
            v6 = "Dis";
          sub_140003BC4((__int64)off_140018050->DeviceExtension, a2, 2u, 0x3Fu, (__int64)&unk_140012AE0, v6);
        }
        if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
        {
          if ( a2 < 5u || LOWORD(off_140018050->DeviceType) )
          {
            v7 = "En";
            if ( (a1 & 4) == 0 )
              v7 = "Dis";
            sub_140003BC4((__int64)off_140018050->DeviceExtension, a2, 2u, 0x40u, (__int64)&unk_140012AE0, v7);
          }
          if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
          {
            if ( a2 < 5u || LOWORD(off_140018050->DeviceType) )
            {
              v8 = "En";
              if ( (a1 & 0x100000) == 0 )
                v8 = "Dis";
              sub_140003BC4((__int64)off_140018050->DeviceExtension, a2, 2u, 0x41u, (__int64)&unk_140012AE0, v8);
            }
            if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
            {
              if ( a2 < 5u || LOWORD(off_140018050->DeviceType) )
              {
                v9 = "En";
                if ( (a1 & 0x200000) == 0 )
                  v9 = "Dis";
                sub_140003BC4((__int64)off_140018050->DeviceExtension, a2, 2u, 0x42u, (__int64)&unk_140012AE0, v9);
              }
              if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
              {
                if ( a2 < 5u || LOWORD(off_140018050->DeviceType) )
                  sub_140003D28(off_140018050->DeviceExtension, a2, 2, 67, (__int64)&unk_140012AE0);
                if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
                {
                  if ( a2 < 5u || LOWORD(off_140018050->DeviceType) )
                    sub_140003D28(off_140018050->DeviceExtension, a2, 2, 68, (__int64)&unk_140012AE0);
                  if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
                  {
                    if ( a2 < 5u || LOWORD(off_140018050->DeviceType) )
                    {
                      v10 = "En";
                      if ( (a1 & 0x10) == 0 )
                        v10 = "Dis";
                      sub_140003BC4(
                        (__int64)off_140018050->DeviceExtension,
                        a2,
                        2u,
                        0x45u,
                        (__int64)&unk_140012AE0,
                        v10);
                    }
                    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
                    {
                      if ( a2 < 5u || LOWORD(off_140018050->DeviceType) )
                      {
                        v11 = "En";
                        if ( (a1 & 0x20) == 0 )
                          v11 = "Dis";
                        sub_140003BC4(
                          (__int64)off_140018050->DeviceExtension,
                          a2,
                          2u,
                          0x46u,
                          (__int64)&unk_140012AE0,
                          v11);
                      }
                      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
                      {
                        if ( a2 < 5u || LOWORD(off_140018050->DeviceType) )
                        {
                          v12 = "En";
                          if ( (a1 & 0x40) == 0 )
                            v12 = "Dis";
                          sub_140003BC4(
                            (__int64)off_140018050->DeviceExtension,
                            a2,
                            2u,
                            0x47u,
                            (__int64)&unk_140012AE0,
                            v12);
                        }
                        if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
                        {
                          if ( a2 < 5u || LOWORD(off_140018050->DeviceType) )
                          {
                            v13 = "En";
                            if ( (a1 & 0x7F000) == 0 )
                              v13 = "Dis";
                            sub_140003BC4(
                              (__int64)off_140018050->DeviceExtension,
                              a2,
                              2u,
                              0x48u,
                              (__int64)&unk_140012AE0,
                              v13);
                          }
                          if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
                          {
                            if ( a2 < 5u || LOWORD(off_140018050->DeviceType) )
                            {
                              v14 = "En";
                              if ( (a1 & 0x80000000000LL) == 0 )
                                v14 = "Dis";
                              sub_140003BC4(
                                (__int64)off_140018050->DeviceExtension,
                                a2,
                                2u,
                                0x49u,
                                (__int64)&unk_140012AE0,
                                v14);
                            }
                            if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
                            {
                              if ( a2 < 5u || LOWORD(off_140018050->DeviceType) )
                              {
                                v15 = "En";
                                if ( (a1 & 0x20000000000LL) == 0 )
                                  v15 = "Dis";
                                sub_140003BC4(
                                  (__int64)off_140018050->DeviceExtension,
                                  a2,
                                  2u,
                                  0x4Au,
                                  (__int64)&unk_140012AE0,
                                  v15);
                              }
                              if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
                              {
                                if ( a2 < 5u || LOWORD(off_140018050->DeviceType) )
                                {
                                  v16 = "En";
                                  if ( (a1 & 0x40000000000LL) == 0 )
                                    v16 = "Dis";
                                  sub_140003BC4(
                                    (__int64)off_140018050->DeviceExtension,
                                    a2,
                                    2u,
                                    0x4Bu,
                                    (__int64)&unk_140012AE0,
                                    v16);
                                }
                                if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
                                {
                                  if ( a2 < 5u || LOWORD(off_140018050->DeviceType) )
                                  {
                                    v17 = "En";
                                    if ( (a1 & 0x2000000000000LL) == 0 )
                                      v17 = "Dis";
                                    sub_140003BC4(
                                      (__int64)off_140018050->DeviceExtension,
                                      a2,
                                      2u,
                                      0x4Cu,
                                      (__int64)&unk_140012AE0,
                                      v17);
                                  }
                                  if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
                                  {
                                    if ( a2 < 5u || LOWORD(off_140018050->DeviceType) )
                                    {
                                      v18 = "En";
                                      if ( (a1 & 0x20E0000000000LL) == 0 )
                                        v18 = "Dis";
                                      sub_140003BC4(
                                        (__int64)off_140018050->DeviceExtension,
                                        a2,
                                        2u,
                                        0x4Du,
                                        (__int64)&unk_140012AE0,
                                        v18);
                                    }
                                    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
                                    {
                                      if ( a2 < 5u || LOWORD(off_140018050->DeviceType) )
                                      {
                                        v19 = "En";
                                        if ( (a1 & 0x1000000) == 0 )
                                          v19 = "Dis";
                                        sub_140003BC4(
                                          (__int64)off_140018050->DeviceExtension,
                                          a2,
                                          2u,
                                          0x4Eu,
                                          (__int64)&unk_140012AE0,
                                          v19);
                                      }
                                      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
                                      {
                                        if ( a2 < 5u || LOWORD(off_140018050->DeviceType) )
                                        {
                                          v20 = "En";
                                          if ( (a1 & 0x2000000) == 0 )
                                            v20 = "Dis";
                                          sub_140003BC4(
                                            (__int64)off_140018050->DeviceExtension,
                                            a2,
                                            2u,
                                            0x4Fu,
                                            (__int64)&unk_140012AE0,
                                            v20);
                                        }
                                        if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
                                        {
                                          if ( a2 < 5u || LOWORD(off_140018050->DeviceType) )
                                          {
                                            v21 = "En";
                                            if ( (a1 & 0x10000000) == 0 )
                                              v21 = "Dis";
                                            sub_140003BC4(
                                              (__int64)off_140018050->DeviceExtension,
                                              a2,
                                              2u,
                                              0x50u,
                                              (__int64)&unk_140012AE0,
                                              v21);
                                          }
                                          if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
                                          {
                                            if ( a2 < 5u || LOWORD(off_140018050->DeviceType) )
                                            {
                                              v22 = "En";
                                              if ( (a1 & 0x20000000) == 0 )
                                                v22 = "Dis";
                                              sub_140003BC4(
                                                (__int64)off_140018050->DeviceExtension,
                                                a2,
                                                2u,
                                                0x51u,
                                                (__int64)&unk_140012AE0,
                                                v22);
                                            }
                                            if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
                                            {
                                              if ( a2 < 5u || LOWORD(off_140018050->DeviceType) )
                                              {
                                                v23 = "En";
                                                if ( (a1 & 0x40000000) == 0 )
                                                  v23 = "Dis";
                                                sub_140003BC4(
                                                  (__int64)off_140018050->DeviceExtension,
                                                  a2,
                                                  2u,
                                                  0x52u,
                                                  (__int64)&unk_140012AE0,
                                                  v23);
                                              }
                                              if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
                                              {
                                                if ( a2 < 5u || LOWORD(off_140018050->DeviceType) )
                                                {
                                                  v24 = "En";
                                                  if ( (a1 & 0x80000000) == 0 )
                                                    v24 = "Dis";
                                                  sub_140003BC4(
                                                    (__int64)off_140018050->DeviceExtension,
                                                    a2,
                                                    2u,
                                                    0x53u,
                                                    (__int64)&unk_140012AE0,
                                                    v24);
                                                }
                                                if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
                                                {
                                                  if ( a2 < 5u || LOWORD(off_140018050->DeviceType) )
                                                  {
                                                    v25 = "En";
                                                    if ( (a1 & 0x8000000) == 0 )
                                                      v25 = "Dis";
                                                    sub_140003BC4(
                                                      (__int64)off_140018050->DeviceExtension,
                                                      a2,
                                                      2u,
                                                      0x54u,
                                                      (__int64)&unk_140012AE0,
                                                      v25);
                                                  }
                                                  if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
                                                  {
                                                    if ( a2 < 5u || LOWORD(off_140018050->DeviceType) )
                                                    {
                                                      v26 = "En";
                                                      if ( (a1 & 0x4000000000LL) == 0 )
                                                        v26 = "Dis";
                                                      sub_140003BC4(
                                                        (__int64)off_140018050->DeviceExtension,
                                                        a2,
                                                        2u,
                                                        0x55u,
                                                        (__int64)&unk_140012AE0,
                                                        v26);
                                                    }
                                                    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
                                                    {
                                                      if ( a2 < 5u || LOWORD(off_140018050->DeviceType) )
                                                      {
                                                        v27 = "En";
                                                        if ( (a1 & 0x4000000) == 0 )
                                                          v27 = "Dis";
                                                        sub_140003BC4(
                                                          (__int64)off_140018050->DeviceExtension,
                                                          a2,
                                                          2u,
                                                          0x56u,
                                                          (__int64)&unk_140012AE0,
                                                          v27);
                                                      }
                                                      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
                                                      {
                                                        if ( a2 < 5u || LOWORD(off_140018050->DeviceType) )
                                                          sub_140003D28(
                                                            off_140018050->DeviceExtension,
                                                            a2,
                                                            2,
                                                            87,
                                                            (__int64)&unk_140012AE0);
                                                        if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
                                                        {
                                                          if ( a2 < 5u || LOWORD(off_140018050->DeviceType) )
                                                            sub_140003D28(
                                                              off_140018050->DeviceExtension,
                                                              a2,
                                                              2,
                                                              88,
                                                              (__int64)&unk_140012AE0);
                                                          if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
                                                          {
                                                            if ( a2 < 5u || LOWORD(off_140018050->DeviceType) )
                                                            {
                                                              v28 = "En";
                                                              if ( (a1 & 0x200000000LL) == 0 )
                                                                v28 = "Dis";
                                                              sub_140003BC4(
                                                                (__int64)off_140018050->DeviceExtension,
                                                                a2,
                                                                2u,
                                                                0x59u,
                                                                (__int64)&unk_140012AE0,
                                                                v28);
                                                            }
                                                            if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
                                                            {
                                                              if ( a2 < 5u || LOWORD(off_140018050->DeviceType) )
                                                              {
                                                                v29 = "En";
                                                                if ( (a1 & 0x200) == 0 )
                                                                  v29 = "Dis";
                                                                sub_140003BC4(
                                                                  (__int64)off_140018050->DeviceExtension,
                                                                  a2,
                                                                  2u,
                                                                  0x5Au,
                                                                  (__int64)&unk_140012AE0,
                                                                  v29);
                                                              }
                                                              if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
                                                              {
                                                                if ( a2 < 5u || LOWORD(off_140018050->DeviceType) )
                                                                {
                                                                  v30 = "En";
                                                                  if ( (a1 & 0x100000000000LL) == 0 )
                                                                    v30 = "Dis";
                                                                  sub_140003BC4(
                                                                    (__int64)off_140018050->DeviceExtension,
                                                                    a2,
                                                                    2u,
                                                                    0x5Bu,
                                                                    (__int64)&unk_140012AE0,
                                                                    v30);
                                                                }
                                                                if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
                                                                {
                                                                  if ( a2 < 5u || LOWORD(off_140018050->DeviceType) )
                                                                  {
                                                                    v31 = "En";
                                                                    if ( (a1 & 0x400) == 0 )
                                                                      v31 = "Dis";
                                                                    sub_140003BC4(
                                                                      (__int64)off_140018050->DeviceExtension,
                                                                      a2,
                                                                      2u,
                                                                      0x5Cu,
                                                                      (__int64)&unk_140012AE0,
                                                                      v31);
                                                                  }
                                                                  if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
                                                                  {
                                                                    if ( a2 < 5u || LOWORD(off_140018050->DeviceType) )
                                                                    {
                                                                      v32 = "En";
                                                                      if ( (a1 & 0x1000000000LL) == 0 )
                                                                        v32 = "Dis";
                                                                      sub_140003BC4(
                                                                        (__int64)off_140018050->DeviceExtension,
                                                                        a2,
                                                                        2u,
                                                                        0x5Du,
                                                                        (__int64)&unk_140012AE0,
                                                                        v32);
                                                                    }
                                                                    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
                                                                    {
                                                                      if ( a2 < 5u || LOWORD(off_140018050->DeviceType) )
                                                                      {
                                                                        v33 = "En";
                                                                        if ( (a1 & 0x10000000000LL) == 0 )
                                                                          v33 = "Dis";
                                                                        sub_140003BC4(
                                                                          (__int64)off_140018050->DeviceExtension,
                                                                          a2,
                                                                          2u,
                                                                          0x5Eu,
                                                                          (__int64)&unk_140012AE0,
                                                                          v33);
                                                                      }
                                                                      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
                                                                      {
                                                                        if ( a2 < 5u
                                                                          || LOWORD(off_140018050->DeviceType) )
                                                                        {
                                                                          sub_140003D28(
                                                                            off_140018050->DeviceExtension,
                                                                            a2,
                                                                            2,
                                                                            95,
                                                                            (__int64)&unk_140012AE0);
                                                                        }
                                                                        if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
                                                                        {
                                                                          if ( a2 < 5u
                                                                            || LOWORD(off_140018050->DeviceType) )
                                                                          {
                                                                            sub_140003D28(
                                                                              off_140018050->DeviceExtension,
                                                                              a2,
                                                                              2,
                                                                              96,
                                                                              (__int64)&unk_140012AE0);
                                                                          }
                                                                          if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
                                                                          {
                                                                            if ( a2 < 5u
                                                                              || LOWORD(off_140018050->DeviceType) )
                                                                            {
                                                                              v34 = "En";
                                                                              if ( (a1 & 0x200000000000LL) == 0 )
                                                                                v34 = "Dis";
                                                                              sub_140003BC4(
                                                                                (__int64)off_140018050->DeviceExtension,
                                                                                a2,
                                                                                2u,
                                                                                0x61u,
                                                                                (__int64)&unk_140012AE0,
                                                                                v34);
                                                                            }
                                                                            if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
                                                                            {
                                                                              if ( a2 < 5u
                                                                                || LOWORD(off_140018050->DeviceType) )
                                                                              {
                                                                                v35 = "En";
                                                                                if ( (a1 & 0x400000000000LL) == 0 )
                                                                                  v35 = "Dis";
                                                                                sub_140003BC4(
                                                                                  (__int64)off_140018050->DeviceExtension,
                                                                                  a2,
                                                                                  2u,
                                                                                  0x62u,
                                                                                  (__int64)&unk_140012AE0,
                                                                                  v35);
                                                                              }
                                                                              if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
                                                                              {
                                                                                if ( a2 < 5u
                                                                                  || LOWORD(off_140018050->DeviceType) )
                                                                                {
                                                                                  v36 = "En";
                                                                                  if ( (a1 & 0x800000000LL) == 0 )
                                                                                    v36 = "Dis";
                                                                                  sub_140003BC4(
                                                                                    (__int64)off_140018050->DeviceExtension,
                                                                                    a2,
                                                                                    2u,
                                                                                    0x63u,
                                                                                    (__int64)&unk_140012AE0,
                                                                                    v36);
                                                                                }
                                                                                if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
                                                                                {
                                                                                  if ( a2 < 5u
                                                                                    || LOWORD(off_140018050->DeviceType) )
                                                                                  {
                                                                                    if ( (a1 & 0x2000000000LL) == 0 )
                                                                                      v4 = "Dis";
                                                                                    sub_140003BC4(
                                                                                      (__int64)off_140018050->DeviceExtension,
                                                                                      a2,
                                                                                      2u,
                                                                                      0x64u,
                                                                                      (__int64)&unk_140012AE0,
                                                                                      v4);
                                                                                  }
                                                                                  if ( off_140018058 != (_UNKNOWN *)&off_140018058
                                                                                    && (a2 < 5u
                                                                                     || LOWORD(off_140018050->DeviceType)) )
                                                                                  {
                                                                                    sub_140003D28(
                                                                                      off_140018050->DeviceExtension,
                                                                                      a2,
                                                                                      2,
                                                                                      101,
                                                                                      (__int64)&unk_140012AE0);
                                                                                  }
                                                                                }
                                                                              }
                                                                            }
                                                                          }
                                                                        }
                                                                      }
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}
