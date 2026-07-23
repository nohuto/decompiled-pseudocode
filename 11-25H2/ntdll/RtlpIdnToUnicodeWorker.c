/*
 * XREFs of RtlpIdnToUnicodeWorker @ 0x1800C04F0
 * Callers:
 *     RtlIdnToUnicode @ 0x1800BEAE0 (RtlIdnToUnicode.c)
 *     RtlCanonicalizeDomainName @ 0x1800BF430 (RtlCanonicalizeDomainName.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     punycode_decode @ 0x1800C08F0 (punycode_decode.c)
 *     RtlpGetNormalization @ 0x1800C12A4 (RtlpGetNormalization.c)
 *     Normalization__IsNormalized @ 0x1800C1414 (Normalization__IsNormalized.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall RtlpIdnToUnicodeWorker(int a1, wchar_t *a2, int a3, void *a4, int *a5, _BYTE *Src, __int64 a7)
{
  __int64 v7; // r12
  char v8; // bp
  wchar_t v9; // r13
  __int64 result; // rax
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rax
  bool v14; // zf
  __int64 v15; // rdx
  char *v16; // rsi
  int v17; // edi
  __int64 v18; // r13
  _BYTE *v19; // r8
  __int64 i; // rcx
  __int16 v21; // dx
  int v22; // ebp
  _BYTE *v23; // r8
  wchar_t *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // [rsp+20h] [rbp-68h]
  __int64 v27; // [rsp+28h] [rbp-60h]
  PVOID BaseAddress; // [rsp+40h] [rbp-48h] BYREF
  __int64 v29; // [rsp+48h] [rbp-40h] BYREF

  v7 = 0LL;
  BaseAddress = 0LL;
  v8 = a1;
  LOBYTE(a7) = 0;
  if ( !a2 || !a5 || *a5 < 0 || a3 < -1 || *a5 > 0 && !a4 || (a1 & 0xFFFFFFF0) != 0 )
    return 3221225485LL;
  if ( a3 == -1 )
  {
    v24 = a2;
    v25 = 515LL;
    do
    {
      if ( !*v24 )
        break;
      ++v24;
      --v25;
    }
    while ( v25 );
    if ( !v25 )
      return 3221227286LL;
    a3 = 515 - v25 + 1;
  }
  v9 = a2[a3 - 1];
  LOBYTE(v27) = (v8 & 2) != 0;
  LOBYTE(v26) = (v8 & 4) != 0;
  result = punycode_decode(a2, v26, v27, (__int64)&a7, (__int64)&BaseAddress);
  if ( (int)result < 0 )
    return result;
  if ( !v9 )
    return 3221227286LL;
  if ( (v8 & 8) == 0 && !(_BYTE)a7 )
  {
    LOBYTE(a7) = 0;
    v11 = -1LL;
    if ( (v8 & 4) != 0 )
    {
      v29 = 0LL;
      v12 = ((_BYTE *)BaseAddress - Src) >> 1;
      if ( !Src || (int)v12 < -1 || (int)RtlpGetNormalization(1LL, &v29) < 0 )
        return 3221227286LL;
      if ( (_DWORD)v12 == -1 )
      {
        v13 = -1LL;
        do
          v14 = *(_WORD *)&Src[2 * v13++ + 2] == 0;
        while ( !v14 );
        LODWORD(v12) = v13 + 1;
      }
      if ( (int)Normalization__IsNormalized(v29, Src, (unsigned int)v12, &a7) < 0 || !(_BYTE)a7 )
        return 3221227286LL;
    }
    v15 = ((_BYTE *)BaseAddress - Src) >> 1;
    if ( v15 < 511 - (v9 == 0) )
    {
      v16 = (char *)BaseAddress + 2;
      v17 = 511 - (2 - (v9 != 0)) - v15;
      v18 = v17;
      BaseAddress = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v17);
      v19 = BaseAddress;
      if ( !BaseAddress )
        return 3221225495LL;
      if ( v17 > 0 )
      {
        for ( i = 0LL; i < v17; ++i )
        {
          v21 = *(_WORD *)&v16[2 * i];
          if ( (unsigned __int16)(v21 - 65) <= 0x19u )
          {
            *(_WORD *)&v16[2 * i] = v21 + 32;
            v19[i] = 1;
          }
        }
      }
      v22 = v8 & 1;
      v29 = 0LL;
      if ( v16 && v17 >= -1 )
      {
        if ( (int)RtlpGetNormalization(((v22 ^ 1u) << 8) + 13, &v29) >= 0 )
        {
          if ( v17 == -1 )
          {
            do
              v14 = *(_WORD *)&v16[2 * v11++ + 2] == 0;
            while ( !v14 );
            v17 = v11 + 1;
          }
          if ( (int)Normalization__IsNormalized(v29, v16, (unsigned int)v17, &a7) >= 0 && (_BYTE)a7 )
          {
            v23 = BaseAddress;
            if ( v18 > 0 )
            {
              do
              {
                if ( v23[v7] == 1 )
                  *(_WORD *)&v16[2 * v7] -= 32;
                ++v7;
              }
              while ( v7 < v18 );
            }
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v23);
            goto LABEL_42;
          }
        }
        v19 = BaseAddress;
      }
      RtlpSysVolFree(v19);
      return 3221227286LL;
    }
  }
LABEL_42:
  if ( a4 && *a5 )
  {
    if ( *a5 < 511 )
      return 3221225507LL;
    memmove(a4, Src, 0x3FEuLL);
  }
  *a5 = 511;
  return 0LL;
}
