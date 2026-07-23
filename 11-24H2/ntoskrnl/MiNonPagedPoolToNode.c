/*
 * XREFs of MiNonPagedPoolToNode @ 0x14026B8BC
 * Callers:
 *     MiMakeSystemRangeAvailable @ 0x14026C384 (MiMakeSystemRangeAvailable.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall MiNonPagedPoolToNode(ULONG_PTR BugCheckParameter2)
{
  __int64 result; // rax
  __int64 v2; // r8

  for ( result = 0LL; ; result = (unsigned int)(result + 1) )
  {
    if ( (unsigned int)result >= (unsigned __int16)KeNumberNodes )
      KeBugCheckEx(0x1Au, 0x5309uLL, BugCheckParameter2, 0LL, 0LL);
    v2 = qword_140E2DC38 + 384 * result;
    if ( BugCheckParameter2 >= *(_QWORD *)(v2 + 104) && BugCheckParameter2 < *(_QWORD *)(v2 + 112) )
      break;
  }
  return result;
}
