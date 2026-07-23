/*
 * XREFs of MiRescanPagefileBitmaps @ 0x1403C3F28
 * Callers:
 *     MiFindFreePageFileSpace @ 0x1403C438C (MiFindFreePageFileSpace.c)
 * Callees:
 *     MiInitializePagefileBitmapsCache @ 0x1403C3CC0 (MiInitializePagefileBitmapsCache.c)
 *     MiRescanPageFileBitmapPortion @ 0x1403C56D8 (MiRescanPageFileBitmapPortion.c)
 *     RtlFindNextClearRunUlong @ 0x1403C598C (RtlFindNextClearRunUlong.c)
 */

__int64 __fastcall MiRescanPagefileBitmaps(__int64 a1)
{
  int v1; // ebx
  int v3; // r8d
  __int64 v4; // rsi
  int v5; // edx
  __int64 v6; // rax
  int v7; // r15d
  __int64 result; // rax
  _DWORD v9[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v10; // [rsp+38h] [rbp-8h]
  int v11; // [rsp+70h] [rbp+30h] BYREF
  __int64 v12; // [rsp+78h] [rbp+38h] BYREF

  v1 = 0;
  v11 = 0;
  v9[1] = 0;
  MiInitializePagefileBitmapsCache(a1);
  v4 = *(_QWORD *)(a1 + 144);
  v5 = 0;
  v9[0] = *(_DWORD *)a1;
  v6 = *(_QWORD *)(a1 + 80);
  v12 = v4;
  v10 = *(_QWORD *)(v6 + 32);
  while ( 1 )
  {
    result = RtlFindNextClearRunUlong((unsigned int)v9, v5, v3, -1, (__int64)&v11);
    if ( !(_DWORD)result )
      break;
    v3 = v11;
    v7 = v11 + result;
    if ( (unsigned int)result > *(_DWORD *)(v4 + 52) )
    {
      MiRescanPageFileBitmapPortion(a1, *(_QWORD *)(a1 + 80) + 8, v11, result, (__int64)&v12);
      v4 = v12;
    }
    v5 = v7;
  }
  if ( *(_QWORD *)(a1 + 144) == a1 + 144 )
    v1 = *(_DWORD *)(v4 + 52);
  *(_DWORD *)(a1 + 108) = v1;
  return result;
}
