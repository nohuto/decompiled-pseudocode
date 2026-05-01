/*
 * XREFs of SdbpCheckMatchingDevice @ 0x1800997B0
 * Callers:
 *     <none>
 * Callees:
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 *     SdbFindFirstTag @ 0x180097EEC (SdbFindFirstTag.c)
 *     SdbGetStringTagPtr @ 0x1800981D4 (SdbGetStringTagPtr.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A9010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SdbpCheckMatchingDevice(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  __int64 (__fastcall *v6)(__int64); // rbp
  unsigned int v7; // ebx
  unsigned int FirstTag; // eax
  __int64 StringTagPtr; // rax

  v6 = *(__int64 (__fastcall **)(__int64))(a2 + 1744);
  v7 = 0;
  *a1 = 0;
  if ( v6 && (FirstTag = SdbFindFirstTag(a3, a5, 24577)) != 0 && (StringTagPtr = SdbGetStringTagPtr(a3, FirstTag)) != 0 )
  {
    v7 = 1;
    *a1 = v6(StringTagPtr);
    if ( a6 )
      *(_DWORD *)(a6 + 80) = 1;
  }
  else
  {
    AslLogCallPrintf(1LL);
  }
  return v7;
}
