/*
 * XREFs of CcCopyBytesToUserBuffer @ 0x140405000
 * Callers:
 *     CcMapAndCopyFromCache @ 0x140ABE1E0 (CcMapAndCopyFromCache.c)
 * Callees:
 *     IoFreeMdl @ 0x14025ED30 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x14025F510 (MmUnlockPages.c)
 *     HviCopyMemory @ 0x14040516C (HviCopyMemory.c)
 *     CcLockSystemCacheBuffer @ 0x1404051E8 (CcLockSystemCacheBuffer.c)
 *     FsRtlIsNtstatusExpected @ 0x14044B3D0 (FsRtlIsNtstatusExpected.c)
 *     CcCopyReadExceptionFilter @ 0x1404AE4E0 (CcCopyReadExceptionFilter.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall CcCopyBytesToUserBuffer(char *a1, char *a2, __int64 a3, char a4)
{
  unsigned int v5; // ebx
  unsigned int v7; // edi
  struct _MDL *v8; // r12
  __int64 v9; // rdx
  unsigned int v11; // r13d
  __int64 v12; // rsi
  __int64 v13; // rax
  struct _MDL *v14; // [rsp+38h] [rbp-40h] BYREF
  __int64 v15; // [rsp+40h] [rbp-38h]
  char *v16; // [rsp+80h] [rbp+8h]
  unsigned int v17; // [rsp+98h] [rbp+20h] BYREF

  v16 = a1;
  v5 = a3;
  v7 = 0;
  v8 = 0LL;
  v14 = 0LL;
  v9 = 0LL;
  v15 = 0LL;
  v17 = 0;
  if ( a4 )
  {
    v9 = CcLockSystemCacheBuffer(a2, &v14, a3, 0LL, &v17);
    v15 = v9;
    v8 = v14;
    if ( !v9 )
    {
      v7 = v17;
      goto LABEL_3;
    }
    a1 = v16;
  }
  while ( v5 )
  {
    if ( v5 >= 0x40000 )
      v11 = 0x40000;
    else
      v11 = v5;
    if ( a4 )
    {
      HviCopyMemory(a1, v9, v11);
      v12 = v11;
    }
    else
    {
      v12 = v11;
      memmove(a1, a2, v11);
    }
    v5 -= v11;
    a1 = &v16[v12];
    v16 += v12;
    v13 = v12 + v15;
    if ( !a4 )
      v13 = v15;
    v9 = v13;
    v15 = v13;
    if ( !a4 )
      a2 += v12;
  }
LABEL_3:
  if ( v8 )
  {
    MmUnlockPages(v8);
    IoFreeMdl(v8);
  }
  return v7;
}
