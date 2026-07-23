/*
 * XREFs of AslpFileVerStringBlockGetValue @ 0x140810450
 * Callers:
 *     AslpFileQueryVersionString @ 0x14081021C (AslpFileQueryVersionString.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x14044CF68 (RtlStringCbLengthW.c)
 *     AslpFileVerBlockGetValueOffset @ 0x1404A4D8C (AslpFileVerBlockGetValueOffset.c)
 */

__int64 __fastcall AslpFileVerStringBlockGetValue(const wchar_t **a1, size_t *a2, __int64 a3, unsigned __int64 a4)
{
  __int64 result; // rax
  size_t v9; // r11
  const wchar_t *v10; // rdi
  size_t v11; // rbx
  unsigned __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  size_t pcbLength; // [rsp+48h] [rbp+10h] BYREF

  *a1 = 0LL;
  *a2 = 0LL;
  v12 = 0LL;
  pcbLength = 0LL;
  result = AslpFileVerBlockGetValueOffset(&v12, a3, a4);
  if ( (int)result >= 0 )
  {
    if ( v12 <= a4 )
    {
      if ( v12 == a4 )
      {
        v10 = (const wchar_t *)(v12 + a3 - 2);
      }
      else
      {
        v10 = (const wchar_t *)(v12 + a3);
        v11 = a4 - v12;
        if ( RtlStringCbLengthW(v10, v11, &pcbLength) >= 0 )
        {
          v9 = pcbLength;
        }
        else
        {
          v9 = v11 - 2;
          v10[(v11 - 2) >> 1] = 0;
        }
      }
      result = 0LL;
      *a2 = v9 >> 1;
      *a1 = v10;
    }
    else
    {
      return 3221225485LL;
    }
  }
  return result;
}
