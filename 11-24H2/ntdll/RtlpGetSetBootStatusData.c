/*
 * XREFs of RtlpGetSetBootStatusData @ 0x18013E908
 * Callers:
 *     RtlGetSetBootStatusData @ 0x18013E440 (RtlGetSetBootStatusData.c)
 * Callees:
 *     RtlBootStatusItemInfo @ 0x18013E0B4 (RtlBootStatusItemInfo.c)
 *     RtlpRecordBootStatusData @ 0x18013EA48 (RtlpRecordBootStatusData.c)
 *     NtReadFile @ 0x180161D50 (NtReadFile.c)
 *     NtWriteFile @ 0x180161D90 (NtWriteFile.c)
 */

__int64 __fastcall RtlpGetSetBootStatusData(__int64 a1, char a2, int a3, __int64 a4, unsigned int a5, _DWORD *a6)
{
  __int64 result; // rax
  __int64 v11; // rdi
  int v12; // ebx
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v16; // [rsp+54h] [rbp-1Ch] BYREF
  __int64 v17; // [rsp+58h] [rbp-18h] BYREF
  __int128 v18; // [rsp+60h] [rbp-10h] BYREF

  v16 = 0;
  v15 = 0;
  v17 = 0LL;
  v18 = 0LL;
  result = NtReadFile(a1, 0LL, 0LL, 0LL, &v18, &v16, 4, &v17, 0LL);
  if ( (int)result >= 0 )
  {
    result = RtlBootStatusItemInfo(a3, &v17, &v15);
    if ( (int)result >= 0 )
    {
      HIDWORD(v17) = 0;
      v11 = v15;
      if ( v15 + (unsigned __int64)(unsigned int)v17 <= v16 )
      {
        if ( a5 >= v15 )
        {
          if ( a2 )
          {
            v12 = NtReadFile(a1, 0LL, 0LL, 0LL, &v18, a4, v15, &v17, 0LL);
          }
          else
          {
            v13 = NtWriteFile(a1, 0LL, 0LL, 0LL, &v18, a4, v15, &v17, 0LL);
            LOBYTE(v14) = 1;
            v12 = v13;
            RtlpRecordBootStatusData(v14, a4, v17, v11);
          }
          if ( v12 >= 0 )
          {
            if ( a6 )
              *a6 = DWORD2(v18);
          }
          return (unsigned int)v12;
        }
        else
        {
          return 3221225507LL;
        }
      }
      else
      {
        return 3221225561LL;
      }
    }
  }
  return result;
}
