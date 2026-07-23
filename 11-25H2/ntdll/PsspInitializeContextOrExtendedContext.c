/*
 * XREFs of PsspInitializeContextOrExtendedContext @ 0x1800C7AF8
 * Callers:
 *     PsspDumpThread @ 0x1800C77C4 (PsspDumpThread.c)
 * Callees:
 *     RtlGetExtendedContextLength @ 0x180074950 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x1800C7C00 (RtlInitializeExtendedContext.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

struct _CONTEXT *__fastcall PsspInitializeContextOrExtendedContext(
        struct _CONTEXT *a1,
        size_t Size,
        ULONG ContextFlags)
{
  ULONG v3; // ebx
  size_t v5; // rsi
  __int64 Offset; // r9
  struct _CONTEXT *result; // rax
  NTSTATUS ExtendedContextLength; // eax
  ULONG v9; // ecx
  ULONG ContextLength; // [rsp+38h] [rbp+10h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+48h] [rbp+20h] BYREF

  ContextLength = 0;
  v3 = ContextFlags;
  ContextEx = 0LL;
  v5 = (unsigned int)Size;
  if ( (_DWORD)Size == 1232 )
    goto LABEL_8;
  if ( RtlGetExtendedContextLength(ContextFlags, &ContextLength) < 0 || (unsigned int)v5 < ContextLength )
  {
    if ( (v3 & 0x10000) != 0 )
    {
      v3 &= 0x1003Fu;
    }
    else if ( (v3 & 0x100000) != 0 )
    {
      v3 &= 0x10001Fu;
    }
    ExtendedContextLength = RtlGetExtendedContextLength(v3, &ContextLength);
    v9 = ContextLength;
    if ( ExtendedContextLength < 0 )
      v9 = -1;
    if ( (unsigned int)v5 < v9 )
      goto LABEL_8;
  }
  if ( RtlInitializeExtendedContext(a1, v3, &ContextEx) < 0
    || (Offset = ContextEx->Legacy.Offset, ContextEx->All.Offset > (int)Offset)
    || (signed int)(ContextEx->All.Length + ContextEx->All.Offset) < (signed int)(Offset + ContextEx->Legacy.Length)
    || (result = (struct _CONTEXT *)((char *)ContextEx + Offset)) == 0LL )
  {
LABEL_8:
    if ( (v3 & 0x10000) != 0 )
    {
      v3 &= 0x1003Fu;
    }
    else if ( (v3 & 0x100000) != 0 )
    {
      v3 &= 0x10001Fu;
    }
    memset_thunk_772440563353939046(a1, 0, v5);
    result = a1;
    a1->ContextFlags = v3;
  }
  return result;
}
