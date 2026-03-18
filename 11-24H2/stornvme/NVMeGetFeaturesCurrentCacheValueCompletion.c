/*
 * XREFs of NVMeGetFeaturesCurrentCacheValueCompletion @ 0x140005A90
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x140005060 (GetSrbExtension.c)
 */

unsigned __int64 __fastcall NVMeGetFeaturesCurrentCacheValueCompletion(__int64 a1, __int64 a2, _BYTE *a3)
{
  unsigned __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // r9
  char v7; // cl
  _BYTE *v8; // rdi
  unsigned __int64 v9; // r11
  int *v10; // rbx
  unsigned int *v11; // rsi
  unsigned __int64 v12; // rbp
  unsigned int *v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  char v16; // r8
  __int64 v17; // rdx
  int v18; // edx
  unsigned __int64 v19; // rcx
  _BYTE *v20; // rcx
  _BYTE *v21; // rcx

  result = GetSrbExtension(a2);
  v7 = *(_BYTE *)(v5 + 2);
  v8 = 0LL;
  v9 = result;
  if ( v7 == 40 )
  {
    v10 = (int *)(v5 + 60);
    v11 = (unsigned int *)(v5 + 60);
    v12 = *(_QWORD *)(v5 + 64);
    if ( !*(_DWORD *)(v5 + 20) )
    {
      result = *(unsigned int *)(v5 + 56);
      if ( (_DWORD)result )
      {
        v13 = (unsigned int *)(v5 + 120);
        v14 = (unsigned int)result;
        do
        {
          result = *v13;
          if ( (unsigned int)result >= 0x80 && (unsigned int)result <= *(_DWORD *)(v6 + 16) )
          {
            v15 = v6 + result;
            result = (unsigned int)(*(_DWORD *)(v6 + result) - 64);
            if ( (_DWORD)result )
            {
              result = (unsigned int)(result - 1);
              if ( (_DWORD)result )
              {
                if ( (_DWORD)result == 1 )
                {
                  result = *(unsigned int *)(v15 + 12);
                  v20 = (_BYTE *)(v15 + 32);
                  if ( !(_DWORD)result )
                    v20 = v8;
                  v8 = v20;
                }
              }
              else
              {
                result = *(unsigned __int8 *)(v15 + 10);
                v21 = (_BYTE *)(v15 + 24);
                if ( !(_BYTE)result )
                  v21 = v8;
                v8 = v21;
              }
            }
            else if ( *(_BYTE *)(v15 + 10) )
            {
              v8 = (_BYTE *)(v15 + 24);
            }
          }
          ++v13;
          --v14;
        }
        while ( v14 );
      }
    }
  }
  else
  {
    result = *(_QWORD *)(v5 + 24);
    v10 = (int *)(v5 + 16);
    v11 = (unsigned int *)(v5 + 16);
    v12 = result;
    if ( !v7 )
    {
      v11 = (unsigned int *)(v5 + 16);
      if ( *(_BYTE *)(v5 + 10) )
      {
        v8 = (_BYTE *)(v5 + 72);
        v11 = (unsigned int *)(v5 + 16);
      }
    }
  }
  if ( *(_BYTE *)(v6 + 3) == 1 )
  {
    if ( a3 )
    {
      v16 = *v8;
      v17 = 6LL;
      if ( *v8 != 26 )
        v17 = 10LL;
      *(_BYTE *)(v17 + v12) ^= (*(_BYTE *)(v17 + v12) ^ (4 * *a3)) & 4;
      result = *v11;
      v18 = 24;
      v19 = 24LL;
      if ( v16 != 26 )
        v19 = 28LL;
      if ( result < v19 )
      {
        v18 = 16;
        if ( v16 != 26 )
          v18 = 20;
      }
      else if ( v16 != 26 )
      {
        v18 = 28;
      }
      *v10 = v18;
    }
    else
    {
      *(_BYTE *)(v6 + 3) = 4;
    }
  }
  *(_BYTE *)(v9 + 4225) |= 8u;
  return result;
}
