/*
 * XREFs of RtlGetSetBootStatusData @ 0x140A1CB50
 * Callers:
 *     PopBootStatSet @ 0x140A1C6F8 (PopBootStatSet.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     RtlpGetSetBootStatusData @ 0x140A1CCD4 (RtlpGetSetBootStatusData.c)
 */

__int64 __fastcall RtlGetSetBootStatusData(HANDLE FileHandle, char a2, int a3, _BYTE *a4, int a5, _DWORD *a6)
{
  __int64 result; // rax
  __int64 v11; // rcx
  char v12; // al
  _BYTE *v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE v17[208]; // [rsp+40h] [rbp-C0h] BYREF

  LODWORD(v16) = 0;
  memset_0(v17, 0, 0xC8uLL);
  if ( a2 )
    return RtlpGetSetBootStatusData(FileHandle, a5, (__int64)a6);
  if ( a3 == 15 )
    return 3221225485LL;
  result = RtlpGetSetBootStatusData(FileHandle, 1, 0LL);
  if ( (int)result >= 0 )
  {
    result = RtlpGetSetBootStatusData(FileHandle, 200, 0LL);
    if ( (int)result >= 0 )
    {
      result = RtlpGetSetBootStatusData(FileHandle, a5, (__int64)&v16);
      if ( (int)result >= 0 )
      {
        v11 = (unsigned int)v16;
        if ( a6 )
          *a6 = v16;
        v12 = 0;
        if ( (_DWORD)v11 )
        {
          v13 = v17;
          v14 = v11;
          do
          {
            v12 += *v13++;
            --v14;
          }
          while ( v14 );
          v15 = v11;
          do
          {
            v12 -= *a4++;
            --v15;
          }
          while ( v15 );
        }
        return RtlpGetSetBootStatusData(FileHandle, 1, 0LL);
      }
    }
  }
  return result;
}
