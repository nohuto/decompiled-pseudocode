/*
 * XREFs of NVMeIoPollingDpcRoutine @ 0x1400292D0
 * Callers:
 *     <none>
 * Callees:
 *     NVMeCompletionDpcRoutine @ 0x140012F10 (NVMeCompletionDpcRoutine.c)
 */

__int64 __fastcall NVMeIoPollingDpcRoutine(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 v4; // r8
  __int64 v6; // rdx
  int v8; // eax
  __int64 result; // rax
  _QWORD *v10; // r8
  __int64 v11; // rdx
  unsigned int i; // r8d
  unsigned int j; // r8d
  __int64 v14; // rcx
  __int64 v15; // r8
  _QWORD v16[2]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v17; // [rsp+50h] [rbp-30h]
  _QWORD v18[2]; // [rsp+60h] [rbp-20h] BYREF
  __int128 v19; // [rsp+70h] [rbp-10h]

  v16[1] = 0LL;
  v4 = 4LL;
  v18[1] = 0LL;
  v16[0] = 4LL;
  v6 = *a2;
  v17 = 0LL;
  v18[0] = 5LL;
  v19 = 0LL;
  v8 = *(_DWORD *)(v6 + 3764);
  if ( (v8 & 0x20) == 0 )
  {
    if ( (v8 & 2) != 0 )
      v4 = 5LL;
    StorPortExtendedFunction(93LL, v6, v4, a2[1] + 96);
  }
  NVMeCompletionDpcRoutine(
    a1,
    *a2,
    a2[1],
    ~*(_BYTE *)(*a2 + 3764) & 2 | (unsigned __int64)(((unsigned int)~*(_DWORD *)(*a2 + 3764) >> 3) & 1));
  result = *(unsigned int *)(*a2 + 3764);
  if ( (result & 0x20) == 0 )
  {
    v10 = v16;
    if ( (result & 2) != 0 )
      v10 = v18;
    result = StorPortNotification(4100LL, *a2, v10);
  }
  v11 = a2[1];
  for ( i = 0; i < *(_DWORD *)(v11 + 180); ++i )
  {
    result = *(_QWORD *)(v11 + 192);
    if ( *(_WORD *)(*(_QWORD *)(result + 8LL * i) + 136LL) )
    {
LABEL_17:
      v14 = *a2;
      result = *(unsigned int *)(*a2 + 24);
      if ( (result & 0x10) == 0 )
      {
        v15 = *(_QWORD *)(v11 + 256);
        if ( v15 )
          return StorPortExtendedFunction(89LL, v14, *(_QWORD *)(v15 + 8LL * a3), -10LL * *(unsigned int *)(v11 + 252));
        else
          return StorPortNotification(4098LL, v14, v11 + 264);
      }
      return result;
    }
  }
  for ( j = 0; j < *(_DWORD *)(v11 + 212); ++j )
  {
    result = *(_QWORD *)(v11 + 224);
    if ( *(_WORD *)(*(_QWORD *)(result + 8LL * j) + 136LL) )
      goto LABEL_17;
  }
  return result;
}
