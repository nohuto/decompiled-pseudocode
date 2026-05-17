/*
 * XREFs of RtlUpcaseUnicodeToMultiByteN @ 0x1800B1970
 * Callers:
 *     toupper @ 0x180127570 (toupper.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x18013C3A0 (RtlUpcaseUnicodeStringToAnsiString.c)
 * Callees:
 *     RtlUnicodeToUTF8N @ 0x1800B1E90 (RtlUnicodeToUTF8N.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

__int64 __fastcall RtlUpcaseUnicodeToMultiByteN(
        _BYTE *a1,
        unsigned int a2,
        unsigned int *a3,
        char *a4,
        unsigned int a5)
{
  unsigned int v6; // esi
  _DWORD *v7; // r14
  unsigned int v8; // ebp
  _BYTE *v9; // rdi
  __int64 v10; // r11
  __int64 v11; // r9
  __int64 v12; // r12
  unsigned int v13; // eax
  __int64 v14; // r10
  unsigned __int64 v15; // rax
  unsigned int v17; // r15d
  int v18; // r12d
  unsigned int v19; // r13d
  __int64 v20; // r10
  __int64 v21; // r13
  _WORD *v22; // r9
  unsigned __int64 v23; // r8
  __int64 v24; // r13
  __int64 v25; // r10
  _BYTE *v26; // r8
  __int64 v27; // r12
  __int64 v28; // r13
  __int64 v29; // rax
  unsigned __int16 v30; // cx
  __int64 v31; // rdx
  unsigned __int16 v32; // r9
  __int16 v33; // dx
  unsigned int v34; // eax
  signed __int32 v35[8]; // [rsp+0h] [rbp-108h] BYREF
  unsigned int v36; // [rsp+30h] [rbp-D8h]
  int v37; // [rsp+34h] [rbp-D4h] BYREF
  __int64 v38; // [rsp+38h] [rbp-D0h]
  _BYTE v39[128]; // [rsp+40h] [rbp-C8h] BYREF

  v6 = a5 >> 1;
  v7 = a3;
  v38 = (__int64)a3;
  v8 = a2;
  v36 = a2;
  v9 = a1;
  _InterlockedOr(v35, 0);
  if ( word_1801CCFD0 == -535 || GlobalRtlNlsState == -535 )
  {
    v17 = 0;
    v18 = 0;
    v38 = qword_1801CD038;
    while ( 1 )
    {
      if ( !v6 || !v8 )
      {
LABEL_22:
        if ( v7 )
          *v7 = v18;
        return v17;
      }
      v37 = 0;
      if ( v6 >= 0x40 )
      {
        v19 = 64;
        v36 = 64;
        if ( v6 != 64 )
        {
          if ( (unsigned int)*((unsigned __int16 *)a4 + 63) - 55296 > 0x3FF )
            goto LABEL_27;
          v19 = 63;
        }
        v36 = v19;
      }
      else
      {
        v19 = v6;
        v36 = v6;
      }
LABEL_27:
      v20 = v19;
      v21 = v38;
      v22 = v39;
      do
      {
        v23 = *(unsigned __int16 *)((char *)v22 + a4 - v39);
        if ( (unsigned int)v23 >= 0x61 )
        {
          if ( (unsigned int)v23 > 0x7A )
          {
            if ( v21 && (unsigned __int16)v23 >= 0xC0u )
              LOWORD(v23) = *(_WORD *)(v21
                                     + 2
                                     * ((v23 & 0xF)
                                      + *(unsigned __int16 *)(v21
                                                            + 2LL
                                                            * (((unsigned __int8)v23 >> 4)
                                                             + (unsigned int)*(unsigned __int16 *)(v21 + 2 * (v23 >> 8))))))
                          + v23;
          }
          else
          {
            LOWORD(v23) = v23 - 32;
          }
        }
        *v22++ = v23;
        --v20;
      }
      while ( v20 );
      v24 = v36;
      if ( (int)RtlUnicodeToUTF8N((_DWORD)v9, v8, (unsigned int)&v37, (unsigned int)v39, 2 * v36) < 0 )
      {
        v18 += v37;
        v17 = -2147483643;
        goto LABEL_22;
      }
      a4 += 2 * v24;
      LODWORD(v9) = v37 + (_DWORD)v9;
      v8 -= v37;
      v18 += v37;
      v6 -= v24;
    }
  }
  _InterlockedOr(v35, 0);
  v10 = qword_1801CCFB0;
  if ( word_1801CCF9C )
  {
    v25 = qword_1801CCFB8;
    v26 = a1;
    v27 = qword_1801CD020;
    v28 = qword_1801CD038;
    if ( v6 )
    {
      do
      {
        if ( !v8 )
          break;
        v29 = *(unsigned __int16 *)a4;
        a4 += 2;
        v30 = *(_WORD *)(v25 + 2 * v29);
        v31 = *(unsigned __int16 *)(v27 + 2 * ((unsigned __int64)v30 >> 8));
        if ( (_WORD)v31 )
          v32 = *(_WORD *)(qword_1801CCFC8 + 2 * (v31 + (unsigned __int8)v30));
        else
          v32 = *(_WORD *)(v10 + 2LL * (unsigned __int8)v30);
        if ( v32 >= 0x61u )
        {
          if ( v32 > 0x7Au )
          {
            if ( v28 && v32 >= 0xC0u )
              v32 += *(_WORD *)(v28
                              + 2LL
                              * ((v32 & 0xF)
                               + (unsigned int)*(unsigned __int16 *)(v28
                                                                   + 2LL
                                                                   * (((v32 >> 4) & 0xF)
                                                                    + (unsigned int)*(unsigned __int16 *)(v28 + 2 * ((unsigned __int64)v32 >> 8))))));
          }
          else
          {
            v32 -= 32;
          }
        }
        v33 = *(_WORD *)(v25 + 2LL * v32);
        if ( HIBYTE(v33) )
        {
          v34 = v8--;
          if ( v34 < 2 )
            break;
          *v26++ = HIBYTE(v33);
        }
        *v26 = v33;
        --v8;
        ++v26;
        --v6;
      }
      while ( v6 );
      v7 = (_DWORD *)v38;
    }
    if ( v7 )
      *v7 = (_DWORD)v26 - (_DWORD)v9;
    return v8 < v6 ? 0x80000005 : 0;
  }
  else
  {
    v11 = qword_1801CCFB8;
    v12 = qword_1801CD038;
    v13 = a2;
    if ( v6 < a2 )
      v13 = a5 >> 1;
    if ( a3 )
      *a3 = v13;
    if ( v13 )
    {
      v14 = v13;
      do
      {
        v15 = *(unsigned __int16 *)(v10 + 2LL * *(unsigned __int8 *)(*(unsigned __int16 *)a4 + v11));
        if ( (unsigned int)v15 >= 0x61 )
        {
          if ( (unsigned int)v15 > 0x7A )
          {
            if ( v12 )
            {
              if ( (unsigned __int16)v15 >= 0xC0u )
                LOWORD(v15) = *(_WORD *)(v12
                                       + 2
                                       * ((v15 & 0xF)
                                        + *(unsigned __int16 *)(v12
                                                              + 2LL
                                                              * (((unsigned __int8)v15 >> 4)
                                                               + (unsigned int)*(unsigned __int16 *)(v12 + 2 * (v15 >> 8))))))
                            + v15;
            }
          }
          else
          {
            LOWORD(v15) = v15 - 32;
          }
        }
        a4 += 2;
        *v9++ = *(_BYTE *)((unsigned __int16)v15 + v11);
        --v14;
      }
      while ( v14 );
      v8 = v36;
    }
    return v8 < v6 ? 0x80000005 : 0;
  }
}
