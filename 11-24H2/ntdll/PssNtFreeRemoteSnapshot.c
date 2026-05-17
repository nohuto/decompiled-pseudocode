/*
 * XREFs of PssNtFreeRemoteSnapshot @ 0x1801126D0
 * Callers:
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x18011A7DC (PsspDuplicateSnapshotRemoteToRemote.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x180162050 (ZwFreeVirtualMemory.c)
 *     ZwDuplicateObject @ 0x180162410 (ZwDuplicateObject.c)
 *     ZwReadVirtualMemory @ 0x180162470 (ZwReadVirtualMemory.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall PssNtFreeRemoteSnapshot(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp-D0h]
  __int64 v6; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v7; // [rsp+48h] [rbp-B8h] BYREF
  int v8; // [rsp+50h] [rbp-B0h] BYREF
  int v9; // [rsp+54h] [rbp-ACh]
  __int64 v10; // [rsp+3B8h] [rbp+2B8h]
  __int64 v11; // [rsp+3D0h] [rbp+2D0h]
  __int64 v12; // [rsp+3E8h] [rbp+2E8h]
  __int64 v13; // [rsp+400h] [rbp+300h]
  __int64 v14; // [rsp+420h] [rbp+320h]
  __int64 v15; // [rsp+440h] [rbp+340h]

  memset_thunk_772440563353939046(&v8, 0, 0x478uLL);
  v7 = 0LL;
  v6 = 0LL;
  result = ZwReadVirtualMemory(a1, a2, &v8, 1144LL, &v6);
  if ( (int)result >= 0 )
  {
    if ( v6 == 1144 )
    {
      if ( v8 == 1146311504 )
      {
        if ( (v9 & 1) == 0 || (v9 & 2) != 0 )
        {
          return 3221225659LL;
        }
        else
        {
          if ( (v9 & 4) != 0 )
          {
            v7 = *(_QWORD *)(a2 + 904);
            v6 = 0LL;
            ZwFreeVirtualMemory(a1, &v7, &v6, 0x8000LL);
          }
          if ( v15 )
            ZwDuplicateObject(a1, v15, 0LL, 0LL, 0, 0, 1);
          if ( v14 )
          {
            LODWORD(v5) = 1;
            ZwDuplicateObject(a1, v14, 0LL, 0LL, 0, 0, v5);
          }
          if ( v12 )
          {
            LODWORD(v5) = 1;
            ZwDuplicateObject(a1, v12, 0LL, 0LL, 0, 0, v5);
          }
          if ( v13 )
          {
            LODWORD(v5) = 1;
            ZwDuplicateObject(a1, v13, 0LL, 0LL, 0, 0, v5);
          }
          if ( v11 )
          {
            LODWORD(v5) = 1;
            ZwDuplicateObject(a1, v11, 0LL, 0LL, 0, 0, v5);
          }
          if ( v10 )
          {
            LODWORD(v5) = 1;
            ZwDuplicateObject(a1, v10, 0LL, 0LL, 0, 0, v5);
          }
          v7 = a2;
          v6 = 0LL;
          ZwFreeVirtualMemory(a1, &v7, &v6, 0x8000LL);
          return 0LL;
        }
      }
      else
      {
        return 3221225480LL;
      }
    }
    else
    {
      return 2147483661LL;
    }
  }
  return result;
}
