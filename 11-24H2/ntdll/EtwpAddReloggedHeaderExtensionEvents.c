/*
 * XREFs of EtwpAddReloggedHeaderExtensionEvents @ 0x18001F32C
 * Callers:
 *     EtwpFinalizeLogFileHeader @ 0x18001EFE0 (EtwpFinalizeLogFileHeader.c)
 * Callees:
 *     memmove @ 0x1801657C0 (memmove.c)
 */

_UNKNOWN **__fastcall EtwpAddReloggedHeaderExtensionEvents(__int64 a1, __int64 a2, unsigned int a3)
{
  _UNKNOWN **result; // rax
  const void *v6; // rdx
  unsigned int v8; // ecx
  __int64 v9; // rbp
  unsigned int v10; // r14d
  const void *v11; // rdx
  __int64 v12; // rdi
  unsigned int v13; // r14d
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v6 = *(const void **)(a1 + 504);
  if ( v6 )
  {
    v8 = *(_DWORD *)(a1 + 512);
    v9 = *(unsigned int *)(a2 + 48);
    v10 = (v8 + 7) & 0xFFFFFFF8;
    if ( (unsigned int)v9 < a3 && (unsigned int)v9 >= 0x180 )
    {
      result = (_UNKNOWN **)(a3 - (unsigned int)v9);
      if ( (unsigned int)result >= v10 )
      {
        memmove((void *)(a2 + v9), v6, v8);
        result = (_UNKNOWN **)(v10 + (unsigned int)v9);
        *(_DWORD *)(a2 + 48) = (_DWORD)result;
      }
    }
  }
  v11 = *(const void **)(a1 + 520);
  if ( v11 )
  {
    result = (_UNKNOWN **)*(unsigned int *)(a1 + 528);
    v12 = *(unsigned int *)(a2 + 48);
    v13 = ((_DWORD)result + 7) & 0xFFFFFFF8;
    if ( (unsigned int)v12 < a3 && (unsigned int)v12 >= 0x180 && a3 - (unsigned int)v12 >= v13 )
    {
      memmove((void *)(a2 + v12), v11, (unsigned int)result);
      result = (_UNKNOWN **)(v13 + (unsigned int)v12);
      *(_DWORD *)(a2 + 48) = (_DWORD)result;
    }
  }
  return result;
}
