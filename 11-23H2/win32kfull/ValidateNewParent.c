/*
 * XREFs of ValidateNewParent @ 0x1C00AD3C4
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0051ED0 (xxxCreateWindowEx.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00ACC1C (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 * Callees:
 *     IsParentBandValid @ 0x1C00AD30C (IsParentBandValid.c)
 *     ProtectedContentAccessCheck @ 0x1C00AD4A8 (ProtectedContentAccessCheck.c)
 *     ValidateParentDepth @ 0x1C00E8404 (ValidateParentDepth.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall ValidateNewParent(__int64 a1, _QWORD *a2)
{
  int v4; // r11d
  _QWORD *v5; // rax
  __int64 i; // rax
  __int64 v8; // rcx

  if ( *(char *)(*(_QWORD *)(a1 + 40) + 19LL) >= 0
    && *(char *)(a2[5] + 19LL) >= 0
    && (unsigned int)ValidateParentDepth() )
  {
    if ( !v4 && !(unsigned int)ProtectedContentAccessCheck(a1) )
    {
      v8 = 5LL;
      goto LABEL_17;
    }
    if ( a2[3] == *(_QWORD *)(a1 + 24) && (unsigned int)IsParentBandValid(a1, (__int64)a2) )
    {
      v5 = a2;
      while ( (_QWORD *)a1 != v5 )
      {
        v5 = (_QWORD *)v5[13];
        if ( !v5 )
        {
          for ( i = a2[15]; i; i = *(_QWORD *)(i + 120) )
          {
            if ( a1 == i )
              goto LABEL_16;
          }
          return 1LL;
        }
      }
    }
  }
LABEL_16:
  v8 = 87LL;
LABEL_17:
  UserSetLastError(v8);
  return 0LL;
}
