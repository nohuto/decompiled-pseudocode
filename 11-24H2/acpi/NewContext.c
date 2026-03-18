/*
 * XREFs of NewContext @ 0x140011FB0
 * Callers:
 *     AMLILoadDDB @ 0x1400C8044 (AMLILoadDDB.c)
 * Callees:
 *     InitContext @ 0x140012A34 (InitContext.c)
 *     memset @ 0x140070F40 (memset.c)
 */

__int64 __fastcall NewContext(PVOID *a1)
{
  unsigned int v2; // ebx
  PVOID v3; // rax
  KIRQL v4; // dl
  int v5; // eax
  KIRQL v6; // al
  _QWORD *v7; // rcx
  _UNKNOWN **v8; // rax

  v2 = 0;
  v3 = ExAllocateFromNPagedLookasideList(&AMLIContextLookAsideList);
  *a1 = v3;
  if ( v3 )
  {
    memset(v3, 0, 0x238uLL);
    v4 = KeAcquireSpinLockRaiseToDpc(&gdwGContextSpinLock);
    v5 = gdwcCTObjs + 1;
    gdwcCTObjs = v5;
    if ( v5 > 0 && v5 > (unsigned int)gdwcCTObjsMax )
      gdwcCTObjsMax = v5;
    KeReleaseSpinLock(&gdwGContextSpinLock, v4);
    InitContext(*a1);
    v6 = KeAcquireSpinLockRaiseToDpc(&gmutCtxtList);
    v7 = off_1400870A8[0];
    byte_140088D90 = v6;
    v8 = (_UNKNOWN **)((char *)*a1 + 16);
    if ( *(_UNKNOWN ***)off_1400870A8[0] != &glistCtxtHead )
      __fastfail(3u);
    *((_UNKNOWN ***)*a1 + 3) = off_1400870A8[0];
    *v8 = &glistCtxtHead;
    *v7 = v8;
    off_1400870A8[0] = v8;
    KeReleaseSpinLock(&gmutCtxtList, byte_140088D90);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
