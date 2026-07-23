/*
 * XREFs of SeConvertStringSidToSid @ 0x1404B5F90
 * Callers:
 *     ExWnfHiveUnloaded @ 0x14092D110 (ExWnfHiveUnloaded.c)
 * Callees:
 *     LocalpConvertStringSidToSid @ 0x140866A28 (LocalpConvertStringSidToSid.c)
 *     SddlpAlloc @ 0x140867ED4 (SddlpAlloc.c)
 *     SddlpFree @ 0x140867F20 (SddlpFree.c)
 *     LookupSidInTable @ 0x14086B1E0 (LookupSidInTable.c)
 *     RtlCopySid @ 0x1408E7870 (RtlCopySid.c)
 */

__int64 __fastcall SeConvertStringSidToSid(wchar_t *Str1, __int64 *a2)
{
  NTSTATUS v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  ULONG v11; // ebx
  void *v12; // rax
  __int64 v13; // rcx
  int v15; // [rsp+20h] [rbp-48h]
  __int64 v16; // [rsp+70h] [rbp+8h] BYREF
  __int64 v17; // [rsp+80h] [rbp+18h] BYREF

  v16 = 0LL;
  v17 = 0LL;
  if ( !Str1 || !a2 )
    return (unsigned int)-1073741811;
  v4 = LocalpConvertStringSidToSid(Str1, a2, &v16);
  if ( v4 < 0 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( Str1[v5] );
    if ( (unsigned int)((v16 - (__int64)Str1) >> 1) != v5 )
    {
      v4 = -1073741704;
      SddlpFree(*a2);
      *a2 = 0LL;
      return (unsigned int)v4;
    }
    return 0;
  }
  v6 = LookupSidInTable(Str1, 0LL, v15, 0, (__int64)&v17);
  v7 = v17;
  v8 = v6;
  if ( v6 && (v9 = *(_QWORD *)(v6 + 16)) != 0 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( Str1[v10] );
    if ( v10 == *(_DWORD *)(v6 + 12) )
    {
      v11 = 4 * *(unsigned __int8 *)(v9 + 1) + 8;
      v12 = (void *)SddlpAlloc(v11);
      *a2 = (__int64)v12;
      if ( v12 )
      {
        v4 = RtlCopySid(v11, v12, *(PSID *)(v8 + 16));
        if ( v4 < 0 )
        {
          SddlpFree(*a2);
          *a2 = 0LL;
        }
      }
      else
      {
        v4 = -1073741801;
      }
    }
    else
    {
      v4 = -1073741704;
    }
  }
  else
  {
    if ( !v17 )
      return (unsigned int)v4;
    v13 = -1LL;
    do
      ++v13;
    while ( Str1[v13] );
    if ( v13 == 2 )
    {
      *a2 = v17;
      return 0;
    }
  }
  if ( v7 )
    SddlpFree(v7);
  return (unsigned int)v4;
}
