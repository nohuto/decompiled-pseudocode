/*
 * XREFs of PiDmListInitEnumCallback @ 0x140724A10
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PiDmListAddObject @ 0x1408B0CE4 (PiDmListAddObject.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1408B2184 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x1408B2214 (PiDmAddCacheReferenceForObject.c)
 *     _PnpStringFromGuid @ 0x1408B4EBC (_PnpStringFromGuid.c)
 *     _PnpGetObjectProperty @ 0x1408CB9C0 (_PnpGetObjectProperty.c)
 *     PiDmObjectRelease @ 0x1408CE420 (PiDmObjectRelease.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDmListInitEnumCallback(__int64 a1, __int64 *a2, _BYTE *a3)
{
  unsigned int v3; // eax
  void *v6; // rcx
  __int64 Pool2; // rax
  __int64 v8; // rax
  int v9; // r8d
  __int64 v10; // rdx
  int ObjectProperty; // eax
  unsigned int v12; // ebx
  _BYTE *v13; // rdx
  int v14; // eax
  _QWORD *v15; // rsi
  int v17; // [rsp+60h] [rbp-39h] BYREF
  int v18; // [rsp+64h] [rbp-35h] BYREF
  PVOID P; // [rsp+68h] [rbp-31h] BYREF
  _BYTE v20[80]; // [rsp+70h] [rbp-29h] BYREF

  v18 = 0;
  P = 0LL;
  v3 = 1024;
  v17 = 1024;
  *a3 = 0;
  while ( 1 )
  {
    if ( v3 > *((_DWORD *)a2 + 2) )
    {
      v6 = (void *)*a2;
      *((_DWORD *)a2 + 2) = v3;
      if ( v6 )
        ExFreePoolWithTag(v6, 0x5A706E50u);
      Pool2 = ExAllocatePool2(0x100uLL, *((unsigned int *)a2 + 2), 0x5A706E50u);
      *a2 = Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741670;
    }
    v8 = *((int *)a2 + 3);
    v9 = *(_DWORD *)(a1 + 28);
    v10 = *(_QWORD *)(a1 + 16);
    v17 = 0;
    ObjectProperty = PnpGetObjectProperty(
                       PiPnpRtlCtx,
                       v10,
                       v9,
                       0,
                       0LL,
                       PiDmListDefs[5 * v8 + 4],
                       (__int64)&v18,
                       *a2,
                       *((_DWORD *)a2 + 2),
                       (__int64)&v17,
                       0);
    v12 = ObjectProperty;
    if ( ObjectProperty != -1073741789 )
      break;
    v3 = v17;
  }
  if ( ObjectProperty == -1073741275 )
  {
    return 0;
  }
  else if ( ObjectProperty >= 0 )
  {
    if ( v18 == 13 )
    {
      PnpStringFromGuid(*a2, v20);
      v13 = v20;
    }
    else
    {
      if ( v18 != 18 )
        return v12;
      v13 = (_BYTE *)*a2;
    }
    v14 = PiDmAddCacheReferenceForObject(LODWORD(PiDmListDefs[5 * *((int *)a2 + 3)]), v13, &P);
    v15 = P;
    v12 = v14;
    if ( v14 >= 0 )
      PiDmListAddObject(*((unsigned int *)a2 + 3), P, a1, 0LL);
    if ( v15 )
    {
      PiDmRemoveCacheReferenceForObject(*((unsigned int *)v15 + 7), v15[2]);
      PiDmObjectRelease(v15);
    }
  }
  return v12;
}
