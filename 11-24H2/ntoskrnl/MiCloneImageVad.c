/*
 * XREFs of MiCloneImageVad @ 0x1406922B8
 * Callers:
 *     MiAllocateChildVads @ 0x140A47718 (MiAllocateChildVads.c)
 * Callees:
 *     PsGetSessionIdEx @ 0x14030CBE0 (PsGetSessionIdEx.c)
 *     MiCopyForkedFixupVad @ 0x1407FBC6C (MiCopyForkedFixupVad.c)
 *     MiCreatePerSessionProtos @ 0x140A46C20 (MiCreatePerSessionProtos.c)
 */

__int64 __fastcall MiCloneImageVad(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r9d
  __int64 v5; // rbp
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rdi
  unsigned int SessionId; // eax
  __int64 result; // rax

  v3 = *(_DWORD *)(a3 + 48);
  v5 = **(_QWORD **)(a3 + 72);
  if ( (v3 & 0x200000) == 0 && (v3 & 0x70) == 0x20 && (v3 & 0x400000) != 0 )
  {
    MiCopyForkedFixupVad(a2, a3);
    v6 = *(_QWORD *)(a1 + 1040);
    v7 = v6 + 1088;
    v8 = v6 + 768;
    ++*(_QWORD *)(v6 + 1088);
  }
  else
  {
    v8 = 0LL;
    v7 = 320LL;
  }
  if ( (*(_DWORD *)(v5 + 56) & 0x8000000) == 0 )
    return 0LL;
  SessionId = PsGetSessionIdEx(a1);
  result = MiCreatePerSessionProtos(v5, SessionId);
  if ( (int)result >= 0 )
    return 0LL;
  if ( v8 )
    --*(_QWORD *)v7;
  return result;
}
