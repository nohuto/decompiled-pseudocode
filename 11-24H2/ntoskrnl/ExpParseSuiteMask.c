/*
 * XREFs of ExpParseSuiteMask @ 0x1407B74C8
 * Callers:
 *     ExGetSuiteMask @ 0x1407B7320 (ExGetSuiteMask.c)
 * Callees:
 *     <none>
 */

int __fastcall ExpParseSuiteMask(char *a1)
{
  char *v1; // r10
  int result; // eax
  unsigned __int16 *v3; // rcx
  int v4; // r8d
  int v5; // edx
  unsigned __int16 *v6; // rcx
  int v7; // r8d
  int v8; // edx
  unsigned __int16 *v9; // rcx
  int v10; // r8d
  int v11; // edx
  unsigned __int16 *v12; // rcx
  int v13; // r8d
  int v14; // edx
  unsigned __int16 *v15; // rcx
  int v16; // r8d
  int v17; // edx
  unsigned __int16 *v18; // rcx
  int v19; // r8d
  int v20; // edx
  unsigned __int16 *v21; // rcx
  int v22; // r8d
  int v23; // edx
  unsigned __int16 *v24; // rcx
  int v25; // r8d
  int v26; // edx
  unsigned __int16 *v27; // rcx
  int v28; // r8d
  int v29; // edx
  unsigned __int16 *v30; // rcx
  int v31; // r8d
  int v32; // edx
  unsigned __int16 *v33; // rcx
  int v34; // r8d
  int v35; // edx
  unsigned __int16 *v36; // rcx
  int v37; // r8d
  int v38; // edx
  unsigned __int16 *v39; // rcx
  int v40; // r8d
  int v41; // edx
  unsigned __int16 *v42; // rcx
  int v43; // r8d
  int v44; // edx
  unsigned __int16 *v45; // rcx
  int v46; // r8d
  int v47; // edx
  unsigned __int16 *v48; // rcx
  int v49; // r8d
  int v50; // edx
  __int64 v51; // rcx

  v1 = a1;
  for ( result = 0; *(_WORD *)v1; v1 += 2 * v51 + 2 )
  {
    v3 = (unsigned __int16 *)v1;
    do
    {
      v4 = *(unsigned __int16 *)((char *)v3 + (char *)L"Small Business" - v1);
      v5 = *v3 - v4;
      if ( v5 )
        break;
      ++v3;
    }
    while ( v4 );
    if ( v5 )
    {
      v6 = (unsigned __int16 *)v1;
      do
      {
        v7 = *(unsigned __int16 *)((char *)v6 + (char *)L"Small Business(Restricted)" - v1);
        v8 = *v6 - v7;
        if ( v8 )
          break;
        ++v6;
      }
      while ( v7 );
      if ( v8 )
      {
        v9 = (unsigned __int16 *)v1;
        do
        {
          v10 = *(unsigned __int16 *)((char *)v9 + (char *)L"Enterprise" - v1);
          v11 = *v9 - v10;
          if ( v11 )
            break;
          ++v9;
        }
        while ( v10 );
        if ( v11 )
        {
          v12 = (unsigned __int16 *)v1;
          do
          {
            v13 = *(unsigned __int16 *)((char *)v12 + (char *)L"CommunicationServer" - v1);
            v14 = *v12 - v13;
            if ( v14 )
              break;
            ++v12;
          }
          while ( v13 );
          if ( v14 )
          {
            v15 = (unsigned __int16 *)v1;
            do
            {
              v16 = *(unsigned __int16 *)((char *)v15 + (char *)L"BackOffice" - v1);
              v17 = *v15 - v16;
              if ( v17 )
                break;
              ++v15;
            }
            while ( v16 );
            if ( v17 )
            {
              v18 = (unsigned __int16 *)v1;
              do
              {
                v19 = *(unsigned __int16 *)((char *)v18 + (char *)L"Terminal Server" - v1);
                v20 = *v18 - v19;
                if ( v20 )
                  break;
                ++v18;
              }
              while ( v19 );
              if ( v20 )
              {
                v21 = (unsigned __int16 *)v1;
                do
                {
                  v22 = *(unsigned __int16 *)((char *)v21 + (char *)L"EmbeddedNT" - v1);
                  v23 = *v21 - v22;
                  if ( v23 )
                    break;
                  ++v21;
                }
                while ( v22 );
                if ( v23 )
                {
                  v24 = (unsigned __int16 *)v1;
                  do
                  {
                    v25 = *(unsigned __int16 *)((char *)v24 + (char *)L"DataCenter" - v1);
                    v26 = *v24 - v25;
                    if ( v26 )
                      break;
                    ++v24;
                  }
                  while ( v25 );
                  if ( v26 )
                  {
                    v27 = (unsigned __int16 *)v1;
                    do
                    {
                      v28 = *(unsigned __int16 *)((char *)v27 + (char *)L"Personal" - v1);
                      v29 = *v27 - v28;
                      if ( v29 )
                        break;
                      ++v27;
                    }
                    while ( v28 );
                    if ( v29 )
                    {
                      v30 = (unsigned __int16 *)v1;
                      do
                      {
                        v31 = *(unsigned __int16 *)((char *)v30 + (char *)L"Blade" - v1);
                        v32 = *v30 - v31;
                        if ( v32 )
                          break;
                        ++v30;
                      }
                      while ( v31 );
                      if ( v32 )
                      {
                        v33 = (unsigned __int16 *)v1;
                        do
                        {
                          v34 = *(unsigned __int16 *)((char *)v33 + (char *)L"Embedded(Restricted)" - v1);
                          v35 = *v33 - v34;
                          if ( v35 )
                            break;
                          ++v33;
                        }
                        while ( v34 );
                        if ( v35 )
                        {
                          v36 = (unsigned __int16 *)v1;
                          do
                          {
                            v37 = *(unsigned __int16 *)((char *)v36 + (char *)L"Security Appliance" - v1);
                            v38 = *v36 - v37;
                            if ( v38 )
                              break;
                            ++v36;
                          }
                          while ( v37 );
                          if ( v38 )
                          {
                            v39 = (unsigned __int16 *)v1;
                            do
                            {
                              v40 = *(unsigned __int16 *)((char *)v39 + (char *)L"Storage Server" - v1);
                              v41 = *v39 - v40;
                              if ( v41 )
                                break;
                              ++v39;
                            }
                            while ( v40 );
                            if ( v41 )
                            {
                              v42 = (unsigned __int16 *)v1;
                              do
                              {
                                v43 = *(unsigned __int16 *)((char *)v42 + (char *)L"Compute Server" - v1);
                                v44 = *v42 - v43;
                                if ( v44 )
                                  break;
                                ++v42;
                              }
                              while ( v43 );
                              if ( v44 )
                              {
                                v45 = (unsigned __int16 *)v1;
                                do
                                {
                                  v46 = *(unsigned __int16 *)((char *)v45 + (char *)L"WH Server" - v1);
                                  v47 = *v45 - v46;
                                  if ( v47 )
                                    break;
                                  ++v45;
                                }
                                while ( v46 );
                                if ( v47 )
                                {
                                  v48 = (unsigned __int16 *)v1;
                                  do
                                  {
                                    v49 = *(unsigned __int16 *)((char *)v48 + (char *)L"PhoneNT" - v1);
                                    v50 = *v48 - v49;
                                    if ( v50 )
                                      break;
                                    ++v48;
                                  }
                                  while ( v49 );
                                  if ( !v50 )
                                    result |= 0x10000u;
                                }
                                else
                                {
                                  result |= 0x8000u;
                                }
                              }
                              else
                              {
                                result |= 0x4000u;
                              }
                            }
                            else
                            {
                              result |= 0x2000u;
                            }
                          }
                          else
                          {
                            result |= 0x1000u;
                          }
                        }
                        else
                        {
                          result |= 0x800u;
                        }
                      }
                      else
                      {
                        result |= 0x400u;
                      }
                    }
                    else
                    {
                      result |= 0x200u;
                    }
                  }
                  else
                  {
                    result |= 0x80u;
                  }
                }
                else
                {
                  result |= 0x40u;
                }
              }
              else
              {
                result |= 0x10u;
              }
            }
            else
            {
              result |= 4u;
            }
          }
          else
          {
            result |= 8u;
          }
        }
        else
        {
          result |= 2u;
        }
      }
      else
      {
        result |= 0x20u;
      }
    }
    else
    {
      result |= 1u;
    }
    v51 = -1LL;
    do
      ++v51;
    while ( *(_WORD *)&v1[2 * v51] );
  }
  return result;
}
