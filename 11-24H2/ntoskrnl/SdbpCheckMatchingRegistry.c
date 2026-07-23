/*
 * XREFs of SdbpCheckMatchingRegistry @ 0x140803760
 * Callers:
 *     <none>
 * Callees:
 *     SdbpCheckMatchingRegistryEntry @ 0x14080388C (SdbpCheckMatchingRegistryEntry.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x14080519C (SdbpGetRegistryMatchingAttributes.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpCheckMatchingRegistry(_DWORD *a1, __int64 a2, int a3, __int64 a4, int a5, __int64 a6)
{
  int v6; // edx
  unsigned int v7; // ebx
  const char *v9; // r9
  int v10; // r8d
  unsigned int v12; // [rsp+58h] [rbp-1h] BYREF
  int v13; // [rsp+5Ch] [rbp+3h] BYREF
  __int64 v14; // [rsp+60h] [rbp+7h] BYREF
  __int64 v15; // [rsp+68h] [rbp+Fh] BYREF
  __int64 v16; // [rsp+70h] [rbp+17h] BYREF
  __int64 v17; // [rsp+78h] [rbp+1Fh] BYREF
  __int64 v18; // [rsp+80h] [rbp+27h] BYREF
  __int64 v19; // [rsp+88h] [rbp+2Fh] BYREF
  int v20; // [rsp+A8h] [rbp+4Fh] BYREF

  v6 = a5;
  v7 = 0;
  *a1 = 0;
  v13 = 0;
  v19 = 0LL;
  v18 = 0LL;
  v12 = 0;
  v17 = 0LL;
  v20 = 0;
  v16 = 0LL;
  v15 = 0LL;
  v14 = 0LL;
  if ( (unsigned int)SdbpGetRegistryMatchingAttributes(
                       a3,
                       v6,
                       (unsigned int)&v19,
                       (unsigned int)&v18,
                       (__int64)&v12,
                       (__int64)&v17,
                       (__int64)&v20,
                       (__int64)&v16,
                       (__int64)&v15,
                       (__int64)&v14) )
  {
    if ( (unsigned int)SdbpCheckMatchingRegistryEntry(v19, v18, v12, v17, v20, v16, v15, v14, &v13) )
    {
      v7 = 1;
      *(_DWORD *)(a6 + 80) = 1;
      *a1 = v13;
      return v7;
    }
    v9 = "Failed to check MATCHING_REG entry";
    v10 = 1737;
  }
  else
  {
    v9 = "Failed to read MATCHING_REG entry";
    v10 = 1720;
  }
  AslLogCallPrintf(1, (unsigned int)"SdbpCheckMatchingRegistry", v10, (_DWORD)v9);
  return v7;
}
