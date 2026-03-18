/*
 * XREFs of ?RtlUnicodeStringPrintfEx@@YAJPEAU_UNICODE_STRING@@0KPEBGZZ @ 0x14008D210
 * Callers:
 *     DpiPdoHandleQueryDeviceText @ 0x1402CC280 (DpiPdoHandleQueryDeviceText.c)
 * Callees:
 *     memset @ 0x1400A2000 (memset.c)
 */

__int64 RtlUnicodeStringPrintfEx(
        struct _UNICODE_STRING *a1,
        struct _UNICODE_STRING *a2,
        int a3,
        const unsigned __int16 *a4,
        ...)
{
  const wchar_t *v4; // r10
  __int16 v5; // r13
  unsigned __int16 Length; // cx
  unsigned __int16 MaximumLength; // ax
  wchar_t *Buffer; // r15
  size_t v10; // rdi
  wchar_t *v11; // r12
  size_t v12; // rsi
  size_t v13; // rbp
  int v14; // ebx
  __int16 v15; // r8
  __int16 v16; // dx
  wchar_t *v17; // rcx
  int v18; // eax
  wchar_t *v20; // [rsp+20h] [rbp-68h]
  __int16 v21; // [rsp+28h] [rbp-60h]
  va_list Args; // [rsp+B0h] [rbp+28h] BYREF

  va_start(Args, a4);
  v4 = a4;
  v5 = a3;
  if ( !a1 && (a3 & 0x100) != 0 )
    goto LABEL_12;
  Length = a1->Length;
  if ( (Length & 1) != 0 )
    return (unsigned int)-1073741811;
  MaximumLength = a1->MaximumLength;
  if ( (MaximumLength & 1) != 0
    || Length > MaximumLength
    || MaximumLength == 0xFFFF
    || !a1->Buffer && (Length || MaximumLength) )
  {
    return (unsigned int)-1073741811;
  }
  if ( a1 )
  {
    Buffer = a1->Buffer;
    v10 = (unsigned __int64)a1->MaximumLength >> 1;
    v21 = v10;
    v20 = Buffer;
  }
  else
  {
LABEL_12:
    v21 = 0;
    Buffer = 0LL;
    v20 = 0LL;
    v10 = 0LL;
  }
  v11 = Buffer;
  LOWORD(v12) = v10;
  LOWORD(v13) = 0;
  if ( (a3 & 0x100) != 0 && !a4 )
    v4 = (const wchar_t *)&unk_1400C6B88;
  v14 = 0;
  if ( (a3 & 0xFFFFE000) != 0 )
    goto LABEL_17;
  if ( v10 )
  {
    v18 = _vsnwprintf(Buffer, v10, v4, Args);
    if ( v18 < 0 || (v13 = v18, v18 > v10) )
    {
      v13 = v10;
      v14 = -2147483643;
    }
    v12 = v10 - v13;
    v11 = &Buffer[v13];
    if ( v14 >= 0 && (v5 & 0x200) != 0 && v12 )
    {
      memset(&Buffer[v13], (unsigned __int8)v5, 2 * v12);
      goto LABEL_31;
    }
  }
  else if ( *v4 )
  {
    if ( !Buffer )
    {
LABEL_17:
      v14 = -1073741811;
      v15 = 0;
      v16 = v10;
      v17 = Buffer;
LABEL_23:
      if ( (v5 & 0x1C00) != 0 && v10 )
      {
        v11 = v20;
        LOWORD(v12) = v21;
        LOWORD(v13) = 0;
        if ( (v5 & 0x1000) == 0 )
        {
          v11 = v17;
          LOWORD(v12) = v16;
          LOWORD(v13) = v15;
        }
        if ( (v5 & 0x400) != 0 )
        {
          memset(Buffer, (unsigned __int8)v5, 2 * v10);
          v11 = Buffer;
          LOWORD(v13) = 0;
          LOWORD(v12) = v10;
        }
        if ( (v5 & 0x800) != 0 )
        {
          v11 = Buffer;
          LOWORD(v12) = v10;
          LOWORD(v13) = 0;
        }
      }
      goto LABEL_31;
    }
    v14 = -2147483643;
  }
  v15 = v13;
  v16 = v12;
  v17 = v11;
  if ( v14 < 0 )
    goto LABEL_23;
LABEL_31:
  if ( a1 )
    a1->Length = 2 * v13;
  if ( (int)(v14 + 0x80000000) < 0 || v14 == -2147483643 )
  {
    if ( a2 )
    {
      a2->Length = 0;
      a2->MaximumLength = 2 * v12;
      a2->Buffer = v11;
    }
  }
  return (unsigned int)v14;
}
