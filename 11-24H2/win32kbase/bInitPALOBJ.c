/*
 * XREFs of bInitPALOBJ @ 0x1402E2008
 * Callers:
 *     InitializeGre @ 0x1402E6D50 (InitializeGre.c)
 * Callees:
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z @ 0x14001CA10 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z.c)
 *     HmgSetOwner @ 0x14002DC20 (HmgSetOwner.c)
 *     HmgShareLockCheck @ 0x14002F820 (HmgShareLockCheck.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x140035800 (--1EPALOBJ@@QEAA@XZ.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1400358E0 (HmgDecrementShareReferenceCountEx.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1400C6030 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?bSetStockObject@@YAHPEAXHH@Z @ 0x14013C700 (-bSetStockObject@@YAHPEAXHH@Z.c)
 */

__int64 __fastcall bInitPALOBJ(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v2; // rsi
  unsigned int v3; // r8d
  unsigned __int64 v4; // rbx
  struct _BASEOBJECT *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r14
  unsigned __int64 *v9; // r9
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r10
  __int64 v13; // r8
  unsigned __int64 v14; // rax
  __int64 *v15; // rax
  unsigned __int64 *v16; // [rsp+50h] [rbp-20h] BYREF
  int v17; // [rsp+58h] [rbp-18h]
  __int64 *v18; // [rsp+60h] [rbp-10h] BYREF
  int v19; // [rsp+68h] [rbp-8h]
  struct _BASEOBJECT *v20; // [rsp+90h] [rbp+20h] BYREF

  v1 = 0;
  v2 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  if ( *(_WORD *)(v2 + 3676) != 768 )
    goto LABEL_5;
  v3 = *(unsigned __int16 *)(v2 + 3678);
  if ( !*(_WORD *)(v2 + 3678) )
    goto LABEL_5;
  v17 = 0;
  v16 = 0LL;
  if ( !(unsigned int)PALMEMOBJ::bCreatePalette(
                        (PALMEMOBJ *)&v16,
                        1,
                        v3,
                        (const unsigned int *)(v2 + 3680),
                        0,
                        0,
                        0,
                        0x500u,
                        0) )
  {
    PALMEMOBJ::~PALMEMOBJ((__int64 **)&v16);
LABEL_5:
    v4 = 0LL;
    goto LABEL_6;
  }
  v17 = 1;
  v4 = *v16;
  PALMEMOBJ::~PALMEMOBJ((__int64 **)&v16);
LABEL_6:
  if ( !(unsigned int)bSetStockObject(v4, 15, 0) )
    return 0LL;
  v20 = (struct _BASEOBJECT *)HmgShareLockCheck(*(_QWORD *)(*(_QWORD *)(v2 + 3008) + 120LL), 8);
  v5 = v20;
  HmgSetOwner(*(_QWORD *)v20, 0, 8);
  v6 = *(_QWORD *)(v2 + 3008);
  LODWORD(v7) = 256;
  *(_QWORD *)(v2 + 3768) = v5;
  *(_QWORD *)(v2 + 584) = *(_QWORD *)(v6 + 120);
  *(_QWORD *)(v2 + 592) = v5;
  v17 = 0;
  v16 = 0LL;
  if ( !(unsigned int)PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v16, 1, 0x100u, 0LL, 0, 0, 0, 0x400u, 1) )
  {
    PALMEMOBJ::~PALMEMOBJ((__int64 **)&v16);
    if ( v5 )
      HmgDecrementShareReferenceCountEx(v5, 0LL);
    return 0LL;
  }
  v9 = v16;
  *(_QWORD *)(v2 + 3784) = v16;
  v10 = *((_DWORD *)v5 + 7) >> 1;
  if ( v10 )
  {
    v11 = 0LL;
    v12 = v10;
    v13 = v10;
    do
    {
      *(_DWORD *)(v11 + v9[14]) = *(_DWORD *)(v11 + *((_QWORD *)v5 + 14));
      v11 += 4LL;
      --v13;
    }
    while ( v13 );
    do
    {
      v7 = (unsigned int)(v7 - 1);
      *(_DWORD *)(v9[14] + 4 * v7) = *(_DWORD *)(*((_QWORD *)v5 + 14) + 4LL * (unsigned int)(v7 - 236));
      --v12;
    }
    while ( v12 );
  }
  v16 = 0LL;
  PALMEMOBJ::~PALMEMOBJ((__int64 **)&v16);
  EPALOBJ::~EPALOBJ(&v20);
  v17 = 0;
  v16 = 0LL;
  if ( !(unsigned int)PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v16, 1, 2u, &dword_14026CC18, 0, 0, 0, 0x2200u, 1) )
  {
    PALMEMOBJ::~PALMEMOBJ((__int64 **)&v16);
    return 0LL;
  }
  v14 = *v16;
  *(_QWORD *)(v2 + 3800) = v16;
  v17 = 1;
  *(_QWORD *)(v2 + 3792) = v14;
  v19 = 0;
  v18 = 0LL;
  if ( (unsigned int)PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v18, 8, 0, 0LL, 0, 0, 0, 0x200u, 1) )
  {
    v15 = v18;
    v18 = 0LL;
    v1 = 1;
    *(_QWORD *)(v2 + 3776) = v15;
  }
  PALMEMOBJ::~PALMEMOBJ(&v18);
  PALMEMOBJ::~PALMEMOBJ((__int64 **)&v16);
  return v1;
}
