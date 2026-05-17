/*
 * XREFs of RtlGetSetBootStatusData @ 0x18013FB70
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetSetBootStatusData @ 0x180140038 (RtlpGetSetBootStatusData.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlGetSetBootStatusData(int a1, char a2, int a3, _BYTE *a4, int a5, _DWORD *a6)
{
  int v10; // edx
  __int64 result; // rax
  int v12; // edx
  __int64 v13; // rcx
  char v14; // al
  _BYTE *v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rdx
  _BYTE v18[4]; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v19[3]; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE v20[208]; // [rsp+40h] [rbp-C0h] BYREF

  v19[0] = 0;
  v18[0] = 0;
  memset_thunk_772440563353939046(v20, 0, 0xC8uLL);
  if ( a2 )
  {
    LOBYTE(v10) = 1;
    return RtlpGetSetBootStatusData(a1, v10, a3, (_DWORD)a4, a5, (__int64)a6);
  }
  else if ( a3 == 15 )
  {
    return 3221225485LL;
  }
  else
  {
    LOBYTE(v10) = 1;
    result = RtlpGetSetBootStatusData(a1, v10, 15, (unsigned int)v18, 1, 0LL);
    if ( (int)result >= 0 )
    {
      LOBYTE(v12) = 1;
      result = RtlpGetSetBootStatusData(a1, v12, a3, (unsigned int)v20, 200, 0LL);
      if ( (int)result >= 0 )
      {
        result = RtlpGetSetBootStatusData(a1, 0, a3, (_DWORD)a4, a5, (__int64)v19);
        if ( (int)result >= 0 )
        {
          v13 = v19[0];
          if ( a6 )
            *a6 = v19[0];
          v14 = v18[0];
          if ( (_DWORD)v13 )
          {
            v15 = v20;
            v16 = v13;
            do
            {
              v14 += *v15++;
              --v16;
            }
            while ( v16 );
            v18[0] = v14;
            v17 = v13;
            do
            {
              v14 -= *a4++;
              --v17;
            }
            while ( v17 );
            v18[0] = v14;
          }
          return RtlpGetSetBootStatusData(a1, 0, 15, (unsigned int)v18, 1, 0LL);
        }
      }
    }
  }
  return result;
}
