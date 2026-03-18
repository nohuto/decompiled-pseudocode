/*
 * XREFs of PspCreatePicoThread @ 0x140A90CA0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x14029B9E0 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084FA30 (ObpReferenceObjectByHandleWithTag.c)
 *     PspInsertThread @ 0x1408F1D7C (PspInsertThread.c)
 *     PspAllocateThread @ 0x1408F2828 (PspAllocateThread.c)
 */

__int64 __fastcall PspCreatePicoThread(__int64 a1, __int64 a2, __int64 *a3)
{
  struct _EX_RUNDOWN_REF *v6; // rdi
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v8; // ebx
  int inserted; // esi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rdx
  _BYTE *v15; // rdx
  __int64 v17; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v18; // [rsp+68h] [rbp-98h] BYREF
  PVOID Object; // [rsp+70h] [rbp-90h] BYREF
  __int64 v20; // [rsp+78h] [rbp-88h] BYREF
  __int64 v21[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v22; // [rsp+90h] [rbp-70h]
  _BYTE v23[416]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v24; // [rsp+240h] [rbp+140h]
  __int64 v25[6]; // [rsp+290h] [rbp+190h] BYREF
  int v26; // [rsp+2C0h] [rbp+1C0h]
  int v27; // [rsp+2C4h] [rbp+1C4h]
  __int16 v28; // [rsp+2C8h] [rbp+1C8h]
  int v29; // [rsp+2CAh] [rbp+1CAh]
  __int16 v30; // [rsp+2CEh] [rbp+1CEh]
  __int16 v31; // [rsp+2D0h] [rbp+1D0h]
  __int16 v32; // [rsp+2D2h] [rbp+1D2h]
  __int64 v33; // [rsp+308h] [rbp+208h]
  __int64 v34; // [rsp+310h] [rbp+210h]
  __int64 v35; // [rsp+318h] [rbp+218h]
  __int64 v36; // [rsp+320h] [rbp+220h]
  __int64 v37; // [rsp+328h] [rbp+228h]
  __int64 v38; // [rsp+330h] [rbp+230h]
  __int64 v39; // [rsp+338h] [rbp+238h]
  __int64 v40; // [rsp+340h] [rbp+240h]
  __int64 v41; // [rsp+348h] [rbp+248h]
  __int64 v42; // [rsp+350h] [rbp+250h]
  __int64 v43; // [rsp+358h] [rbp+258h]
  __int64 v44; // [rsp+360h] [rbp+260h]
  __int64 v45; // [rsp+368h] [rbp+268h]
  __int64 v46; // [rsp+370h] [rbp+270h]
  __int64 v47; // [rsp+378h] [rbp+278h]
  __int64 v48; // [rsp+380h] [rbp+280h]
  __int64 v49; // [rsp+388h] [rbp+288h]
  __int16 v50; // [rsp+390h] [rbp+290h]
  int v51; // [rsp+3A8h] [rbp+2A8h]
  struct _ACCESS_STATE AccessState; // [rsp+760h] [rbp+660h] BYREF

  memset_0(v23, 0, 0x1F0uLL);
  v6 = 0LL;
  LODWORD(v17) = 0;
  v20 = 0LL;
  memset_0(&AccessState, 0, 0x190uLL);
  v18 = 0LL;
  v22 = 0LL;
  *(_OWORD *)v21 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v8 = 0;
  Object = 0LL;
  if ( !*(_QWORD *)(a1 + 184) )
  {
    v6 = (struct _EX_RUNDOWN_REF *)Object;
    inserted = -1073741811;
    goto LABEL_20;
  }
  inserted = ObpReferenceObjectByHandleWithTag(
               *(_QWORD *)a1,
               2,
               (__int64)PsProcessType,
               0,
               0x72437350u,
               &Object,
               0LL,
               0LL);
  if ( inserted < 0 )
  {
LABEL_14:
    if ( v18 )
      ObfDereferenceObject(v18);
    if ( v8 < 2 )
      goto LABEL_18;
    goto LABEL_17;
  }
  v6 = (struct _EX_RUNDOWN_REF *)Object;
  if ( !*((_QWORD *)Object + 200) )
  {
    inserted = -1073741816;
    goto LABEL_14;
  }
  --CurrentThread->KernelApcDisable;
  v8 = 1;
  if ( !ExAcquireRundownProtection_0(v6 + 61) )
  {
    inserted = -1073741558;
    goto LABEL_14;
  }
  v8 = 3;
  ObfReferenceObjectWithTag(v6, 0x72437350u);
  memset_0(v25, 0, 0x4D0uLL);
  v13 = *(_QWORD *)(a1 + 24);
  v14 = *(_QWORD *)(a1 + 32);
  v49 = *(_QWORD *)(a1 + 16);
  v32 = 43;
  v28 = 51;
  v50 = 639;
  v37 = *(_QWORD *)(a1 + 8);
  v30 = *(_WORD *)(a1 + 56);
  v31 = *(_WORD *)(a1 + 58);
  v21[1] = *(_QWORD *)(a1 + 40);
  v22 = *(_QWORD *)(a1 + 48);
  v33 = *(_QWORD *)(a1 + 64);
  v36 = *(_QWORD *)(a1 + 72);
  v40 = *(_QWORD *)(a1 + 96);
  v39 = *(_QWORD *)(a1 + 104);
  v38 = *(_QWORD *)(a1 + 112);
  v41 = *(_QWORD *)(a1 + 120);
  v42 = *(_QWORD *)(a1 + 128);
  v43 = *(_QWORD *)(a1 + 136);
  v44 = *(_QWORD *)(a1 + 144);
  v45 = *(_QWORD *)(a1 + 152);
  v46 = *(_QWORD *)(a1 + 160);
  v47 = *(_QWORD *)(a1 + 168);
  v48 = *(_QWORD *)(a1 + 176);
  v34 = v13;
  v35 = v14;
  v27 = 8064;
  v51 = 8064;
  v26 = 1048587;
  v29 = 2818091;
  LODWORD(v17) = 1;
  v21[0] = 0LL;
  inserted = PspAllocateThread(
               (ULONG_PTR)v6,
               0LL,
               0,
               0LL,
               (size_t)v25,
               v21,
               0LL,
               0LL,
               (int *)&v17,
               &v18,
               0LL,
               (__int64)&AccessState);
  if ( inserted >= 0 )
  {
    v15 = 0LL;
    if ( a2 )
    {
      memset_0(v23, 0, 0x1F0uLL);
      v15 = v23;
      v24 = a2;
    }
    *((_QWORD *)v18 + 206) = *(_QWORD *)(a1 + 184);
    inserted = PspInsertThread(
                 (char *)v18,
                 (ULONG_PTR)v6,
                 0LL,
                 &v17,
                 0x1FFFFF,
                 0LL,
                 (__int64)v15,
                 0LL,
                 &AccessState,
                 (PVOID *)&v20,
                 0LL);
    if ( inserted >= 0 )
    {
      _interlockedbittestandset((volatile signed __int32 *)v18 + 360, 0x14u);
      inserted = 0;
      v6 = (struct _EX_RUNDOWN_REF *)Object;
      *a3 = v20;
    }
    goto LABEL_14;
  }
  v18 = 0LL;
LABEL_17:
  ExReleaseRundownProtection_0(v6 + 61);
LABEL_18:
  if ( (v8 & 1) != 0 )
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v10, v11, v12);
LABEL_20:
  if ( v6 )
    ObfDereferenceObjectWithTag(v6, 0x72437350u);
  return (unsigned int)inserted;
}
