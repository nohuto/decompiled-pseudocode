/*
 * XREFs of ?InternalRebuildHwndListForIMEClass@@YAPEAUtagBWL@@PEAU1@@Z @ 0x1400482D0
 * Callers:
 *     BuildHwndList @ 0x140047FC0 (BuildHwndList.c)
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 */

struct tagBWL *__fastcall InternalRebuildHwndListForIMEClass(struct tagBWL *a1)
{
  struct tagBWL *v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  _QWORD *v4; // r13
  _QWORD *v5; // r14
  __int64 v6; // rdi
  _QWORD *v7; // r12
  _QWORD *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 UserSessionState; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // r8
  __int64 *v16; // r15
  __int64 v17; // rbx
  __int16 *v18; // rdi
  __int16 v19; // di
  _QWORD *v20; // rcx
  __int64 i; // rax

  v1 = a1;
  v4 = (_QWORD *)Win32AllocPoolZInit(*((_QWORD *)a1 + 2) - (_QWORD)a1 + 8LL, 1819767637LL);
  v5 = v4;
  if ( v4 )
  {
    v6 = *((_QWORD *)v1 + 4);
    v7 = (_QWORD *)((char *)v1 + 32);
    v8 = (_QWORD *)((char *)v1 + 32);
    if ( v6 != 1 )
    {
      do
      {
        W32GetCurrentThreadNonPaged(v3, v2);
        v3 = *(_QWORD *)(W32GetUserSessionState(v10, v9) + 19928);
        if ( (unsigned __int64)(unsigned __int16)v6 < *(_QWORD *)(v3 + 8) )
        {
          UserSessionState = W32GetUserSessionState(v3, v2);
          v14 = *(_DWORD *)(W32GetUserSessionState(v13, v12) + 19952) * (unsigned int)(unsigned __int16)v6
              + *(_QWORD *)(UserSessionState + 19944);
          LOWORD(v6) = WORD1(v6) & 0x7FFF;
          v16 = (__int64 *)HMPkheFromPhe(v14);
          if ( ((WORD1(v6) & 0x7FFF) == *(_WORD *)(v14 + 26)
             || (_WORD)v6 == 0x7FFF
             || !(_WORD)v6 && PsGetCurrentProcessWow64Process(v3, v2, v15))
            && (*(_BYTE *)(v14 + 25) & 1) == 0
            && *(_BYTE *)(v14 + 24) == 1 )
          {
            v17 = *v16;
            if ( *v16 )
            {
              while ( v17 )
              {
                v18 = *(__int16 **)(*(_QWORD *)(v17 + 136) + 8LL);
                if ( (v18[5] & 1) != 0
                  || (v19 = *v18, v3 = *(_QWORD *)(W32GetUserSessionState(v3, v2) + 19928), v19 == *(_WORD *)(v3 + 898)) )
                {
                  *v5++ = *v8;
                  goto LABEL_13;
                }
                v17 = *(_QWORD *)(v17 + 120);
              }
            }
          }
        }
        *v7++ = *v8;
LABEL_13:
        v6 = v8[1];
        ++v8;
      }
      while ( v6 != 1 );
      v1 = a1;
    }
    v20 = v4;
    *v5 = 0LL;
    for ( i = *v4; *v20; ++v7 )
    {
      *v7 = i;
      i = *++v20;
    }
    Win32FreePool(v4);
  }
  return v1;
}
