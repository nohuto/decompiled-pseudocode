/*
 * XREFs of RtlGetImageEnclaveConfig @ 0x18011E74C
 * Callers:
 *     LdrLoadEnclaveModule @ 0x1800D87F0 (LdrLoadEnclaveModule.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x1800590F0 (RtlImageNtHeaderEx.c)
 *     RtlULongLongSub @ 0x1800F16B0 (RtlULongLongSub.c)
 *     LdrImageDirectoryEntryToLoadConfigEx @ 0x18014B594 (LdrImageDirectoryEntryToLoadConfigEx.c)
 *     memmove @ 0x180167400 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlGetImageEnclaveConfig(unsigned __int64 a1, char *a2)
{
  __int64 result; // rax
  unsigned int v5; // ebx
  __int64 Config; // rax
  __int64 v7; // r10
  unsigned int *v8; // r9
  unsigned __int64 v9; // rcx
  __int64 v10; // rdi
  unsigned int v11; // eax
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF
  unsigned __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  v13 = 0LL;
  v12 = 0LL;
  result = RtlImageNtHeaderEx(1, a1, 0LL, &v12);
  if ( (int)result >= 0 )
  {
    v5 = -1073741701;
    Config = LdrImageDirectoryEntryToLoadConfigEx(a1);
    if ( Config )
    {
      if ( *(_DWORD *)Config >= 0x100u
        && (int)RtlULongLongSub(*(_QWORD *)(Config + 248), *(_QWORD *)(v12 + 48), (__int64 *)&v13) >= 0 )
      {
        v8 = (unsigned int *)(v13 + a1);
        if ( v13 )
        {
          v9 = *(unsigned int *)(v7 + 80);
          if ( v13 < v9 && v13 + 4 >= v13 && v13 + 4 <= v9 )
          {
            v10 = *v8;
            if ( v10 + v13 >= v13 && v10 + v13 < v9 && (unsigned int)v10 >= 4 )
            {
              v11 = 0;
              if ( (unsigned int)v10 >= 8 )
                v11 = v8[1];
              if ( v11 < 4 )
                v11 = 4;
              if ( v11 <= 0x50 )
              {
                if ( (unsigned int)v10 > 0x50 )
                  v10 = 80LL;
                memmove(a2, v8, (unsigned int)v10);
                if ( (unsigned int)v10 < 0x50 )
                  memset_thunk_772440563353939046(&a2[v10], 0, 80LL - (unsigned int)v10);
                return 0;
              }
            }
          }
        }
      }
    }
    return v5;
  }
  return result;
}
