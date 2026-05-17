/*
 * XREFs of LdrQueryModuleServiceTags @ 0x18015FD70
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     LdrpDereferenceModule @ 0x180048C70 (LdrpDereferenceModule.c)
 *     LdrpFindLoadedDllByHandle @ 0x18004E780 (LdrpFindLoadedDllByHandle.c)
 */

__int64 __fastcall LdrQueryModuleServiceTags(unsigned __int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 result; // rax
  __int64 v6; // rsi
  __int64 v7; // rbx
  unsigned int v8; // edi
  __int64 *v9; // r8
  __int64 v10[5]; // [rsp+20h] [rbp-28h] BYREF
  int v11; // [rsp+68h] [rbp+20h] BYREF

  v10[0] = 0LL;
  result = LdrpFindLoadedDllByHandle(a1, v10, &v11);
  if ( (int)result >= 0 )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpModuleDatatableLock);
    v6 = v10[0];
    v7 = 0LL;
    v8 = *a3;
    v9 = *(__int64 **)(*(_QWORD *)(v10[0] + 152) + 16LL);
    while ( v9 )
    {
      if ( (unsigned int)v7 < v8 )
        *(_DWORD *)(a2 + 4 * v7) = *((_DWORD *)v9 + 2);
      v9 = (__int64 *)*v9;
      v7 = (unsigned int)(v7 + 1);
    }
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    *a3 = v7;
    LdrpDereferenceModule(v6);
    return v8 < (unsigned int)v7 ? 0xC0000023 : 0;
  }
  return result;
}
