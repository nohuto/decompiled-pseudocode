/*
 * XREFs of RtlpHpLfhTlsCleanup @ 0x18004EDC0
 * Callers:
 *     RtlpFlsDataCleanup @ 0x18004EC20 (RtlpFlsDataCleanup.c)
 *     RtlpFlsFree @ 0x18008F164 (RtlpFlsFree.c)
 * Callees:
 *     RtlpHpEnvTlsSetValue @ 0x18004EB3C (RtlpHpEnvTlsSetValue.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpHpLfhTlsCleanup(__int64 a1, int a2)
{
  unsigned int v3; // r9d
  __int64 result; // rax
  unsigned __int64 v5; // rcx
  __int64 v6; // r8

  if ( HIWORD(a2) << 6 != 192 )
    ((void (__fastcall *)(_QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 48)))(*(_QWORD *)a1);
  v3 = *(_DWORD *)(a1 + 76);
  if ( (unsigned __int16)v3 >= 0x40u )
  {
    result = (__int64)NtCurrentTeb();
    v6 = *(_QWORD *)(result + 6016);
    if ( !v6 )
      return result;
    result = (unsigned int)(unsigned __int16)v3 - 64;
    v5 = *(_QWORD *)(v6 + 8 * result);
  }
  else
  {
    result = 8 * (unsigned int)(unsigned __int16)v3 + 5248;
    v5 = __readgsqword(8 * (unsigned int)(unsigned __int16)v3 + 5248);
  }
  if ( v5 )
    return RtlpHpEnvTlsSetValue(v3, 0LL);
  return result;
}
