/*
 * XREFs of CmFcpCountFeatureDescriptors @ 0x140667484
 * Callers:
 *     CmFcpSecondaryMultiPartDumpDataCallback @ 0x1406676C0 (CmFcpSecondaryMultiPartDumpDataCallback.c)
 * Callees:
 *     CmFcpIsValidMemoryRange @ 0x14066754C (CmFcpIsValidMemoryRange.c)
 */

__int64 __fastcall CmFcpCountFeatureDescriptors(_QWORD *a1, unsigned __int64 a2, _DWORD *a3)
{
  unsigned int v3; // esi
  _QWORD *v4; // rdi
  int v5; // ebp
  _QWORD *v8; // rbx
  __int64 result; // rax

  v3 = 0;
  v4 = a1 + 7;
  v5 = 0;
  v8 = a1;
  while ( (unsigned __int64)v4 <= a2 )
  {
    if ( (unsigned __int8)CmFcpIsValidMemoryRange(v8, 56LL) )
    {
      if ( *v8 )
      {
        ++v3;
        v8 += 7;
        v4 += 7;
      }
      else
      {
        ++v8;
        ++v4;
      }
    }
    else
    {
      ++v8;
      ++v4;
      ++v5;
    }
  }
  result = v3;
  *a3 = v5;
  return result;
}
