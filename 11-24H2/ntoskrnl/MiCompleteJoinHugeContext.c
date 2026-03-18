/*
 * XREFs of MiCompleteJoinHugeContext @ 0x140487C38
 * Callers:
 *     MiJoinHugeContext @ 0x140487A9C (MiJoinHugeContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCompleteJoinHugeContext(__int64 a1, __int64 a2, __int64 a3, __int16 a4)
{
  bool v4; // zf
  __int64 result; // rax
  unsigned int v6; // eax
  unsigned __int64 v7; // rcx
  unsigned int v8; // edx

  *(_DWORD *)(a2 + 320) = 0;
  v4 = *(_BYTE *)(a3 + 8) == 0;
  result = *(_QWORD *)a3;
  *(_WORD *)(a2 + 576) = a4;
  if ( v4 )
  {
    v6 = ((result - qword_140E2FFC0) >> 3) & 0x3FFFFF;
    v7 = v6;
    v8 = ~(1 << (v6 & 0x1F));
    result = qword_140E2FFC8;
    _InterlockedAnd((volatile signed __int32 *)(qword_140E2FFC8 + 4 * (v7 >> 5)), v8);
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(result + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return result;
}
