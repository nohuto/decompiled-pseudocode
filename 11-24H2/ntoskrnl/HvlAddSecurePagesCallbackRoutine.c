/*
 * XREFs of HvlAddSecurePagesCallbackRoutine @ 0x140587118
 * Callers:
 *     HvlAddSecureHvPagesCallbackRoutine @ 0x1405870C0 (HvlAddSecureHvPagesCallbackRoutine.c)
 *     HvlAddSecureSkPagesCallbackRoutine @ 0x140587340 (HvlAddSecureSkPagesCallbackRoutine.c)
 * Callees:
 *     HvlpAddCrashdumpAreaPages @ 0x140587964 (HvlpAddCrashdumpAreaPages.c)
 *     HvlpEndSecurePageListIteration @ 0x140589660 (HvlpEndSecurePageListIteration.c)
 *     HvlpStartSecurePageListIteration @ 0x140589958 (HvlpStartSecurePageListIteration.c)
 *     VslGetSecurePageList @ 0x14058A504 (VslGetSecurePageList.c)
 *     IoIsPartialDumpRetry @ 0x14058EBC0 (IoIsPartialDumpRetry.c)
 */

__int64 __fastcall HvlAddSecurePagesCallbackRoutine(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v4; // si
  int v6; // ebx
  __int64 result; // rax
  __int64 v8; // rdx
  char v9; // bp
  _QWORD *v10; // r9
  char v11; // dl
  int v12; // ebx
  int v13; // ebx
  int v14; // [rsp+58h] [rbp+10h] BYREF
  __int64 v15; // [rsp+60h] [rbp+18h] BYREF

  v14 = a2;
  v15 = 0LL;
  v4 = a1 | 4;
  *(_QWORD *)(a4 + 24) = 0LL;
  *(_DWORD *)(a4 + 8) = 0;
  v6 = a1;
  result = IoIsPartialDumpRetry(a1, a2, a3, a4);
  v9 = result;
  if ( *v10 )
  {
    if ( BYTE3(HvlpCrashdumpIterationState) == v4 )
      goto LABEL_6;
    HvlpEndSecurePageListIteration(1LL, 0LL, 0LL);
    *(_QWORD *)a4 = 0LL;
  }
  HvlpCrashdumpIterationState = 0LL;
  xmmword_140F8E1F0 = 0LL;
  xmmword_140F8E200 = 0LL;
  result = HvlpStartSecurePageListIteration(1LL, v4, 0LL, 0LL, 0, &v15);
  if ( (int)result < 0 )
    return result;
  *((_QWORD *)&xmmword_140F8E200 + 1) = v15;
  result = (__int64)&HvlpCrashdumpIterationState;
  BYTE3(HvlpCrashdumpIterationState) = v4;
  LOBYTE(HvlpCrashdumpIterationState) = 1;
  *(_QWORD *)a4 = &HvlpCrashdumpIterationState;
LABEL_6:
  if ( (_BYTE)HvlpCrashdumpIterationState )
  {
    if ( BYTE1(HvlpCrashdumpIterationState)
      || (LOBYTE(v8) = 1, result = HvlpAddCrashdumpAreaPages(a4, v8), !(_BYTE)result) )
    {
      if ( BYTE2(HvlpCrashdumpIterationState) || (result = HvlpAddCrashdumpAreaPages(a4, 0LL), !(_BYTE)result) )
      {
        if ( !v9 || v6 == 2 || v6 == 8 || (v6 == 1 || v6 == 16) && *(_DWORD *)(a4 + 12) == 395 )
        {
          do
          {
            while ( !(_DWORD)xmmword_140F8E200 )
            {
              LOBYTE(v14) = 0;
              if ( (int)VslGetSecurePageList(0LL, 0LL, 0LL, &v14) < 0 )
                goto LABEL_27;
              LODWORD(xmmword_140F8E200) = *(unsigned __int16 *)(*((_QWORD *)&xmmword_140F8E200 + 1) + 8LL);
              *((_QWORD *)&xmmword_140F8E1F0 + 1) = *((_QWORD *)&xmmword_140F8E200 + 1) + 16LL;
            }
            *(_QWORD *)(a4 + 24) = (**((_QWORD **)&xmmword_140F8E1F0 + 1) >> 40) + 1LL;
            result = 0xFFFFFFFFFFLL;
            *(_QWORD *)(a4 + 16) = **((_QWORD **)&xmmword_140F8E1F0 + 1) & 0xFFFFFFFFFFLL;
            *((_QWORD *)&xmmword_140F8E1F0 + 1) += 8LL;
            LODWORD(xmmword_140F8E200) = xmmword_140F8E200 - 1;
          }
          while ( !*(_QWORD *)(a4 + 24) );
          *(_DWORD *)(a4 + 8) = -2147483646;
          v12 = v6 - 1;
          if ( v12 && ((v13 = v12 - 1) == 0 || v13 == 6) )
            *(_DWORD *)(a4 + 8) = -2147483614;
          else
            *(_DWORD *)(a4 + 8) = -2147483630;
        }
        else
        {
LABEL_27:
          result = HvlpEndSecurePageListIteration(1LL, 0LL, 0LL);
          LOBYTE(HvlpCrashdumpIterationState) = 0;
        }
      }
      else
      {
        BYTE2(HvlpCrashdumpIterationState) = 1;
      }
    }
    else
    {
      BYTE1(HvlpCrashdumpIterationState) = v11;
    }
  }
  return result;
}
