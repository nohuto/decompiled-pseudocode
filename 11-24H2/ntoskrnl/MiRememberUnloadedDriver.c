/*
 * XREFs of MiRememberUnloadedDriver @ 0x140AAFEAC
 * Callers:
 *     MiUnloadSystemImage @ 0x140A870C4 (MiUnloadSystemImage.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 */

_UNKNOWN **__fastcall MiRememberUnloadedDriver(const void **a1, __int64 a2, unsigned int a3)
{
  _UNKNOWN **result; // rax
  __int64 v4; // rbp
  char *v7; // r9
  __int64 v8; // rax
  UNICODE_STRING *v9; // rbx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v4 = a3;
  if ( *(_WORD *)a1 )
  {
    v7 = (char *)MmUnloadedDrivers;
    if ( MmUnloadedDrivers )
    {
      v8 = (unsigned int)MmLastUnloadedDriver;
      if ( (unsigned int)MmLastUnloadedDriver < 0x32 )
        goto LABEL_7;
    }
    else
    {
      result = (_UNKNOWN **)MiAllocatePool(0x40uLL, 0x7D0uLL, 1413770573);
      MmUnloadedDrivers = result;
      v7 = (char *)result;
      if ( !result )
        return result;
    }
    v8 = 0LL;
    MmLastUnloadedDriver = 0;
LABEL_7:
    v9 = (UNICODE_STRING *)&v7[40 * v8];
    RtlFreeAnsiString(v9);
    result = (_UNKNOWN **)MiAllocatePool(0x40uLL, *(unsigned __int16 *)a1, 1413770573);
    v9->Buffer = (wchar_t *)result;
    if ( result )
    {
      memmove(result, a1[1], *(unsigned __int16 *)a1);
      v9->Length = *(_WORD *)a1;
      v9->MaximumLength = *((_WORD *)a1 + 1);
      v9[1].Buffer = (wchar_t *)(a2 + v4);
      *(_QWORD *)&v9[1].Length = a2;
      result = (_UNKNOWN **)MEMORY[0xFFFFF780000003B0];
      *(_QWORD *)&v9[2].Length = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
      ++MmLastUnloadedDriver;
    }
    else
    {
      *(_DWORD *)&v9->Length = 0;
    }
  }
  return result;
}
