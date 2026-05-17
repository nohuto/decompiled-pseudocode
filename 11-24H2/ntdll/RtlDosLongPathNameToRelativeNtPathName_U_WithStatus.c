/*
 * XREFs of RtlDosLongPathNameToRelativeNtPathName_U_WithStatus @ 0x18015F240
 * Callers:
 *     <none>
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x1800DBE30 (RtlpDosPathNameToRelativeNtPathName_U.c)
 */

__int64 __fastcall RtlDosLongPathNameToRelativeNtPathName_U_WithStatus(
        const wchar_t *a1,
        unsigned __int16 *a2,
        _QWORD *a3,
        __int64 a4)
{
  return RtlpDosPathNameToRelativeNtPathName_U(6, a1, a2, a3, a4);
}
