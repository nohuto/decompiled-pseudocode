/*
 * XREFs of WheapWmiExecutePluginCtlMethod @ 0x14065DD14
 * Callers:
 *     WheapWmiExecuteMethod @ 0x14065DB18 (WheapWmiExecuteMethod.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall WheapWmiExecutePluginCtlMethod(
        int a1,
        unsigned int a2,
        unsigned int *a3,
        __int64 a4,
        unsigned int *a5)
{
  unsigned int v5; // edi
  unsigned int v8; // ecx
  size_t v9; // rbp
  PVOID Memory; // rax
  void *v11; // r12
  __int64 result; // rax

  v5 = 0;
  *a5 = 0;
  if ( a1 == 1 )
  {
    if ( a2 < 4 || !a3 || (v9 = *a3, (unsigned int)v9 < 4) )
    {
      v8 = -1073741811;
      goto LABEL_13;
    }
    v5 = 8;
    if ( a2 >= 8 )
    {
      Memory = PshedAllocateMemory(v9);
      v11 = Memory;
      if ( !Memory )
      {
        v8 = -1073741670;
        goto LABEL_13;
      }
      memmove(Memory, a3 + 1, v9);
      a3[1] = a2 - 8;
      *a3 = PshedDoPluginCtl((unsigned int)v9, v11, a3 + 1, a3 + 2);
      PshedFreeMemory(v11);
      v8 = *a3;
      v5 = a3[1] + 8;
      if ( a2 >= v5 )
        goto LABEL_13;
    }
    v8 = -1073741789;
  }
  else
  {
    v8 = -1073741161;
  }
LABEL_13:
  result = v8;
  *a5 = v5;
  return result;
}
