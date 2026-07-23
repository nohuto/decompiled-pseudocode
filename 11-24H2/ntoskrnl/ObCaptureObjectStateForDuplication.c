/*
 * XREFs of ObCaptureObjectStateForDuplication @ 0x1408946D0
 * Callers:
 *     AlpcpCaptureHandleAttributeInternal @ 0x14089385C (AlpcpCaptureHandleAttributeInternal.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     ObpIncrementHandleCountEx @ 0x14084BE20 (ObpIncrementHandleCountEx.c)
 *     ObReferenceProcessHandleTable @ 0x140894BB0 (ObReferenceProcessHandleTable.c)
 *     ObpReferenceProcessObjectByHandle @ 0x140894C20 (ObpReferenceProcessObjectByHandle.c)
 */

__int64 __fastcall ObCaptureObjectStateForDuplication(
        struct _EX_RUNDOWN_REF *Object,
        __int64 a2,
        int a3,
        char a4,
        char a5,
        __int64 a6)
{
  int v7; // ebx
  int v10; // esi
  __int64 v11; // rax
  int v12; // r9d
  int v13; // r14d
  char *v15; // r14
  bool v16; // zf
  int v17; // r8d
  __int64 v18; // rsi
  int v19; // r12d
  _DWORD *v20; // rax
  int v21; // ebx
  __int64 v22; // [rsp+40h] [rbp-20h] BYREF
  __int64 v23; // [rsp+48h] [rbp-18h] BYREF
  PVOID Objecta[2]; // [rsp+50h] [rbp-10h] BYREF
  int v25; // [rsp+A8h] [rbp+48h] BYREF

  v22 = 0LL;
  v23 = 0LL;
  v7 = a3;
  Objecta[0] = 0LL;
  v10 = a4 & 2;
  if ( (a4 & 2) == 0 && (a3 & 0xCE00000) != 0 )
    return 3221225506LL;
  v11 = ObReferenceProcessHandleTable(Object);
  if ( !v11 )
    return 3221225738LL;
  LOBYTE(v12) = a5;
  v13 = ObpReferenceProcessObjectByHandle(
          a2,
          (_DWORD)Object,
          v11,
          v12,
          1967415887,
          (__int64)Objecta,
          (__int64)&v22,
          (__int64)&v23);
  if ( v13 < 0 )
  {
    ExReleaseRundownProtection_0(Object + 61);
    return (unsigned int)v13;
  }
  if ( (v22 & 4) != 0 )
    LODWORD(v23) = 0;
  v15 = (char *)Objecta[0];
  v16 = v10 == 0;
  v17 = HIDWORD(v22);
  v18 = a6;
  if ( !v16 )
    v7 = HIDWORD(v22);
  v19 = v22 & 4 | 8;
  if ( (a4 & 8) == 0 )
    v19 = v22 & 0xC;
  *(_QWORD *)(a6 + 28) = v23;
  v20 = (_DWORD *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(v15 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v15 - 48) >> 8)];
  if ( (v7 & 0xF0000000) != 0 )
  {
    if ( v7 < 0 )
      v7 |= v20[19];
    if ( (v7 & 0x40000000) != 0 )
      v7 |= v20[20];
    if ( (v7 & 0x20000000) != 0 )
      v7 |= v20[21];
    if ( (v7 & 0x10000000) != 0 )
      v7 |= v20[22];
    v7 &= 0xFFFFFFFu;
  }
  v25 = v7 & (v20[23] | 0x1000000);
  if ( (~v17 & v25) != 0 )
  {
    ExReleaseRundownProtection_0(Object + 61);
    ObfDereferenceObjectWithTag(v15, 0x7544624Fu);
    return 3221225506LL;
  }
  v21 = ObpIncrementHandleCountEx(2u, (__int64)&v25, (__int64)Object, (__int64)v15, a5, v19, 0LL);
  ExReleaseRundownProtection_0(Object + 61);
  if ( v21 < 0 )
  {
    ObfDereferenceObjectWithTag(v15, 0x7544624Fu);
  }
  else
  {
    *(_DWORD *)(v18 + 24) = v25;
    *(_QWORD *)(v18 + 8) = a2;
    *(_DWORD *)(v18 + 36) = v19;
    ObfReferenceObjectWithTag(Object, 0x7544624Fu);
    *(_QWORD *)v18 = Object;
    *(_QWORD *)(v18 + 16) = v15;
  }
  return (unsigned int)v21;
}
