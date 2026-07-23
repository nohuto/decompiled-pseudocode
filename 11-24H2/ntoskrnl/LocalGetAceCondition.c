/*
 * XREFs of LocalGetAceCondition @ 0x140865BE0
 * Callers:
 *     LocalConvertAclToString @ 0x140864F2C (LocalConvertAclToString.c)
 * Callees:
 *     RtlLengthSid @ 0x14044B2D0 (RtlLengthSid.c)
 *     LocalpGetStringForCondition @ 0x140865D50 (LocalpGetStringForCondition.c)
 *     LocalGetStringForRelativeAttribute @ 0x140AA5150 (LocalGetStringForRelativeAttribute.c)
 */

__int64 __fastcall LocalGetAceCondition(
        unsigned __int8 *a1,
        void *a2,
        _QWORD *a3,
        ULONG *a4,
        _DWORD *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  unsigned int v9; // esi
  unsigned int v14; // ebp
  int v15; // ecx
  ULONG v17; // edi
  ULONG v18; // ecx
  int v19; // r9d
  unsigned int StringForRelativeAttribute; // eax
  __int64 v21; // rcx
  int v22; // ebx

  v9 = *a1;
  *a3 = 0LL;
  *a4 = 0;
  v14 = 0;
  if ( (unsigned __int8)v9 <= 0x12u )
  {
    v15 = 271872;
    if ( _bittest(&v15, v9) )
    {
LABEL_6:
      v17 = *((unsigned __int16 *)a1 + 1) - RtlLengthSid(a2) - 8;
      goto LABEL_7;
    }
  }
  if ( (_BYTE)v9 != 11 )
  {
    if ( (_BYTE)v9 != 21 )
      return v14;
    goto LABEL_6;
  }
  v22 = *((_DWORD *)a1 + 2);
  v17 = *((unsigned __int16 *)a1 + 1) - 16 * (v22 & 1) - 8 * (v22 & 2) - RtlLengthSid(a2) - 12;
LABEL_7:
  *a4 = v17;
  if ( v17 )
  {
    v18 = (_DWORD)a2 + RtlLengthSid(a2);
    if ( (_BYTE)v9 == 18 )
      StringForRelativeAttribute = LocalGetStringForRelativeAttribute(v18, v17, a6, a7, a8, a9, (__int64)a3);
    else
      StringForRelativeAttribute = LocalpGetStringForCondition(v18, v17, (_DWORD)a3, v19, a6, a7, a8, a9);
    v14 = StringForRelativeAttribute;
    if ( !StringForRelativeAttribute )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( *(_WORD *)(*a3 + 2 * v21) );
      *a5 += 2 * v21 + 2;
    }
  }
  return v14;
}
